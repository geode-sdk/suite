
#pragma once
#include <HeaderBase.hpp>
struct UILayer;
struct ToggleTriggerAction;
struct TextInputDelegate;
struct TextArea;
struct TextAlertPopup;
struct TableViewDelegate;
struct TableViewDataSource;
struct StatsCell;
struct StartPosObject;
struct SliderTouchLogic;
struct SliderThumb;
struct SimplePlayer;
struct SpawnTriggerAction;
struct FLAlertLayer;
struct SetupSpawnPopup;
struct SetupShakePopup;
struct GJSpecialColorSelectDelegate;
struct SetupPulsePopup;
struct SetupObjectTogglePopup;
struct SetupCountTriggerPopup;
struct SetupAnimationPopup;
struct SetTargetIDLayer;
struct SetIDPopup;
struct SelectArtLayer;
struct ScrollingLayer;
struct RetryLevelLayer;
struct SetupPickupTriggerPopup;
struct PointNode;
struct CCSpritePlus;
struct GameObject;
struct AnimatedSpriteDelegate;
struct PlayerObject;
struct PlayerCheckpoint;
struct TriggerEffectDelegate;
struct GJBaseGameLayer;
struct CCCircleWaveDelegate;
struct PlayLayer;
struct PlatformToolbox;
struct PlatformDownloadDelegate;
struct GJDropDownLayer;
struct FLAlertLayerProtocol;
struct OptionsLayer;
struct OpacityEffectAction;
struct ObjectToolbox;
struct OBB2D;
struct NumberInputDelegate;
struct MusicDownloadManager;
struct MusicDownloadDelegate;
struct MultilineBitmapFont;
struct MoreVideoOptionsLayer;
struct MenuLayer;
struct CCIndexPath;
struct TableViewCell;
struct MenuGameLayer;
struct LoadingCircle;
struct ListButtonBar;
struct LevelSettingsDelegate;
struct LevelSearchLayer;
struct LeaderboardsLayer;
struct GManager;
struct GameManager;
struct KeybindingsLayer;
struct LevelUpdateDelegate;
struct LevelCommentDelegate;
struct CommentUploadDelegate;
struct InfoLayer;
struct GJAccountDelegate;
struct GJAccountBackupDelegate;
struct GJAccountSyncDelegate;
struct AccountLayer;
struct ListButtonBarDelegate;
struct GaragePage;
struct UserInfoDelegate;
struct UploadActionDelegate;
struct UploadPopupDelegate;
struct LeaderboardManagerDelegate;
struct ProfilePage;
struct GameSoundManager;
struct GameRateDelegate;
struct GameObjectCopy;
struct GJDropDownLayerDelegate;
struct CustomSongLayer;
struct GameLevelManager;
struct SetIDPopupDelegate;
struct GJUserScore;
struct GJSpriteColor;
struct GJScaleControlDelegate;
struct CCMenuItemToggler;
struct GJRewardObject;
struct GJMapPack;
struct DialogDelegate;
struct GJGarageLayer;
struct GJGameLevel;
struct CCScrollLayerExt;
struct CCScrollLayerExtDelegate;
struct TableView;
struct TopArtistsLayer;
struct GJColorSetupLayer;
struct EndPortalObject;
struct SongInfoLayer;
struct DrawGridLayer;
struct FMODAudioEngine;
struct PulseEffectAction;
struct CCBlockLayer;
struct EditorPauseLayer;
struct EditLevelLayer;
struct EditButtonBar;
struct LoadingLayer;
struct DialogObject;
struct SetIDLayer;
struct HSVWidgetPopupDelegate;
struct ColorSelectDelegate;
struct ColorSetupDelegate;
struct CustomizeObjectLayer;
struct LabelGameObject;
struct HardStreak;
struct CustomSongCell;
struct CreatorLayer;
struct CreateGuidelinesLayer;
struct CountTriggerAction;
struct CommentCell;
struct MoreOptionsLayer;
struct GJRotationControl;
struct ColorChannelSprite;
struct TouchToggleAction;
struct AccountHelpLayer;
struct ColorActionSprite;
struct ExtendedLayer;
struct ColorAction;
struct CollisionTriggerAction;
struct GJRotationControlDelegate;
struct EditorUI;
struct CollisionBlockPopup;
struct CheckpointObject;
struct LevelSettingsLayer;
struct LevelDeleteDelegate;
struct ChallengesPage;
struct CCTextInputNode;
struct CCMenuItemSpriteExtra;
struct CreateMenuItem;
struct LocalLevelManager;
struct CCMoveCNode;
struct GameStatsManager;
struct LevelBrowserLayer;
struct ArtistCell;
struct GJAccountLoginDelegate;
struct EndLevelLayer;
struct AnimatedGameObject;
struct GameToolbox;
struct AchievementsLayer;
struct AchievementNotifier;
struct SetupInstantCountPopup;
struct InheritanceNode;
struct HSVWidgetPopup;
struct AchievementCell;
struct AchievementBar;
struct CurrencyRewardLayer;
struct LikeItemDelegate;
struct CCContentLayer;
struct AchievementManager;
struct ConfigureHSVWidget;
struct SetupInteractObjectPopup;
struct RateLevelDelegate;
struct UndoObject;
struct GJSearchObject;
struct BoomListView;
struct LevelSettingsObject;
struct CCLightFlash;
struct CCAnimatedSprite;
struct GJRobotSprite;
struct InfoAlertButton;
struct AnimatedShopKeeper;
struct BoomScrollLayer;
struct SetupCollisionTriggerPopup;
struct CustomSongWidget;
struct TeleportPortalObject;
struct GJSpecialColorSelect;
struct GJSpiderSprite;
struct GJListLayer;
struct GJComment;
struct SetupTouchTogglePopup;
struct EditorOptionsLayer;
struct FMODSound;
struct SetGroupIDLayer;
struct EffectGameObject;
struct GJGroundLayer;
struct DialogLayer;
struct GJItemIcon;
struct AudioEffectsLayer;
struct LevelDownloadDelegate;
struct LevelInfoLayer;
struct GauntletSelectLayer;
struct CCNodeContainer;
struct GJCommentListLayer;
struct ButtonSprite;
struct Slider;
struct GhostTrailEffect;
struct SetItemIDLayer;
struct ColorSelectPopup;
struct GJScaleControl;
struct GJEffectManager;
struct DailyLevelPage;
struct CCCircleWave;
struct VideoOptionsLayer;
struct PauseLayer;
struct LevelSelectLayer;
struct SongInfoObject;
struct AppDelegate;
struct GJAccountManager;
struct LevelEditorLayer;
struct SetupOpacityPopup;
struct CustomListView;

struct UILayer : cocos2d::CCLayerColor {
	GEODE_CODEGEN_DLL static UILayer* create();
	GEODE_CODEGEN_DLL void disableMenu();
	GEODE_CODEGEN_DLL void enableMenu();
	GEODE_CODEGEN_DLL void pCommand(cocos2d::CCNode* p0);
	GEODE_CODEGEN_DLL void toggleCheckpointsMenu(bool p0);
	GEODE_CODEGEN_DLL void onCheck(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void onDeleteCheck(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void onPause(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL virtual void keyDown(cocos2d::enumKeyCodes key);
	GEODE_CODEGEN_DLL virtual void keyUp(cocos2d::enumKeyCodes key);
	GEODE_PAD(0x16);
	cocos2d::CCMenu* m_checkPointMenu;
};

struct ToggleTriggerAction : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static ToggleTriggerAction* createFromString(gd::string p0);
};

struct TextInputDelegate {
	GEODE_CODEGEN_DLL virtual void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL virtual void textInputOpened(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL virtual void textInputClosed(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
	GEODE_CODEGEN_DLL virtual void textInputReturn(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL virtual bool allowTextInput(CCTextInputNode* p0);
};

struct TextArea : cocos2d::CCSprite {
	 TextArea(TextArea const&) : m_fontFile() {}
	 ~TextArea() {}
	GEODE_CODEGEN_DLL TextArea();
	GEODE_CODEGEN_DLL virtual void draw();
	GEODE_CODEGEN_DLL virtual void setOpacity(unsigned char p0);
	GEODE_CODEGEN_DLL bool init(struct gd::string str, char const* font, float width, float height, struct cocos2d::CCPoint anchor, float scale, bool disableColor);
	GEODE_CODEGEN_DLL static TextArea* create(gd::string const& str, char const* font, float width, float height, cocos2d::CCPoint const& anchor, float scale, bool disableColor);

    template <bool T=false>
     void colorAllCharactersTo(cocos2d::ccColor3B color) {
        static_assert(T, "Implement TextArea::colorAllCharactersTo");
    }
	GEODE_CODEGEN_DLL void setString(gd::string str);
	bool m_disableColor;
	MultilineBitmapFont* m_label;
	float m_width;
	int m_unknown;
	gd::string m_fontFile;
	float m_height;
	GEODE_PAD(0x30);
};

struct TextAlertPopup {

    template <bool T=false>
     static TextAlertPopup* create(gd::string const& text, float time, float scale) {
        static_assert(T, "Implement TextAlertPopup::create");
    }
};

struct TableViewDelegate {
	GEODE_CODEGEN_DLL virtual void willTweenToIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
	GEODE_CODEGEN_DLL virtual void didEndTweenToIndexPath(CCIndexPath& p0, TableView* p1);
	GEODE_CODEGEN_DLL virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
	GEODE_CODEGEN_DLL virtual void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
	GEODE_CODEGEN_DLL virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
	GEODE_CODEGEN_DLL virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);
	GEODE_CODEGEN_DLL virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);
};

struct TableViewDataSource {
	GEODE_CODEGEN_DLL virtual int numberOfRowsInSection(unsigned int p0, TableView* p1);
	GEODE_CODEGEN_DLL virtual unsigned int numberOfSectionsInTableView(TableView* p0);
	GEODE_CODEGEN_DLL virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);
	GEODE_CODEGEN_DLL virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);
};

struct StatsCell {

    template <bool T=false>
     void updateBGColor(unsigned int index) {
        static_assert(T, "Implement StatsCell::updateBGColor");
    }
	GEODE_CODEGEN_DLL void draw();
};

struct StartPosObject {
};

struct SliderTouchLogic : cocos2d::CCMenu {
	GEODE_CODEGEN_DLL SliderThumb* getThumb() const;
	GEODE_UNIMPLEMENTED_PAD
	float m_length;
	SliderThumb* m_thumb;
	Slider* m_slider;
	bool m_unknown;
	GEODE_UNIMPLEMENTED_PAD
	bool m_vertical;
};

struct SliderThumb : cocos2d::CCMenuItemImage {
	GEODE_CODEGEN_DLL void setValue(float val);
	float m_length;
	bool m_vertical;
};

struct SimplePlayer : cocos2d::CCSprite {
	GEODE_CODEGEN_DLL void setSecondColor(const cocos2d::ccColor3B& color);
	GEODE_CODEGEN_DLL bool hasGlowOutline();
	GEODE_CODEGEN_DLL void setGlowOutline(bool value);

    template <bool T=false>
     bool init(int iconID) {
        static_assert(T, "Implement SimplePlayer::init");
    }
	GEODE_CODEGEN_DLL static SimplePlayer* create(int iconID);
	GEODE_CODEGEN_DLL void updatePlayerFrame(int iconID, IconType iconType);
	GEODE_CODEGEN_DLL void updateColors();

    template <bool T=false>
     void setFrames(const char* firstLayer, const char* secondLayer, const char* birdDome, const char* outlineSprite, const char* detailSprite) {
        static_assert(T, "Implement SimplePlayer::setFrames");
    }

    template <bool T=false>
     void setColor(const cocos2d::ccColor3B& color) {
        static_assert(T, "Implement SimplePlayer::setColor");
    }

    template <bool T=false>
     void setOpacity(unsigned char opacity) {
        static_assert(T, "Implement SimplePlayer::setOpacity");
    }
	cocos2d::CCSprite* m_firstLayer;
	cocos2d::CCSprite* m_secondLayer;
	cocos2d::CCSprite* m_birdDome;
	cocos2d::CCSprite* m_outlineSprite;
	cocos2d::CCSprite* m_detailSprite;
	GJRobotSprite* m_robotSprite;
	GJSpiderSprite* m_spiderSprite;
	GEODE_UNIMPLEMENTED_PAD
	bool m_hasGlowOutline;
};

struct SpawnTriggerAction : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static SpawnTriggerAction* createFromString(gd::string p0);
	bool m_timerEnded;
	float m_delay;
	float m_timer;
	int m_group;
	int m_uuid;
};

struct FLAlertLayer : cocos2d::CCLayerColor {
	 virtual ~FLAlertLayer() {
	    cocos2d::CCDirector::sharedDirector()->getTouchDispatcher()->decrementForcePrio(2);
	}
	 FLAlertLayer() {
    	m_buttonMenu = nullptr;
		m_controlConnected = -1;
		m_mainLayer = nullptr;
		m_ZOrder = 0;
		m_noElasticity = false;
		m_reverseKeyBack = false;
		m_scene = nullptr;
		m_alertProtocol = nullptr;
		m_scrollingLayer = nullptr;
		m_button2 = nullptr;
		m_button1 = nullptr;
		m_joystickConnected = -1;
		m_containsBorder = 0;
    }
	GEODE_CODEGEN_DLL static FLAlertLayer* create(char const* title, const gd::string& desc, char const* btn);
	GEODE_CODEGEN_DLL virtual void onEnter();
	GEODE_CODEGEN_DLL virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void registerWithTouchDispatcher();
	GEODE_CODEGEN_DLL virtual void keyBackClicked();
	GEODE_CODEGEN_DLL virtual void keyDown(cocos2d::enumKeyCodes p0);
	GEODE_CODEGEN_DLL virtual void show();
	GEODE_CODEGEN_DLL bool init(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7);
	GEODE_CODEGEN_DLL static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4);
	GEODE_CODEGEN_DLL static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5);
	GEODE_CODEGEN_DLL static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7);
	GEODE_CODEGEN_DLL void onBtn1(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void onBtn2(cocos2d::CCObject* p0);
	cocos2d::CCMenu* m_buttonMenu;
	int m_controlConnected;
	FLAlertLayerProtocol* m_alertProtocol;
	cocos2d::CCNode* m_scene;
	bool m_reverseKeyBack;
	cocos2d::ccColor3B m_color;
	cocos2d::CCLayer* m_mainLayer;
	int m_ZOrder;
	bool m_noElasticity;
	cocos2d::ccColor3B m_color2;
	ButtonSprite* m_button1;
	ButtonSprite* m_button2;
	cocos2d::CCLayerColor* m_scrollingLayer;
	int m_joystickConnected;
	bool m_containsBorder;
	bool m_noAction;
};

struct SetupSpawnPopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupSpawnPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCArray* p5);
	GEODE_CODEGEN_DLL void onTargetIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateTargetID();
	CLASSPARAM(EffectGameObject*, ject, 0x258);
	CLASSPARAM(CCTextInputNode*, mInput, 0x290);
};

struct SetupShakePopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupShakePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
};

struct GJSpecialColorSelectDelegate {
};

struct SetupPulsePopup : FLAlertLayer, cocos2d::extension::ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate {
	GEODE_CODEGEN_DLL virtual void colorValueChanged(cocos2d::ccColor3B color);
	cocos2d::extension::CCControlColourPicker* m_colorPicker;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCSprite* m_currentColorSpr;
	cocos2d::CCSprite* m_prevColorSpr;
	GEODE_UNIMPLEMENTED_PAD
	int m_pulseMode;
};

struct SetupObjectTogglePopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupObjectTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL bool init(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void onTargetIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateTargetID();
};

struct SetupCountTriggerPopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupCountTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void onTargetIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateTargetID();
};

struct SetupAnimationPopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupAnimationPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void onTargetIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateTargetID();
};

struct SetTargetIDLayer {
	GEODE_CODEGEN_DLL static SetTargetIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1, gd::string p2);
	GEODE_CODEGEN_DLL void onTargetIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateTargetID();
};

struct SetIDPopup {
};

struct SelectArtLayer {

    template <bool T=false>
     static SelectArtLayer* create(SelectArtType type) {
        static_assert(T, "Implement SelectArtLayer::create");
    }
};

struct ScrollingLayer : cocos2d::CCLayerColor {
	GEODE_CODEGEN_DLL static ScrollingLayer* create(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2);
};

struct RetryLevelLayer {
	GEODE_CODEGEN_DLL static RetryLevelLayer* create();
};

struct SetupPickupTriggerPopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupPickupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void onItemIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void onNextItemID(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateItemID();
	GEODE_UNIMPLEMENTED_PAD
	CCTextInputNode* m_countInput;
};

struct PointNode : cocos2d::CCObject {

    template <bool T=false>
     static PointNode* create(struct cocos2d::CCPoint point) {
        static_assert(T, "Implement PointNode::create");
    }
	cocos2d::CCPoint m_point;
};

struct CCSpritePlus : cocos2d::CCSprite {
	GEODE_CODEGEN_DLL bool initWithSpriteFrameName(const char* p0);

    template <bool T=false>
     void setScaleX(float scale) {
        static_assert(T, "Implement CCSpritePlus::setScaleX");
    }

    template <bool T=false>
     void setScaleY(float scale) {
        static_assert(T, "Implement CCSpritePlus::setScaleY");
    }

    template <bool T=false>
     void setScale(float scale) {
        static_assert(T, "Implement CCSpritePlus::setScale");
    }

    template <bool T=false>
     void setPosition(const cocos2d::CCPoint& pos) {
        static_assert(T, "Implement CCSpritePlus::setPosition");
    }

    template <bool T=false>
     void setRotation(float rotation) {
        static_assert(T, "Implement CCSpritePlus::setRotation");
    }

    template <bool T=false>
     bool initWithTexture(cocos2d::CCTexture2D* texture) {
        static_assert(T, "Implement CCSpritePlus::initWithTexture");
    }

    template <bool T=false>
     void setFlipX(bool flip) {
        static_assert(T, "Implement CCSpritePlus::setFlipX");
    }

    template <bool T=false>
     void setFlipY(bool flip) {
        static_assert(T, "Implement CCSpritePlus::setFlipY");
    }

    template <bool T=false>
     static CCSpritePlus* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame) {
        static_assert(T, "Implement CCSpritePlus::createWithSpriteFrame");
    }
	cocos2d::CCArray* m_followers;
	CCSpritePlus* m_followingSprite;
	bool m_hasFollower;
	bool m_propagateScaleChanges;
	bool m_propagateFlipChanges;
};

struct GameObject : CCSpritePlus {
	GEODE_CODEGEN_DLL cocos2d::CCPoint getStartPosition();
	GEODE_CODEGEN_DLL void setStartPosition(cocos2d::CCPoint const& p);
	GEODE_CODEGEN_DLL unsigned int getUniqueID();
	GEODE_CODEGEN_DLL short getGroupID(int ix);
	GEODE_CODEGEN_DLL short getGroupIDCount();
	GEODE_CODEGEN_DLL gd::vector<short> getGroupIDs();
	GEODE_CODEGEN_DLL int getGameZOrder();
	GEODE_CODEGEN_DLL void setGameZOrder(int z);
	GEODE_CODEGEN_DLL void setGameObjType(GameObjectType t);
	GEODE_CODEGEN_DLL GJSpriteColor* getBaseColor();
	GEODE_CODEGEN_DLL GJSpriteColor* getDetailColor();
	GEODE_CODEGEN_DLL ~GameObject();
	GEODE_CODEGEN_DLL virtual void update(float p0);
	GEODE_CODEGEN_DLL virtual void setScaleX(float p0);
	GEODE_CODEGEN_DLL virtual void setScaleY(float p0);
	GEODE_CODEGEN_DLL virtual void setScale(float p0);
	GEODE_CODEGEN_DLL virtual void setPosition(const cocos2d::CCPoint& p0);
	GEODE_CODEGEN_DLL virtual void setVisible(bool p0);
	GEODE_CODEGEN_DLL virtual void setRotation(float p0);
	GEODE_CODEGEN_DLL virtual void setOpacity(GLubyte p0);
	GEODE_CODEGEN_DLL virtual bool initWithTexture(cocos2d::CCTexture2D* p0);
	GEODE_CODEGEN_DLL virtual void setChildColor(const cocos2d::ccColor3B& p0);
	GEODE_CODEGEN_DLL virtual void setFlipX(bool p0);
	GEODE_CODEGEN_DLL virtual void setFlipY(bool p0);
	GEODE_CODEGEN_DLL virtual void customSetup();
	GEODE_CODEGEN_DLL virtual void setupCustomSprites();
	GEODE_CODEGEN_DLL virtual void addMainSpriteToParent(bool p0);
	GEODE_CODEGEN_DLL virtual void resetObject();
	GEODE_CODEGEN_DLL virtual void triggerObject(GJBaseGameLayer* p0);
	GEODE_CODEGEN_DLL virtual void activateObject();
	GEODE_CODEGEN_DLL virtual void deactivateObject(bool p0);
	GEODE_CODEGEN_DLL virtual cocos2d::CCRect* getObjectRect();
	GEODE_CODEGEN_DLL virtual cocos2d::CCRect* getObjectRect(float p0, float p1);
	GEODE_CODEGEN_DLL virtual cocos2d::CCRect* getObjectRect2(float p0, float p1);
	GEODE_CODEGEN_DLL virtual cocos2d::CCRect* getObjectTextureRect();
	GEODE_CODEGEN_DLL virtual void getRealPosition();
	GEODE_CODEGEN_DLL virtual void setStartPos(cocos2d::CCPoint p0);
	GEODE_CODEGEN_DLL virtual void updateStartValues();
	GEODE_CODEGEN_DLL virtual void customObjectSetup();
	GEODE_CODEGEN_DLL virtual gd::string getSaveString();
	GEODE_CODEGEN_DLL virtual bool isFlipX();
	GEODE_CODEGEN_DLL virtual bool isFlipY();
	GEODE_CODEGEN_DLL virtual void setRScaleX(float p0);
	GEODE_CODEGEN_DLL virtual void setRScaleY(float p0);
	GEODE_CODEGEN_DLL virtual void setRScale(float p0);
	GEODE_CODEGEN_DLL virtual void getRScaleX();
	GEODE_CODEGEN_DLL virtual void getRScaleY();
	GEODE_CODEGEN_DLL virtual void calculateSpawnXPos();
	GEODE_CODEGEN_DLL virtual void triggerActivated(float p0);
	GEODE_CODEGEN_DLL virtual void powerOnObject();
	GEODE_CODEGEN_DLL virtual void powerOffObject();
	GEODE_CODEGEN_DLL virtual void setObjectColor(const cocos2d::ccColor3B& p0);
	GEODE_CODEGEN_DLL virtual void setGlowColor(cocos2d::_ccColor3B const& p0);
	GEODE_CODEGEN_DLL virtual void getOrientedBox();
	GEODE_CODEGEN_DLL virtual void addToGroup(int p0);
	GEODE_CODEGEN_DLL virtual void removeFromGroup(int p0);
	GEODE_CODEGEN_DLL virtual void spawnXPosition();
	GEODE_CODEGEN_DLL virtual void getObjectRectDirty() const;
	GEODE_CODEGEN_DLL virtual void setObjectRectDirty(bool p0);
	GEODE_CODEGEN_DLL virtual void getOrientedRectDirty() const;
	GEODE_CODEGEN_DLL virtual void setOrientedRectDirty(bool p0);
	GEODE_CODEGEN_DLL virtual GameObjectType getType() const;
	GEODE_CODEGEN_DLL virtual void setType(GameObjectType p0);
	GEODE_CODEGEN_DLL virtual void getStartPos() const;
	GEODE_CODEGEN_DLL void activatedByPlayer(GameObject* p0);
	GEODE_CODEGEN_DLL void addColorSprite();
	GEODE_CODEGEN_DLL void addColorSpriteToParent(bool p0);
	GEODE_CODEGEN_DLL void addToTempOffset(float p0, float p1);
	GEODE_CODEGEN_DLL void calculateOrientedBox();
	GEODE_CODEGEN_DLL void canChangeCustomColor();
	GEODE_CODEGEN_DLL void colorForMode(int p0, bool p1);
	GEODE_CODEGEN_DLL void commonSetup();
	GEODE_CODEGEN_DLL void copyGroups(GameObject* p0);
	GEODE_CODEGEN_DLL static GameObject* createWithFrame(const char* p0);
	GEODE_CODEGEN_DLL static GameObject* createWithKey(int p0);
	GEODE_CODEGEN_DLL void destroyObject();
	GEODE_CODEGEN_DLL void determineSlopeDirection();
	GEODE_CODEGEN_DLL void getActiveColorForMode(int p0, bool p1);
	GEODE_CODEGEN_DLL void getBallFrame(int p0);
	GEODE_CODEGEN_DLL cocos2d::CCPoint getBoxOffset();
	GEODE_CODEGEN_DLL const cocos2d::_ccColor3B& getColorIndex();
	GEODE_CODEGEN_DLL void getDidUpdateLastPosition();
	GEODE_CODEGEN_DLL void getLastPosition();
	GEODE_CODEGEN_DLL void getMainColorMode();
	GEODE_CODEGEN_DLL void getObjectZOrder();
	GEODE_CODEGEN_DLL float getObjectRadius();
	GEODE_CODEGEN_DLL void getSecondaryColorMode();
	GEODE_CODEGEN_DLL void getSectionIdx();
	GEODE_CODEGEN_DLL void groupWasDisabled();
	GEODE_CODEGEN_DLL void groupWasEnabled();
	GEODE_CODEGEN_DLL void hasBeenActivated();
	GEODE_CODEGEN_DLL void hasBeenActivatedByPlayer(GameObject* p0);
	GEODE_CODEGEN_DLL void hasSecondaryColor();
	GEODE_CODEGEN_DLL void ignoreEnter();
	GEODE_CODEGEN_DLL void ignoreFade();
	GEODE_CODEGEN_DLL void isBasicTrigger();
	GEODE_CODEGEN_DLL void isColorTrigger();
	GEODE_CODEGEN_DLL void isSpawnableTrigger();
	GEODE_CODEGEN_DLL void isSpecialObject();
	GEODE_CODEGEN_DLL static GameObject* objectFromString(gd::string p0, bool p1);
	GEODE_CODEGEN_DLL void playShineEffect();
	GEODE_CODEGEN_DLL void quickUpdatePosition();
	GEODE_CODEGEN_DLL void removeGlow();
	GEODE_CODEGEN_DLL void resetGroupDisabled();
	GEODE_CODEGEN_DLL void saveActiveColors();
	GEODE_CODEGEN_DLL void selectObject(const cocos2d::ccColor3B& p0);
	GEODE_CODEGEN_DLL void setDefaultMainColorMode(int p0);
	GEODE_CODEGEN_DLL void setDidUpdateLastPosition(bool const& p0);
	GEODE_CODEGEN_DLL void setGlowOpacity(unsigned char p0);
	GEODE_CODEGEN_DLL void setLastPosition(cocos2d::CCPoint const& p0);
	GEODE_CODEGEN_DLL void setMainColorMode(int p0);
	GEODE_CODEGEN_DLL void setSectionIdx(int const& p0);
	GEODE_CODEGEN_DLL void setupCoinArt();
	GEODE_CODEGEN_DLL void slopeFloorTop();
	GEODE_CODEGEN_DLL void slopeWallLeft();
	GEODE_CODEGEN_DLL void updateCustomScale(float p0);
	GEODE_CODEGEN_DLL void updateMainColor();
	GEODE_CODEGEN_DLL void updateOrientedBox();
	GEODE_CODEGEN_DLL void updateSecondaryColor();
	GEODE_CODEGEN_DLL void updateStartPos();
	GEODE_CODEGEN_DLL void updateState();
	GEODE_CODEGEN_DLL void updateSyncedAnimation(float p0);

