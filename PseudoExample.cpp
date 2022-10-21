//pseudocode

//namespace MicrowaveOvenClasses.Controllers
{
    public class MicrowaveController : IMicrowaveController
    {
    // Since there is a 2-way association, this cannot be set until the UI object has been created
    // It also demonstrates property dependency injection
    public MicrowaveOvenUserInterface UI { set; private get; }

    private bool isCooking = false;

  /*  private IDisplay myDisplay;
    private IPowerTube myPowerTube;
    private ITimer myTimer;

    public CookController(
        ITimer timer,
        IDisplay display,
        IPowerTube powerTube,
        IUserInterface ui) : this(timer, display, powerTube)
    {
        UI = ui;
    }*/

    public MicrowaveController(
        ITimer timer,
        IDisplay display,
        IPowerTube powerTube)
    {
        myTimer = timer;
        myDisplay = display;
        myPowerTube = powerTube;

        timer.Expired += new EventHandler(OnTimerExpired);
        timer.TimerTick += new EventHandler(OnTimerTick);
    }

    public void StartCooking(int power, int time)
    {
        myPowerTube.TurnOn(power);
        myTimer.Start(time);
        isCooking = true;
    }

    public void Stop()
    {
        isCooking = false;
        myPowerTube.TurnOff();
        myTimer.Stop();
    }

    public void OnTimerExpired(object sender, EventArgs e)
    {
        if (isCooking)
        {
            myPowerTube.TurnOff();
            UI.CookingIsDone();
            isCooking = false;
        }
    }

    public void OnTimerTick(object sender, EventArgs e)
    {
        //int remaining = myTimer.TimeRemaining;
        //myDisplay.ShowTime(remaining/60, remaining % 60);


        var remainingTime = Convert.ToDouble(myTimer.TimeRemaining);
        var time = TimeSpan.FromMilliseconds(remainingTime);
        myDisplay.ShowTime(time.Minutes, time.Seconds);
    }
}
