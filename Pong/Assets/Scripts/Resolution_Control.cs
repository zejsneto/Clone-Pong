using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Resolution_Control : MonoBehaviour
{
    public void Resolution1()
    {
        Screen.SetResolution(1280, 720, FullScreenMode.Windowed);
    }

    public void Resolution2()
    {
        Screen.SetResolution(1366, 768, FullScreenMode.Windowed);
    }

    public void Resolution3()
    {
        Screen.SetResolution(1920, 1080, FullScreenMode.Windowed);
    }

    public void Resolution4()
    {
        Screen.SetResolution(2560, 1440, FullScreenMode.Windowed);
    }
}