    template <bool T=false>
     void deselectObject() {
        static_assert(T, "Implement GameObject::deselectObject");
    }

    template <bool T=false>
     cocos2d::CCRepeatForever* createRotateAction(float f, int n) {
        static_assert(T, "Implement GameObject::createRotateAction");
    }

    template <bool T=false>
     void setMyAction(cocos2d::CCAction* pAction) {
        static_assert(T, "Implement GameObject::setMyAction");
    }
	bool m_unk3;
	bool m_isBlueMaybe;
	float m_unk2;
	float m_unk;
	float m_unk3f;
	float m_unk4;
	bool m_unkidk;
	float m_animSpeed2;
	bool m_isEffectObject;
	bool m_randomisedAnimStart;
	float m_animSpeed;
	bool m_blackChild;
	bool m_unkOutlineMaybe;
	float m_blackChildOpacity;
	bool field_21C;
	bool m_editor;
	bool m_groupDisabled;
	bool m_colourOnTop;
	GJSpriteColor* m_mainColourMode;
	GJSpriteColor* m_secondaryColourMode;
	bool m_col1;
	bool m_col2;
	cocos2d::CCPoint m_startPosOffset;
	float m_unkRotationField;
	bool m_tintTrigger;
	bool m_isFlippedX;
	bool m_isFlippedY;
	cocos2d::CCPoint m_boxOffset;
	bool m_isOriented;
	cocos2d::CCPoint m_boxOffset2;
	OBB2D* m_objectOBB2D;
	bool m_oriented;
	cocos2d::CCSprite* m_glowSprite;
	bool m_notEditor;
	cocos2d::CCAction* m_myAction;
	bool m_unk1;
	bool m_runActionWithTag;
	bool m_objectPoweredOn;
	cocos2d::CCSize m_objectSize;
	bool m_trigger;
	bool m_active;
	bool m_animationFinished;
	cocos2d::CCParticleSystemQuad* m_particleSystem;
	gd::string m_effectPlistName;
	bool m_particleAdded;
	bool m_hasParticles;
	bool m_unkCustomRing;
	cocos2d::CCPoint m_portalPosition;
	bool m_unkParticleSystem;
	cocos2d::CCRect m_objectTextureRect;
	bool m_textureRectDirty;
	float m_rectXCenterMaybe;
	cocos2d::CCRect m_objectRect2;
	bool m_isObjectRectDirty;
	bool m_isOrientedRectDirty;
	bool m_hasBeenActivated;
	bool m_hasBeenActivatedP2;
	GEODE_PAD(0x10);
	bool m_sawIsDisabled;
	GEODE_PAD(0x4);
	cocos2d::CCSprite* m_detailSprite;
	GEODE_PAD(0x8);
	bool m_isRotatedSide;
	float m_unk2F4;
	float m_unk2F8;
	int m_uniqueID;
	GameObjectType m_objectType;
	int m_section;
	bool m_touchTriggered;
	bool m_spawnTriggered;
	cocos2d::CCPoint m_startPosition;
	gd::string m_textureName;
	bool m_unk32C;
	bool m_unk32D;
	GEODE_PAD(0xc);
	float m_unk33C;
	float m_unk340;
	GEODE_PAD(0x10);
	bool m_isGlowDisabled;
	int m_targetColorID;
	float m_scale;
	int m_objectID;
	GEODE_UNIMPLEMENTED_PAD
	bool m_unk368;
	bool m_unk369;
	bool m_unk36A;
	bool m_isDontEnter;
	bool m_isDontFade;
	int m_defaultZOrder;
	GEODE_UNIMPLEMENTED_PAD
	bool m_unk38C;
	bool m_unk38D;
	bool m_unk38E;
	float m_unk390;
	GEODE_UNIMPLEMENTED_PAD
	GJSpriteColor* m_baseColor;
	GJSpriteColor* m_detailColor;
	GEODE_UNIMPLEMENTED_PAD
	ZLayer m_defaultZLayer;
	ZLayer m_zLayer;
	int m_gameZOrder;
	gd::string m_unk3C0;
	bool m_showGamemodeBorders;
	bool m_unk3D9;
	bool m_isSelected;
	int m_globalClickCounter;
	GEODE_UNIMPLEMENTED_PAD
	bool m_unknownLayerRelated;
	float m_multiScaleMultiplier;
	bool m_isGroupParent;
	short* m_groups;
	short m_groupCount;
	GEODE_UNIMPLEMENTED_PAD
	int m_editorLayer;
	int m_editorLayer2;
	int m_unk414;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCPoint m_firstPosition;
	GEODE_UNIMPLEMENTED_PAD
	bool m_highDetail;
	ColorActionSprite* m_colorActionSprite1;
	ColorActionSprite* m_colorActionSprite2;
	GJEffectManager* m_effectManager;
	GEODE_UNIMPLEMENTED_PAD
};

struct AnimatedSpriteDelegate {
};

struct PlayerObject : GameObject, AnimatedSpriteDelegate {
	GEODE_CODEGEN_DLL ~PlayerObject();
	GEODE_CODEGEN_DLL virtual void update(float p0);
	GEODE_CODEGEN_DLL virtual void setScaleX(float p0);
	GEODE_CODEGEN_DLL virtual void setScaleY(float p0);
	GEODE_CODEGEN_DLL virtual void setScale(float p0);
	GEODE_CODEGEN_DLL virtual void setPosition(cocos2d::CCPoint const& p0);
	GEODE_CODEGEN_DLL virtual void setVisible(bool p0);
	GEODE_CODEGEN_DLL virtual void setRotation(float p0);
	GEODE_CODEGEN_DLL virtual void setOpacity(unsigned char p0);
	GEODE_CODEGEN_DLL virtual void setColor(cocos2d::_ccColor3B const& p0);
	GEODE_CODEGEN_DLL virtual void setFlipX(bool p0);
	GEODE_CODEGEN_DLL virtual void setFlipY(bool p0);
	GEODE_CODEGEN_DLL virtual void resetObject();
	GEODE_CODEGEN_DLL virtual void getRealPosition();
	GEODE_CODEGEN_DLL virtual void getOrientedBox();
	GEODE_CODEGEN_DLL virtual void animationFinished(char const* p0);
	GEODE_CODEGEN_DLL void activateStreak();
	GEODE_CODEGEN_DLL void addAllParticles();
	GEODE_CODEGEN_DLL void addToTouchedRings(GameObject* p0);
	GEODE_CODEGEN_DLL void boostPlayer(float p0);
	GEODE_CODEGEN_DLL void bumpPlayer(float p0, int p1);
	GEODE_CODEGEN_DLL void buttonDown(PlayerButton p0);
	GEODE_CODEGEN_DLL void checkSnapJumpToObject(GameObject* p0);
	GEODE_CODEGEN_DLL void collidedWithObject(float p0, GameObject* p1);
	GEODE_CODEGEN_DLL void collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2);
	GEODE_CODEGEN_DLL void collidedWithSlope(float p0, GameObject* p1, bool p2);
	GEODE_CODEGEN_DLL void convertToClosestRotation(float p0);
	GEODE_CODEGEN_DLL void copyAttributes(PlayerObject* p0);
	GEODE_CODEGEN_DLL static PlayerObject* create(int p0, int p1, cocos2d::CCLayer* p2);
	GEODE_CODEGEN_DLL void deactivateParticle();
	GEODE_CODEGEN_DLL void deactivateStreak(bool p0);
	GEODE_CODEGEN_DLL void fadeOutStreak2(float p0);
	GEODE_CODEGEN_DLL void flashPlayer(float p0, float p1, cocos2d::_ccColor3B p2, cocos2d::_ccColor3B p3);
	GEODE_CODEGEN_DLL void flipGravity(bool p0, bool p1);
	GEODE_CODEGEN_DLL void flipMod();
	GEODE_CODEGEN_DLL void getActiveMode();
	GEODE_CODEGEN_DLL void getModifiedSlopeYVel();
	GEODE_CODEGEN_DLL void getOldPosition(float p0);
	GEODE_CODEGEN_DLL void getSecondColor();
	GEODE_CODEGEN_DLL void gravityDown();
	GEODE_CODEGEN_DLL void gravityUp();
	GEODE_CODEGEN_DLL void hardFlipGravity();
	GEODE_CODEGEN_DLL void hitGround(bool p0);
	GEODE_CODEGEN_DLL void incrementJumps();
	GEODE_CODEGEN_DLL bool init(int p0, int p1, cocos2d::CCLayer* p2);
	GEODE_CODEGEN_DLL void isBoostValid(float p0);
	GEODE_CODEGEN_DLL void isFlying();
	GEODE_CODEGEN_DLL void isSafeFlip(float p0);
	GEODE_CODEGEN_DLL void isSafeMode(float p0);
	GEODE_CODEGEN_DLL void isSafeSpiderFlip(float p0);
	GEODE_CODEGEN_DLL void levelFlipFinished();
	GEODE_CODEGEN_DLL void levelFlipping();
	GEODE_CODEGEN_DLL void levelWillFlip();
	GEODE_CODEGEN_DLL void loadFromCheckpoint(PlayerCheckpoint* p0);
	GEODE_CODEGEN_DLL void lockPlayer();
	GEODE_CODEGEN_DLL void logValues();
	GEODE_CODEGEN_DLL void modeDidChange();
	GEODE_CODEGEN_DLL void placeStreakPoint();
	GEODE_CODEGEN_DLL void playBurstEffect();
	GEODE_CODEGEN_DLL void playDeathEffect();
	GEODE_CODEGEN_DLL void playDynamicSpiderRun();
	GEODE_CODEGEN_DLL void playerDestroyed(bool p0);
	GEODE_CODEGEN_DLL bool playerIsFalling();
	GEODE_CODEGEN_DLL void playerTeleported();
	GEODE_CODEGEN_DLL void playingEndEffect();
	GEODE_CODEGEN_DLL void postCollision(float p0);
	GEODE_CODEGEN_DLL void preCollision();
	GEODE_CODEGEN_DLL void preSlopeCollision(float p0, GameObject* p1);
	GEODE_CODEGEN_DLL void propellPlayer(float p0);
	GEODE_CODEGEN_DLL void pushButton(int p0);
	GEODE_CODEGEN_DLL void pushDown();
	GEODE_CODEGEN_DLL void pushPlayer(float p0);
	GEODE_CODEGEN_DLL void releaseButton(int p0);
	GEODE_CODEGEN_DLL void removeAllParticles();
	GEODE_CODEGEN_DLL void removePendingCheckpoint();
	GEODE_CODEGEN_DLL void resetAllParticles();
	GEODE_CODEGEN_DLL void resetCollisionLog();
	GEODE_CODEGEN_DLL void resetPlayerIcon();
	GEODE_CODEGEN_DLL void resetStateVariables();
	GEODE_CODEGEN_DLL void resetStreak();
	GEODE_CODEGEN_DLL void ringJump(GameObject* p0);
	GEODE_CODEGEN_DLL void runBallRotation(float p0);
	GEODE_CODEGEN_DLL void runBallRotation2();
	GEODE_CODEGEN_DLL void runNormalRotation();
	GEODE_CODEGEN_DLL void runRotateAction(bool p0);
	GEODE_CODEGEN_DLL void saveToCheckpoint(PlayerCheckpoint* p0);
	GEODE_CODEGEN_DLL void setSecondColor(cocos2d::_ccColor3B const& p0);
	GEODE_CODEGEN_DLL void setupStreak();
	GEODE_CODEGEN_DLL void spawnCircle();
	GEODE_CODEGEN_DLL void spawnCircle2();
	GEODE_CODEGEN_DLL void spawnDualCircle();
	GEODE_CODEGEN_DLL void spawnFromPlayer(PlayerObject* p0);
	GEODE_CODEGEN_DLL void spawnPortalCircle(cocos2d::_ccColor3B p0, float p1);
	GEODE_CODEGEN_DLL void spawnScaleCircle();
	GEODE_CODEGEN_DLL void specialGroundHit();
	GEODE_CODEGEN_DLL void speedDown();
	GEODE_CODEGEN_DLL void speedUp();
	GEODE_CODEGEN_DLL void spiderTestJump(bool p0);
	GEODE_CODEGEN_DLL void startDashing(GameObject* p0);
	GEODE_CODEGEN_DLL void stopBurstEffect();
	GEODE_CODEGEN_DLL void stopDashing();
	GEODE_CODEGEN_DLL void stopRotation(bool p0);
	GEODE_CODEGEN_DLL void storeCollision(bool p0, int p1);
	GEODE_CODEGEN_DLL void switchedToMode(GameObjectType p0);
	GEODE_CODEGEN_DLL void testForMoving(float p0, GameObject* p1);
	GEODE_CODEGEN_DLL void toggleBirdMode(bool p0);
	GEODE_CODEGEN_DLL void toggleDartMode(bool p0);
	GEODE_CODEGEN_DLL void toggleFlyMode(bool p0);
	GEODE_CODEGEN_DLL void toggleGhostEffect(GhostType p0);
	GEODE_CODEGEN_DLL void togglePlayerScale(bool p0);
	GEODE_CODEGEN_DLL void toggleRobotMode(bool p0);
	GEODE_CODEGEN_DLL void toggleRollMode(bool p0);
	GEODE_CODEGEN_DLL void toggleSpiderMode(bool p0);
	GEODE_CODEGEN_DLL void toggleVisibility(bool p0);
	GEODE_CODEGEN_DLL void touchedObject(GameObject* p0);
	GEODE_CODEGEN_DLL void tryPlaceCheckpoint();
	GEODE_CODEGEN_DLL void updateCheckpointMode(bool p0);
	GEODE_CODEGEN_DLL void updateCheckpointTest();
	GEODE_CODEGEN_DLL void updateCollide(bool p0, int p1);
	GEODE_CODEGEN_DLL void updateCollideBottom(float p0, int p1);
	GEODE_CODEGEN_DLL void updateCollideTop(float p0, int p1);
	GEODE_CODEGEN_DLL void updateDashAnimation();
	GEODE_CODEGEN_DLL void updateDashArt();
	GEODE_CODEGEN_DLL void updateGlowColor();
	GEODE_CODEGEN_DLL void updateJump(float p0);
	GEODE_CODEGEN_DLL void updateJumpVariables();
	GEODE_CODEGEN_DLL void updatePlayerBirdFrame(int p0);
	GEODE_CODEGEN_DLL void updatePlayerDartFrame(int p0);
	GEODE_CODEGEN_DLL void updatePlayerFrame(int p0);
	GEODE_CODEGEN_DLL void updatePlayerGlow();
	GEODE_CODEGEN_DLL void updatePlayerRobotFrame(int p0);
	GEODE_CODEGEN_DLL void updatePlayerRollFrame(int p0);
	GEODE_CODEGEN_DLL void updatePlayerScale();
	GEODE_CODEGEN_DLL void updatePlayerShipFrame(int p0);
	GEODE_CODEGEN_DLL void updatePlayerSpiderFrame(int p0);
	GEODE_CODEGEN_DLL void updatePlayerSpriteExtra(gd::string p0);
	GEODE_CODEGEN_DLL void updateRobotAnimationSpeed();
	GEODE_CODEGEN_DLL void updateRotation(float p0);
	GEODE_CODEGEN_DLL void updateRotation(float p0, float p1);
	GEODE_CODEGEN_DLL void updateShipRotation(float p0);
	GEODE_CODEGEN_DLL void updateShipSpriteExtra(gd::string p0);
	GEODE_CODEGEN_DLL void updateSlopeRotation(float p0);
	GEODE_CODEGEN_DLL void updateSlopeYVelocity(float p0);
	GEODE_CODEGEN_DLL void updateSpecial(float p0);
	GEODE_CODEGEN_DLL void updateStateVariables();
	GEODE_CODEGEN_DLL void updateTimeMod(float p0);
	GEODE_CODEGEN_DLL void usingWallLimitedMode();
	GEODE_CODEGEN_DLL void yStartDown();
	GEODE_CODEGEN_DLL void yStartUp();

    template <bool T=false>
     void runRotateAction() {
        static_assert(T, "Implement PlayerObject::runRotateAction");
    }

    template <bool T=false>
     void runBallRotation() {
        static_assert(T, "Implement PlayerObject::runBallRotation");
    }
	CLASSPARAM(HardStreak*, waveStreak, 0x600);
	CLASSPARAM(double, speed, 0x608);
	CLASSPARAM(double, gravity, 0x618);
	CLASSPARAM(bool, inPlayLayer, 0x62c);
	CLASSPARAM(GJRobotSprite*, robotSprite, 0x6a8);
	CLASSPARAM(GJSpiderSprite*, spiderSprite, 0x6b0);
	CLASSPARAM(bool, isHolding, 0x745);
	CLASSPARAM(bool, hasJustHeld, 0x746);
	CLASSPARAM(double, yAccel, 0x760);
	CLASSPARAM(bool, isShip, 0x770);
	CLASSPARAM(bool, isBird, 0x771);
	CLASSPARAM(bool, isBall, 0x772);
	CLASSPARAM(bool, isDart, 0x773);
	CLASSPARAM(bool, isRobot, 0x774);
	CLASSPARAM(bool, isSpider, 0x775);
	CLASSPARAM(bool, upsideDown, 0x776);
	CLASSPARAM(bool, dead, 0x777);
	CLASSPARAM(bool, onGround, 0x778);
	CLASSPARAM(float, vehicleSize, 0x77c);
	CLASSPARAM(cocos2d::CCPoint, lastPortalLocation, 0x78c);
	CLASSPARAM(bool, isSliding, 0x7a0);
	CLASSPARAM(bool, isRising, 0x7a1);
	CLASSPARAM(cocos2d::CCPoint, lastHitGround, 0x7a4);
	CLASSPARAM(GameObject*, lastPortal, 0x7b8);
	CLASSPARAM(cocos2d::_ccColor3B, col1, 0x7c2);
	CLASSPARAM(cocos2d::_ccColor3B, col2, 0x7c5);
	CLASSPARAM(float, xPos, 0x7c8);
	CLASSPARAM(float, yPos, 0x7cc);
	GEODE_UNIMPLEMENTED_PAD
	bool m_unk480;
	cocos2d::CCNode* m_unk484;
	cocos2d::CCDictionary* m_collisionLog;
	cocos2d::CCDictionary* m_collisionLog1;
	GEODE_UNIMPLEMENTED_PAD
	bool m_unk4B0;
	cocos2d::CCSprite* m_unk4B4;
	GEODE_UNIMPLEMENTED_PAD
	bool m_unk4D4;
	cocos2d::CCArray* m_particleSystems;
	bool m_unk4DC;
	bool m_isHidden;
	int m_hasGhostTrail;
	GhostTrailEffect* m_ghostTrail;
	cocos2d::CCSprite* m_iconSprite;
	cocos2d::CCSprite* m_iconSpriteSecondary;
	cocos2d::CCSprite* m_iconSpriteWhitener;
	cocos2d::CCSprite* m_iconGlow;
	cocos2d::CCSprite* m_vehicleSprite;
	cocos2d::CCSprite* m_vehicleSpriteSecondary;
	cocos2d::CCSprite* m_unk500;
	cocos2d::CCSprite* m_vehicleSpriteWhitener;
	cocos2d::CCSprite* m_vehicleGlow;
	cocos2d::CCSprite* m_unk50C;
	cocos2d::CCMotionStreak* m_regularTrail;
	HardStreak* m_waveTrail;
	double m_xAccel;
	double m_jumpAccel;
	double m_gravity;
	GEODE_UNIMPLEMENTED_PAD
	bool m_unk538;
	bool m_unk539;
	bool m_unk53A;
	bool m_unk53B;
	bool m_isInPlayLayer;
	bool m_unk53D;
	bool m_unk53E;
	bool m_unk53F;
	GEODE_UNIMPLEMENTED_PAD
	double m_lastJumpTime;
	double m_unk558;
	GEODE_UNIMPLEMENTED_PAD
	float m_unk584;
	GEODE_UNIMPLEMENTED_PAD
	GameObject* m_unk59C;
	GEODE_UNIMPLEMENTED_PAD
	GJRobotSprite* m_robot;
	GJSpiderSprite* m_spider;
	bool m_unk5B0;
	cocos2d::CCParticleSystemQuad* m_unk5B4;
	cocos2d::CCParticleSystemQuad* m_unk5B8;
	cocos2d::CCParticleSystemQuad* m_unk5BC;
	cocos2d::CCParticleSystemQuad* m_unk5C0;
	cocos2d::CCParticleSystemQuad* m_unk5C4;
	cocos2d::CCParticleSystemQuad* m_unk5C8;
	cocos2d::CCParticleSystemQuad* m_unk5CC;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCParticleSystemQuad* m_unk5D4;
	cocos2d::CCParticleSystemQuad* m_unk5D8;
	GEODE_UNIMPLEMENTED_PAD
	int m_streakID;
	float m_wellIdk;
	GEODE_UNIMPLEMENTED_PAD
	bool m_unk5FC;
	bool m_unk5FD;
	bool m_unk5FE;
	GEODE_UNIMPLEMENTED_PAD
	bool m_unk610;
	bool m_isHolding;
	bool m_hasJustHeld;
	bool m_isHolding2;
	bool m_hasJustHeld2;
	int m_unk618;
	float m_unk61C;
	int m_unk620;
	bool m_canRobotJump;
	double m_yAccel;
	bool m_unk630;
	bool m_unk631;
	float m_unk634;
	bool m_isShip;
	bool m_isBird;
	bool m_isBall;
	bool m_isDart;
	bool m_isRobot;
	bool m_isSpider;
	bool m_isUpsideDown;
	bool m_isOnGround;
	bool m_isDashing;
	float m_vehicleSize;
	float m_playerSpeed;
	cocos2d::CCPoint m_unk64C;
	cocos2d::CCPoint m_lastPortalPos;
	cocos2d::CCLayer* m_unk65C;
	bool m_isSliding;
	bool m_isRising;
	bool m_unk662;
	cocos2d::CCPoint m_lastGroundedPos;
	cocos2d::CCArray* m_touchingRings;
	GameObject* m_lastActivatedPortal;
	bool m_unk674;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCPoint m_position;
	bool m_unk684;
	bool m_unk685;
	double m_unk688;
	GEODE_UNIMPLEMENTED_PAD
	float m_groundHeight;
	float m_unk69C;
	GEODE_UNIMPLEMENTED_PAD
	float m_unk6A4[200];
	GEODE_UNIMPLEMENTED_PAD
};

struct PlayerCheckpoint : cocos2d::CCNode {
	GEODE_CODEGEN_DLL ~PlayerCheckpoint();
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL static PlayerCheckpoint* create();
	cocos2d::CCPoint m_position;
	float m_yAccel;
	bool m_isUpsideDown;
	bool m_isShip;
	bool m_isBall;
	bool m_isUFO;
	bool m_isWave;
	bool m_isRobot;
	bool m_isSpider;
	bool m_isOnGround;
	int m_hasGhostTrail;
	bool m_small;
	float m_speed;
	bool m_hidden;
};

struct TriggerEffectDelegate {
};

