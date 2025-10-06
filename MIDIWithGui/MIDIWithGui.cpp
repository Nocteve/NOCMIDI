#include "MIDIWithGui.h"
bool longTimbreJudge = false;
MIDIWithGui::MIDIWithGui(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    //背景
    this->setFixedSize(1000, 600);
    this->setStyleSheet("QMainWindow {border-image:url(:/MIDIWithGui/Background.png)}");
    //钢琴白键
    QPushButton *pianoWhiteKey[50] ;
    for (int i = 1; i <= 25; i++) {
        pianoWhiteKey[i] = new QPushButton(this);
        pianoWhiteKey[i]->resize(40, 160);
        pianoWhiteKey[i]->move(37*i, 450);
    }
    //钢琴黑键
    QPushButton *pianoBlackKey[50];
    for (int i = 1; i <= 17; i++) {
        pianoBlackKey[i] = new QPushButton(this);
        pianoBlackKey[i]->setStyleSheet("QPushButton{background-color:black}QPushButton:hover{background-color:gray}QPushButton:pressed{background-color:gray}");
        pianoBlackKey[i]->resize(20, 80);
    }
    pianoBlackKey[1]->move(65, 450);
    pianoBlackKey[2]->move(102, 450);
    pianoBlackKey[3]->move(176, 450);
    pianoBlackKey[4]->move(213, 450);
    pianoBlackKey[5]->move(250, 450);
    pianoBlackKey[6]->move(324, 450);
    pianoBlackKey[7]->move(361, 450);
    pianoBlackKey[8]->move(435, 450);
    pianoBlackKey[9]->move(472, 450);
    pianoBlackKey[10]->move(509, 450);
    pianoBlackKey[11]->move(583, 450);
    pianoBlackKey[12]->move(620, 450);
    pianoBlackKey[13]->move(694, 450);
    pianoBlackKey[14]->move(731, 450);
    pianoBlackKey[15]->move(768, 450);
    pianoBlackKey[16]->move(842, 450);
    pianoBlackKey[17]->move(879, 450);
    pianoBlackKey[18] = new QPushButton(this);
    pianoBlackKey[18]->setStyleSheet("QPushButton{background-color:black}QPushButton:hover{background-color:gray}QPushButton:pressed{background-color:gray}");
    pianoBlackKey[18]->resize(10, 80);
    pianoBlackKey[18]->move(954, 450);
    for (int i = 1; i <=25; i++) {
        connect(pianoWhiteKey[i], &QPushButton::clicked, this, [=]() {
            MIDIWithGui::clickWhiteKey(i);
            });
    }
    for (int i = 1; i <= 18; i++) {
        connect(pianoBlackKey[i], &QPushButton::clicked, this, [=]() {
            MIDIWithGui::clickBlackKey(i);
            });
    }

    //改音色窗口
    QScrollArea *timbreChange;
    timbreChange = new QScrollArea(this);
    timbreChange->resize(500, 300);
    timbreChange->move(240,120);
    timbreChange->setBackgroundRole(QPalette::Window);
    QWidget *widget = new QWidget;
    QVBoxLayout *button = new QVBoxLayout(widget);
    QPushButton *timbre[200];
    widget->setObjectName("widget");
    //音色切换按钮文本
    timbre[0] = new QPushButton("0 Acoustic Grand Piano");
    timbre[1] = new QPushButton("1 Bright Acoustic Piano");
    timbre[2] = new QPushButton("2 Electric Grand Piano");
    timbre[3] = new QPushButton("3 Honky-tonk Piano");
    timbre[4] = new QPushButton("4 Rhodes Piano");
    timbre[5] = new QPushButton("5 Chorused Piano");
    timbre[6] = new QPushButton("6 Harpsichord");
    timbre[7] = new QPushButton("7 Clavichord");
    timbre[8] = new QPushButton("8 Celesta");
    timbre[9] = new QPushButton("9 Glockenspiel");
    timbre[10] = new QPushButton("10 Music box");
    timbre[11] = new QPushButton("11 Vibraphone");
    timbre[12] = new QPushButton("12 Marimba");
    timbre[13] = new QPushButton("13 Xylophone");
    timbre[14] = new QPushButton("14 Tubular Bells");
    timbre[15] = new QPushButton("15 Dulcimer");
    timbre[16] = new QPushButton("16 Hammond Organ");
    timbre[17] = new QPushButton("17 Percussive Organ");
    timbre[18] = new QPushButton("18 Rock Organ");
    timbre[19] = new QPushButton("19 Church Organ");
    timbre[20] = new QPushButton("20 Reed Organ");
    timbre[21] = new QPushButton("21 Accordian");
    timbre[22] = new QPushButton("22 Harmonica");
    timbre[23] = new QPushButton("23 Tango Accordian");
    timbre[24] = new QPushButton("24 Acoustic Guitar (nylon)");
    timbre[25] = new QPushButton("25 Acoustic Guitar (steel)");
    timbre[26] = new QPushButton("26 Electric Guitar (jazz)");
    timbre[27] = new QPushButton("27 Electric Guitar (clean)");
    timbre[28] = new QPushButton("28 Electric Guitar (muted)");
    timbre[29] = new QPushButton("29 Overdriven Guitar");
    timbre[30] = new QPushButton("30 Distortion Guitar");
    timbre[31] = new QPushButton("31 Guitar Harmonics");
    timbre[32] = new QPushButton("32 Acoustic Bass");
    timbre[33] = new QPushButton("33 Electric Bass(finger)");
    timbre[34] = new QPushButton("34 Electric Bass (pick)");
    timbre[35] = new QPushButton("35 Fretless Bass");
    timbre[36] = new QPushButton("36 Slap Bass 1");
    timbre[37] = new QPushButton("37 Slap Bass 2");
    timbre[38] = new QPushButton("38 Synth Bass 1");
    timbre[39] = new QPushButton("39 Synth Bass 2");
    timbre[40] = new QPushButton("40 Violin");
    timbre[41] = new QPushButton("41 Viola");
    timbre[42] = new QPushButton("42 Cello");
    timbre[43] = new QPushButton("43 Contrabass");
    timbre[44] = new QPushButton("44 Tremolo Strings");
    timbre[45] = new QPushButton("45 Pizzicato Strings");
    timbre[46] = new QPushButton("46 Orchestral Harp");
    timbre[47] = new QPushButton("47 Timpani");
    timbre[48] = new QPushButton("48 String Ensemble 1");
    timbre[49] = new QPushButton("49 String Ensemble 2");
    timbre[50] = new QPushButton("50 Synth Strings 1");
    timbre[51] = new QPushButton("51 Synth Strings 2");
    timbre[52] = new QPushButton("52 Choir Aahs");
    timbre[53] = new QPushButton("53 Voice Oohs");
    timbre[54] = new QPushButton("54 Synth Voice");
    timbre[55] = new QPushButton("55 Orchestra Hit");
    timbre[56] = new QPushButton("56 Trumpet");
    timbre[57] = new QPushButton("57 Trombone");
    timbre[58] = new QPushButton("58 Tuba");
    timbre[59] = new QPushButton("59 Muted Trumpet");
    timbre[60] = new QPushButton("60 French Horn");
    timbre[61] = new QPushButton("61 Brass Section");
    timbre[62] = new QPushButton("62 Synth Brass 1");
    timbre[63] = new QPushButton("63 Synth Brass 2");
    timbre[64] = new QPushButton("64 Soprano Sax");
    timbre[65] = new QPushButton("65 Alto Sax");
    timbre[66] = new QPushButton("66 Tenor Sax");
    timbre[67] = new QPushButton("67 Baritone Sax");
    timbre[68] = new QPushButton("68 Oboe");
    timbre[69] = new QPushButton("69 English Horn");
    timbre[70] = new QPushButton("70 Bassoon");
    timbre[71] = new QPushButton("71 Clarinet");
    timbre[72] = new QPushButton("72 Piccolo");
    timbre[73] = new QPushButton("73 Flute");
    timbre[74] = new QPushButton("74 Recorder");
    timbre[75] = new QPushButton("75 Pan Flute");
    timbre[76] = new QPushButton("76 Bottle Blow");
    timbre[77] = new QPushButton("77 Shakuhachi");
    timbre[78] = new QPushButton("78 Whistle");
    timbre[79] = new QPushButton("79 Ocarina");
    timbre[80] = new QPushButton("80 Lead 1 (square)");
    timbre[81] = new QPushButton("81 Lead 2 (sawtooth)");
    timbre[82] = new QPushButton("82 Lead 3 (caliope lead)");
    timbre[83] = new QPushButton("83 Lead 4 (chiff lead)");
    timbre[84] = new QPushButton("84 Lead 5 (charang)");
    timbre[85] = new QPushButton("85 Lead 6 (voice)");
    timbre[86] = new QPushButton("86 Lead 7 (fifths)");
    timbre[87] = new QPushButton("87 Lead 8 (bass+lead)");
    timbre[88] = new QPushButton("88 Pad 1 (new age)");
    timbre[89] = new QPushButton("89 Pad 2 (warm)");
    timbre[90] = new QPushButton("90 Pad 3 (polysynth)");
    timbre[91] = new QPushButton("91 Pad 4 (choir)");
    timbre[92] = new QPushButton("92 Pad 5 (bowed)");
    timbre[93] = new QPushButton("93 Pad 6 (metallic)");
    timbre[94] = new QPushButton("94 Pad 7 (halo)");
    timbre[95] = new QPushButton("95 Pad 8 (sweep)");
    timbre[96] = new QPushButton("96 FX 1 (rain)");
    timbre[97] = new QPushButton("97 FX 2 (soundtrack)");
    timbre[98] = new QPushButton("98 FX 3 (crystal)");
    timbre[99] = new QPushButton("99 FX 4 (atmosphere)");
    timbre[100] = new QPushButton("100 FX 5 (brightness)");
    timbre[101] = new QPushButton("101 FX 6 (goblins)");
    timbre[102] = new QPushButton("102 FX 7 (echoes)");
    timbre[103] = new QPushButton("103 FX 8 (sci-fi)");
    timbre[104] = new QPushButton("104 Sitar");
    timbre[105] = new QPushButton("105 Banjo");
    timbre[106] = new QPushButton("106 Shamisen");
    timbre[107] = new QPushButton("107 Koto");
    timbre[108] = new QPushButton("108 Kalimba");
    timbre[109] = new QPushButton("109 Bagpipe");
    timbre[110] = new QPushButton("110 Fiddle");
    timbre[111] = new QPushButton("111 Shanai");
    timbre[112] = new QPushButton("112 Tinkle Bell");
    timbre[113] = new QPushButton("113 Agogo");
    timbre[114] = new QPushButton("114 Steel Drums");
    timbre[115] = new QPushButton("115 Woodblock");
    timbre[116] = new QPushButton("116 Taiko Drum");
    timbre[117] = new QPushButton("117 Melodic Tom");
    timbre[118] = new QPushButton("118 Synth Drum");
    timbre[119] = new QPushButton("119 Reverse Cymbal");
    timbre[120] = new QPushButton("120 Guitar Fret Noise");
    timbre[121] = new QPushButton("121 Breath Noise");
    timbre[122] = new QPushButton("122 Seashore");
    timbre[123] = new QPushButton("123 Bird Tweet");
    timbre[124] = new QPushButton("124 Telephone Ring");
    timbre[125] = new QPushButton("125 Helicopter");
    timbre[126] = new QPushButton("126 Applause");
    timbre[127] = new QPushButton("127 Gunshot");
    for (int i = 0; i <= 127; i++) {
        button->addWidget(timbre[i]);
    }

    timbreChange->setWidget(widget);
    timbreChange->setWidgetResizable(true);
    
    for (int i = 0; i <= 127; i++) {
        connect(timbre[i], &QPushButton::clicked, this, [=]() {
            MIDIWithGui::changeTimbre(i);
            });
    }

    //模式切换

    QRadioButton *modeChange[5];
    QButtonGroup *modeChangeGroup = new QButtonGroup(this);
    modeChange[1] = new QRadioButton("mode1 Normal", this);
    modeChange[2] = new QRadioButton("mode2 Chord", this);
    modeChange[3] = new QRadioButton("mode3 Arp", this);
    for (int i = 1; i <= 3; i++) {
        modeChange[i]->setStyleSheet("color:White");
        modeChange[i]->resize(120, 50);
        modeChange[i]->setEnabled(true);
        modeChangeGroup->addButton(modeChange[i]);
    }
   // modeChangeGroup->setExclusive(true); 设置可选（自动就能设置了，所以不用打）
    modeChange[1]->move(90, 110);
    modeChange[2]->move(90, 150);
    modeChange[3]->move(90, 190);
    modeChange[1]->setChecked(true);//默认选Normal模式
    modeChange[1]->setShortcut(QKeySequence("ctrl+1"));
    modeChange[2]->setShortcut(QKeySequence("ctrl+2"));
    modeChange[3]->setShortcut(QKeySequence("ctrl+3"));
    for (int i = 1; i <= 3; i++) {
        connect(modeChange[i], &QRadioButton::toggled, this, [=]() {
            MIDIWithGui::changeMode(i);
            });
    }

    //调式切换
    QRadioButton *Apitch;
    QRadioButton *apitch;
    QButtonGroup *pitchChangeGroup=new QButtonGroup(this);
    Apitch = new QRadioButton("Major", this);
    apitch = new QRadioButton("Minor", this);
    Apitch->resize(120, 50);
    apitch->resize(120, 50);
    Apitch->setStyleSheet("color:white");
    apitch->setStyleSheet("color:white");
    Apitch->move(800, 110);
    apitch->move(800, 150);
    Apitch->setChecked(true);//默认选大调
    connect(Apitch, &QRadioButton::toggled, this, [=]() {
        MIDIWithGui::changePitchA();
        });
    connect(apitch, &QRadioButton::toggled, this, [=]() {
        MIDIWithGui::changePitcha();
        });
} 

MIDIWithGui::~MIDIWithGui()
{}