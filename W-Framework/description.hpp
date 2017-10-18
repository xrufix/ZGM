template_version = 5.1.0;
#ifdef STANDARD
    medical_system = "standard";
#endif
#ifdef HARDCORE
    medical_system = "hardcore";
#endif

// - Respawn ------------------------------------------------------------------
respawn = 3;
respawnButton = 0;
respawnDelay = 5;
respawnDialog = 0;

// - Misc ---------------------------------------------------------------------
disabledAI = 1;
enableDebugConsole = 1;
saving = 0;
#ifndef ENABLE_CHAT_CHANNELS
    disableChannels[] = {0,1,2,3,6};
#endif

// - ACE Settings -------------------------------------------------------------
#ifndef CUSTOM_ACE_SETTINGS
    #include "ACE_Settings.hpp"
#endif
