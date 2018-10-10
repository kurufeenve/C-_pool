#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 72, 45, "")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &RRF)
{
	*this = RRF;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
Form ("ShrubberyCreation", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &F)
{
	if (this != &F)
	{
		this->setSigned(F.getSined());
	}
	return *this;
}

void		ShrubberyCreationForm::execute(const Bureaucrat &Exe) const
{
	if (this->getSined() && (Exe.getGrade() >= 1 && Exe.getGrade() <= this->getGradeExe()))
		this->create();
	else
		throw new GradeTooLowException::GradeTooLowException();
}

void	ShrubberyCreationForm::create(void) const
{
	std::ofstream	myfile;

  std::cout << "Shrubbery created\n" << std::endl;
	myfile.open ((this->getTarget() + "_shrubbery"));
	myfile << "				T R E E\
                                              .         ;  \n\
                 .              .              ;|     ;;   \n\
                   ,           ,                :;|  |;   \n\
                    :         ;                   :;|;'     .,   \n\
           ,.        |;     |;            ;        |;'    ,;\n\
             ;       ;|;  ||;        ,     |;    ;|;    ,|'\n\
              |;       |;|;      ,  ;       |;  ;|;   ,|;' \n\
               ;|;      |;        ;|;        | ;|;  ,|;'\n\
                `|;.     ;|;     |;'         `;||;.|;'\n\
                 `:;|.    ;||. |@;        |; ;@|;|'\n\
                    `:|;.  :;bd|;          |;@|;'\n\
                      `@|:.  :;|.         ;@@|;'  \n\
                        `@|.  `;@|.      ;@@|;     \n\
                          `@||. `@||    ;@@|;       \n\
                            ;@|. :@||  |@@|;       \n\
                              |@bd|||bd||:;     \n\
                                #@|||||:;;\n\
                                |@@|||::;\n\
                                |@@@|(o);  . '         \n\
                                |@@@o|;:(.,'         \n\
                            `.. |@@@o|::;         \n\
                               `)@@@o|::;         \n\
                                |@@(o)::;        \n\
                               .|@@@@|::;         \n\
                               ;|@@@@|::;.          \n\
                              ;|@@@@||:;;;. \n\
                          ...;|@@@@@||:;;;;,..    Gilo97\n\n\n\
                             . ...\n\
                         .''.' .    '.\n\
                    . '' '.'.:I:.'..  '.\n\
                  .'.:.:..,,:II:'.'.'.. '.\n\
                .':.'.:.:I:.:II:'.'.'.'.. '.\n\
              .'.'.'.'::.:.:.:I:'.'.'.'. .  '\n\
             ..'.'.'.:.:I::.:II:.'..'.'..    .\n\
            ..'.'':.:.::.:.::II::.'.'.'.'..   .\n\
           ..'.'.'.:.::. .:::II:..'.'.'.'.'.   .\n\
          .':.''.':'.'.'.:.:I:'.'.'.'.'.. '..  ..\n\
          ':. '.':'. ..:.::.::.:.'..'  ':.'.'.. ..\n\
         .:.:.':'.   '.:':I:.:.. .'.'.  ': .'.. . ..\n\
         '..:.:'.   .:.II:.:..   . .:.'. '.. '. .  ..\n\
        .. :.:.'.  .:.:I:.:. .  . ..:..:. :..':. .  '.\n\
       .:. :.:.   .:.:I:.:. .    . ..:I::. :: ::  .. ..\n\
       .. :'.'.:. .:.:I:'.        ..:.:I:. :: ::.   . '.\n\
       '..:. .:.. .:II:'         ,,;IIIH.  ::. ':.      .\n\
      .:.::'.:::..:.AII;,      .::',,  :I .::. ':.       .\n\
      :..:'.:II:.:I:  ,,;'   ' .;:FBT'X:: ..:.. ':.    . .\n\
     .. :':III:. :.:A'PBF;.  . .P,IP;;':: :I:..'::. .    ..\n\
     . .:.:II: A.'.';,PP:' .  . ..'..' .: :.::. ':...  . ..\n\
     . .: .:IIIH:.   ' '.' .  ... .    .:. :.:.. :...    .'\n\
     . .I.::I:IIA.        ..   ...    ..::.'.'.'.: ..  . .\n\
      .:II.'.':IA:.      ..    ..:.  . .:.: .''.'  ..  . .\n\
     ..::I:,'.'::A:.  . .:'-, .-.:..  .:.::AA.. ..:.' .. .\n\
      ':II:I:.  ':A:. ..:'   ''.. . : ..:::AHI: ..:..'.'.\n\
     .':III.::.   'II:.:.,,;;;:::::'. .:::AHV:: .::'' ..\n\
     ..':IIHI::. .  'I:..':;,,,,;;'. . .:AII:: :.:'  . .\n\
     . . IIHHI:..'.'.'V::. ':;;;'   ...:AIIV:'.:.'  .. .\n\
      . . :IIHI:. .:.:.V:.   ' ' . ...:HI:' .:: :. .  ..\n\
      . .  ':IHII:: ::.IA..      .. .A .,,:::' .:.    .\n\
      :.  ...'I:I:.: .,AHHA, . .'..AHIV::' . .  :     ..\n\
      :. '.::::II:.I:.HIHHIHHHHHIHHIHV:'..:. .I.':. ..  '.\n\
   . . .. '':::I:'.::IHHHHHHHHMHMHIHI. '.'.:IHI..  '  '  '.\n\
    ':... .  ''' .::'.HMHI:HHHHMHHIHI. :IIHHII:. . . .    .\n\
     :.:.. . ..::.' .IV'.:I:IIIHIHHIH. .:IHI::'.': '..  .  .\n\
   . .:.:: .. ::'.'.'..':.::I:I:IHHHIA.'.II.:...:' .' ... . '..\n\
  '..::::' ...::'.IIHII:: .:.:..:..:III:.'::' .'    .    ..  . .\n\
  '::.:' .''     .. :IIHI:.:.. ..: . .:I:'' ...:.:.  ..    .. ..\n\
     .:..::I:.  . . . .IHII:.:'   .. ..'.::.:II:.:. .  ...   . ..\n\
  .. . .::.:.,,...-::II:.:'    . ...... . .. .:II:.::  ...  .. ..\n\
   ..:.::.I .    . . .. .:. .... ...:.. . . ..:.::.   :..   . ..\n\
    .'.::I:.      . .. ..:.... . ..... .. . ..::. .. .I:. ..' .\n\
  .'':.: I.       . .. ..:.. .  . .. ..... .:. .:.. .:I.'.''..\n\
  . .:::I:.       . . .. .:. .    .. ..  . ... .:.'.'I'  .  ...\n\
  . ::.:I:..     . . . ....:. . .   .... ..   .:...:.:.:. ''.''\n\
  '.'::'I:.       . .. ....:. .     .. . ..  ..'  .'.:..:..    '\n\
        :. .     . .. .. .:.... .  .  .... ...   .  .:.:.:..    '.\n\
        :.      .  . . .. .:.... . . ........       .:.:.::. .    .\n\
        :. .     . . . . .. .::..:  . ..:.. .        ::.:.:.. .    .\n\
        :.. .    . . .  . .. ..:.:  .. .. .:. ..     ':::.::.:. .   .\n\
        ':.. .  . . . .. .. ...::' .. ..  . .:. .     V:I:::::.. .   :.\n\
         ::. .  . .. .. ... .:.::  .. .  . .. .. .     VI:I:::::..   ''B\n\
          :.. .   . .. ..:.. ..I:... . .  . .. ... .    VII:I:I:::. .'::\n\
          ':.. . . . .. ..:..:.:I:.:. .  . .. . .:. .    VHIII:I::.:..':\n\
           ::..   . . .. ..:..:.HI:. .      . . .... .   :HHIHIII:I::..:\n\
           ':. .  . .. .. ..:.:.:HI:.    . . .. ..... .   HHHHIHII:I::.'\n\
            :.. .  . . .. .:.:.:.HI:.      . . .. ... .   IHHHHIHHIHI:'\n\
             :..  .  . . .. ..:..IH:.     . . .. .. ,,, . 'HHHHHHHHI:'\n\
             ':..   . . .. ..:.:.:HI..   .  . .. . :::::.  MIH:''''\n\
              :. . .  . .. ..::.:.VI:.     . . .. .:::'::. HIH\n\
               :..  .  . .. .:.:.:.V:.    . . . ...::I'A:. HHV\n\
                :. .  .  . .. ..:.:.V:.     . . ....::I::'.HV:\n\
                 :. .  . . . .. .:..II:.  . . . ....':::' AV.'\n\
                  :.. . . .. ... .:..VI:. . . .. .:. ..:.AV'.\n\
                  ':.. . .  .. ..:.:.:HAI:.:...:.:.:.:.AII:.\n\
                   I:. .  .. ... .:.:.VHHII:..:.:..:A:'.:..\n\
                   IA..  . . .. ..:.:.:VHHHHIHIHHIHI:'.::.\n\
                   'HA:.  . . .. ..:.:.:HHHIHIHHHIHI:..:.\n\
                    HIA: .  . . .. ...:.VHHHIHIIHI::.:...\n\
                    HIHI:. .  .. ... .::.HHHIIHIIHI:::..\n\
                    HII:.:.  .  .. ... .::VHHIHI:I::.:..\n\
                    AI:..:..  .  . .. ..:.VHIII:I::.:. .\n\
                   AI:. ..:..  .  . .. ..' VHIII:I;... .\n\
                  AI:. .  .:.. .  .  . ...  VHIII::... .\n\
                .A:. .      :.. .  . .. .:.. VHII::..  .\n\
               A:. . .       ::. .. .. . .:.. 'VHI::.. .\n\
             .:.. .  .        :.. .:..... .::.. VHI:..\n\
            ... . .  .     . . :.:. ..:. . .::.. VI:..  .\n\
           .. .. .  .    . . ...:... . .. . .:::. V:..  .\n\
          '.. ..  .   .  .. ..:::.... .:. . ..::.. V..  .\n\
        . . .. . .   . . .. ..:::A. ..:. . . .::.. :..\n\
       . .. .. .. . .  . ... ..::IA.. .. . .  ..::. :..  .\n\
      .. .. ... . .  .. .... .:.::IA. . .. . ..:.::. :.  .\n\
     . . . .. .   . . .. ..:..:.::IIA. . .  .. .:.::. :. .\n\
    .. . .  .   . . .. ... ..:.::I:IHA. .  . . ..:.::. . .\n\
   .: ..  .  .   . . ... .:.. .:I:IIHHA. .  . .. .::I:. .\n\
  .::.  .     . . .. ..:. .::.:IIHIIHHHA.  .  .. ..:I:. . .\n\
  A::..      .  .  ...:..:.::I:IHIHIHHHHA.  .  . ..::I:. .\n\
 :HI:.. .       . .. .:.:.::I:IHIHIIHIHHHA. .   .. .::I:. ..\n\
 AI:.. .. .    . .. .:.:.::II:IHIIIHIHIHHHA.  .  . ..::I:. ..\n\
:HI:.. . .   .  . .. .::.:I:IHIHIIIHIHIIHHHA..  . .. .::I:. ..\n\
AI:.:.. .  .  .  ... .::.::I:IHIIHIHIHIHIHIHHA. .  . ..::I:. .\n\
HI:. .. . .  .  . .. .:..::IIHIHIHIIIIWHIIHHMWA.  . . .:::I:. . .\n\
HI:.. . .  .   . .. ..:.::I:IIHHIIHIHIHIHHMMW'  '.. . ..:::II: . .\n\
HI::.. .  .   .  .. .:..:::IIHIHIIWIWIIWMWW' .    .. . ..::III: .  .\n\
HI::... . . .  . ... ..:.:::IIHIWIWIWMWMWW. .  .   . .. .:.:III. .   .\n\
II::.:.. . .  .  .. ......:..IHWHIWWMWMW'.. . . . . '... .:.:IHI:..    .\n\
II:I::.. .  .   .  . .....::.:IHWMWWWMW:.. .  .  . .  .:..:::IIHII..\n\
:II:.:.:.. .  .   . ......:.:.:IWWMWWW:.:.. .  .  .  . :...:.:IHHI:..\n\
 HI::.:. . . .  .  . ...:.::.::.VWMWW::.:.:.. .  . .. . :.. ..:IHHI::.'-\n\
 HII::.:.. .  .  . .. .:..:.'.  'WWWI::.::.:.. . .  . .. ':...:II:IIII::\n\
 III::.:... .  .  . ...:.:... .   WII:I::.:.. .  .  .. . . :.:::...::.::\n\
  VII::.:.. . . . .. ...:....      VHI:I::.:.. .  . ... .. .::.:..:.:..:\n\
   VII::.:.. . .  . ..:.::.. .     :HHII:I::.:.. . . .. ..  .'::':......\n\
   III:I::.. .. . . .. .:.:.. .    :VHIHI:I::.:... . . .. .. .':. .. .AH\n\
  AA:II:I::.. . . .  .. ..:.. . .  ::HHIHII:I::.:... .. .. ... .:.::AHHH\n\
 AHH:I:I::.:.. .  . .. ..:.:.. .   ::VHHHVHI:I::.:.:.. ..:. .::.A:.AHHHM\n\
 HHHAII:I::.:.. . . . .. ..:.. . . :::HIHIHIHII:I::.:.. .. .:. ..AHHMMM:\n\
AHHHH:II:I::.:.. . . .. ..:.:.. . .:I:MMIHHHIHII:I:::.:. ..:.:.AHHHMMM:M\n\
HHHHHA:II:I::.. .. . . .. .:... . .:IIVMMMHIHHHIHII:I::. . .. AHHMMMM:MH\n\
HHHHHHA:I:I:::.. . . . ... ..:.. ..:IHIVMMHHHHIHHHIHI:I::. . AHMMMMM:HHH\n\
HHHHHMM:I::.:.. . . . .. ...:.:...:IIHHIMMHHHII:.:IHII::.  AHMMMMMM:HHHH\n\
HHHHHMMA:I:.:.:.. . . . .. ..:.:..:IIHHIMMMHHII:...:::.:.AHMMMMMMM:HHHHH\n\
HHHHHMMMA:I::... . . . . .. ..:.::.:IHHHIMMMHI:.:.. .::AHMMMMMMM:HHHHHHH\n\
VHHHHMMMMA:I::.. . .  . . .. .:.::I:IHHHIMMMMHI:.. . AHMMMMMMMM:HHHHHHHH\n\
 HHHMMMMMM:I:.:.. . .  . . ...:.:IIHIHHHIMMMMMHI:.AHMMMMMMMMM:HHHHHHHHHH\n\
 HHHHMMMMMA:I:.:.. .  .  . .. .:IIHIHHHHIMMMMMH:AMMMMMMMMMMM:HHHHHHHHHHH\n\
 VHHHMMMMMMA:I:::.:. . . . .. .:IHIHHHHHIMMMV'AMMMMMMMMMMMM:HHHHHHHHHHHH\n\
  HHHHHMMMMMA:I::.. .. .  . ...:.:IHHHHHHIM'AMMMMMMMMMMMM:HHHHHHHHHHHHHH\n\
  VHHHHHMMMMMA:I:.:.. . . .  .. .:IHIHHHHI:AMMMMMMMMMMMIHHHHHHHHHHHHHHHH\n\
   VHHHHHMMMMMA:I::.:. . .  .. .:.:IHHHV:MMMMMIMMMMMMMMMMMMMHHHHHHHHV::.\n\
    VHHHHMMMMMMA:::.:..:.. . .. .:::AMMMMMMMM:IIIIIHHHHHHHHHHHHHHHV:::..\n\
     HHHHHMMMIIIA:I::.:.:..:... AMMMMMMMMMM:IIIIIIHHHHHHHHHHHHHHHV::::::\n\
     VHHHHMMIIIIMA:I::::.::..AMMMMMMMMMMM:IIIIIIIHHHHHHHHHHHHHHV::::::::\n\
      HHHHMIIIIMMMA:II:I::AIIIMMMMMMMMMM:IIIIIIIHHHHHHHHHHHHHHV:::::::::\n\
      VHHHHIIIMMMMMMA:I:AIIIIIIMMMMMM:IIIIIIIIHHHHHHHHHHHHHHV::::::::''\n\
       HHHHHIIMMMMMMIMAAIIIIIIIIMMM:IIIIIIIIHHHHHHHHHHHHHHHV:::::'''\n\
       VHHHIIIIMMMMIIIIIIIIIIIIII:IIIIIIIIHHHHHHHHHHHHHHHV::'''\n\
        VHHIIIMMMMMIIIIIIIIIIIIIIIIIIIIIHHHHHHHHHHHHHHHV\n\
         VHHIMMMMMMMIIIIIIIIIIIIIIIIIHHHHHHHHHHHHHV\n\
          VHHHMMMMMMMMIIIIIIIIIIIHHHHHHHHHHHV\n\
           VHHHMMMMMMMMMMMMMHHHHHHHHHHHHHV";
	myfile.close();
}