struct GJBaseGameLayer : cocos2d::CCLayer, TriggerEffectDelegate {
	GEODE_CODEGEN_DLL cocos2d::CCLayer* getObjectLayer();
	GEODE_CODEGEN_DLL cocos2d::CCArray* getAllObjects();
	GEODE_CODEGEN_DLL virtual void objectsCollided(int p0, int p1);
	GEODE_CODEGEN_DLL virtual void createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, int p7);
	GEODE_CODEGEN_DLL virtual void updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9);
	GEODE_CODEGEN_DLL virtual void flipGravity(PlayerObject* p0, bool p1, bool p2);
	GEODE_CODEGEN_DLL virtual void calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5);
	GEODE_CODEGEN_DLL virtual void toggleGroupTriggered(int p0, bool p1);
	GEODE_CODEGEN_DLL virtual void spawnGroup(int p0);
	GEODE_CODEGEN_DLL virtual void addToSection(GameObject* p0);
	GEODE_CODEGEN_DLL virtual void addToGroup(GameObject* p0, int p1, bool p2);
	GEODE_CODEGEN_DLL virtual void removeFromGroup(GameObject* p0, int p1);
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL void addObjectCounter(LabelGameObject* p0, int p1);
	GEODE_CODEGEN_DLL void addToGroups(GameObject* p0, bool p1);
	GEODE_CODEGEN_DLL void atlasValue(int p0);
	GEODE_CODEGEN_DLL void bumpPlayer(PlayerObject* p0, GameObject* p1);
	GEODE_CODEGEN_DLL void calculateOpacityValues(EffectGameObject* p0, EffectGameObject* p1, float p2, GJEffectManager* p3);
	GEODE_CODEGEN_DLL void checkSpawnObjects();
	GEODE_CODEGEN_DLL void collectItem(int p0, int p1);
	GEODE_CODEGEN_DLL void collectedObject(EffectGameObject* p0);
	GEODE_CODEGEN_DLL void createTextLayers();
	GEODE_CODEGEN_DLL cocos2d::CCArray* damagingObjectsInRect(cocos2d::CCRect p0);
	GEODE_CODEGEN_DLL void enableHighCapacityMode();
	GEODE_CODEGEN_DLL void getCapacityString();
	GEODE_CODEGEN_DLL void getGroundHeightForMode(int p0);
	GEODE_CODEGEN_DLL void getGroup(int p0);
	GEODE_CODEGEN_DLL void getMoveDeltaForObjects(int p0, int p1);
	GEODE_CODEGEN_DLL void getOptimizedGroup(int p0);
	GEODE_CODEGEN_DLL void getStaticGroup(int p0);
	GEODE_CODEGEN_DLL void isGroupDisabledForObject(GameObject* p0);
	GEODE_CODEGEN_DLL void isGroupDisabledForObjectFull(GameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void loadUpToPosition(float p0);
	GEODE_CODEGEN_DLL void objectIntersectsCircle(GameObject* p0, GameObject* p1);
	GEODE_CODEGEN_DLL void objectTriggered(EffectGameObject* p0);
	GEODE_CODEGEN_DLL void optimizeMoveGroups();
	GEODE_CODEGEN_DLL void parentForZLayer(int p0, bool p1, int p2);
	GEODE_CODEGEN_DLL void playerTouchedRing(PlayerObject* p0, GameObject* p1);
	GEODE_CODEGEN_DLL void processColorObject(EffectGameObject* p0, int p1, cocos2d::CCDictionary* p2, float p3, GJEffectManager* p4);
	GEODE_CODEGEN_DLL void processFollowActions();
	GEODE_CODEGEN_DLL void processMoveActions();
	GEODE_CODEGEN_DLL void processMoveActionsStep(float p0);
	GEODE_CODEGEN_DLL void processOpacityObject(EffectGameObject* p0, cocos2d::CCDictionary* p1, float p2, GJEffectManager* p3);
	GEODE_CODEGEN_DLL void processPlayerFollowActions(float p0);
	GEODE_CODEGEN_DLL void processRotationActions();
	GEODE_CODEGEN_DLL void pushButton(int p0, bool p1);
	GEODE_CODEGEN_DLL void rectIntersectsCircle(cocos2d::CCRect p0, cocos2d::CCPoint p1, float p2);
	GEODE_CODEGEN_DLL void refreshCounterLabels();
	GEODE_CODEGEN_DLL void releaseButton(int p0, bool p1);
	GEODE_CODEGEN_DLL void removeFromGroups(GameObject* p0);
	GEODE_CODEGEN_DLL void removeObjectFromSection(GameObject* p0);
	GEODE_CODEGEN_DLL void reorderObjectSection(GameObject* p0);
	GEODE_CODEGEN_DLL void resetGroupCounters(bool p0);
	GEODE_CODEGEN_DLL void resetMoveOptimizedValue();
	GEODE_CODEGEN_DLL int sectionForPos(float p0);
	GEODE_CODEGEN_DLL void setupLayers();
	GEODE_CODEGEN_DLL void shouldExitHackedLevel();
	GEODE_CODEGEN_DLL void spawnGroupTriggered(int p0, float p1, int p2);
	GEODE_CODEGEN_DLL cocos2d::CCArray* staticObjectsInRect(cocos2d::CCRect p0);
	GEODE_CODEGEN_DLL void testInstantCountTrigger(int p0, int p1, int p2, bool p3, int p4);
	GEODE_CODEGEN_DLL void toggleGroup(int p0, bool p1);
	GEODE_CODEGEN_DLL void togglePlayerVisibility(bool p0);
	GEODE_CODEGEN_DLL void triggerMoveCommand(EffectGameObject* p0);
	GEODE_CODEGEN_DLL void updateCollisionBlocks();
	GEODE_CODEGEN_DLL void updateCounters(int p0, int p1);
	GEODE_CODEGEN_DLL void updateDisabledObjectsLastPos(cocos2d::CCArray* p0);
	GEODE_CODEGEN_DLL void updateLayerCapacity(gd::string p0);
	GEODE_CODEGEN_DLL void updateLegacyLayerCapacity(int p0, int p1, int p2, int p3);
	GEODE_CODEGEN_DLL void updateOBB2(cocos2d::CCRect p0);
	GEODE_CODEGEN_DLL void updateQueuedLabels();
	GEODE_CODEGEN_DLL ~GJBaseGameLayer();
	OBB2D* m_boundingBox;
	GJEffectManager* m_effectManager;
	cocos2d::CCLayer* m_objectLayer;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddTop4;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeAddTop4;
	cocos2d::CCSpriteBatchNode* m_batchNodeTop3;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddTop3;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddGlowTop3;
	CCNodeContainer* m_batchNodeTop3Container;
	cocos2d::CCSpriteBatchNode* m_batchNodeTextTop3;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddTextTop3;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeTop3;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeAddTop3;
	cocos2d::CCSpriteBatchNode* m_batchNodeTop2;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddTop2;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddGlowTop2;
	CCNodeContainer* m_batchNodeTop2Container;
	cocos2d::CCSpriteBatchNode* m_batchNodeTextTop2;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddTextTop2;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeTop2;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeAddTop2;
	cocos2d::CCSpriteBatchNode* m_batchNode;
	cocos2d::CCSpriteBatchNode* m_batchNodeAdd;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddGlow;
	CCNodeContainer* m_batchNodeTop1Container;
	cocos2d::CCSpriteBatchNode* m_batchNodeTextTop1;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddTextTop1;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeTop1;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeAddTop1;
	cocos2d::CCSpriteBatchNode* m_batchNodePlayer;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddPlayer;
	cocos2d::CCSpriteBatchNode* m_batchNodePlayerGlow;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddMid;
	cocos2d::CCSpriteBatchNode* m_batchNodeBottom;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddBottom;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddBottomGlow;
	CCNodeContainer* m_batchNodeBot1Container;
	cocos2d::CCSpriteBatchNode* m_batchNodeText;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddText;
	cocos2d::CCSpriteBatchNode* m_effectBatchNode;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeAdd;
	cocos2d::CCSpriteBatchNode* m_batchNodeBottom2;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddBottom2;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddBottom2Glow;
	CCNodeContainer* m_batchNodeBot2Container;
	cocos2d::CCSpriteBatchNode* m_batchNodeTextBot2;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddTextBot2;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeBot2;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeAddBot2;
	cocos2d::CCSpriteBatchNode* m_batchNodeBottom3;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddBottom3;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddBottom3Glow;
	CCNodeContainer* m_batchNodeBot3Container;
	cocos2d::CCSpriteBatchNode* m_batchNodeTextBot3;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddTextBot3;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeBot3;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeAddBot3;
	cocos2d::CCSpriteBatchNode* m_batchNodeBottom4;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddBottom4;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddBottom4Glow;
	CCNodeContainer* m_batchNodeBot4Container;
	cocos2d::CCSpriteBatchNode* m_batchNodeTextBot4;
	cocos2d::CCSpriteBatchNode* m_batchNodeAddTextBot4;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeBot4;
	cocos2d::CCSpriteBatchNode* m_effectBatchNodeAddBot4;
	PlayerObject* m_player1;
	PlayerObject* m_player2;
	LevelSettingsObject* m_levelSettings;
	cocos2d::CCDictionary* m_disabledGroupsDict;
	cocos2d::CCArray* m_objects;
	cocos2d::CCArray* m_sectionObjects;
	cocos2d::CCArray* m_sections;
	cocos2d::CCArray* m_collisionBlocks;
	cocos2d::CCArray* m_spawnObjects;
	cocos2d::CCArray* m_unk248;
	cocos2d::CCNode* m_groupNodes;
	gd::vector<GameObject*> m_objectsVec;
	gd::vector<GameObject*> m_disabledObjects;
	cocos2d::CCDictionary* m_groupDict;
	cocos2d::CCDictionary* m_staticGroupDict;
	cocos2d::CCDictionary* m_optimizedGroupDict;
	gd::vector<cocos2d::CCArray*> m_groups;
	gd::vector<cocos2d::CCArray*> m_staticGroups;
	gd::vector<cocos2d::CCArray*> m_optimizedGroups;
	cocos2d::CCArray* m_batchNodes;
	cocos2d::CCArray* m_processedGroups;
	cocos2d::CCDictionary* m_counterDict;
	cocos2d::CCDictionary* m_spawnedGroups;
	bool m_didUpdateNormalCapacity;
	bool m_isDualMode;
	int m_unk2AC;
	bool m_activeDualTouch;
	int m_attemptClickCount;
	int m_currentSection;
	int m_oldSection;
	bool m_objectsAreDisabled;
	bool m_blending;
	GEODE_UNIMPLEMENTED_PAD
};

struct CCCircleWaveDelegate {
	GEODE_CODEGEN_DLL void circleWaveWillBeRemoved(CCCircleWave* wave);
};

struct PlayLayer : GJBaseGameLayer, CCCircleWaveDelegate {
	GEODE_CODEGEN_DLL static PlayLayer* get();
	GEODE_CODEGEN_DLL void addCircle(CCCircleWave* p0);
	GEODE_CODEGEN_DLL void addObject(GameObject* p0);
	GEODE_CODEGEN_DLL void addToGroupOld(GameObject* p0);
	GEODE_CODEGEN_DLL void addToSpeedObjects(GameObject* p0);
	GEODE_CODEGEN_DLL void animateInDualGround(GameObject* p0, float p1, bool p2);
	GEODE_CODEGEN_DLL void animateInGround(bool p0);
	GEODE_CODEGEN_DLL void animateOutGround(bool p0);
	GEODE_CODEGEN_DLL void animateOutGroundFinished();
	GEODE_CODEGEN_DLL void applyEnterEffect(GameObject* p0);
	GEODE_CODEGEN_DLL virtual void calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5);
	GEODE_CODEGEN_DLL void cameraMoveX(float p0, float p1, float p2);
	GEODE_CODEGEN_DLL void cameraMoveY(float p0, float p1, float p2);
	GEODE_CODEGEN_DLL void checkCollisions(PlayerObject* p0, float p1);
	GEODE_CODEGEN_DLL void circleWaveWillBeRemoved(CCCircleWave* p0);
	GEODE_CODEGEN_DLL void claimParticle(gd::string p0);
	GEODE_CODEGEN_DLL void clearPickedUpItems();
	GEODE_CODEGEN_DLL void colorObject(int p0, cocos2d::_ccColor3B p1);
	GEODE_CODEGEN_DLL void commitJumps();
	GEODE_CODEGEN_DLL static PlayLayer* create(GJGameLevel* p0);
	GEODE_CODEGEN_DLL void createCheckpoint();
	GEODE_CODEGEN_DLL void createObjectsFromSetup(gd::string p0);
	GEODE_CODEGEN_DLL void createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
	GEODE_CODEGEN_DLL void currencyWillExit(CurrencyRewardLayer* p0);
	GEODE_CODEGEN_DLL void delayedResetLevel();
	GEODE_CODEGEN_DLL void destroyPlayer(PlayerObject* p0, GameObject* p1);
	GEODE_CODEGEN_DLL void dialogClosed(DialogLayer* p0);
	GEODE_CODEGEN_DLL virtual void draw();
	GEODE_CODEGEN_DLL void enterDualMode(GameObject* p0, bool p1);
	GEODE_CODEGEN_DLL void exitAirMode();
	GEODE_CODEGEN_DLL void exitBirdMode(PlayerObject* p0);
	GEODE_CODEGEN_DLL void exitDartMode(PlayerObject* p0);
	GEODE_CODEGEN_DLL void exitFlyMode(PlayerObject* p0);
	GEODE_CODEGEN_DLL void exitRobotMode(PlayerObject* p0);
	GEODE_CODEGEN_DLL void exitRollMode(PlayerObject* p0);
	GEODE_CODEGEN_DLL void exitSpiderMode(PlayerObject* p0);
	GEODE_CODEGEN_DLL void flipFinished();
	GEODE_CODEGEN_DLL virtual void flipGravity(PlayerObject* p0, bool p1, bool p2);
	GEODE_CODEGEN_DLL void flipObjects();
	GEODE_CODEGEN_DLL void fullReset();
	GEODE_CODEGEN_DLL void getLastCheckpoint();
	GEODE_CODEGEN_DLL void getMaxPortalY();
	GEODE_CODEGEN_DLL void getMinPortalY();
	GEODE_CODEGEN_DLL void getObjectsState();
	GEODE_CODEGEN_DLL void getOtherPlayer(PlayerObject* p0);
	GEODE_CODEGEN_DLL void getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);
	GEODE_CODEGEN_DLL void getParticleKey2(gd::string p0);
	GEODE_CODEGEN_DLL void getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3);
	GEODE_CODEGEN_DLL void getTempMilliTime();
	GEODE_CODEGEN_DLL void gravityEffectFinished();
	GEODE_CODEGEN_DLL void hasItem(int p0);
	GEODE_CODEGEN_DLL void hasUniqueCoin(GameObject* p0);
	GEODE_CODEGEN_DLL void incrementJumps();
	GEODE_CODEGEN_DLL bool init(GJGameLevel* p0);
	GEODE_CODEGEN_DLL void isFlipping();
	GEODE_CODEGEN_DLL void levelComplete();
	GEODE_CODEGEN_DLL void lightningFlash(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::_ccColor3B p2, float p3, float p4, int p5, bool p6, float p7);
	GEODE_CODEGEN_DLL void lightningFlash(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1);
	GEODE_CODEGEN_DLL void loadDefaultColors();
	GEODE_CODEGEN_DLL void loadFromCheckpoint(CheckpointObject* p0);
	GEODE_CODEGEN_DLL void loadLastCheckpoint();
	GEODE_CODEGEN_DLL void loadSavedObjectsState(gd::string p0);
	GEODE_CODEGEN_DLL void markCheckpoint();
	GEODE_CODEGEN_DLL void moveCameraToPos(cocos2d::CCPoint p0);
	GEODE_CODEGEN_DLL virtual void onEnterTransitionDidFinish();
	GEODE_CODEGEN_DLL virtual void onExit();
	GEODE_CODEGEN_DLL void onQuit();
	GEODE_CODEGEN_DLL void optimizeColorGroups();
	GEODE_CODEGEN_DLL void optimizeOpacityGroups();
	GEODE_CODEGEN_DLL void optimizeSaveRequiredGroups();
	GEODE_CODEGEN_DLL void pauseGame(bool p0);
	GEODE_CODEGEN_DLL void pickupItem(GameObject* p0);
	GEODE_CODEGEN_DLL void playAnimationCommand(int p0, int p1);
	GEODE_CODEGEN_DLL void playEndAnimationToPos(cocos2d::CCPoint p0);
	GEODE_CODEGEN_DLL void playExitDualEffect(PlayerObject* p0);
	GEODE_CODEGEN_DLL void playFlashEffect(float p0, int p1, float p2);
	GEODE_CODEGEN_DLL void playGravityEffect(bool p0);
	GEODE_CODEGEN_DLL void playSpeedParticle(float p0);
	GEODE_CODEGEN_DLL void playerWillSwitchMode(PlayerObject* p0, GameObject* p1);
	GEODE_CODEGEN_DLL void prepareSpawnObjects();
	GEODE_CODEGEN_DLL void processItems();
	GEODE_CODEGEN_DLL void processLoadedMoveActions();
	GEODE_CODEGEN_DLL void recordAction(bool p0, PlayerObject* p1);
	GEODE_CODEGEN_DLL void registerActiveObject(GameObject* p0);
	GEODE_CODEGEN_DLL void registerStateObject(GameObject* p0);
	GEODE_CODEGEN_DLL void removeAllObjects();
	GEODE_CODEGEN_DLL void removeFromGroupOld(GameObject* p0);
	GEODE_CODEGEN_DLL void removeLastCheckpoint();
	GEODE_CODEGEN_DLL void removePlayer2();
	GEODE_CODEGEN_DLL void resetLevel();
	GEODE_CODEGEN_DLL void resume();
	GEODE_CODEGEN_DLL void resumeAndRestart();
	GEODE_CODEGEN_DLL void saveRecordAction(bool p0, PlayerObject* p1);
	GEODE_CODEGEN_DLL cocos2d::CCScene* scene(GJGameLevel* p0);
	GEODE_CODEGEN_DLL void setupLevelStart(LevelSettingsObject* p0);
	GEODE_CODEGEN_DLL void setupReplay(gd::string p0);
	GEODE_CODEGEN_DLL void shakeCamera(float p0, float p1, float p2);
	GEODE_CODEGEN_DLL void shouldBlend(int p0);
	GEODE_CODEGEN_DLL void showCompleteEffect();
	GEODE_CODEGEN_DLL void showCompleteText();
	GEODE_CODEGEN_DLL void showEndLayer();
	GEODE_CODEGEN_DLL void showHint();
	GEODE_CODEGEN_DLL void showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5);
	GEODE_CODEGEN_DLL void showRetryLayer();
	GEODE_CODEGEN_DLL void showTwoPlayerGuide();
	GEODE_CODEGEN_DLL void sortGroups();
	GEODE_CODEGEN_DLL void spawnCircle();
	GEODE_CODEGEN_DLL void spawnFirework();
	GEODE_CODEGEN_DLL void spawnParticle(char const* p0, int p1, cocos2d::tCCPositionType p2, cocos2d::CCPoint p3);
	GEODE_CODEGEN_DLL void spawnPlayer2();
	GEODE_CODEGEN_DLL void startGame();
	GEODE_CODEGEN_DLL void startMusic();
	GEODE_CODEGEN_DLL void startRecording();
	GEODE_CODEGEN_DLL void startRecordingDelayed();
	GEODE_CODEGEN_DLL void stopCameraShake();
	GEODE_CODEGEN_DLL void stopRecording();
	GEODE_CODEGEN_DLL void storeCheckpoint(CheckpointObject* p0);
	GEODE_CODEGEN_DLL void switchToFlyMode(PlayerObject* p0, GameObject* p1, bool p2, int p3);
	GEODE_CODEGEN_DLL void switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2);
	GEODE_CODEGEN_DLL void switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2);
	GEODE_CODEGEN_DLL void switchToSpiderMode(PlayerObject* p0, GameObject* p1, bool p2);
	GEODE_CODEGEN_DLL void timeForXPos(float p0);
	GEODE_CODEGEN_DLL void timeForXPos2(float p0, bool p1);
	GEODE_CODEGEN_DLL void toggleBGEffectVisibility(bool p0);
	GEODE_CODEGEN_DLL void toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);
	GEODE_CODEGEN_DLL void toggleFlipped(bool p0, bool p1);
	GEODE_CODEGEN_DLL void toggleGhostEffect(int p0);
	GEODE_CODEGEN_DLL void toggleGlitter(bool p0);
	GEODE_CODEGEN_DLL void togglePracticeMode(bool p0);
	GEODE_CODEGEN_DLL void toggleProgressbar();
	GEODE_CODEGEN_DLL void tryStartRecord();
	GEODE_CODEGEN_DLL void unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1);
	GEODE_CODEGEN_DLL void unregisterActiveObject(GameObject* p0);
	GEODE_CODEGEN_DLL void unregisterStateObject(GameObject* p0);
	GEODE_CODEGEN_DLL virtual void update(float p0);
	GEODE_CODEGEN_DLL void updateAttempts();
	GEODE_CODEGEN_DLL void updateCamera(float p0);
	GEODE_CODEGEN_DLL virtual void updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9);
	GEODE_CODEGEN_DLL void updateDualGround(PlayerObject* p0, int p1, bool p2);
	GEODE_CODEGEN_DLL void updateEffectPositions();
	GEODE_CODEGEN_DLL void updateLevelColors();
	GEODE_CODEGEN_DLL void updateMoveObjectsLastPosition();
	GEODE_CODEGEN_DLL void updateProgressbar();
	GEODE_CODEGEN_DLL void updateReplay(float p0);
	GEODE_CODEGEN_DLL void updateTimeMod(float p0, bool p1);
	GEODE_CODEGEN_DLL virtual void updateTweenAction(float p0, char const* p1);
	GEODE_CODEGEN_DLL void updateVisibility();
	GEODE_CODEGEN_DLL void vfDChk();
	GEODE_CODEGEN_DLL virtual void visit();
	GEODE_CODEGEN_DLL void visitWithColorFlash();
	GEODE_CODEGEN_DLL void willSwitchToMode(int p0, PlayerObject* p1);
	GEODE_CODEGEN_DLL void xPosForTime(float p0);
	GEODE_CODEGEN_DLL ~PlayLayer();
	GEODE_PAD(0x8);
	bool unk2DC;
	bool m_hasCheated;
	int unk2E0;
	int unk2E4;
	int unk2E8;
	bool unk2EC;
	bool unk2ED;
	float unk2F0;
	GEODE_PAD(0x8);
	cocos2d::CCDrawNode* unk2F8;
	float unk2FC;
	float unk300;
	float unk304;
	float unk308;
	float unk30C;
	bool unk310;
	bool unk311;
	bool unk312;
	GEODE_PAD(0x21);
	StartPosObject* m_startPos;
	CheckpointObject* unk330;
	EndPortalObject* m_endPortal;
	cocos2d::CCArray* m_checkpoints;
	cocos2d::CCArray* unk33C;
	cocos2d::CCArray* unk340;
	cocos2d::CCArray* unk344;
	cocos2d::CCSprite* unk348;
	float m_backgroundRepeat;
	bool unk350;
	cocos2d::CCArray* unk354;
	cocos2d::CCArray* unk358;
	cocos2d::CCArray* unk35C;
	cocos2d::CCArray* unk360;
	bool m_isMute;
	bool unk365;
	bool unk366;
	bool unk367;
	bool unk368;
	bool unk369;
	bool unk36A;
	bool unk36B;
	cocos2d::CCArray* m_screenRingObjects;
	cocos2d::CCParticleSystemQuad* unk370;
	cocos2d::CCDictionary* m_pickedUpItems;
	cocos2d::CCArray* m_circleWaves;
	cocos2d::CCArray* unk37C;
	AudioEffectsLayer* m_audioEffectsLayer;
	GEODE_PAD(0x16);
	GJGroundLayer* m_bottomGround;
	GJGroundLayer* m_topGround;
	GEODE_PAD(0x16);
	bool m_isDead;
	bool unk39D;
	bool unk39E;
	bool unk39F;
	bool unk3A0;
	int unk3A4;
	float unk3A8;
	bool unk3AC;
	bool unk3AD;
	bool unk3AE;
	bool unk3AF;
	GEODE_PAD(0x8);
	float m_levelLength;
	float unk3B8;
	cocos2d::CCLabelBMFont* m_attemptLabel;
	cocos2d::CCLabelBMFont* m_percentLabel;
	bool m_isCameraShaking;
	float m_currentShakeStrength;
	float m_currentShakeInterval;
	double m_lastShakeTime;
	cocos2d::CCPoint m_cameraShakeOffset;
	bool unk3E0;
	float m_backgroundScrollOffset;
	float m_cameraFlip;
	bool unk3EC;
	int unk3F0;
	cocos2d::CCDictionary* m_particleSystemsPlist;
	cocos2d::CCDictionary* unk3F8;
	cocos2d::CCArray* m_particleSystems;
	cocos2d::CCNode* unk400;
	cocos2d::CCSprite* m_sliderGrooveSprite;
	cocos2d::CCSprite* m_sliderBarSprite;
	float m_sliderWidth;
	float unk410;
	GEODE_PAD(0x8);
	int unk418;
	GEODE_PAD(0x16);
	cocos2d::CCArray* m_gravitySprites;
	bool unk428;
	bool m_shouldRecordActions;
	bool unk42A;
	bool m_isPaused;
	bool unk42C;
	bool m_isPlayer2Frozen;
	gd::string m_previousRecords;
	GEODE_PAD(0x8);
	double m_time;
	GEODE_PAD(0x8);
	bool unk460;
	bool unk461;
	cocos2d::CCDictionary* unk464;
	gd::map<short, bool> unk468;
	bool m_isPlaybackMode;
	GameObject* unk474;
	GEODE_PAD(0x8);
	bool m_isFlipped;
	float m_mirrorTransition;
	UILayer* m_UILayer;
	GJGameLevel* m_level;
	cocos2d::CCPoint m_cameraPos;
	bool m_isTestMode;
	bool m_isPracticeMode;
	bool unk496;
	bool unk497;
	cocos2d::CCArray* unk498;
	bool unk49C;
	cocos2d::CCPoint unk4A0;
	int m_currentAttempt;
	int m_jumpCount;
	bool unk4B0;
	float m_totalTime;
	int m_attemptJumpCount;
	bool unk4BC;
	bool m_hasLevelCompleteMenu;
	bool m_hasCompletedLevel;
	bool unk4BF;
	int m_lastDeathPercent;
	bool unk4C4;
	GEODE_UNIMPLEMENTED_PAD
	bool unk4D0;
	bool unk4D1;
	cocos2d::CCArray* unk4D4;
	cocos2d::CCDictionary* unk4D8;
	GEODE_UNIMPLEMENTED_PAD
	double unk4E0;
	double unk4E8;
	GEODE_UNIMPLEMENTED_PAD
	float unk4FC;
	int unk500;
	GEODE_UNIMPLEMENTED_PAD
	double unk508;
	GEODE_UNIMPLEMENTED_PAD
	double unk518;
	double unk520;
	GEODE_UNIMPLEMENTED_PAD
	bool m_hasGlitter;
	bool m_isBgEffectOff;
	bool unk52F;
	GameObject* unk530;
	bool unk534;
	bool unk535;
	bool m_disableGravityEffect;
};

struct PlatformToolbox {
	GEODE_CODEGEN_DLL static void hideCursor();
	GEODE_CODEGEN_DLL static void showCursor();
	GEODE_CODEGEN_DLL static bool isControllerConnected();
};

struct PlatformDownloadDelegate {
};

struct GJDropDownLayer : cocos2d::CCLayerColor {
	 GJDropDownLayer() {
		m_endPosition = cocos2d::CCPointMake(0.f, 0.f);
		m_startPosition = cocos2d::CCPointMake(0.f, 0.f);
		m_buttonMenu = nullptr;
		m_listLayer = nullptr;
		m_controllerEnabled = false;
		m_mainLayer = nullptr;
		m_hidden = false;
		m_unknown = nullptr;
	}
	GEODE_CODEGEN_DLL virtual void customSetup();
	GEODE_CODEGEN_DLL virtual void enterLayer();
	GEODE_CODEGEN_DLL virtual void exitLayer(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL virtual void showLayer(bool p0);
	GEODE_CODEGEN_DLL virtual void hideLayer(bool p0);
	GEODE_CODEGEN_DLL virtual void layerVisible();
	GEODE_CODEGEN_DLL virtual void layerHidden();
	GEODE_CODEGEN_DLL virtual void enterAnimFinished();
	GEODE_CODEGEN_DLL virtual void disableUI();
	GEODE_CODEGEN_DLL virtual void enableUI();
	GEODE_CODEGEN_DLL static GJDropDownLayer* create(const char* title, float height);
	GEODE_CODEGEN_DLL virtual bool ccTouchBegan(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);
	GEODE_CODEGEN_DLL virtual void ccTouchMoved(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);
	GEODE_CODEGEN_DLL virtual void ccTouchEnded(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);
	GEODE_CODEGEN_DLL virtual void ccTouchCancelled(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);
	GEODE_CODEGEN_DLL virtual void draw();
	GEODE_CODEGEN_DLL bool init(const char* title, float height);
	GEODE_CODEGEN_DLL virtual void registerWithTouchDispatcher();
	GEODE_CODEGEN_DLL virtual void keyBackClicked();
	cocos2d::CCPoint m_endPosition;
	cocos2d::CCPoint m_startPosition;
	cocos2d::CCMenu* m_buttonMenu;
	GJListLayer* m_listLayer;
	bool m_controllerEnabled;
	cocos2d::CCLayer* m_mainLayer;
	bool m_hidden;
	void* m_unknown;
};

struct FLAlertLayerProtocol {
	GEODE_CODEGEN_DLL virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
};

struct OptionsLayer : GJDropDownLayer, FLAlertLayerProtocol {
	GEODE_CODEGEN_DLL static OptionsLayer* addToCurrentScene(bool noTransition);
	GEODE_CODEGEN_DLL static OptionsLayer* create();
};

struct OpacityEffectAction : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static OpacityEffectAction* create(float p0, float p1, float p2, int p3);
	GEODE_CODEGEN_DLL static OpacityEffectAction* createFromString(gd::string p0);
	GEODE_CODEGEN_DLL bool init(float p0, float p1, float p2, int p3);
	GEODE_CODEGEN_DLL void step(float p0);
	float m_time;
	float m_beginOpacity;
	float m_endOpacity;
	bool m_finished;
	float m_elapsed;
	int m_group;
	float m_opacity;
	int m_uuid;
	float m_delta;
};

struct ObjectToolbox : cocos2d::CCNode {
	GEODE_CODEGEN_DLL cocos2d::CCArray* allKeys();
	GEODE_CODEGEN_DLL const char* frameToKey(const char* frame);
	GEODE_CODEGEN_DLL const char* intKeyToFrame(int key);
	GEODE_CODEGEN_DLL const char* keyToFrame(const char* key);
	GEODE_CODEGEN_DLL void addObject(int id, const char* frame);
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL static ObjectToolbox* sharedState();

