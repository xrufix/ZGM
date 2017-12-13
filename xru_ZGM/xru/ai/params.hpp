#define COMPONENT ai

class GVAR(skill) {
    title = "xru_ai: AI Skill";
    values[] = {-1,2,4,6,8,10};
    texts[] = {
        "No Change (Default)",
        "20%",
        "40%",
        "60%",
        "80%",
        "100%",
    };
    default = -1;
    function = QFUNC(skill);
    isGlobal = 0;
};