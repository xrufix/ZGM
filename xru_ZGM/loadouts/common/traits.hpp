
#define SETENGINEER(int)   (_this select 0) setVariable [ARR_3(QQUOTE(ACE_isEngineer),int,true)];
#define SETEOD(bool)        (_this select 0) setVariable [ARR_3(QQUOTE(ACE_isEOD),bool,true)];
#define SETMEDIC(int)         (_this select 0) setVariable [ARR_3(QQUOTE(ACE_medical_medicClass), int, true)];
#define SETPROTECTED(bool)     (_this select 0) setCaptive bool;

#define TRAITS(medic,engineer,eod,protected) QUOTE(SETMEDIC(medic) SETENGINEER(engineer) SETEOD(eod) SETPROTECTED(protected))