    template <bool T=false>
     float gridNodeSizeForKey(int key) {
        static_assert(T, "Implement ObjectToolbox::gridNodeSizeForKey");
    }

    template <bool T=false>
     const char* perspectiveBlockFrame(int key) {
        static_assert(T, "Implement ObjectToolbox::perspectiveBlockFrame");
    }
	cocos2d::CCDictionary* m_frameToKeyDict;
	cocos2d::CCDictionary* m_keyToFrameDict;
};

struct OBB2D : cocos2d::CCNode {
	GEODE_CODEGEN_DLL void calculateWithCenter(cocos2d::CCPoint p0, float p1, float p2, float p3);
	GEODE_CODEGEN_DLL static OBB2D* create(cocos2d::CCPoint p0, float p1, float p2, float p3);
	GEODE_CODEGEN_DLL cocos2d::CCRect getBoundingRect();
	GEODE_CODEGEN_DLL void overlaps(OBB2D* p0);
	GEODE_CODEGEN_DLL void overlaps1Way(OBB2D* p0);
	cocos2d::CCPoint m_p1_1;
	cocos2d::CCPoint m_p1_2;
	cocos2d::CCPoint m_p1_3;
	cocos2d::CCPoint m_p1_4;
	cocos2d::CCPoint m_p2_1;
	cocos2d::CCPoint m_p2_2;
	cocos2d::CCPoint m_p2_3;
	cocos2d::CCPoint m_p2_4;
	cocos2d::CCPoint m_p3_1;
	cocos2d::CCPoint m_p3_2;
	cocos2d::CCPoint m_p3_3;
	cocos2d::CCPoint m_p3_4;
	double m_rot1;
	double m_rot2;
	cocos2d::CCPoint m_center;
};

struct NumberInputDelegate {
};

struct MusicDownloadManager : cocos2d::CCNode, PlatformDownloadDelegate {
	GEODE_CODEGEN_DLL void incrementPriorityForSong(int p0);
	GEODE_CODEGEN_DLL static MusicDownloadManager* sharedState();

    template <bool T=false>
     gd::string pathForSong(int id) {
        static_assert(T, "Implement MusicDownloadManager::pathForSong");
    }

    template <bool T=false>
     cocos2d::CCArray* getDownloadedSongs() {
        static_assert(T, "Implement MusicDownloadManager::getDownloadedSongs");
    }

    template <bool T=false>
     void songStateChanged() {
        static_assert(T, "Implement MusicDownloadManager::songStateChanged");
    }
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCDictionary* m_unknownDict;
	cocos2d::CCArray* m_handlers;
	cocos2d::CCDictionary* m_songsDict;
};

struct MusicDownloadDelegate {
};

struct MultilineBitmapFont : cocos2d::CCSprite {
};

struct MoreVideoOptionsLayer : FLAlertLayer {
	GEODE_CODEGEN_DLL static MoreVideoOptionsLayer* create();
	GEODE_CODEGEN_DLL virtual bool init();
};

struct MenuLayer : cocos2d::CCLayer, FLAlertLayerProtocol {
	GEODE_CODEGEN_DLL ~MenuLayer();
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL virtual void keyBackClicked();
	GEODE_CODEGEN_DLL virtual void keyDown(cocos2d::enumKeyCodes p0);
	GEODE_CODEGEN_DLL virtual void googlePlaySignedIn();
	GEODE_CODEGEN_DLL virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
	GEODE_CODEGEN_DLL void onMoreGames(cocos2d::CCObject* p0);

    template <bool T=false>
     void onGarage(cocos2d::CCObject* p0) {
        static_assert(T, "Implement MenuLayer::onGarage");
    }
	GEODE_CODEGEN_DLL void onQuit(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL static cocos2d::CCScene* scene(bool p0);

    template <bool T=false>
     MenuLayer* node() {
        static_assert(T, "Implement MenuLayer::node");
    }
};

struct CCIndexPath : cocos2d::CCObject {

    template <bool T=false>
     static CCIndexPath* create(unsigned int idk1, int idk2) {
        static_assert(T, "Implement CCIndexPath::create");
    }
	int m_unknown1;
	int m_unknown2;
};

struct TableViewCell : cocos2d::CCLayer {
	 TableViewCell() {}
	 ~TableViewCell() {
		removeAllChildrenWithCleanup(true);
	}
	 TableViewCell(const char* p0, float p1, float p2) : m_unknownString(p0), m_width(p1), m_height(p2) {
		m_backgroundLayer = cocos2d::CCLayerColor::create(cocos2d::ccc4(0,0,0,0), m_width, m_height);
		addChild(m_backgroundLayer, -1);
		m_mainLayer = cocos2d::CCLayer::create();
		addChild(m_mainLayer);
		// = mac 0x383de0, win 0x32e70, ios 0x0;
	}
	bool m_unknown;
	TableView* m_tableView;
	CCIndexPath m_indexPath;
	int m_unknownThing;
	gd::string m_unknownString;
	float m_width;
	float m_height;
	cocos2d::CCLayerColor* m_backgroundLayer;
	cocos2d::CCLayer* m_mainLayer;
};

struct MenuGameLayer {
	GEODE_CODEGEN_DLL void resetPlayer();
	GEODE_CODEGEN_DLL void update(float p0);
};

struct LoadingCircle : cocos2d::CCLayerColor {
	GEODE_CODEGEN_DLL void setParentLayer(cocos2d::CCLayer* layer);
	GEODE_CODEGEN_DLL void setFade(bool fade);

    template <bool T=false>
     static LoadingCircle* create() {
        static_assert(T, "Implement LoadingCircle::create");
    }

    template <bool T=false>
     void show() {
        static_assert(T, "Implement LoadingCircle::show");
    }

    template <bool T=false>
     void fadeAndRemove() {
        static_assert(T, "Implement LoadingCircle::fadeAndRemove");
    }
	cocos2d::CCSprite* m_sprite;
	cocos2d::CCLayer* m_parentLayer;
	bool m_fade;
};

struct ListButtonBar : cocos2d::CCNode {
	BoomScrollLayer* m_scrollLayer;
};

struct LevelSettingsDelegate {
};

struct LevelSearchLayer {

    template <bool T=false>
     static LevelSearchLayer* create() {
        static_assert(T, "Implement LevelSearchLayer::create");
    }
};

struct LeaderboardsLayer {

    template <bool T=false>
     static LeaderboardsLayer* create(LeaderboardState state) {
        static_assert(T, "Implement LeaderboardsLayer::create");
    }
};

struct GManager : cocos2d::CCNode {
	GEODE_CODEGEN_DLL virtual void setup();
	GEODE_CODEGEN_DLL void encodeDataTo(DS_Dictionary* data);
	GEODE_CODEGEN_DLL void dataLoaded(DS_Dictionary* data);
	GEODE_CODEGEN_DLL void firstLoad();
	GEODE_CODEGEN_DLL void save();
	GEODE_CODEGEN_DLL void saveData(DS_Dictionary* p0, gd::string p1);
	GEODE_CODEGEN_DLL void saveGMTo(gd::string p0);
	gd::string m_fileName;
	bool m_setup;
	bool m_saved;
	bool m_quickSave;
};

struct GameManager : GManager {
	GEODE_CODEGEN_DLL int getPlayerFrame();
	GEODE_CODEGEN_DLL int getPlayerShip();
	GEODE_CODEGEN_DLL int getPlayerBall();
	GEODE_CODEGEN_DLL int getPlayerBird();
	GEODE_CODEGEN_DLL int getPlayerDart();
	GEODE_CODEGEN_DLL int getPlayerRobot();
	GEODE_CODEGEN_DLL int getPlayerSpider();
	GEODE_CODEGEN_DLL int getPlayerStreak();
	GEODE_CODEGEN_DLL int getPlayerDeathEffect();
	GEODE_CODEGEN_DLL int getPlayerColor();
	GEODE_CODEGEN_DLL int getPlayerColor2();
	GEODE_CODEGEN_DLL bool getPlayerGlow();
	GEODE_CODEGEN_DLL IconType getPlayerIconType();
	GEODE_CODEGEN_DLL void setPlayerFrame(int id);
	GEODE_CODEGEN_DLL void setPlayerShip(int id);
	GEODE_CODEGEN_DLL void setPlayerBall(int id);
	GEODE_CODEGEN_DLL void setPlayerBird(int id);
	GEODE_CODEGEN_DLL void setPlayerDart(int id);
	GEODE_CODEGEN_DLL void setPlayerRobot(int id);
	GEODE_CODEGEN_DLL void setPlayerSpider(int id);
	GEODE_CODEGEN_DLL void setPlayerStreak(int id);
	GEODE_CODEGEN_DLL void setPlayerDeathEffect(int id);
	GEODE_CODEGEN_DLL void setPlayerColor(int id);
	GEODE_CODEGEN_DLL void setPlayerColor2(int id);
	GEODE_CODEGEN_DLL void setPlayerGlow(bool v);
	GEODE_CODEGEN_DLL void setPlayerIconType(IconType v);
	GEODE_CODEGEN_DLL void setQuality(cocos2d::TextureQuality quality);
	GEODE_CODEGEN_DLL PlayLayer* getPlayLayer();
	GEODE_CODEGEN_DLL LevelEditorLayer* getEditorLayer();
	GEODE_CODEGEN_DLL bool getGameVariableDefault(const char* key, bool defaultValue);
	GEODE_CODEGEN_DLL int getIntGameVariableDefault(const char* key, int defaultValue);
	GEODE_CODEGEN_DLL void accountStatusChanged();
	GEODE_CODEGEN_DLL const cocos2d::_ccColor3B& colorForIdx(int p0);
	GEODE_CODEGEN_DLL void didExitPlayscene();
	GEODE_CODEGEN_DLL void doQuickSave();
	GEODE_CODEGEN_DLL void fadeInMusic(const char* p0);
	GEODE_CODEGEN_DLL void getBGTexture(int p0);
	GEODE_CODEGEN_DLL void getFontFile(int p0);
	GEODE_CODEGEN_DLL bool getGameVariable(const char* p0);
	GEODE_CODEGEN_DLL int getIntGameVariable(const char* p0);
	GEODE_CODEGEN_DLL bool getUGV(const char* p0);
	GEODE_CODEGEN_DLL void loadDeathEffect(int p0);
	GEODE_CODEGEN_DLL void loadFont(int p0);
	GEODE_CODEGEN_DLL void reloadAll(bool p0, bool p1, bool p2);
	GEODE_CODEGEN_DLL void reloadAllStep2();
	GEODE_CODEGEN_DLL void reloadAllStep5();
	GEODE_CODEGEN_DLL void reportPercentageForLevel(int p0, int p1, bool p2);
	GEODE_CODEGEN_DLL void setGameVariable(const char* p0, bool p1);
	GEODE_CODEGEN_DLL void setIntGameVariable(const char* p0, int p1);
	GEODE_CODEGEN_DLL void setUGV(char const* p0, bool p1);
	GEODE_CODEGEN_DLL static GameManager* sharedState();
	GEODE_CODEGEN_DLL ~GameManager();
	GEODE_CODEGEN_DLL void getGTexture(int p0);
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL void reportAchievementWithID(char const* p0, int p1, bool p2);
	GEODE_CODEGEN_DLL void resolutionForKey(int p0);
	GEODE_CODEGEN_DLL void update(float p0);

    template <bool T=false>
     bool isColorUnlocked(int _id, bool _type) {
        static_assert(T, "Implement GameManager::isColorUnlocked");
    }

    template <bool T=false>
     bool isIconUnlocked(int _id, IconType _type) {
        static_assert(T, "Implement GameManager::isIconUnlocked");
    }

    template <bool T=false>
     void toggleGameVariable(const char* key) {
        static_assert(T, "Implement GameManager::toggleGameVariable");
    }

    template <bool T=false>
     static void returnToLastScene(GJGameLevel* level) {
        static_assert(T, "Implement GameManager::returnToLastScene");
    }
	bool m_switchModes;
	bool m_toFullscreen;
	bool m_reloading;
	bool m_unknown0;
	GEODE_PAD(0x8);
	cocos2d::CCDictionary* m_valueKeeper;
	cocos2d::CCDictionary* m_unlockValueKeeper;
	cocos2d::CCDictionary* m_customObjectDict;
	GEODE_PAD(0x8);
	double m_unknownDouble;
	GEODE_PAD(0x10);
	double m_unknown2Double;
	GEODE_PAD(0x8);
	bool m_loaded;
	gd::string m_unknownString;
	PlayLayer* m_playLayer;
	LevelEditorLayer* m_levelEditorLayer;
	GEODE_UNIMPLEMENTED_PAD
	gd::string m_playerUDID;
	gd::string m_playerName;
	bool m_commentsEnabled;
	int m_playerUserIDRand1;
	int m_playerUserIDRand2;
	int m_playerUserID;
	float m_backgroundMusicVolume;
	float m_effectsVolume;
	int m_timeOffset;
	GEODE_UNIMPLEMENTED_PAD
	int m_playerFrameRand1;
	int m_playerFrameRand2;
	int m_playerFrame;
	int m_playerShipRand1;
	int m_playerShipRand2;
	int m_playerShip;
	int m_playerBallRand1;
	int m_playerBallRand2;
	int m_playerBall;
	int m_playerBirdRand1;
	int m_playerBirdRand2;
	int m_playerBird;
	int m_playerDartRand1;
	int m_playerDartRand2;
	int m_playerDart;
	int m_playerRobotRand1;
	int m_playerRobotRand2;
	int m_playerRobot;
	int m_playerSpiderRand1;
	int m_playerSpiderRand2;
	int m_playerSpider;
	int m_playerColorRand1;
	int m_playerColorRand2;
	int m_playerColor;
	int m_playerColor2Rand1;
	int m_playerColor2Rand2;
	int m_playerColor2;
	int m_playerStreakRand1;
	int m_playerStreakRand2;
	int m_playerStreak;
	int m_playerDeathEffectRand1;
	int m_playerDeathEffectRand2;
	int m_playerDeathEffect;
	GEODE_UNIMPLEMENTED_PAD
	int m_secretNumberRand1;
	int m_secretNumberRand2;
	bool m_playerGlow;
	IconType m_playerIconType;
	bool m_unknown29;
	bool m_showSongMarkers;
	bool m_showBPMMarkers;
	bool m_recordGameplay;
	bool m_showProgressBar;
	bool m_performanceMode;
	bool m_clickedGarage;
	bool m_clickedEditor;
	bool m_clickedName;
	bool m_clickedPractice;
	bool m_showedEditorGuide;
	bool m_showedRateDiffDialog;
	bool m_showedRateStarDialog;
	bool m_showedLowDetailDialog;
	GEODE_UNIMPLEMENTED_PAD
	int m_bootups;
	bool m_hasRatedGame;
	bool m_unk0;
	bool m_unk1;
	bool m_unk2;
	bool m_gameCenterEnabled;
	bool m_smoothFix;
	GEODE_UNIMPLEMENTED_PAD
	int m_resolution;
	cocos2d::TextureQuality m_quality;
};

struct KeybindingsLayer : FLAlertLayer {

    template <bool T=false>
     void onClose(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement KeybindingsLayer::onClose");
    }

    template <bool T=false>
     void onPrevPage(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement KeybindingsLayer::onPrevPage");
    }

    template <bool T=false>
     void onNextPage(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement KeybindingsLayer::onNextPage");
    }

    template <bool T=false>
     void goToPage(int page) {
        static_assert(T, "Implement KeybindingsLayer::goToPage");
    }
	int m_currentPage;
	int m_itemCount;
	int m_pageCount;
	cocos2d::CCDictionary* m_pages;
	cocos2d::CCDictionary* m_unused;
	cocos2d::CCNode* m_leftArrow;
	cocos2d::CCNode* m_rightArrow;
};

struct LevelUpdateDelegate {
};

struct LevelCommentDelegate {
};

struct CommentUploadDelegate {
};

struct InfoLayer : FLAlertLayer, LevelCommentDelegate, CommentUploadDelegate, FLAlertLayerProtocol {

    template <bool T=false>
     bool init(GJGameLevel* level, GJUserScore* score) {
        static_assert(T, "Implement InfoLayer::init");
    }

    template <bool T=false>
     void setupCommentsBrowser(cocos2d::CCArray* comments) {
        static_assert(T, "Implement InfoLayer::setupCommentsBrowser");
    }
	GEODE_UNIMPLEMENTED_PAD
	GJCommentListLayer* m_list;
};

struct GJAccountDelegate {
	GEODE_CODEGEN_DLL virtual bool accountStatusChanged();
};

struct GJAccountBackupDelegate {
	GEODE_CODEGEN_DLL virtual bool backupAccountFailed(BackupAccountError p0);
	GEODE_CODEGEN_DLL virtual bool backupAccountFinished();
};

struct GJAccountSyncDelegate {
	GEODE_CODEGEN_DLL virtual bool syncAccountFailed(BackupAccountError p0);
	GEODE_CODEGEN_DLL virtual bool syncAccountFinished();
};

struct AccountLayer : GJDropDownLayer, GJAccountDelegate, GJAccountBackupDelegate, GJAccountSyncDelegate, FLAlertLayerProtocol {

    template <bool T=false>
     void create() {
        static_assert(T, "Implement AccountLayer::create");
    }

    template <bool T=false>
     void createToggleButton(std::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4) {
        static_assert(T, "Implement AccountLayer::createToggleButton");
    }

    template <bool T=false>
     void doBackup() {
        static_assert(T, "Implement AccountLayer::doBackup");
    }

    template <bool T=false>
     void doSync() {
        static_assert(T, "Implement AccountLayer::doSync");
    }

    template <bool T=false>
     void exitLayer() {
        static_assert(T, "Implement AccountLayer::exitLayer");
    }

    template <bool T=false>
     void hideLoadingUI() {
        static_assert(T, "Implement AccountLayer::hideLoadingUI");
    }

    template <bool T=false>
     void onBackup(cocos2d::CCObject* p0) {
        static_assert(T, "Implement AccountLayer::onBackup");
    }

    template <bool T=false>
     void onHelp(cocos2d::CCObject* p0) {
        static_assert(T, "Implement AccountLayer::onHelp");
    }

    template <bool T=false>
     void onLogin(cocos2d::CCObject* p0) {
        static_assert(T, "Implement AccountLayer::onLogin");
    }

    template <bool T=false>
     void onMore(cocos2d::CCObject* p0) {
        static_assert(T, "Implement AccountLayer::onMore");
    }

    template <bool T=false>
     void onRegister(cocos2d::CCObject* p0) {
        static_assert(T, "Implement AccountLayer::onRegister");
    }

    template <bool T=false>
     void onSync(cocos2d::CCObject* p0) {
        static_assert(T, "Implement AccountLayer::onSync");
    }

    template <bool T=false>
     void showLoadingUI() {
        static_assert(T, "Implement AccountLayer::showLoadingUI");
    }

    template <bool T=false>
     void toggleUI(bool p0) {
        static_assert(T, "Implement AccountLayer::toggleUI");
    }

    template <bool T=false>
     void updatePage(bool p0) {
        static_assert(T, "Implement AccountLayer::updatePage");
    }

    template <bool T=false>
     void FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
        static_assert(T, "Implement AccountLayer::FLAlert_Clicked");
    }

    template <bool T=false>
     bool accountStatusChanged() {
        static_assert(T, "Implement AccountLayer::accountStatusChanged");
    }

    template <bool T=false>
     bool backupAccountFailed(BackupAccountError p0) {
        static_assert(T, "Implement AccountLayer::backupAccountFailed");
    }

    template <bool T=false>
     bool backupAccountFinished() {
        static_assert(T, "Implement AccountLayer::backupAccountFinished");
    }

    template <bool T=false>
     void customSetup() {
        static_assert(T, "Implement AccountLayer::customSetup");
    }

    template <bool T=false>
     void layerHidden() {
        static_assert(T, "Implement AccountLayer::layerHidden");
    }

    template <bool T=false>
     bool syncAccountFailed(BackupAccountError p0) {
        static_assert(T, "Implement AccountLayer::syncAccountFailed");
    }

    template <bool T=false>
     bool syncAccountFinished() {
        static_assert(T, "Implement AccountLayer::syncAccountFinished");
    }
};

struct ListButtonBarDelegate {
};

struct GaragePage : cocos2d::CCLayer, ListButtonBarDelegate {
	GEODE_CODEGEN_DLL static GaragePage* create(IconType type, GJGarageLayer* pGarage, cocos2d::SEL_MenuHandler pSelectCallback);

    template <bool T=false>
     void listButtonBarSwitchedPage(ListButtonBar* bar, int idk) {
        static_assert(T, "Implement GaragePage::listButtonBarSwitchedPage");
    }
	GEODE_CODEGEN_DLL bool init(IconType type, GJGarageLayer* pGarage, cocos2d::SEL_MenuHandler pSelectCallback);
	GJGarageLayer* m_garage;
	cocos2d::SEL_MenuHandler m_handler;
	cocos2d::CCSprite* m_selectSprite;
	CCMenuItemSpriteExtra* m_unkNode0x12c;
	IconType m_type;
	int m_unknown;
	GEODE_UNIMPLEMENTED_PAD
};

struct UserInfoDelegate {
};

struct UploadActionDelegate {
};

struct UploadPopupDelegate {
};

struct LeaderboardManagerDelegate {
};

struct ProfilePage : FLAlertLayer, FLAlertLayerProtocol, LevelCommentDelegate, CommentUploadDelegate, UserInfoDelegate, UploadActionDelegate, UploadPopupDelegate, LeaderboardManagerDelegate {

    template <bool T=false>
     static ProfilePage* create(int accountID, bool idk) {
        static_assert(T, "Implement ProfilePage::create");
    }
	GEODE_UNIMPLEMENTED_PAD
	int m_accountID;
};

struct GameSoundManager : cocos2d::CCNode {
	GEODE_CODEGEN_DLL void disableMetering();
	GEODE_CODEGEN_DLL void enableMetering();
	GEODE_CODEGEN_DLL void getMeteringValue();
	GEODE_CODEGEN_DLL void playBackgroundMusic(gd::string p0, bool p1, bool p2);
	GEODE_CODEGEN_DLL void playEffect(gd::string p0, float p1, float p2, float p3);
	GEODE_CODEGEN_DLL void sharedManager();
	GEODE_CODEGEN_DLL void stopBackgroundMusic();
	GEODE_CODEGEN_DLL ~GameSoundManager();

    template <bool T=false>
     static GameSoundManager* sharedState() {
        static_assert(T, "Implement GameSoundManager::sharedState");
    }
	cocos2d::CCDictionary* m_dictionary1;
	cocos2d::CCDictionary* m_dictionary2;
	GEODE_UNIMPLEMENTED_PAD
	bool m_preloaded;
	GEODE_UNIMPLEMENTED_PAD
	gd::string m_filePath;
};

struct GameRateDelegate {
};

struct GameObjectCopy : cocos2d::CCObject {
	GEODE_CODEGEN_DLL ~GameObjectCopy();
	GEODE_CODEGEN_DLL static GameObjectCopy* create(GameObject* p0);
	GEODE_CODEGEN_DLL void resetObject();
};

struct GJDropDownLayerDelegate {
};

struct CustomSongLayer : FLAlertLayer, FLAlertLayerProtocol, TextInputDelegate, GJDropDownLayerDelegate {
	GEODE_CODEGEN_DLL bool init(LevelSettingsObject* p0);
	GEODE_CODEGEN_DLL void onArtists(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void onSongBrowser(cocos2d::CCObject* p0);
	LevelSettingsObject* m_levelSettings;
	CCTextInputNode* m_songIDInput;
	CustomSongWidget* m_songWidget;
	LevelSettingsLayer* m_levelSettingsLayer;
};

struct GameLevelManager : cocos2d::CCNode {
	GEODE_CODEGEN_DLL GJGameLevel* createNewLevel();
	GEODE_CODEGEN_DLL static GameLevelManager* sharedState();
	GEODE_CODEGEN_DLL void getPageInfo(char const* p0);
	GEODE_CODEGEN_DLL cocos2d::CCArray* getStoredOnlineLevels(char const* p0);
	GEODE_CODEGEN_DLL void getTopArtists(int p0, int p1);
	GEODE_CODEGEN_DLL void getTopArtistsKey(int p0);
	GEODE_CODEGEN_DLL void makeTimeStamp(char const* p0);

    template <bool T=false>
     GJGameLevel* getMainLevel(int id, bool unk) {
        static_assert(T, "Implement GameLevelManager::getMainLevel");
    }
	CLASSPARAM(cocos2d::CCDictionary*, timerDict, 0x1e8);
	cocos2d::CCDictionary* m_mainLevels;
	cocos2d::CCDictionary* m_searchFilters;
	cocos2d::CCDictionary* m_onlineLevels;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCDictionary* m_followedCreators;
	cocos2d::CCDictionary* m_downloadedLevels;
	cocos2d::CCDictionary* m_likedLevels;
	cocos2d::CCDictionary* m_ratedLevels;
	cocos2d::CCDictionary* m_reportedLevels;
	cocos2d::CCDictionary* m_onlineFolders;
	cocos2d::CCDictionary* m_localLevelsFolders;
	cocos2d::CCDictionary* m_dailyLevels;
	int m_dailyTimeLeft;
	int m_dailyID;
	int m_dailyIDUnk;
	GEODE_UNIMPLEMENTED_PAD
	int m_weeklyTimeLeft;
	int m_weeklyID;
	int m_weeklyIDUnk;
	cocos2d::CCDictionary* m_gauntletLevels;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCDictionary* m_unkDict14;
	cocos2d::CCDictionary* m_knownUsers;
	cocos2d::CCDictionary* m_accountIDtoUserIDDict;
	cocos2d::CCDictionary* m_userIDtoAccountIDDict;
	cocos2d::CCDictionary* m_unkDict18;
	cocos2d::CCDictionary* m_unkDict19;
	cocos2d::CCDictionary* m_unkDict20;
	cocos2d::CCDictionary* m_unkDict21;
	cocos2d::CCDictionary* m_unkDict22;
	cocos2d::CCDictionary* m_unkDict23;
	cocos2d::CCDictionary* m_unkDict24;
	cocos2d::CCDictionary* m_unkDict25;
	cocos2d::CCDictionary* m_unkDict26;
	cocos2d::CCDictionary* m_unkDict27;
	cocos2d::CCDictionary* m_unkDict28;
	gd::string m_unkStr1;
	gd::string m_unkStr2;
	GEODE_UNIMPLEMENTED_PAD
	gd::string m_unkStr3;
	cocos2d::CCString* m_unkStr4;
};

struct SetIDPopupDelegate {
};

struct GJUserScore : cocos2d::CCNode {
	GEODE_CODEGEN_DLL IconType getIconType() const;
	GEODE_CODEGEN_DLL int getPlayerCube() const;
	GEODE_CODEGEN_DLL int getPlayerShip() const;
	GEODE_CODEGEN_DLL int getPlayerBall() const;
	GEODE_CODEGEN_DLL int getPlayerUfo() const;
	GEODE_CODEGEN_DLL int getPlayerWave() const;
	GEODE_CODEGEN_DLL int getPlayerRobot() const;
	GEODE_CODEGEN_DLL int getPlayerSpider() const;
	GEODE_CODEGEN_DLL int getPlayerStreak() const;
	GEODE_CODEGEN_DLL bool getGlowEnabled() const;
	GEODE_CODEGEN_DLL int getPlayerExplosion() const;
	GEODE_CODEGEN_DLL int getPlayerColor1() const;
	GEODE_CODEGEN_DLL int getPlayerColor2() const;
	GEODE_CODEGEN_DLL gd::string getPlayerName() const;
	gd::string m_userName;
	gd::string m_userUDID;
	int m_scoreType;
	int m_userID;
	int m_accountID;
	int m_stars;
	int m_diamonds;
	int m_demons;
	int m_playerRank;
	int m_creatorPoints;
	int m_secretCoins;
	int m_userCoins;
	int m_iconID;
	int m_color1;
	int m_color2;
	int m_special;
	IconType m_iconType;
	int m_messageState;
	int m_friendStatus;
	int m_commentHistoryStatus;
	gd::string m_youtubeURL;
	gd::string m_twitterURL;
	gd::string m_twitchURL;
	int m_playerCube;
	int m_playerShip;
	int m_playerBall;
	int m_playerUfo;
	int m_playerWave;
	int m_playerRobot;
	int m_playerSpider;
	int m_playerStreak;
	bool m_glowEnabled;
	int m_playerExplosion;
	int m_modBadge;
	int m_globalRank;
	int m_friendReqStatus;
	int m_newMsgCount;
	int m_friendReqCount;
	bool m_isBlocked;
	gd::string m_lastScoreAge;
};

struct GJSpriteColor : cocos2d::CCNode {
	int m_colorID;
	int m_defaultColorID;
	float m_unk_0F4;
	cocos2d::ccHSVValue m_hsv;
	bool unk_108;
	float unk_10C;
	bool unk_110;
};

struct GJScaleControlDelegate {
};

struct CCMenuItemToggler : cocos2d::CCMenuItem {
	 CCMenuItemToggler() : CCMenuItem(), m_onButton(nullptr), m_offButton(nullptr), m_toggled(false), m_notClickable(false) {}
	GEODE_CODEGEN_DLL static CCMenuItemToggler* createWithSize(const char* spr1, const char* spr2, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);
	GEODE_CODEGEN_DLL static CCMenuItemToggler* createWithStandardSprites(cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);
	GEODE_CODEGEN_DLL bool isOn();
	GEODE_CODEGEN_DLL bool isToggled();
	GEODE_CODEGEN_DLL void setClickable(bool on);
	GEODE_CODEGEN_DLL void toggleWithCallback(bool on);
	GEODE_CODEGEN_DLL static CCMenuItemToggler* create(cocos2d::CCNode* offSpr, cocos2d::CCNode* onSpr, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);
	GEODE_CODEGEN_DLL void setSizeMult(float p0);
	GEODE_CODEGEN_DLL void toggle(bool p0);
	GEODE_CODEGEN_DLL bool init(cocos2d::CCNode* off, cocos2d::CCNode* on, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler handler);
	GEODE_CODEGEN_DLL void activate();
	GEODE_CODEGEN_DLL void selected();
	GEODE_CODEGEN_DLL void unselected();
	GEODE_CODEGEN_DLL void setEnabled(bool enabled);
	CCMenuItemSpriteExtra* m_offButton;
	CCMenuItemSpriteExtra* m_onButton;
	bool m_toggled;
	bool m_notClickable;
};

struct GJRewardObject : cocos2d::CCObject {
	SpecialRewardItem m_specialRewardItem;
	UnlockType m_unlockType;
	int m_itemID;
	int m_total;
};

struct GJMapPack : cocos2d::CCNode {
	cocos2d::CCArray* m_levels;
	int m_packID;
	GJDifficulty m_difficulty;
	int m_stars;
	int m_coins;
	gd::string m_packName;
	gd::string m_levelStrings;
	cocos2d::ccColor3B m_textColour;
	cocos2d::ccColor3B m_barColour;
	int m_MId;
	bool m_isGauntlet;
};

struct DialogDelegate {
};

struct GJGarageLayer : cocos2d::CCLayer, TextInputDelegate, FLAlertLayerProtocol, GameRateDelegate, ListButtonBarDelegate, DialogDelegate {
	 GJGarageLayer() {
		m_nameInput = nullptr;
		m_playerPreview = nullptr;
		m_unkSprite0x140 = nullptr;
		m_unkSprite0x144 = nullptr;
		m_unkButton0x148 = nullptr;
		m_unkButton0x14c = nullptr;
		m_pagesArray = nullptr;
		m_tabToggleCube = nullptr;
		m_tabToggleShip = nullptr;
		m_tabToggleBall = nullptr;
		m_tabToggleUfo = nullptr;
		m_tabToggleWave = nullptr;
		m_tabToggleRobot = nullptr;
		m_tabToggleSpider = nullptr;
		m_tabToggleSpecial = nullptr;
		m_tabToggleDeathEffect = nullptr;
		m_updateSelector = false;
	}
	GEODE_CODEGEN_DLL void onPlayerColor1(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void onPlayerColor2(cocos2d::CCObject* p0);

    template <bool T=false>
     static GJGarageLayer* create() {
        static_assert(T, "Implement GJGarageLayer::create");
    }
	GEODE_CODEGEN_DLL virtual bool init();

    template <bool T=false>
     void onSelectTab(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onSelectTab");
    }

    template <bool T=false>
     void onPlayerIcon(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onPlayerIcon");
    }

    template <bool T=false>
     void onShipIcon(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onShipIcon");
    }

    template <bool T=false>
     void onBallIcon(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onBallIcon");
    }

    template <bool T=false>
     void onBirdIcon(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onBirdIcon");
    }

    template <bool T=false>
     void onDartIcon(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onDartIcon");
    }

    template <bool T=false>
     void onRobotIcon(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onRobotIcon");
    }

    template <bool T=false>
     void onSpiderIcon(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onSpiderIcon");
    }

    template <bool T=false>
     void onShards(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onShards");
    }

    template <bool T=false>
     void onBack(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onBack");
    }

    template <bool T=false>
     void onShop(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement GJGarageLayer::onShop");
    }
	CCTextInputNode* m_nameInput;
	SimplePlayer* m_playerPreview;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCSprite* m_unkSprite0x140;
	cocos2d::CCSprite* m_unkSprite0x144;
	CCMenuItemSpriteExtra* m_unkButton0x148;
	CCMenuItemSpriteExtra* m_unkButton0x14c;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCArray* m_pagesArray;
	GEODE_UNIMPLEMENTED_PAD
	CCMenuItemToggler* m_tabToggleCube;
	CCMenuItemToggler* m_tabToggleShip;
	CCMenuItemToggler* m_tabToggleBall;
	CCMenuItemToggler* m_tabToggleUfo;
	CCMenuItemToggler* m_tabToggleWave;
	CCMenuItemToggler* m_tabToggleRobot;
	CCMenuItemToggler* m_tabToggleSpider;
	CCMenuItemToggler* m_tabToggleSpecial;
	CCMenuItemToggler* m_tabToggleDeathEffect;
	GEODE_UNIMPLEMENTED_PAD
	bool m_updateSelector;
};

struct GJGameLevel : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static GJGameLevel* createWithCoder(DS_Dictionary* dict);
	GEODE_CODEGEN_DLL ~GJGameLevel();
	GEODE_CODEGEN_DLL virtual void encodeWithCoder(DS_Dictionary* p0);
	GEODE_CODEGEN_DLL virtual bool canEncode();
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL static GJGameLevel* create();
	GEODE_CODEGEN_DLL gd::string getAudioFileName();
	GEODE_CODEGEN_DLL void getCoinKey(int p0);
	GEODE_CODEGEN_DLL void getLengthKey(int p0);
	GEODE_CODEGEN_DLL void getNormalPercent();
	GEODE_CODEGEN_DLL void levelWasAltered();
	GEODE_CODEGEN_DLL void savePercentage(int p0, bool p1, int p2, int p3, bool p4);
	GEODE_CODEGEN_DLL void dataLoaded(DS_Dictionary* dict);

    template <bool T=false>
     GJDifficulty getAverageDifficulty() {
        static_assert(T, "Implement GJGameLevel::getAverageDifficulty");
    }
	CLASSPARAM(int, levelId, 0x130);
	CLASSPARAM(gd::string, name, 0x138);
	CLASSPARAM(gd::string, levelString, 0x148);
	CLASSPARAM(gd::string, author, 0x150);
	CLASSPARAM(int, audioTrack, 0x18c);
	CLASSPARAM(int, songID, 0x190);
	CLASSPARAM(int, difficultyDenominator, 0x1ac);
	CLASSPARAM(int, difficultyNumerator, 0x1b0);
	CLASSPARAM(bool, lowDetail, 0x1c5);
	CLASSPARAM(int, bestNormal, 0x214);
	CLASSPARAM(int, bestPractice, 0x238);
	CLASSPARAM(int, score, 0x248);
	CLASSPARAM(int, epic, 0x24c);
	CLASSPARAM(int, demon, 0x26c);
	CLASSPARAM(int, stars, 0x27c);
	CLASSPARAM(OBB2D*, hitbox, 0x2b0);
	CLASSPARAM(bool, official, 0x324);
	cocos2d::CCDictionary* m_lastBuildSave;
	int m_levelID_rand;
	int m_levelID_seed;
	int m_levelID;
	gd::string m_levelName;
	gd::string m_levelDesc;
	gd::string m_levelString;
	gd::string m_creatorName;
	gd::string m_recordString;
	gd::string m_uploadDate;
	gd::string m_updateDate;
	int m_userID_rand;
	int m_userID_seed;
	int m_userID;
	int m_accountID_rand;
	int m_accountID_seed;
	int m_accountID;
	GJDifficulty m_difficulty;
	int m_audioTrack;
	int m_songID;
	int m_levelRev;
	bool m_unlisted;
	int m_objectCount_rand;
	int m_objectCount_seed;
	int m_objectCount;
	int m_levelIndex;
	int m_ratings;
	int m_ratingsSum;
	int m_downloads;
	bool m_isEditable;
	bool m_gauntletLevel;
	bool m_gauntletLevel2;
	int m_workingTime;
	int m_workingTime2;
	bool m_lowDetailMode;
	bool m_lowDetailModeToggled;
	int m_isVerified_rand;
	int m_isVerified_seed;
	bool m_isVerified;
	bool m_isUploaded;
	bool m_hasBeenModified;
	int m_levelVersion;
	int m_gameVersion;
	int m_attempts_rand;
	int m_attempts_seed;
	int m_attempts;
	int m_jumps_rand;
	int m_jumps_seed;
	int m_jumps;
	int m_clicks_rand;
	int m_clicks_seed;
	int m_clicks;
	int m_attemptTime_rand;
	int m_attemptTime_seed;
	int m_attemptTime;
	int m_chk;
	bool m_isChkValid;
	bool m_isCompletionLegitimate;
	int m_normalPercent;
	int m_normalPercent_seed;
	int m_normalPercent_rand;
	int m_orbCompletion_rand;
	int m_orbCompletion_seed;
	int m_orbCompletion;
	int m_newNormalPercent2_rand;
	int m_newNormalPercent2_seed;
	int m_newNormalPercent2;
	int m_practicePercent;
	int m_likes;
	int m_dislikes;
	int m_levelLength;
	int m_featured;
	bool m_isEpic;
	bool m_levelFavorited;
	int m_levelFolder;
	int m_dailyID_rand;
	int m_dailyID_seed;
	int m_dailyID;
	int m_demon_rand;
	int m_demon_seed;
	int m_demon;
	int m_demonDifficulty;
	int m_stars_rand;
	int m_stars_seed;
	int m_stars;
	bool m_autoLevel;
	int m_coins;
	int m_coinsVerified_rand;
	int m_coinsVerified_seed;
	int m_coinsVerified;
	int m_password_rand;
	int m_password_seed;
	int m_originalLevel_rand;
	int m_originalLevel_seed;
	int m_originalLevel;
	bool m_twoPlayerMode;
	int m_failedPasswordAttempts;
	int m_firstCoinVerified_rand;
	int m_firstCoinVerified_seed;
	int m_firstCoinVerified;
	int m_secondCoinVerified_rand;
	int m_secondCoinVerified_seed;
	int m_secondCoinVerified;
	int m_thirdCoinVerified_rand;
	int m_thirdCoinVerified_seed;
	int m_thirdCoinVerified;
	int m_starsRequested;
	bool m_showedSongWarning;
	int m_starRatings;
	int m_starRatingsSum;
	int m_maxStarRatings;
	int m_minStarRatings;
	int m_demonVotes;
	int m_rateStars;
	int m_rateFeature;
	gd::string m_rateUser;
	bool m_dontSave;
	bool m_levelNotDownloaded;
	int m_requiredCoins;
	bool m_isUnlocked;
	cocos2d::CCPoint m_lastCameraPos;
	float m_fastEditorZoom;
	int m_lastBuildTab;
	int m_lastBuildPage;
	int m_lastBuildGroupID;
	GJLevelType m_levelType;
	int m_M_ID;
	gd::string m_tempName;
	gd::string m_capacityString;
	bool m_highObjectsEnabled;
	gd::string m_personalBests;
};

struct CCScrollLayerExt : cocos2d::CCLayer {
	 CCScrollLayerExt() {}
	
	/*
	 * IDK
	 */
	GEODE_CODEGEN_DLL static CCScrollLayerExt* create(cocos2d::CCRect rect, bool vertical);
	GEODE_CODEGEN_DLL float getMinY();
	GEODE_CODEGEN_DLL float getMaxY();
	GEODE_CODEGEN_DLL ~CCScrollLayerExt();
	GEODE_CODEGEN_DLL virtual void visit();
	GEODE_CODEGEN_DLL virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void registerWithTouchDispatcher();
	GEODE_CODEGEN_DLL virtual void preVisitWithClippingRect(cocos2d::CCRect p0);
	GEODE_CODEGEN_DLL virtual void postVisit();
	GEODE_CODEGEN_DLL void moveToTop();
	GEODE_CODEGEN_DLL void moveToTopWithOffset(float p0);
	GEODE_CODEGEN_DLL CCScrollLayerExt(cocos2d::CCRect rect);
	GEODE_CODEGEN_DLL void scrollLayer(float scroll);
	cocos2d::CCTouch* m_touch;
	cocos2d::CCPoint m_touchPosition;
	cocos2d::CCPoint m_touchStartPosition;
	cocos2d::cc_timeval m_timeValue;
	bool m_touchDown;
	bool m_notAtEndOfScroll;
	cocos2d::CCLayerColor* m_verticalScrollbar;
	cocos2d::CCLayerColor* m_horizontalScrollbar;
	CCScrollLayerExtDelegate* m_delegate;
	CCContentLayer* m_contentLayer;
	bool m_cutContent;
	bool m_vScrollbarVisible;
	bool m_hScrollbarVisible;
	bool m_disableHorizontal;
	bool m_disableVertical;
	bool m_disableMovement;
	float m_scrollLimitTop;
	float m_scrollLimitBottom;
	float m_peekLimitTop;
	float m_peekLimitBottom;
};

struct CCScrollLayerExtDelegate {
	GEODE_CODEGEN_DLL virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);
	GEODE_CODEGEN_DLL virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* p0);
	GEODE_CODEGEN_DLL virtual void scrollViewTouchMoving(CCScrollLayerExt* p0);
	GEODE_CODEGEN_DLL virtual void scrollViewDidEndMoving(CCScrollLayerExt* p0);
	GEODE_CODEGEN_DLL virtual void scrollViewTouchBegin(CCScrollLayerExt* p0);
	GEODE_CODEGEN_DLL virtual void scrollViewTouchEnd(CCScrollLayerExt* p0);
};

struct TableView : CCScrollLayerExt, CCScrollLayerExtDelegate {
	 TableView() {}
	 TableView(struct cocos2d::CCRect rect) : CCScrollLayerExt(rect) {}
	GEODE_CODEGEN_DLL static TableView* create(TableViewDelegate* p0, TableViewDataSource* p1, cocos2d::CCRect p2);
	GEODE_CODEGEN_DLL void reloadData();
	bool m_touchOutOfBoundary;
	cocos2d::CCTouch* m_touchStart;
	cocos2d::CCPoint m_touchStartPosition2;
	cocos2d::CCPoint m_unknown2;
	cocos2d::CCPoint m_touchPosition2;
	void* m_idk;
	bool m_touchMoved;
	cocos2d::CCArray* m_cellArray;
	cocos2d::CCArray* m_array2;
	cocos2d::CCArray* m_array3;
	TableViewDelegate* m_tableDelegate;
	TableViewDataSource* m_dataSource;
	int m_unused1;
	int m_unused2;
	void* m_unused3;
	int m_unused4;
	float m_touchLastY;
	bool m_cancellingTouches;
};

struct TopArtistsLayer : FLAlertLayer {
	GEODE_CODEGEN_DLL static TopArtistsLayer* create();
	GEODE_CODEGEN_DLL void setupLeaderboard(cocos2d::CCArray* p0);
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL void loadPage(int p0);
	GEODE_CODEGEN_DLL void setupPageInfo(gd::string p0, char const* p1);
	CLASSPARAM(cocos2d::CCNode*, unknown, 0x220);
	CLASSPARAM(GJCommentListLayer*, commentLayer, 0x260);
};

struct GJColorSetupLayer {
};

struct EndPortalObject : GameObject {
	GEODE_CODEGEN_DLL static EndPortalObject* create();
	GEODE_CODEGEN_DLL void updateColors(cocos2d::_ccColor3B p0);
};

struct SongInfoLayer : FLAlertLayer {

    template <bool T=false>
     static SongInfoLayer* create(int songID) {
        static_assert(T, "Implement SongInfoLayer::create");
    }

    template <bool T=false>
     static SongInfoLayer* create(struct gd::string songName, struct gd::string artistName, struct gd::string downloadLink, struct gd::string artistNG, struct gd::string artistYT, struct gd::string artistFB) {
        static_assert(T, "Implement SongInfoLayer::create");
    }
	gd::string m_downloadLink;
	gd::string m_artistNewgrounds;
	gd::string m_artistYoutube;
	gd::string m_artistFacebook;
};

struct DrawGridLayer : cocos2d::CCLayer {
	 using CCPointArray400 = struct cocos2d::CCPoint(*)[400];
	 using CCPointArray200 = struct cocos2d::CCPoint(*)[400];

    template <bool T=false>
     void draw() {
        static_assert(T, "Implement DrawGridLayer::draw");
    }
	CCPointArray400 m_commonLines;
	CCPointArray200 m_yellowGuidelines;
	CCPointArray200 m_greenGuidelines;
	float m_songOffset1;
	float m_songOffset2;
	float m_lastMusicXPosition;
	bool m_effectSortDirty;
	LevelEditorLayer* m_editor;
	gd::string m_guidelineString;
	cocos2d::CCNode* m_grid;
	cocos2d::CCArray* m_guidelines;
	cocos2d::CCArray* m_effects;
	cocos2d::CCArray* m_guides;
	cocos2d::CCArray* m_speedObjects1;
	cocos2d::CCArray* m_speedObjects2;
	cocos2d::CCArray* m_playerNodePoints;
	cocos2d::CCArray* m_player2NodePoints;
	double m_unkDouble;
	float m_guidelineSpacing;
	float m_slowGuidelineSpacing;
	float m_normalGuidelineSpacing;
	float m_fastGuidelineSpacing;
	float m_fasterGuidelineSpacing;
	float m_fastestGuidelineSpacing;
	bool m_updatingTimeMarkers;
	bool m_timeNeedsUpdate;
	float m_activeGridNodeSize;
	float m_gridSize;
};

struct FMODAudioEngine : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static FMODAudioEngine* sharedEngine();

    template <bool T=false>
     void preloadEffect(struct gd::string filename) {
        static_assert(T, "Implement FMODAudioEngine::preloadEffect");
    }

    template <bool T=false>
     bool isBackgroundMusicPlaying() {
        static_assert(T, "Implement FMODAudioEngine::isBackgroundMusicPlaying");
    }

    template <bool T=false>
     bool isBackgroundMusicPlaying(struct gd::string path) {
        static_assert(T, "Implement FMODAudioEngine::isBackgroundMusicPlaying");
    }

    template <bool T=false>
     void playBackgroundMusic(struct gd::string path, bool fade, bool paused) {
        static_assert(T, "Implement FMODAudioEngine::playBackgroundMusic");
    }
	cocos2d::CCDictionary* m_dictionary;
	std::string m_filePath;
	float m_backgroundMusicVolume;
	float m_effectsVolume;
	float m_pulse1;
	float m_pulse2;
	float m_pulse3;
	int m_pulseCounter;
	bool m_metering;
	bool m_fading;
	bool m_fadeIn;
	float m_fadeInDuration;
	FMOD::System* m_system;
	FMOD::Sound* m_sound;
	FMOD::Channel* m_currentSoundChannel;
	FMOD::Channel* m_globalChannel;
	FMOD::DSP* m_DSP;
	FMOD_RESULT m_lastResult;
	int m_version;
	void* m_extraDriverData;
	int m_musicOffset;
};

struct PulseEffectAction : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static PulseEffectAction* createFromString(gd::string p0);
	GEODE_CODEGEN_DLL void getSaveString();
	CLASSPARAM(int, group, 0x130);
};

struct CCBlockLayer : cocos2d::CCLayerColor {
	GEODE_CODEGEN_DLL void disableUI();
	GEODE_CODEGEN_DLL void draw();
	GEODE_CODEGEN_DLL void enableUI();
	GEODE_CODEGEN_DLL void enterAnimFinished();
	GEODE_CODEGEN_DLL void enterLayer();
	GEODE_CODEGEN_DLL void exitLayer();
	GEODE_CODEGEN_DLL void hideLayer(bool p0);
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL void layerHidden();
	GEODE_CODEGEN_DLL void layerVisible();
	GEODE_CODEGEN_DLL void registerWithTouchDispatcher();
	GEODE_CODEGEN_DLL void showLayer(bool p0);
	bool m_unknown;
	bool m_unknown2;
};

struct EditorPauseLayer : CCBlockLayer, FLAlertLayerProtocol {
	GEODE_CODEGEN_DLL static EditorPauseLayer* create(LevelEditorLayer* editor);
	GEODE_CODEGEN_DLL ~EditorPauseLayer();
	GEODE_CODEGEN_DLL virtual void keyBackClicked();
	GEODE_CODEGEN_DLL virtual void keyDown(cocos2d::enumKeyCodes p0);
	GEODE_CODEGEN_DLL virtual void customSetup();
	GEODE_CODEGEN_DLL virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
	GEODE_CODEGEN_DLL void saveLevel();
	GEODE_CODEGEN_DLL bool init(LevelEditorLayer* p0);

    template <bool T=false>
     void onExitEditor(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorPauseLayer::onExitEditor");
    }

    template <bool T=false>
     void playStep2() {
        static_assert(T, "Implement EditorPauseLayer::playStep2");
    }

    template <bool T=false>
     void onResume(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorPauseLayer::onResume");
    }

    template <bool T=false>
     void onSaveAndPlay(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorPauseLayer::onSaveAndPlay");
    }

    template <bool T=false>
     void onSaveAndExit(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorPauseLayer::onSaveAndExit");
    }

    template <bool T=false>
     void onSave(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorPauseLayer::onSave");
    }

    template <bool T=false>
     void onExitNoSave(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorPauseLayer::onExitNoSave");
    }

    template <bool T=false>
     void uncheckAllPortals(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorPauseLayer::uncheckAllPortals");
    }
	bool m_saved;
	GEODE_UNIMPLEMENTED_PAD
	CCMenuItemSpriteExtra* m_button0;
	CCMenuItemSpriteExtra* m_button1;
	LevelEditorLayer* m_editorLayer;
};

struct EditLevelLayer : cocos2d::CCLayer {
	GEODE_CODEGEN_DLL static void scene(GJGameLevel* level);
	GEODE_CODEGEN_DLL static EditLevelLayer* create(GJGameLevel* level);
	cocos2d::CCMenu* m_buttonMenu;
	GJGameLevel* m_level;
	TextArea* m_descriptionInput;
	cocos2d::CCArray* m_someArray;
	cocos2d::CCLabelBMFont* m_someFont;
};

struct EditButtonBar : cocos2d::CCNode {
	GEODE_CODEGEN_DLL void removeAllItems();
	GEODE_CODEGEN_DLL void reloadItems(int rowCount, int columnCount);
	GEODE_CODEGEN_DLL void reloadItemsInNormalSize();
	GEODE_CODEGEN_DLL void addButton(CCMenuItemSpriteExtra* btn, bool reload);
	GEODE_CODEGEN_DLL void loadFromItems(cocos2d::CCArray* buttons, int rowCount, int columnCount, bool idk);
	cocos2d::CCPoint m_position;
	int m_unknown;
	bool m_unknownBool;
	cocos2d::CCArray* m_buttonArray;
	BoomScrollLayer* m_scrollLayer;
	cocos2d::CCArray* m_pagesArray;
};

struct LoadingLayer : cocos2d::CCLayer {
	GEODE_CODEGEN_DLL void setFromRefresh(bool value);
	GEODE_CODEGEN_DLL static LoadingLayer* create(bool fromReload);
	GEODE_CODEGEN_DLL bool init(bool fromReload);

    template <bool T=false>
     const char* getLoadingString() {
        static_assert(T, "Implement LoadingLayer::getLoadingString");
    }
	GEODE_CODEGEN_DLL void loadAssets();

    template <bool T=false>
     void loadingFinished() {
        static_assert(T, "Implement LoadingLayer::loadingFinished");
    }
	GEODE_CODEGEN_DLL static cocos2d::CCScene* scene(bool fromReload);
	bool m_unknown;
	bool m_unknown2;
	int m_loadStep;
	cocos2d::CCLabelBMFont* m_caption;
	TextArea* m_textArea;
	cocos2d::CCSprite* m_sliderBar;
	float m_sliderGrooveXPos;
	float m_unknown3;
	bool m_fromRefresh;
};

struct DialogObject : cocos2d::CCObject {

    template <bool T=false>
     static DialogObject* create(struct gd::string title, struct gd::string text, int portrait, float text_scale, bool is_unskippable, cocos2d::ccColor3B text_color) {
        static_assert(T, "Implement DialogObject::create");
    }

    template <bool T=false>
     bool init(DialogObject* p0, struct gd::string title, struct gd::string text, int portrait, float text_scale, bool is_unskippable, cocos2d::ccColor3B text_color) {
        static_assert(T, "Implement DialogObject::init");
    }
	gd::string m_text;
	gd::string m_title;
	int m_dialogType;
	cocos2d::ccColor3B m_colour;
	float m_textWidth;
	bool m_canSkip;
};

struct SetIDLayer {
	GEODE_CODEGEN_DLL static SetIDLayer* create(GameObject* p0);
};

struct HSVWidgetPopupDelegate {
};

struct ColorSelectDelegate {
};

struct ColorSetupDelegate {
};

struct CustomizeObjectLayer : FLAlertLayer, TextInputDelegate, HSVWidgetPopupDelegate, ColorSelectDelegate, ColorSetupDelegate {

    template <bool T=false>
     void onNextColorChannel(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement CustomizeObjectLayer::onNextColorChannel");
    }

    template <bool T=false>
     void onSelectColor(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement CustomizeObjectLayer::onSelectColor");
    }

    template <bool T=false>
     int getActiveMode(bool unknown) {
        static_assert(T, "Implement CustomizeObjectLayer::getActiveMode");
    }
	EffectGameObject* m_targetObject;
	cocos2d::CCArray* m_targetObjects;
	cocos2d::CCArray* m_colorButtons;
	cocos2d::CCArray* m_colorNodes;
	cocos2d::CCArray* m_textInputNodes;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCArray* m_detailColorButtons;
	int m_selectedMode;
	int m_customColorChannel;
	bool m_unk0x200;
	bool m_unk0x201;
	bool m_glowDisabled;
	CCMenuItemSpriteExtra* m_baseButton;
	CCMenuItemSpriteExtra* m_detailButton;
	CCMenuItemSpriteExtra* m_textButton;
	CCMenuItemSpriteExtra* m_baseColorHSV;
	CCMenuItemSpriteExtra* m_detailColorHSV;
	cocos2d::CCLabelBMFont* m_titleLabel;
	cocos2d::CCLabelBMFont* m_selectedColorLabel;
	CCTextInputNode* m_customColorInput;
	CCTextInputNode* m_textInput;
	ButtonSprite* m_customColorButtonSprite;
	CCMenuItemSpriteExtra* m_customColorButton;
	CCMenuItemSpriteExtra* m_arrowDown;
	CCMenuItemSpriteExtra* m_arrowUp;
	cocos2d::extension::CCScale9Sprite* m_customColorInputBG;
	ColorChannelSprite* m_colorSprite;
	CCMenuItemSpriteExtra* m_colorSpriteButton;
	bool m_showTextInput;
	bool m_customColorSelected;
};

struct LabelGameObject : GameObject {
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL void setObjectColor(cocos2d::_ccColor3B const& p0);
};

struct HardStreak : cocos2d::CCDrawNode {
	GEODE_CODEGEN_DLL ~HardStreak();
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL void addPoint(cocos2d::CCPoint p0);
	GEODE_CODEGEN_DLL void reset();
	GEODE_CODEGEN_DLL void resumeStroke();
	GEODE_CODEGEN_DLL void stopStroke();
	cocos2d::CCArray* m_pointsArr;
	cocos2d::CCPoint m_currentPoint;
	float m_waveSize;
	float m_pulseSize;
	bool m_isSolid;
};

struct CustomSongCell : TableViewCell {
	GEODE_CODEGEN_DLL void loadFromObject(SongInfoObject* p0);
};

struct CreatorLayer : cocos2d::CCLayer {
	GEODE_CODEGEN_DLL void onMyLevels(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void onSavedLevels(cocos2d::CCObject* p0);

    template <bool T=false>
     static CreatorLayer* create() {
        static_assert(T, "Implement CreatorLayer::create");
    }
};

struct CreateGuidelinesLayer : FLAlertLayer, FLAlertLayerProtocol {

    template <bool T=false>
     void onStop(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement CreateGuidelinesLayer::onStop");
    }
	GEODE_UNIMPLEMENTED_PAD
	gd::string m_guidelineString;
};

struct CountTriggerAction : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static CountTriggerAction* createFromString(gd::string p0);
	int m_previousCount;
	int m_targetCount;
	int m_targetID;
	bool m_activateGroup;
	CLASSPARAM(bool, multiActivate, 0x138);
};

struct CommentCell : TableViewCell {
	GEODE_CODEGEN_DLL void loadFromComment(GJComment* p0);
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCSprite* m_iconSprite;
	cocos2d::CCLabelBMFont* m_likeLabel;
	GJComment* m_comment;
	GEODE_UNIMPLEMENTED_PAD
};

struct MoreOptionsLayer {

    template <bool T=false>
     static MoreOptionsLayer* create() {
        static_assert(T, "Implement MoreOptionsLayer::create");
    }

    template <bool T=false>
     void addToggle(const char* name, const char* key, const char* info) {
        static_assert(T, "Implement MoreOptionsLayer::addToggle");
    }
};

struct GJRotationControl : cocos2d::CCLayer {
	GEODE_CODEGEN_DLL void setAngle(float angle);

    template <bool T=false>
     void updateSliderPosition(cocos2d::CCPoint const& pos) {
        static_assert(T, "Implement GJRotationControl::updateSliderPosition");
    }
	float m_unknown0;
	float m_unknown1;
	cocos2d::CCPoint m_sliderPosition;
	cocos2d::CCSprite* m_sliderThumb;
	float m_objAngle;
	float m_angle;
	int m_touchID;
};

struct ColorChannelSprite : cocos2d::CCSprite {
	GEODE_CODEGEN_DLL void updateBlending(bool p0);
	GEODE_CODEGEN_DLL void updateCopyLabel(int p0, bool p1);
	GEODE_CODEGEN_DLL void updateOpacity(float p0);
	GEODE_CODEGEN_DLL void updateValues(ColorAction* p0);

    template <bool T=false>
     static ColorChannelSprite* create() {
        static_assert(T, "Implement ColorChannelSprite::create");
    }
	cocos2d::CCLabelBMFont* m_copyLabel;
	cocos2d::CCLabelBMFont* m_opacityLabel;
	cocos2d::CCLabelBMFont* m_blendingDot;
};

struct TouchToggleAction : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static TouchToggleAction* createFromString(gd::string p0);
};

struct AccountHelpLayer : GJDropDownLayer, GJAccountDelegate, FLAlertLayerProtocol {

    template <bool T=false>
     void create() {
        static_assert(T, "Implement AccountHelpLayer::create");
    }

    template <bool T=false>
     void doUnlink() {
        static_assert(T, "Implement AccountHelpLayer::doUnlink");
    }

    template <bool T=false>
     void exitLayer() {
        static_assert(T, "Implement AccountHelpLayer::exitLayer");
    }

    template <bool T=false>
     void onAccountManagement(cocos2d::CCObject* p0) {
        static_assert(T, "Implement AccountHelpLayer::onAccountManagement");
    }

    template <bool T=false>
     void onReLogin(cocos2d::CCObject* p0) {
        static_assert(T, "Implement AccountHelpLayer::onReLogin");
    }

    template <bool T=false>
     void onUnlink(cocos2d::CCObject* p0) {
        static_assert(T, "Implement AccountHelpLayer::onUnlink");
    }

    template <bool T=false>
     void updatePage() {
        static_assert(T, "Implement AccountHelpLayer::updatePage");
    }

    template <bool T=false>
     void verifyUnlink() {
        static_assert(T, "Implement AccountHelpLayer::verifyUnlink");
    }

    template <bool T=false>
     void FLAlert_Clicked(FLAlertLayer* p0, bool p1) {
        static_assert(T, "Implement AccountHelpLayer::FLAlert_Clicked");
    }

    template <bool T=false>
     bool accountStatusChanged() {
        static_assert(T, "Implement AccountHelpLayer::accountStatusChanged");
    }

    template <bool T=false>
     void customSetup() {
        static_assert(T, "Implement AccountHelpLayer::customSetup");
    }

    template <bool T=false>
     void layerHidden() {
        static_assert(T, "Implement AccountHelpLayer::layerHidden");
    }
};

struct ColorActionSprite : cocos2d::CCNode {
	float m_opacity;
	cocos2d::_ccColor3B m_f0124;
	cocos2d::_ccColor3B m_activeColor;
};

struct ExtendedLayer {
};

struct ColorAction : cocos2d::CCNode {
	GEODE_CODEGEN_DLL void getSaveString();
	GEODE_CODEGEN_DLL void setupFromDict(cocos2d::CCDictionary* p0);
	GEODE_CODEGEN_DLL void setupFromString(gd::string p0);
	GEODE_PAD(0xc);
	CLASSPARAM(cocos2d::ccColor3B, color, 0x12c);
	GEODE_PAD(0x5);
	float m_unk100;
	bool m_blending;
	GEODE_PAD(0x3);
	int m_playerColor;
	int m_unk10C;
	float m_opacity;
	float m_unk114;
	float m_copyHue;
	float m_copySaturation;
	float m_copyBrightness;
	bool m_saturationChecked;
	bool m_brightnessChecked;
	int m_copyID;
	GEODE_PAD(0x1);
	bool m_copyOpacity;
	GEODE_PAD(0x4);
	ColorActionSprite* m_colorSprite;
	GEODE_PAD(0xc);
};

struct CollisionTriggerAction : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static CollisionTriggerAction* createFromString(gd::string p0);
};

struct GJRotationControlDelegate {
};

struct EditorUI : cocos2d::CCLayer, FLAlertLayerProtocol, ColorSelectDelegate, GJRotationControlDelegate, GJScaleControlDelegate, MusicDownloadDelegate {
	GEODE_CODEGEN_DLL static EditorUI* get();
	GEODE_CODEGEN_DLL void constrainGameLayerPosition();
	GEODE_CODEGEN_DLL void create(LevelEditorLayer* p0);
	GEODE_CODEGEN_DLL void deselectAll();
	GEODE_CODEGEN_DLL void onDeselectAll(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void disableButton(CreateMenuItem* p0);
	GEODE_CODEGEN_DLL void editButtonUsable();
	GEODE_CODEGEN_DLL void editObject(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void enableButton(CreateMenuItem* p0);
	GEODE_CODEGEN_DLL CCMenuItemSpriteExtra* getCreateBtn(int p0, int p1);
	GEODE_CODEGEN_DLL cocos2d::CCPoint getGroupCenter(cocos2d::CCArray* p0, bool p1);
	GEODE_CODEGEN_DLL cocos2d::CCArray* getSelectedObjects();
	GEODE_CODEGEN_DLL void init(LevelEditorLayer* p0);
	GEODE_CODEGEN_DLL virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void keyDown(cocos2d::enumKeyCodes p0);
	GEODE_CODEGEN_DLL void moveObject(GameObject* p0, cocos2d::CCPoint p1);
	GEODE_CODEGEN_DLL void onDuplicate(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL cocos2d::CCArray* pasteObjects(gd::string const& p0);
	GEODE_CODEGEN_DLL void playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL void playtestStopped();
	GEODE_CODEGEN_DLL void redoLastAction(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void replaceGroupID(GameObject* p0, int p1, int p2);
	GEODE_CODEGEN_DLL void scaleChanged(float p0);
	GEODE_CODEGEN_DLL void scaleObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);
	GEODE_CODEGEN_DLL void selectObjects(cocos2d::CCArray* p0, bool p1);
	GEODE_CODEGEN_DLL void setupCreateMenu();
	GEODE_CODEGEN_DLL void undoLastAction(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void updateButtons();
	GEODE_CODEGEN_DLL void updateObjectInfoLabel();
	GEODE_CODEGEN_DLL void updateSlider();
	GEODE_CODEGEN_DLL void updateZoom(float p0);
	GEODE_CODEGEN_DLL void selectObject(GameObject* obj, bool idk);

    template <bool T=false>
     void selectAll() {
        static_assert(T, "Implement EditorUI::selectAll");
    }

    template <bool T=false>
     void selectAllWithDirection(bool left) {
        static_assert(T, "Implement EditorUI::selectAllWithDirection");
    }

    template <bool T=false>
     cocos2d::CCPoint getTouchPoint(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) {
        static_assert(T, "Implement EditorUI::getTouchPoint");
    }

    template <bool T=false>
     void onSelectBuildTab(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::onSelectBuildTab");
    }

    template <bool T=false>
     void onCreateButton(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::onCreateButton");
    }

    template <bool T=false>
     CCMenuItemSpriteExtra* getSpriteButton(const char* sprite, cocos2d::SEL_MenuHandler callback, cocos2d::CCMenu* menu, float scale) {
        static_assert(T, "Implement EditorUI::getSpriteButton");
    }

    template <bool T=false>
     cocos2d::CCPoint offsetForKey(int objID) {
        static_assert(T, "Implement EditorUI::offsetForKey");
    }

    template <bool T=false>
     void updateDeleteMenu() {
        static_assert(T, "Implement EditorUI::updateDeleteMenu");
    }
	GEODE_CODEGEN_DLL void updateCreateMenu(bool updateTab);
	GEODE_CODEGEN_DLL void toggleMode(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void zoomIn(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void zoomOut(cocos2d::CCObject* pSender);

    template <bool T=false>
     void rotateObjects(cocos2d::CCArray* objects, float angle, struct cocos2d::CCPoint center) {
        static_assert(T, "Implement EditorUI::rotateObjects");
    }
	GEODE_CODEGEN_DLL void updateGridNodeSize();

    template <bool T=false>
     void updateSpecialUIElements() {
        static_assert(T, "Implement EditorUI::updateSpecialUIElements");
    }
	GEODE_CODEGEN_DLL void constrainGameLayerPosition(float x, float y);
	GEODE_CODEGEN_DLL void moveGameLayer(cocos2d::CCPoint const& pos);
	GEODE_CODEGEN_DLL void showUI(bool show);

    template <bool T=false>
     void editObject2(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::editObject2");
    }

    template <bool T=false>
     void editGroup(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::editGroup");
    }
	GEODE_CODEGEN_DLL void moveObjectCall(EditCommand pSender);
	GEODE_CODEGEN_DLL void transformObjectCall(EditCommand pSender);
	GEODE_CODEGEN_DLL void onDeleteSelected(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void onCopy(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void onPaste(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void toggleEnableRotate(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void toggleFreeMove(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void toggleSwipe(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void toggleSnap(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void onPlayback(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void onPlaytest(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void onStopPlaytest(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void onGroupUp(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void onGroupDown(cocos2d::CCObject* pSender);
	GEODE_CODEGEN_DLL void selectBuildTab(int tab);
	GEODE_CODEGEN_DLL void onPause(cocos2d::CCObject* pSender);

    template <bool T=false>
     void onSettings(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::onSettings");
    }

    template <bool T=false>
     void activateRotationControl(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::activateRotationControl");
    }

    template <bool T=false>
     void activateScaleControl(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::activateScaleControl");
    }

    template <bool T=false>
     void dynamicGroupUpdate(bool idk) {
        static_assert(T, "Implement EditorUI::dynamicGroupUpdate");
    }

    template <bool T=false>
     void createRockOutline() {
        static_assert(T, "Implement EditorUI::createRockOutline");
    }

    template <bool T=false>
     void createRockEdges() {
        static_assert(T, "Implement EditorUI::createRockEdges");
    }

    template <bool T=false>
     void createRockBase() {
        static_assert(T, "Implement EditorUI::createRockBase");
    }

    template <bool T=false>
     void onCopyState(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::onCopyState");
    }

    template <bool T=false>
     void onPasteColor(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::onPasteColor");
    }

    template <bool T=false>
     void onPasteState(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::onPasteState");
    }

    template <bool T=false>
     void onGroupSticky(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::onGroupSticky");
    }

    template <bool T=false>
     void onUngroupSticky(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::onUngroupSticky");
    }

    template <bool T=false>
     void onGoToLayer(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::onGoToLayer");
    }

    template <bool T=false>
     void onGoToBaseLayer(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::onGoToBaseLayer");
    }

    template <bool T=false>
     void editColor(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement EditorUI::editColor");
    }

    template <bool T=false>
     void alignObjects(cocos2d::CCArray* objs, bool alignY) {
        static_assert(T, "Implement EditorUI::alignObjects");
    }
	GEODE_CODEGEN_DLL virtual void keyUp(cocos2d::enumKeyCodes key);
	EditButtonBar* m_buttonBar;
	GEODE_PAD(0x8);
	cocos2d::CCArray* m_hideableUIElementArray;
	GEODE_PAD(0x8);
	float m_gridSize;
	GEODE_PAD(0x14);
	bool m_moveModifier;
	int m_rotationTouchID;
	int m_scaleTouchID;
	int m_touchID;
	cocos2d::CCLabelBMFont* m_objectInfoLabel;
	GJRotationControl* m_rotationControl;
	cocos2d::CCPoint m_scalePos;
	bool m_touchDown;
	GJScaleControl* m_scaleControl;
	cocos2d::CCDictionary* m_editButtonDict;
	EditButtonBar* m_createButtonBar;
	EditButtonBar* m_editButtonBar;
	Slider* m_positionSlider;
	float m_unknown0;
	float m_minYLimit;
	float m_unknown2;
	bool m_swipeEnabled;
	bool m_freeMoveEnabled;
	GEODE_PAD(0x12);
	cocos2d::CCArray* m_unknownArray2;
	GEODE_PAD(0x16);
	cocos2d::CCArray* m_selectedObjects;
	cocos2d::CCMenu* m_deleteMenu;
	cocos2d::CCArray* m_unknownArray4;
	CCMenuItemSpriteExtra* m_deleteModeBtn;
	CCMenuItemSpriteExtra* m_buildModeBtn;
	CCMenuItemSpriteExtra* m_editModeBtn;
	CCMenuItemSpriteExtra* m_swipeBtn;
	CCMenuItemSpriteExtra* m_freeMoveBtn;
	CCMenuItemSpriteExtra* m_deselectBtn;
	CCMenuItemSpriteExtra* m_snapBtn;
	CCMenuItemSpriteExtra* m_rotateBtn;
	CCMenuItemSpriteExtra* m_playbackBtn;
	CCMenuItemSpriteExtra* m_PlaytestBtn;
	CCMenuItemSpriteExtra* m_playtestStopBtn;
	CCMenuItemSpriteExtra* m_trashBtn;
	CCMenuItemSpriteExtra* m_linkBtn;
	CCMenuItemSpriteExtra* m_unlinkBtn;
	CCMenuItemSpriteExtra* m_undoBtn;
	CCMenuItemSpriteExtra* m_redoBtn;
	CCMenuItemSpriteExtra* m_editObjectBtn;
	CCMenuItemSpriteExtra* m_editGroupBtn;
	CCMenuItemSpriteExtra* m_editHSVBtn;
	CCMenuItemSpriteExtra* m_editSpecialBtn;
	CCMenuItemSpriteExtra* m_copyPasteBtn;
	CCMenuItemSpriteExtra* m_copyBtn;
	CCMenuItemSpriteExtra* m_pasteBtn;
	CCMenuItemSpriteExtra* m_copyValuesBtn;
	CCMenuItemSpriteExtra* m_pasteStateBtn;
	CCMenuItemSpriteExtra* m_pasteColorBtn;
	CCMenuItemSpriteExtra* m_goToLayerBtn;
	CCMenuItemToggler* m_guideToggle;
	cocos2d::CCArray* m_createButtonBars;
	cocos2d::CCMenu* m_tabsMenu;
	cocos2d::CCArray* m_tabsArray;
	cocos2d::CCSprite* m_idkSprite0;
	cocos2d::CCSprite* m_idkSprite1;
	CCMenuItemSpriteExtra* m_button27;
	CCMenuItemSpriteExtra* m_button28;
	CCMenuItemSpriteExtra* m_deleteFilterNone;
	CCMenuItemSpriteExtra* m_deleteFilterStatic;
	CCMenuItemSpriteExtra* m_deleteFilterDetails;
	CCMenuItemSpriteExtra* m_deleteFilterCustom;
	cocos2d::CCLabelBMFont* m_currentLayerLabel;
	CCMenuItemSpriteExtra* m_layerNextBtn;
	CCMenuItemSpriteExtra* m_layerPrevBtn;
	CCMenuItemSpriteExtra* m_goToBaseBtn;
	GEODE_PAD(0x16);
	int m_selectedCreateObjectID;
	cocos2d::CCArray* m_createButtonArray;
	cocos2d::CCArray* m_customObjectButtonArray;
	cocos2d::CCArray* m_unknownArray9;
	int m_selectedMode;
	LevelEditorLayer* m_editorLayer;
	cocos2d::CCPoint m_swipeStart;
	cocos2d::CCPoint m_swipeEnd;
	GEODE_PAD(0x40);
	GameObject* m_selectedObject;
	GEODE_PAD(0x16);
	gd::string m_clipboard;
	GEODE_PAD(0x16);
	int m_selectedTab;
	int m_timesSelected;
	GEODE_UNIMPLEMENTED_PAD
	bool m_spaceKeyPressed;
};

struct CollisionBlockPopup {
	GEODE_CODEGEN_DLL static CollisionBlockPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void onNextItemID(cocos2d::CCObject* p0);
};

struct CheckpointObject : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static CheckpointObject* create();
	GEODE_CODEGEN_DLL void getObject();
	GameObject* m_gameObject;
	PlayerCheckpoint* m_player1;
	PlayerCheckpoint* m_player2;
	bool m_isDual;
	bool m_isFlipped;
	cocos2d::CCPoint m_cameraPos;
	int m_unk104;
	GameObject* m_lastPortal;
	GEODE_UNIMPLEMENTED_PAD
	double m_unk110;
	gd::string m_currentStateString;
	gd::string m_objectsStateString;
};

struct LevelSettingsLayer {

    template <bool T=false>
     static LevelSettingsLayer* create(LevelSettingsObject* levelSettings, LevelEditorLayer* editor) {
        static_assert(T, "Implement LevelSettingsLayer::create");
    }
};

struct LevelDeleteDelegate {
};

struct ChallengesPage {

    template <bool T=false>
     static ChallengesPage* create() {
        static_assert(T, "Implement ChallengesPage::create");
    }
};

struct CCTextInputNode : cocos2d::CCLayer, cocos2d::CCIMEDelegate, cocos2d::CCTextFieldDelegate {
	 CCTextInputNode() : cocos2d::CCLayer(), cocos2d::CCIMEDelegate(), cocos2d::CCTextFieldDelegate(), m_caption(), m_allowedChars() {
		m_unknown0 = nullptr;
		m_unknown1 = 0;
		m_selected = false;
		m_unknown2 = false;
		m_maxLabelWidth = 0.f;
		m_maxLabelScale = 0.f;
		m_placeholderScale = 0.f;
		m_placeholderColor = cocos2d::ccc3(0,0,0);
		m_textColor = cocos2d::ccc3(0,0,0);
		m_cursor = nullptr;
		m_textField = nullptr;
		m_delegate = nullptr;
		m_maxLabelLength = 0;
		m_placeholderLabel = nullptr;
		m_unknown3 = false;
		m_usePasswordChar = false;
		m_forceOffset = false;
	}
	 ~CCTextInputNode() {
		if (m_selected) m_textField->detachWithIME();
	}
	 static CCTextInputNode* create(float width, float height, char const* placeholder, char const* fontPath) {
		return CCTextInputNode::create(width, height, placeholder, 0x18, fontPath);
	}
	 static CCTextInputNode* create(float width, float height, char const* placeholder, int fontSize, char const* fontPath) {
		auto ret = new CCTextInputNode();
		if (ret && ret->init(width, height, placeholder, "Thonburi", fontSize, fontPath)) {
			ret->autorelease();
			return ret;
		}
		CC_SAFE_DELETE(ret);
		return nullptr;
	}
	GEODE_CODEGEN_DLL void setLabelNormalColor(cocos2d::ccColor3B color);
	GEODE_CODEGEN_DLL void setLabelPlaceholderColor(cocos2d::ccColor3B color);
	GEODE_CODEGEN_DLL void setLabelPlaceholderScale(float scale);
	GEODE_CODEGEN_DLL void setMaxLabelScale(float scale);
	GEODE_CODEGEN_DLL void setMaxLabelWidth(int length);
	GEODE_CODEGEN_DLL void setAllowedChars(struct gd::string filter);
	GEODE_CODEGEN_DLL void forceOffset();
	GEODE_CODEGEN_DLL void setString(gd::string text);
	GEODE_CODEGEN_DLL const char* getString();
	GEODE_CODEGEN_DLL cocos2d::CCTextFieldTTF* getTextField();
	GEODE_CODEGEN_DLL cocos2d::CCLabelBMFont* getPlaceholderLabel();
	GEODE_CODEGEN_DLL void setDelegate(TextInputDelegate* delegate);
	GEODE_CODEGEN_DLL bool init(float width, float height, const char* caption, const char* thonburi, int maxCharCount, const char* font);
	GEODE_CODEGEN_DLL void refreshLabel();
	GEODE_CODEGEN_DLL void updateLabel(gd::string p0);
	GEODE_CODEGEN_DLL virtual void registerWithTouchDispatcher();
	GEODE_CODEGEN_DLL virtual void visit();
	GEODE_CODEGEN_DLL virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void textChanged();
	GEODE_CODEGEN_DLL virtual void onClickTrackNode(bool p0);
	GEODE_CODEGEN_DLL virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0);
	GEODE_CODEGEN_DLL virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0);
	GEODE_CODEGEN_DLL virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2);
	GEODE_CODEGEN_DLL virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* p0);
	GEODE_CODEGEN_DLL virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* p0);
	void* m_unknown0;
	gd::string m_caption;
	int m_unknown1;
	bool m_selected;
	bool m_unknown2;
	gd::string m_allowedChars;
	float m_maxLabelWidth;
	float m_maxLabelScale;
	float m_placeholderScale;
	cocos2d::ccColor3B m_placeholderColor;
	cocos2d::ccColor3B m_textColor;
	cocos2d::CCLabelBMFont* m_cursor;
	cocos2d::CCTextFieldTTF* m_textField;
	TextInputDelegate* m_delegate;
	int m_maxLabelLength;
	cocos2d::CCLabelBMFont* m_placeholderLabel;
	bool m_unknown3;
	bool m_usePasswordChar;
	bool m_forceOffset;
};

struct CCMenuItemSpriteExtra : cocos2d::CCMenuItemSprite {
	 static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback) {
		return CCMenuItemSpriteExtra::create(sprite, nullptr, target, callback);
	}
	GEODE_CODEGEN_DLL void useAnimationType(MenuAnimationType type);
	GEODE_CODEGEN_DLL void setDestination(cocos2d::CCPoint const& pos);
	GEODE_CODEGEN_DLL void setOffset(cocos2d::CCPoint const& pos);
	GEODE_CODEGEN_DLL void setScale(float scale);
	GEODE_CODEGEN_DLL static CCMenuItemSpriteExtra* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
	GEODE_CODEGEN_DLL void setSizeMult(float p0);
	GEODE_CODEGEN_DLL CCMenuItemSpriteExtra();
	GEODE_CODEGEN_DLL bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    template <bool T=false>
     bool init(cocos2d::CCNode spr) {
        static_assert(T, "Implement CCMenuItemSpriteExtra::init");
    }

    template <bool T=false>
     void activate() {
        static_assert(T, "Implement CCMenuItemSpriteExtra::activate");
    }

    template <bool T=false>
     void selected() {
        static_assert(T, "Implement CCMenuItemSpriteExtra::selected");
    }

    template <bool T=false>
     void unselected() {
        static_assert(T, "Implement CCMenuItemSpriteExtra::unselected");
    }
	float m_scaleMultiplier;
	float m_baseScale;
	bool m_animationEnabled;
	bool m_colorEnabled;
	float m_unknown;
	gd::string m_unknown2;
	gd::string m_unknown3;
	float m_colorDip;
	cocos2d::CCPoint m_destPosition;
	cocos2d::CCPoint m_offset;
	MenuAnimationType m_animationType;
	cocos2d::CCPoint m_startPosition;
};

struct CreateMenuItem : CCMenuItemSpriteExtra {
	GEODE_CODEGEN_DLL static CreateMenuItem* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);
	GEODE_UNIMPLEMENTED_PAD
	int m_objectID;
	int m_buildTabPage;
	int m_buildTab;
};

struct LocalLevelManager : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static LocalLevelManager* sharedState();
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCDictionary* m_loadData;
	cocos2d::CCDictionary* m_levelData;
	cocos2d::CCArray* m_localLevels;
};

struct CCMoveCNode : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static CCMoveCNode* create();
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL ~CCMoveCNode();
};

struct GameStatsManager : cocos2d::CCNode {
	GEODE_CODEGEN_DLL void awardCurrencyForLevel(GJGameLevel* p0);
	GEODE_CODEGEN_DLL void awardDiamondsForLevel(GJGameLevel* p0);
	GEODE_CODEGEN_DLL void awardSecretKey();
	GEODE_CODEGEN_DLL void getSecretCoinKey(char const* p0);
	GEODE_CODEGEN_DLL void getStat(char const* p0);
	GEODE_CODEGEN_DLL void hasPendingUserCoin(char const* p0);
	GEODE_CODEGEN_DLL void hasSecretCoin(char const* p0);
	GEODE_CODEGEN_DLL void hasUserCoin(char const* p0);
	GEODE_CODEGEN_DLL void incrementStat(char const* p0);
	GEODE_CODEGEN_DLL void incrementStat(char const* p0, int p1);
	GEODE_CODEGEN_DLL GameStatsManager* sharedState();
	GEODE_CODEGEN_DLL void storePendingUserCoin(char const* p0);
	GEODE_CODEGEN_DLL void storeSecretCoin(char const* p0);
	GEODE_CODEGEN_DLL void storeUserCoin(char const* p0);
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCDictionary* m_dailyChests;
	cocos2d::CCDictionary* m_worldAdvertChests;
	cocos2d::CCDictionary* m_activeChallenges;
	cocos2d::CCDictionary* m_upcomingChallenges;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCDictionary* m_playerStats;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCDictionary* m_completedLevels;
	cocos2d::CCDictionary* m_verifiedUserCoins;
	cocos2d::CCDictionary* m_pendingUserCoins;
	cocos2d::CCDictionary* m_purchasedItems;
	cocos2d::CCDictionary* m_onlineCurrencyScores;
	cocos2d::CCDictionary* m_mainCurrencyScores;
	cocos2d::CCDictionary* m_gauntletCurrencyScores;
	cocos2d::CCDictionary* m_timelyCurrencyScores;
	cocos2d::CCDictionary* m_onlineStars;
	cocos2d::CCDictionary* m_timelyStars;
	cocos2d::CCDictionary* m_gauntletDiamondScores;
	cocos2d::CCDictionary* m_timelyDiamondScores;
	cocos2d::CCDictionary* m_unusedCurrencyAwardDict;
	cocos2d::CCDictionary* m_challengeDiamonds;
	cocos2d::CCDictionary* m_completedMappacks;
	cocos2d::CCDictionary* m_weeklyChest;
	cocos2d::CCDictionary* m_treasureRoomChests;
	int m_bonusKeySeed;
	int m_bonusKeyRand;
	int m_bonusKey;
	cocos2d::CCDictionary* m_miscChests;
};

struct LevelBrowserLayer : cocos2d::CCLayer {
	GEODE_CODEGEN_DLL static void scene(GJSearchObject* pSearch);

    template <bool T=false>
     bool init(GJSearchObject* pSearch) {
        static_assert(T, "Implement LevelBrowserLayer::init");
    }

    template <bool T=false>
     void setupLevelBrowser(cocos2d::CCArray* levels) {
        static_assert(T, "Implement LevelBrowserLayer::setupLevelBrowser");
    }
	GEODE_CODEGEN_DLL static LevelBrowserLayer* create(GJSearchObject* pSearch);
	GEODE_UNIMPLEMENTED_PAD
	GJListLayer* m_list;
};

struct ArtistCell : TableViewCell {
	GEODE_CODEGEN_DLL void draw();
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL void loadFromObject(SongInfoObject* p0);
	GEODE_CODEGEN_DLL void onNewgrounds(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void updateBGColor(int p0);
	void* m_idk;
};

struct GJAccountLoginDelegate {
	GEODE_CODEGEN_DLL virtual bool loginAccountFailed(AccountError p0);
	GEODE_CODEGEN_DLL virtual bool loginAccountFinished(int p0, int p1);
};

struct EndLevelLayer {
	GEODE_CODEGEN_DLL static EndLevelLayer* create();
};

struct AnimatedGameObject {
	GEODE_CODEGEN_DLL void playAnimation(int p0);
	GEODE_CODEGEN_DLL void updateChildSpriteColor(cocos2d::_ccColor3B p0);
};

struct GameToolbox {

    template <bool T=false>
     static CCMenuItemToggler* createToggleButton(struct gd::string text, cocos2d::SEL_MenuHandler onToggled, bool isToggled, cocos2d::CCMenu* toggleMenu, struct cocos2d::CCPoint position, cocos2d::CCNode* callbackTarget, cocos2d::CCNode* labelParent, cocos2d::CCArray* toggleArray) {
        static_assert(T, "Implement GameToolbox::createToggleButton");
    }
	GEODE_CODEGEN_DLL static CCMenuItemToggler* createToggleButton(struct gd::string text, cocos2d::SEL_MenuHandler onToggled, bool isToggled, cocos2d::CCMenu* toggleMenu, struct cocos2d::CCPoint position, cocos2d::CCNode* callbackTarget, cocos2d::CCNode* labelParent, float checkboxScale, float labelSize, float maxWidth, struct cocos2d::CCPoint labelOffset, const char* unknown, bool anchorHorizontally, int toggleTag, cocos2d::CCArray* toggleArray);

    template <bool T=false>
     static void transformColor(cocos2d::ccColor3B* src, cocos2d::ccColor3B* dest, cocos2d::ccHSVValue hsv) {
        static_assert(T, "Implement GameToolbox::transformColor");
    }

    template <bool T=false>
     static void alignItemsHorisontally(cocos2d::CCArray* array, bool idk, struct cocos2d::CCPoint start, float pad) {
        static_assert(T, "Implement GameToolbox::alignItemsHorisontally");
    }
};

struct AchievementsLayer {
	GEODE_CODEGEN_DLL void customSetup();
	GEODE_CODEGEN_DLL void loadPage(int p0);
};

struct AchievementNotifier : cocos2d::CCNode {
	GEODE_CODEGEN_DLL void notifyAchievement(const char* title, const char* desc, const char* icon, bool quest);
	GEODE_CODEGEN_DLL AchievementNotifier* sharedState();
	GEODE_CODEGEN_DLL void willSwitchToScene(cocos2d::CCScene* p0);
	GEODE_CODEGEN_DLL void showNextAchievement();
	cocos2d::CCScene* m_currentScene;
	cocos2d::CCArray* m_queue;
	AchievementBar* m_currentAchievement;
};

struct SetupInstantCountPopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupInstantCountPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void onTargetIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateTargetID();
};

struct InheritanceNode : cocos2d::CCObject {
};

struct HSVWidgetPopup : FLAlertLayer {
	ConfigureHSVWidget* m_configureWidget;
	HSVWidgetPopupDelegate* m_delegate;
};

struct AchievementCell {
	GEODE_CODEGEN_DLL void loadFromDict(cocos2d::CCDictionary* p0);
};

struct AchievementBar : cocos2d::CCNodeRGBA {
	GEODE_CODEGEN_DLL static AchievementBar* create(const char* title, const char* desc, const char* icon, bool quest);
	GEODE_UNIMPLEMENTED_PAD
};

struct CurrencyRewardLayer {
	GEODE_CODEGEN_DLL ~CurrencyRewardLayer();
	GEODE_CODEGEN_DLL virtual void update(float p0);
};

struct LikeItemDelegate {
};

struct CCContentLayer : cocos2d::CCLayerColor {

    template <bool T=false>
     static CCContentLayer* create(cocos2d::ccColor4B const& color, float width, float height) {
        static_assert(T, "Implement CCContentLayer::create");
    }
};

struct AchievementManager : cocos2d::CCNode {
	GEODE_CODEGEN_DLL void getAllAchievements();
	GEODE_CODEGEN_DLL AchievementManager* sharedState();
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCDictionary* m_achievements;
	GEODE_UNIMPLEMENTED_PAD
};

struct ConfigureHSVWidget : cocos2d::CCNode {
	cocos2d::CCLabelBMFont* m_hueLabel;
	cocos2d::CCLabelBMFont* m_saturationLabel;
	cocos2d::CCLabelBMFont* m_brightnessLabel;
	Slider* m_hueSlider;
	Slider* m_saturationSlider;
	Slider* m_brightnessSlider;
	cocos2d::ccHSVValue m_value;
};

struct SetupInteractObjectPopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupInteractObjectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void onTargetIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateTargetID();
};

struct RateLevelDelegate {
};

struct UndoObject : cocos2d::CCObject {
	GEODE_CODEGEN_DLL ~UndoObject();
	GEODE_CODEGEN_DLL static UndoObject* create(GameObject* p0, UndoCommand p1);
	GEODE_CODEGEN_DLL static UndoObject* createWithArray(cocos2d::CCArray* p0, UndoCommand p1);

    template <bool T=false>
     static UndoObject* createWithTransformObjects(cocos2d::CCArray* pObjects, UndoCommand nCommand) {
        static_assert(T, "Implement UndoObject::createWithTransformObjects");
    }
	GameObject* m_gameObject;
	UndoCommand m_command;
	cocos2d::CCArray* m_objects;
	bool m_redo;
};

struct GJSearchObject : cocos2d::CCNode {
	GEODE_CODEGEN_DLL SearchType getType();

    template <bool T=false>
     static GJSearchObject* create(SearchType nID) {
        static_assert(T, "Implement GJSearchObject::create");
    }
	SearchType m_searchType;
	gd::string m_searchQuery;
	gd::string m_difficulty;
	gd::string m_length;
	int m_page;
	bool m_starFilter;
	bool m_noStarFilter;
	int m_unknownMember;
	bool m_uncompletedFilter;
	bool m_completedFilter;
	bool m_featuredFilter;
	bool m_originalFilter;
	bool m_twoPlayerFilter;
	bool m_coinsFilter;
	bool m_epicFilter;
	GJDifficulty m_demonFilter;
	int m_unk;
	int m_songID;
	bool m_customSongFilter;
	bool m_songFilter;
};

struct BoomListView : cocos2d::CCLayer, TableViewDelegate, TableViewDataSource {
	 ~BoomListView() {
	    CC_SAFE_RELEASE(m_entries);
	}
	 bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height) {
		return this->init(entries, height, width, 0, type);
	}
	GEODE_CODEGEN_DLL static BoomListView* create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);
	GEODE_CODEGEN_DLL bool init(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);
	GEODE_CODEGEN_DLL virtual void draw();
	GEODE_CODEGEN_DLL virtual void setupList();
	GEODE_CODEGEN_DLL virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
	GEODE_CODEGEN_DLL virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);
	GEODE_CODEGEN_DLL virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);
	GEODE_CODEGEN_DLL virtual int numberOfRowsInSection(unsigned int p0, TableView* p1);
	GEODE_CODEGEN_DLL virtual unsigned int numberOfSectionsInTableView(TableView* p0);
	GEODE_CODEGEN_DLL virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);
	GEODE_CODEGEN_DLL virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);
	GEODE_CODEGEN_DLL virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
	GEODE_CODEGEN_DLL virtual TableViewCell* getListCell(const char* p0);
	GEODE_CODEGEN_DLL virtual void loadCell(TableViewCell* p0, unsigned int p1);
	TableView* m_tableView;
	cocos2d::CCArray* m_entries;
	BoomListType m_type;
	float m_height;
	float m_width;
	float m_itemSeparation;
	int m_currentPage;
};

struct LevelSettingsObject : cocos2d::CCNode {
	GEODE_CODEGEN_DLL ~LevelSettingsObject();
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL static LevelSettingsObject* create();
	GEODE_CODEGEN_DLL void objectFromDict(cocos2d::CCDictionary* p0);
	GEODE_CODEGEN_DLL static LevelSettingsObject* objectFromString(gd::string p0);
	GEODE_CODEGEN_DLL void setupColorsFromLegacyMode(cocos2d::CCDictionary* p0);
	CLASSPARAM(GJEffectManager*, effectManager, 0x120);
	GEODE_UNIMPLEMENTED_PAD
	CLASSPARAM(bool, isTwoPlayer, 0x132);
	GEODE_UNIMPLEMENTED_PAD
	CLASSPARAM(int, fontType, 0x144);
	GEODE_UNIMPLEMENTED_PAD
	CLASSPARAM(GJGameLevel*, level, 0x150);
	gd::string m_unknownStr;
};

struct CCLightFlash {
	GEODE_CODEGEN_DLL static CCLightFlash* create();
	GEODE_CODEGEN_DLL void playEffect(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, int p16, bool p17, bool p18, float p19);
};

struct CCAnimatedSprite : cocos2d::CCSprite {
	GEODE_CODEGEN_DLL void runAnimation(gd::string p0);
	GEODE_CODEGEN_DLL void tweenToAnimation(gd::string p0, float p1);

    template <bool T=false>
     static CCAnimatedSprite* create(const char* file) {
        static_assert(T, "Implement CCAnimatedSprite::create");
    }
	gd::string m_unknown1;
	gd::string m_unknown2;
	GEODE_UNIMPLEMENTED_PAD
	gd::string m_unknown3;
	GEODE_UNIMPLEMENTED_PAD
};

struct GJRobotSprite : CCAnimatedSprite {
	GEODE_CODEGEN_DLL ~GJRobotSprite();
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL virtual void setOpacity(unsigned char p0);
	GEODE_CODEGEN_DLL virtual void hideSecondary();
	GEODE_CODEGEN_DLL static GJRobotSprite* create();
	GEODE_CODEGEN_DLL void updateColor02(cocos2d::_ccColor3B p0);
	GEODE_CODEGEN_DLL void updateFrame(int p0);
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::ccColor3B m_secondaryColor;
};

struct InfoAlertButton {

    template <bool T=false>
     bool init(gd::string const& title, gd::string const& text, float scale) {
        static_assert(T, "Implement InfoAlertButton::init");
    }

    template <bool T=false>
     void activate() {
        static_assert(T, "Implement InfoAlertButton::activate");
    }

    template <bool T=false>
     static InfoAlertButton* create(gd::string const& title, gd::string const& text, float scale) {
        static_assert(T, "Implement InfoAlertButton::create");
    }
};

struct AnimatedShopKeeper : CCAnimatedSprite {
	GEODE_CODEGEN_DLL void animationFinished(const char* p0);

    template <bool T=false>
     static AnimatedShopKeeper* create(ShopType type) {
        static_assert(T, "Implement AnimatedShopKeeper::create");
    }

    template <bool T=false>
     void startAnimating() {
        static_assert(T, "Implement AnimatedShopKeeper::startAnimating");
    }
	float m_unknown1;
	float m_unknown2;
	bool m_unknown;
};

struct BoomScrollLayer : cocos2d::CCLayer {
	GEODE_CODEGEN_DLL BoomScrollLayer();

    template <bool T=false>
     void instantMoveToPage(int page) {
        static_assert(T, "Implement BoomScrollLayer::instantMoveToPage");
    }

    template <bool T=false>
     void moveToPage(int page) {
        static_assert(T, "Implement BoomScrollLayer::moveToPage");
    }
	cocos2d::CCArray* m_dots;
	GEODE_UNIMPLEMENTED_PAD
	ExtendedLayer* m_layer;
	GEODE_UNIMPLEMENTED_PAD
	int m_page;
};

struct SetupCollisionTriggerPopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupCollisionTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void onTargetIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateTargetID();
};

struct CustomSongWidget : cocos2d::CCNode, MusicDownloadDelegate, FLAlertLayerProtocol {
	GEODE_CODEGEN_DLL void FLAlert_Clicked(FLAlertLayer* p0, bool p1);
	GEODE_CODEGEN_DLL void loadSongInfoFinished(SongInfoObject* p0);

    template <bool T=false>
     void updateSongObject(SongInfoObject* song) {
        static_assert(T, "Implement CustomSongWidget::updateSongObject");
    }
	SongInfoObject* m_songInfo;
	GEODE_UNIMPLEMENTED_PAD
	CCMenuItemSpriteExtra* m_downloadBtn;
	GEODE_UNIMPLEMENTED_PAD
};

struct TeleportPortalObject : GameObject {
	GEODE_UNIMPLEMENTED_PAD
	TeleportPortalObject* m_orangePortal;
	bool m_unk470;
	float m_unk474;
	bool m_unk478;
};

struct GJSpecialColorSelect {
	GEODE_CODEGEN_DLL static const char* textForColorIdx(int id);
};

struct GJSpiderSprite {
	GEODE_CODEGEN_DLL ~GJSpiderSprite();
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL static GJSpiderSprite* create();
};

struct GJListLayer : cocos2d::CCLayerColor {
	GEODE_CODEGEN_DLL ~GJListLayer();
	GEODE_CODEGEN_DLL static GJListLayer* create(cocos2d::CCObject* target, const char* title, cocos2d::ccColor4B color, float width, float height);
	BoomListView* m_listView;
};

struct GJComment : cocos2d::CCNode {
	GEODE_CODEGEN_DLL ~GJComment();
	GEODE_CODEGEN_DLL virtual bool init();

    template <bool T=false>
     static GJComment* create(cocos2d::CCDictionary* dict) {
        static_assert(T, "Implement GJComment::create");
    }
	gd::string m_commentString;
	GEODE_UNIMPLEMENTED_PAD
	int m_commentID;
	GEODE_UNIMPLEMENTED_PAD
	int m_likeCount;
	GEODE_UNIMPLEMENTED_PAD
	int m_accountID;
	gd::string m_uploadDate;
};

struct SetupTouchTogglePopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupTouchTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void onTargetIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateTargetID();
};

struct EditorOptionsLayer {
	GEODE_CODEGEN_DLL void onButtonsPerRow(cocos2d::CCObject* p0);
};

struct FMODSound : cocos2d::CCNode {

    template <bool T=false>
     static FMODSound* create(FMOD::Sound* sound) {
        static_assert(T, "Implement FMODSound::create");
    }
	FMOD::Sound* m_sound;
};

struct SetGroupIDLayer : FLAlertLayer, TextInputDelegate {
	GEODE_CODEGEN_DLL void onNextGroupID1(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateGroupIDLabel();
	GEODE_CODEGEN_DLL ~SetGroupIDLayer();

    template <bool T=false>
     void updateEditorLayerID() {
        static_assert(T, "Implement SetGroupIDLayer::updateEditorLayerID");
    }

    template <bool T=false>
     void updateEditorLayerID2() {
        static_assert(T, "Implement SetGroupIDLayer::updateEditorLayerID2");
    }

    template <bool T=false>
     void updateZOrder() {
        static_assert(T, "Implement SetGroupIDLayer::updateZOrder");
    }
	GameObject* m_obj;
	cocos2d::CCArray* m_objs;
	cocos2d::CCArray* m_array0;
	cocos2d::CCArray* m_array1;
	cocos2d::CCLabelBMFont* m_editorLayerText;
	cocos2d::CCLabelBMFont* m_editorLayer2Text;
	cocos2d::CCLabelBMFont* m_zOrderText;
	CCTextInputNode* m_groupIDInput;
	int m_groupIDValue;
	int m_editorLayerValue;
	int m_editorLayer2Value;
	int m_zOrderValue;
	ZLayer m_zLayerValue;
	bool m_unk204;
	bool m_unk205;
	bool m_highDetail;
	bool m_dontFade;
	bool m_dontEnter;
	void* m_somePointerProlly;
	bool m_groupParent;
	bool m_hasEditedGroups;
	int m_unknown;
};

struct EffectGameObject : GameObject {
	GEODE_CODEGEN_DLL void updateLabel();
	GEODE_CODEGEN_DLL static EffectGameObject* create(const char* p0);
	GEODE_CODEGEN_DLL void getTargetColorIndex();
	GEODE_CODEGEN_DLL virtual void triggerObject(GJBaseGameLayer* p0);

    template <bool T=false>
     gd::string getSaveString() {
        static_assert(T, "Implement EffectGameObject::getSaveString");
    }
	CLASSPARAM(int, targetGroup, 0x4F8);
	CLASSPARAM(bool, activateGroup, 0x578);
	CLASSPARAM(bool, touchHoldMode, 0x579);
	CLASSPARAM(int, animationID, 0x584);
	CLASSPARAM(float, spawnDelay, 0x588);
	CLASSPARAM(bool, multiTrigger, 0x594);
	CLASSPARAM(int, targetCount, 0x598);
	CLASSPARAM(int, compareType, 0x5A0);
	CLASSPARAM(int, itemBlockBID, 0x5A8);
	CLASSPARAM(int, itemBlockID, 0x5B0);
	cocos2d::ccColor3B m_colColor;
	float m_duration;
	float m_opacity;
	int m_targetGroupID;
	int m_centerGroupID;
	float m_shakeStrength;
	float m_shakeInterval;
	bool m_tintGround;
	bool m_playerColor1;
	bool m_playerColor2;
	bool m_blending;
	cocos2d::CCPoint m_move;
	EasingType m_easingType;
	float m_easingRate;
	bool m_lockToPlayerX;
	bool m_lockToPlayerY;
	bool m_useTarget;
	MoveTargetType m_moveTargetType;
	int m_rotateDegrees;
	int m_times360;
	bool m_lockObjectRotation;
	cocos2d::CCPoint m_followMod;
	bool UndocuementedLevelProperty74;
	float m_followYSpeed;
	float m_followYDelay;
	int m_followYOffset;
	float m_followYMaxSpeed;
	float m_fadeInTime;
	float m_holdTime;
	float m_fadeOutTime;
	int m_pulseHSVMode;
	int m_pulseGroupMode;
	cocos2d::ccHSVValue m_HSVValue;
	int m_copyColorID;
	bool m_copyOpacity;
	bool m_pulseMainOnly;
	bool m_pulseDetailOnly;
	bool m_pulseExclusive;
	bool m_activateGroup;
	bool m_touchHoldMode;
	TouchToggleMode m_touchToggleMode;
	bool m_touchDualMode;
	int m_animationID;
	float m_spawnDelay;
	cocos2d::CCPoint m_spawnPosition;
	bool m_multiTrigger;
	bool m_editorDisabled;
	int m_targetCount;
	bool m_subtractCount;
	ComparisonType m_comparisonType;
	bool m_multiActivate;
	bool m_triggerOnExit;
	int m_blockBID;
	bool m_dynamicBlock;
	int m_targetItemID;
	int m_pickupMode;
	GEODE_UNIMPLEMENTED_PAD
};

struct GJGroundLayer {

    template <bool T=false>
     void updateGroundWidth() {
        static_assert(T, "Implement GJGroundLayer::updateGroundWidth");
    }
};

struct DialogLayer : cocos2d::CCLayerColor {
	GEODE_CODEGEN_DLL static DialogLayer* create(DialogObject* dialog, int color);
	GEODE_CODEGEN_DLL static DialogLayer* createWithObjects(cocos2d::CCArray* dialogs, int color);
	GEODE_CODEGEN_DLL static DialogLayer* createDialogLayer(DialogObject* p0, cocos2d::CCArray* p1, int p2);

    template <bool T=false>
     void init(DialogLayer* p0, DialogObject* p1, cocos2d::CCArray* p2, int p3) {
        static_assert(T, "Implement DialogLayer::init");
    }

    template <bool T=false>
     cocos2d::CCAction* animateIn(int location) {
        static_assert(T, "Implement DialogLayer::animateIn");
    }
	GEODE_CODEGEN_DLL ~DialogLayer();
	GEODE_CODEGEN_DLL virtual void onEnter();
	GEODE_CODEGEN_DLL virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);
	GEODE_CODEGEN_DLL virtual void registerWithTouchDispatcher();
	GEODE_CODEGEN_DLL virtual void keyBackClicked();
	GEODE_CODEGEN_DLL virtual void keyDown(cocos2d::enumKeyCodes p0);
	GEODE_CODEGEN_DLL virtual void fadeInTextFinished(TextArea* p0);
};

struct GJItemIcon {
	GEODE_CODEGEN_DLL GJItemIcon* createBrowserIcon(UnlockType _type, int _id);
	GEODE_CODEGEN_DLL static GJItemIcon* create(UnlockType _type, int _id, cocos2d::ccColor3B _col1, cocos2d::ccColor3B _col2, bool _un0, bool _un1, bool _un2, cocos2d::ccColor3B _col3);
};

struct AudioEffectsLayer {
	GEODE_CODEGEN_DLL void audioStep(float p0);
	GEODE_CODEGEN_DLL static AudioEffectsLayer* create(gd::string p0);
	GEODE_CODEGEN_DLL void resetAudioVars();
};

struct LevelDownloadDelegate {
};

struct LevelInfoLayer : cocos2d::CCLayer, LevelDownloadDelegate, LevelUpdateDelegate, RateLevelDelegate, LikeItemDelegate, FLAlertLayerProtocol, LevelDeleteDelegate, NumberInputDelegate, SetIDPopupDelegate {

    template <bool T=false>
     static LevelInfoLayer* create(GJGameLevel* level) {
        static_assert(T, "Implement LevelInfoLayer::create");
    }

    template <bool T=false>
     void onGarage(cocos2d::CCObject* pSender) {
        static_assert(T, "Implement LevelInfoLayer::onGarage");
    }
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCMenu* m_playBtnMenu;
	GJGameLevel* m_level;
	cocos2d::CCArray* m_unknown;
	CCMenuItemSpriteExtra* m_likeBtn;
	CCMenuItemSpriteExtra* m_starRateBtn;
	CCMenuItemSpriteExtra* m_demonRateBtn;
	GEODE_UNIMPLEMENTED_PAD
	CCMenuItemToggler* m_toggler;
	cocos2d::CCLabelBMFont* m_label0;
	cocos2d::CCLabelBMFont* m_label1;
	cocos2d::CCLabelBMFont* m_label2;
	cocos2d::CCLabelBMFont* m_label3;
	cocos2d::CCLabelBMFont* m_label4;
	cocos2d::CCLabelBMFont* m_label5;
	CCMenuItemSpriteExtra* m_cloneBtn;
	GEODE_UNIMPLEMENTED_PAD
};

struct GauntletSelectLayer {

    template <bool T=false>
     static GauntletSelectLayer* create() {
        static_assert(T, "Implement GauntletSelectLayer::create");
    }
};

struct CCNodeContainer : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static CCNodeContainer* create();
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL void visit();
};

struct GJCommentListLayer : cocos2d::CCLayerColor {
	GEODE_CODEGEN_DLL ~GJCommentListLayer();
	GEODE_CODEGEN_DLL static GJCommentListLayer* create(BoomListView* p0, char const* p1, cocos2d::_ccColor4B p2, float p3, float p4, bool p5);
	BoomListView* m_list;
};

struct ButtonSprite : cocos2d::CCSprite {
	 static ButtonSprite* create(char const* caption) {
		return ButtonSprite::create(caption, 0, 0, "goldFont.fnt", "GJ_button_01.png", .0f, 1.f);
	}
	 static ButtonSprite* create(char const* caption, const char* font, const char* texture, float scale = 1.f) {
		return ButtonSprite::create(caption, 0, 0, font, texture, .0f, scale);
	}
	GEODE_CODEGEN_DLL static ButtonSprite* create(const char* caption, int width, int unknown, float scale, bool absoluteWidth, const char* font, const char* texture, float height);
	
	/**
	* Create a ButtonSprite with text, a font and a texture.
	* @param caption The text of the ButtonSprite
	* @param width Sprite width; ignored if `absolute` is false
	* @param absolute Whether to use absolute width or not
	* @param font The name of the BM font file to use
	* @param texture The name of the background sprite file (can't be in a spritesheet)
	* @param height The height of the button, leave 0 for automatic
	* @param scale Scale of text
	* @returns Pointer to the created ButtonSprite, or nullptr on error
	*/
	GEODE_CODEGEN_DLL static ButtonSprite* create(const char* caption, int width, bool absolute, const char* font, const char* texture, float height, float scale);
	GEODE_CODEGEN_DLL static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4);
	GEODE_CODEGEN_DLL void updateBGImage(const char* p0);
	GEODE_CODEGEN_DLL static ButtonSprite* create(char const* p0, float p1);

    template <bool T=false>
     void setString(const char* txt) {
        static_assert(T, "Implement ButtonSprite::setString");
    }

    template <bool T=false>
     void updateSpriteBGSize(cocos2d::CCPoint const& offset) {
        static_assert(T, "Implement ButtonSprite::updateSpriteBGSize");
    }
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCLabelBMFont* m_label;
	cocos2d::CCSprite* m_subSprite;
	cocos2d::CCSprite* m_subBGSprite;
	cocos2d::extension::CCScale9Sprite* m_BGSprite;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCPoint m_spritePosition;
};

struct Slider : cocos2d::CCLayer {
	GEODE_CODEGEN_DLL void setValue(float val);
	GEODE_CODEGEN_DLL void setBarVisibility(bool v);
	GEODE_CODEGEN_DLL static Slider* create(cocos2d::CCNode target, cocos2d::SEL_MenuHandler click, float scale);
	GEODE_CODEGEN_DLL float getValue();

    template <bool T=false>
     void updateBar() {
        static_assert(T, "Implement Slider::updateBar");
    }
	GEODE_CODEGEN_DLL static Slider* create(cocos2d::CCNode target, cocos2d::SEL_MenuHandler click, const char* grooveSpr, const char* thumbSpr, const char* thumbSprSel, float scale);
	SliderTouchLogic* m_touchLogic;
	cocos2d::CCSprite* m_sliderBar;
	cocos2d::CCSprite* m_groove;
	float m_unknown;
	float m_height;
};

struct GhostTrailEffect {
};

struct SetItemIDLayer {
	GEODE_CODEGEN_DLL static SetItemIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);
};

struct ColorSelectPopup : FLAlertLayer, cocos2d::extension::ColorPickerDelegate, TextInputDelegate, GJSpecialColorSelectDelegate {

    template <bool T=false>
     void colorValueChanged(cocos2d::ccColor3B color) {
        static_assert(T, "Implement ColorSelectPopup::colorValueChanged");
    }
	cocos2d::extension::CCControlColourPicker* m_colorPicker;
	cocos2d::CCLabelBMFont* m_unk1DC;
	cocos2d::CCLabelBMFont* m_label;
	Slider* m_unk1E4;
	Slider* m_slider;
	EffectGameObject* m_effectGameObject;
	cocos2d::CCArray* m_unk1F0;
	CCMenuItemToggler* m_toggler1;
	CCMenuItemToggler* m_toggler2;
	unsigned int m_rgbLastColor;
	cocos2d::CCSprite* m_unk200;
	cocos2d::CCSprite* m_unk204;
	unsigned int m_bgrColor;
	GJColorSetupLayer* m_colorSetupLayer;
	float m_fadeTime;
	int m_olayerColor;
	bool m_isBlending;
	float m_opacity;
	ColorAction* m_colorAction;
	CCTextInputNode* m_textInput1;
	bool m_unk228;
	bool m_isTouchTrigger;
	bool m_unk22A;
	bool m_isMultipleColorTrigger;
	bool m_unk22C;
	bool m_isColorTrigger;
	int m_colorID;
	bool m_unk234;
	int m_copyChannelID;
	bool m_copyOpacity;
	ConfigureHSVWidget* m_configurehsvwidget;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCArray* m_unk254;
	cocos2d::CCArray* m_unk258;
	CCTextInputNode* m_textInput2;
	GEODE_UNIMPLEMENTED_PAD
	CCMenuItemToggler* m_toggler3;
	CCMenuItemToggler* m_toggler4;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCArray* m_unk274;
	bool m_spawnTrigger;
	bool m_multiTrigger;
	bool m_copyColor;
};

struct GJScaleControl : cocos2d::CCLayer {

    template <bool T=false>
     void updateLabel(float value) {
        static_assert(T, "Implement GJScaleControl::updateLabel");
    }

    template <bool T=false>
     void loadValues(GameObject* obj, cocos2d::CCArray* objs) {
        static_assert(T, "Implement GJScaleControl::loadValues");
    }
	Slider* m_slider;
	unsigned int m_touchID;
	float m_value;
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCLabelBMFont* m_label;
	GJScaleControlDelegate* m_delegate;
};

struct GJEffectManager : cocos2d::CCNode {
	GEODE_CODEGEN_DLL virtual bool init();
	GEODE_CODEGEN_DLL void activeColorForIndex(int p0);
	GEODE_CODEGEN_DLL void activeOpacityForIndex(int p0);
	GEODE_CODEGEN_DLL void addAllInheritedColorActions(cocos2d::CCArray* p0);
	GEODE_CODEGEN_DLL void addGroupPulseEffect(PulseEffectAction* p0);
	GEODE_CODEGEN_DLL void calculateBaseActiveColors();
	GEODE_CODEGEN_DLL void calculateInheritedColor(int p0, ColorAction* p1);
	GEODE_CODEGEN_DLL void calculateLightBGColor(cocos2d::_ccColor3B p0);
	GEODE_CODEGEN_DLL void colorActionChanged(ColorAction* p0);
	GEODE_CODEGEN_DLL void colorExists(int p0);
	GEODE_CODEGEN_DLL void colorForEffect(cocos2d::_ccColor3B p0, cocos2d::_ccHSVValue p1);
	GEODE_CODEGEN_DLL cocos2d::_ccColor3B colorForGroupID(int p0, cocos2d::_ccColor3B const& p1, bool p2);
	GEODE_CODEGEN_DLL void colorForIndex(int p0);
	GEODE_CODEGEN_DLL void colorForPulseEffect(cocos2d::_ccColor3B const& p0, PulseEffectAction* p1);
	GEODE_CODEGEN_DLL void countChangedForItem(int p0);
	GEODE_CODEGEN_DLL void countForItem(int p0);
	GEODE_CODEGEN_DLL static GJEffectManager* create();
	GEODE_CODEGEN_DLL void createFollowCommand(float p0, float p1, float p2, int p3, int p4, bool p5, int p6);
	GEODE_CODEGEN_DLL void createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, int p7);
	GEODE_CODEGEN_DLL void createPlayerFollowCommand(float p0, float p1, int p2, float p3, float p4, int p5, int p6);
	GEODE_CODEGEN_DLL void createRotateCommand(int p0, float p1, int p2, int p3, int p4, float p5, bool p6, int p7);
	GEODE_CODEGEN_DLL void getAllColorActions();
	GEODE_CODEGEN_DLL void getAllColorSprites();
	GEODE_CODEGEN_DLL const cocos2d::_ccColor3B& getColorAction(int p0);
	GEODE_CODEGEN_DLL const cocos2d::_ccColor3B& getColorSprite(int p0);
	GEODE_CODEGEN_DLL void getCurrentStateString();
	GEODE_CODEGEN_DLL void getLoadedMoveOffset();
	GEODE_CODEGEN_DLL void getMixedColor(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1, float p2);
	GEODE_CODEGEN_DLL uint8_t getOpacityActionForGroup(int p0);
	GEODE_CODEGEN_DLL void getSaveString();
	GEODE_CODEGEN_DLL void handleObjectCollision(bool p0, int p1, int p2);
	GEODE_CODEGEN_DLL void hasActiveDualTouch();
	GEODE_CODEGEN_DLL void hasBeenTriggered(int p0);
	GEODE_CODEGEN_DLL void hasPulseEffectForGroupID(int p0);
	GEODE_CODEGEN_DLL bool isGroupEnabled(int p0);
	GEODE_CODEGEN_DLL void keyForGroupIDColor(int p0, cocos2d::_ccColor3B const& p1, bool p2);
	GEODE_CODEGEN_DLL void loadState(gd::string p0);
	GEODE_CODEGEN_DLL void objectsCollided(int p0, int p1);
	GEODE_CODEGEN_DLL void opacityForIndex(int p0);
	GEODE_CODEGEN_DLL float opacityModForGroup(int p0);
	GEODE_CODEGEN_DLL void playerButton(bool p0, bool p1);
	GEODE_CODEGEN_DLL void playerDied();
	GEODE_CODEGEN_DLL void postCollisionCheck();
	GEODE_CODEGEN_DLL void preCollisionCheck();
	GEODE_CODEGEN_DLL void prepareMoveActions(float p0, bool p1);
	GEODE_CODEGEN_DLL void processColors();
	GEODE_CODEGEN_DLL void processCopyColorPulseActions();
	GEODE_CODEGEN_DLL void processInheritedColors();
	GEODE_CODEGEN_DLL void processPulseActions();
	GEODE_CODEGEN_DLL void registerCollisionTrigger(int p0, int p1, int p2, bool p3, bool p4, int p5);
	GEODE_CODEGEN_DLL void removeAllPulseActions();
	GEODE_CODEGEN_DLL void removeColorAction(int p0);
	GEODE_CODEGEN_DLL void reset();
	GEODE_CODEGEN_DLL void resetColorCache();
	GEODE_CODEGEN_DLL void resetEffects();
	GEODE_CODEGEN_DLL void resetMoveActions();
	GEODE_CODEGEN_DLL void resetToggledGroups();
	GEODE_CODEGEN_DLL void resetTriggeredIDs();
	GEODE_CODEGEN_DLL void runCountTrigger(int p0, int p1, bool p2, int p3, bool p4, int p5);
	GEODE_CODEGEN_DLL void runDeathTrigger(int p0, bool p1, int p2);
	GEODE_CODEGEN_DLL OpacityEffectAction* runOpacityActionOnGroup(int p0, float p1, float p2, int p3);
	GEODE_CODEGEN_DLL void runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::_ccColor3B p6, cocos2d::_ccHSVValue p7, int p8, bool p9, bool p10, bool p11, int p12);
	GEODE_CODEGEN_DLL void runTouchTriggerCommand(int p0, bool p1, TouchTriggerType p2, bool p3, int p4);
	GEODE_CODEGEN_DLL void setColorAction(ColorAction* p0, int p1);
	GEODE_CODEGEN_DLL void setFollowing(int p0, int p1, bool p2);
	GEODE_CODEGEN_DLL void setupFromString(gd::string p0);
	GEODE_CODEGEN_DLL void shouldBlend(int p0);
	GEODE_CODEGEN_DLL void spawnGroup(int p0, float p1, int p2);
	GEODE_CODEGEN_DLL void stopActionsForTrigger(EffectGameObject* p0);
	GEODE_CODEGEN_DLL void stopMoveActionsForGroup(int p0);
	GEODE_CODEGEN_DLL void storeTriggeredID(int p0);
	GEODE_CODEGEN_DLL void toggleGroup(int p0, bool p1);
	GEODE_CODEGEN_DLL void traverseInheritanceChain(InheritanceNode* p0);
	GEODE_CODEGEN_DLL void updateActiveOpacityEffects();
	GEODE_CODEGEN_DLL void updateColorAction(ColorAction* p0);
	GEODE_CODEGEN_DLL void updateColorEffects(float p0);
	GEODE_CODEGEN_DLL void updateColors(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1);
	GEODE_CODEGEN_DLL void updateEffects(float p0);
	GEODE_CODEGEN_DLL void updateOpacityAction(OpacityEffectAction* p0);
	GEODE_CODEGEN_DLL void updateOpacityEffects(float p0);
	GEODE_CODEGEN_DLL void updatePulseEffects(float p0);
	GEODE_CODEGEN_DLL void updateSpawnTriggers(float p0);
	GEODE_CODEGEN_DLL void wasFollowing(int p0, int p1);
	GEODE_CODEGEN_DLL void wouldCreateLoop(InheritanceNode* p0, int p1);
	GEODE_CODEGEN_DLL ~GJEffectManager();
	GJBaseGameLayer* m_gameLayer;
	cocos2d::CCDictionary* m_colorActions;
	cocos2d::CCDictionary* m_colorSprites;
	cocos2d::CCDictionary* m_pulseActionsForGroup;
	cocos2d::CCDictionary* m_colorCache;
	cocos2d::CCDictionary* m_opacityActionsForGroup;
	cocos2d::CCDictionary* m_f0150;
	cocos2d::CCArray* m_opacityActions;
	cocos2d::CCArray* m_touchActions;
	cocos2d::CCDictionary* m_countActions;
	cocos2d::CCArray* m_onDeathActions;
	cocos2d::CCArray* m_collisionActions;
	cocos2d::CCDictionary* m_f0180;
	cocos2d::CCDictionary* m_f0188;
	gd::vector<InheritanceNode*> m_inheritanceNodesForGroup;
	cocos2d::CCDictionary* m_f01a8;
	cocos2d::CCDictionary* m_collisionActionsForGroup1;
	cocos2d::CCDictionary* m_collisionActionsForGroup2;
	gd::vector<ColorAction*> m_colorActionsForGroup;
	gd::vector<ColorActionSprite*> m_colorSpritesForGroup;
	bool m_pulseExistsForGroup[1100];
	bool m_f063c;
	bool m_opactiyExistsForGroup[1100];
	int m_itemValues[1100];
	int m_unusued;
	int* m_unused2;
	cocos2d::CCArray* m_f1bc8;
	cocos2d::CCArray* m_inheritanceChain;
	cocos2d::CCDictionary* m_f1bd8;
	gd::vector<bool> m_groupToggled;
	cocos2d::CCDictionary* m_triggeredIDs;
	cocos2d::CCDictionary* m_followActions;
	cocos2d::CCArray* m_spawnActions;
	cocos2d::CCArray* m_moveActions;
	cocos2d::CCArray* m_f1c28;
	cocos2d::CCNode* m_f1c30;
	cocos2d::CCDictionary* m_f1c38;
	cocos2d::CCDictionary* m_f1c40;
	cocos2d::CCDictionary* m_f1c48;
	cocos2d::CCDictionary* m_f1c50;
	float m_time;
	float m_velocity;
	float m_acceleration;
	bool m_moveOptimizationEnabled;
};

struct DailyLevelPage {

    template <bool T=false>
     static DailyLevelPage* create(bool weekly) {
        static_assert(T, "Implement DailyLevelPage::create");
    }
};

struct CCCircleWave : cocos2d::CCNode {
	GEODE_CODEGEN_DLL static CCCircleWave* create(float p0, float p1, float p2, bool p3);
	GEODE_CODEGEN_DLL static CCCircleWave* create(float p0, float p1, float p2, bool p3, bool p4);
	GEODE_CODEGEN_DLL bool init(float p0, float p1, float p2, bool p3, bool p4);
	GEODE_CODEGEN_DLL void followObject(cocos2d::CCNode p0, bool p1);
	GEODE_CODEGEN_DLL void updatePosition(float p0);

    template <bool T=false>
     void setPosition(cocos2d::CCPoint const& pos) {
        static_assert(T, "Implement CCCircleWave::setPosition");
    }

    template <bool T=false>
     void removeMeAndCleanup() {
        static_assert(T, "Implement CCCircleWave::removeMeAndCleanup");
    }

    template <bool T=false>
     void draw() {
        static_assert(T, "Implement CCCircleWave::draw");
    }

    template <bool T=false>
     void updateTweenAction(float dt, const char* key) {
        static_assert(T, "Implement CCCircleWave::updateTweenAction");
    }
	cocos2d::CCArray* m_children;
	GEODE_UNIMPLEMENTED_PAD
	float m_currentRadius;
	float m_currentOpacity;
	CLASSPARAM(cocos2d::ccColor3B, color, 0x134);
	cocos2d::CCPoint m_circleCenter;
	int m_filled;
	int m_lineWidth;
	float m_opacityMultiplier;
	bool m_blendFuncDirty;
	CLASSPARAM(CCCircleWaveDelegate*, delegate, 0x150);
};

struct VideoOptionsLayer : FLAlertLayer {
	GEODE_UNIMPLEMENTED_PAD
	cocos2d::CCArray* m_resolutions;
	GEODE_UNIMPLEMENTED_PAD
	int m_currentResolution;
};

struct PauseLayer : CCBlockLayer {
	GEODE_CODEGEN_DLL static PauseLayer* create(bool p0);
	GEODE_CODEGEN_DLL void onEdit(cocos2d::CCObject* p0);

    template <bool T=false>
     void createToggleButton(cocos2d::SEL_MenuHandler callback, bool on, cocos2d::CCMenu* menu, struct gd::string caption, struct cocos2d::CCPoint pos) {
        static_assert(T, "Implement PauseLayer::createToggleButton");
    }
	bool m_unknown;
	bool m_unknown2;
};

struct LevelSelectLayer : cocos2d::CCLayer {

    template <bool T=false>
     static LevelSelectLayer* create(int lvl) {
        static_assert(T, "Implement LevelSelectLayer::create");
    }
	GEODE_UNIMPLEMENTED_PAD
	BoomScrollLayer* m_scrollLayer;
};

struct SongInfoObject : cocos2d::CCNode {
	GEODE_CODEGEN_DLL ~SongInfoObject();
	GEODE_CODEGEN_DLL virtual void encodeWithCoder(DS_Dictionary* p0);
	GEODE_CODEGEN_DLL virtual bool canEncode();
	int m_songID;
	gd::string m_songName;
	gd::string m_artistName;
	gd::string m_youtubeVideo;
	gd::string m_youtubeChannel;
	gd::string m_songURL;
	int m_artistID;
	float m_fileSize;
	bool m_isUnknownSong;
	int m_priority;
	LevelSettingsObject* m_levelSettings;
};

struct AppDelegate : cocos2d::CCApplication {
	GEODE_CODEGEN_DLL void bgScale();
	GEODE_CODEGEN_DLL virtual bool applicationDidFinishLaunching();
	GEODE_CODEGEN_DLL virtual void applicationDidEnterBackground();
	GEODE_CODEGEN_DLL virtual void applicationWillEnterForeground();
	GEODE_CODEGEN_DLL virtual void applicationWillBecomeActive();
	GEODE_CODEGEN_DLL virtual void applicationWillResignActive();
	GEODE_CODEGEN_DLL virtual void trySaveGame();
	GEODE_CODEGEN_DLL virtual void willSwitchToScene(cocos2d::CCScene* p0);
	GEODE_CODEGEN_DLL static AppDelegate* get();
	cocos2d::CCScene* m_runningScene;
};

struct GJAccountManager : cocos2d::CCNode {

    template <bool T=false>
     static GJAccountManager* sharedState() {
        static_assert(T, "Implement GJAccountManager::sharedState");
    }
	GEODE_UNIMPLEMENTED_PAD
	gd::string m_password;
	gd::string m_username;
};

struct LevelEditorLayer : GJBaseGameLayer, LevelSettingsDelegate {
	GEODE_CODEGEN_DLL static LevelEditorLayer* get();
	GEODE_CODEGEN_DLL static cocos2d::CCScene* scene(GJGameLevel* level);
	GEODE_CODEGEN_DLL ~LevelEditorLayer();
	GEODE_CODEGEN_DLL virtual void update(float p0);
	GEODE_CODEGEN_DLL virtual void draw();
	GEODE_CODEGEN_DLL virtual void updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9);
	GEODE_CODEGEN_DLL virtual void flipGravity(PlayerObject* p0, bool p1, bool p2);
	GEODE_CODEGEN_DLL virtual void calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5);
	GEODE_CODEGEN_DLL virtual void addToGroup(GameObject* p0, int p1, bool p2);
	GEODE_CODEGEN_DLL virtual void removeFromGroup(GameObject* p0, int p1);
	GEODE_CODEGEN_DLL virtual void timeForXPos(float p0);
	GEODE_CODEGEN_DLL virtual void xPosForTime(float p0);
	GEODE_CODEGEN_DLL virtual void levelSettingsUpdated();
	GEODE_CODEGEN_DLL static LevelEditorLayer* create(GJGameLevel* level);
	GEODE_CODEGEN_DLL void activateTriggerEffect(EffectGameObject* p0, float p1, float p2, float p3);
	GEODE_CODEGEN_DLL GameObject* addObjectFromString(gd::string p0);
	GEODE_CODEGEN_DLL void addSpecial(GameObject* p0);
	GEODE_CODEGEN_DLL void addToRedoList(UndoObject* p0);
	GEODE_CODEGEN_DLL void addToUndoList(UndoObject* p0, bool p1);
	GEODE_CODEGEN_DLL void animateInDualGround(GameObject* p0, float p1, bool p2);
	GEODE_CODEGEN_DLL void checkCollisions(PlayerObject* p0, float p1);
	GEODE_CODEGEN_DLL void createBackground();
	GEODE_CODEGEN_DLL void createGroundLayer();
	GEODE_CODEGEN_DLL GameObject* createObject(int p0, cocos2d::CCPoint p1, bool p2);
	GEODE_CODEGEN_DLL void createObjectsFromSetup(gd::string p0);
	GEODE_CODEGEN_DLL void createObjectsFromString(gd::string p0, bool p1);
	GEODE_CODEGEN_DLL void getLastObjectX();
	GEODE_CODEGEN_DLL void getLevelString();
	GEODE_CODEGEN_DLL void getNextColorChannel();
	GEODE_CODEGEN_DLL void getNextFreeBlockID(cocos2d::CCArray* p0);
	GEODE_CODEGEN_DLL int getNextFreeGroupID(cocos2d::CCArray* p0);
	GEODE_CODEGEN_DLL void getNextFreeItemID(cocos2d::CCArray* p0);
	GEODE_CODEGEN_DLL void getObjectRect(GameObject* p0, bool p1);
	GEODE_CODEGEN_DLL void getRelativeOffset(GameObject* p0);
	GEODE_CODEGEN_DLL void handleAction(bool p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL bool init(GJGameLevel* p0);
	GEODE_CODEGEN_DLL void objectAtPosition(cocos2d::CCPoint p0);
	GEODE_CODEGEN_DLL void objectMoved(GameObject* p0);
	GEODE_CODEGEN_DLL void objectsInRect(cocos2d::CCRect p0, bool p1);
	GEODE_CODEGEN_DLL void onPlaytest();
	GEODE_CODEGEN_DLL void onStopPlaytest();

    template <bool T=false>
     void pasteAttributeState(GameObject* obj, cocos2d::CCArray* objs) {
        static_assert(T, "Implement LevelEditorLayer::pasteAttributeState");
    }
	GEODE_CODEGEN_DLL void playMusic();
	GEODE_CODEGEN_DLL void recreateGroups();
	GEODE_CODEGEN_DLL void redoLastAction();
	GEODE_CODEGEN_DLL void removeAllObjects();
	GEODE_CODEGEN_DLL void removeAllObjectsOfType(int p0);
	GEODE_CODEGEN_DLL void removeObject(GameObject* p0, bool p1);
	GEODE_CODEGEN_DLL void removeSpecial(GameObject* p0);
	GEODE_CODEGEN_DLL void resetMovingObjects();
	GEODE_CODEGEN_DLL void resetObjectVector();
	GEODE_CODEGEN_DLL void resetToggledGroups();
	GEODE_CODEGEN_DLL void resetToggledGroupsAndObjects();
	GEODE_CODEGEN_DLL void resetUnusedColorChannels();
	GEODE_CODEGEN_DLL void rotationForSlopeNearObject(GameObject* p0);
	GEODE_CODEGEN_DLL void runColorEffect(EffectGameObject* p0, int p1, float p2, float p3, bool p4);
	GEODE_CODEGEN_DLL void setupLevelStart(LevelSettingsObject* p0);
	GEODE_CODEGEN_DLL void sortStickyGroups();
	GEODE_CODEGEN_DLL void stopTriggersInGroup(int p0, float p1);
	GEODE_CODEGEN_DLL void toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);
	GEODE_CODEGEN_DLL void toggleGroupPreview(int p0, bool p1);
	GEODE_CODEGEN_DLL void transferDefaultColors(GJEffectManager* p0, GJEffectManager* p1);
	GEODE_CODEGEN_DLL void undoLastAction();
	GEODE_CODEGEN_DLL void updateBGAndGColors();
	GEODE_CODEGEN_DLL void updateBlendValues();
	GEODE_CODEGEN_DLL void updateDualGround(PlayerObject* p0, int p1, bool p2);
	GEODE_CODEGEN_DLL void updateEditorMode();
	GEODE_CODEGEN_DLL void updateGameObjectsNew();
	GEODE_CODEGEN_DLL void updateGround(float p0);
	GEODE_CODEGEN_DLL void updateGroundWidth();
	GEODE_CODEGEN_DLL void updateOptions();
	GEODE_CODEGEN_DLL void updateToggledGroups();
	GEODE_CODEGEN_DLL void updateVisibility(float p0);
	GEODE_PAD(0x8);
	bool m_unk2d0;
	bool m_unk2d1;
	bool m_unk2d2;
	bool m_unk2d3;
	bool m_gridEnabled;
	bool m_unk2d5;
	bool m_unk2d6;
	bool m_unk2d7;
	bool m_hasLDM;
	bool m_moreUndo;
	bool m_unk2da;
	bool m_unk2db;
	bool m_highDetail;
	GEODE_PAD(0x60);
	GameObject* m_copyStateObject;
	GEODE_PAD(0x12);
	int m_coinCountRand1;
	int m_coinCountRand2;
	int m_coinCount;
	GEODE_PAD(0x50);
	int m_currentLayer;
	GEODE_PAD(0x50);
	EditorUI* m_editorUI;
	GEODE_PAD(0x8);
	cocos2d::CCArray* m_undoObjects;
	cocos2d::CCArray* m_someArray;
	GEODE_PAD(0x16);
	int m_objectsRand1;
	int m_objectsRand2;
	int m_objects;
	DrawGridLayer* m_drawGridLayer;
	GJGameLevel* m_level;
	PlaybackMode m_playbackMode;
	GEODE_UNIMPLEMENTED_PAD
	GJGroundLayer* m_groundLayer;
};

struct SetupOpacityPopup : FLAlertLayer {
	GEODE_CODEGEN_DLL static SetupOpacityPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);
	GEODE_CODEGEN_DLL void onTargetIDArrow(cocos2d::CCObject* p0);
	GEODE_CODEGEN_DLL void textChanged(CCTextInputNode* p0);
	GEODE_CODEGEN_DLL void updateTargetID();
};

struct CustomListView : BoomListView {
	 static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float width, float height) {
		return CustomListView::create(entries, width, height, 0, type);
	}
	GEODE_CODEGEN_DLL static CustomListView* create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);
	GEODE_CODEGEN_DLL virtual TableViewCell* getListCell(const char* p0);
	GEODE_CODEGEN_DLL virtual void loadCell(TableViewCell* p0, unsigned int p1);
	GEODE_CODEGEN_DLL virtual void setupList();
};
