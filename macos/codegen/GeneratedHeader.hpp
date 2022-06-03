#pragma once
#include <gdstdlib.hpp>
#include <cocos2d.h>
class UploadMessageDelegate;
class UILayer;
class TextInputDelegate;
class TextArea;
class TextAlertPopup;
class TableViewDelegate;
class TableViewDataSource;
class StatsCell;
class StartPosObject;
class CCIndexPath;
class TableViewCell;
class SongCell;
class SliderTouchLogic;
class SliderThumb;
class SimplePlayer;
class SpawnTriggerAction;
class FLAlertLayer;
class SetupSpawnPopup;
class SetupShakePopup;
class GJSpecialColorSelectDelegate;
class SetupPulsePopup;
class SetupObjectTogglePopup;
class SetupCountTriggerPopup;
class SetupAnimationPopup;
class SetTargetIDLayer;
class SetIDPopup;
class SelectArtLayer;
class ScrollingLayer;
class RetryLevelLayer;
class SetupPickupTriggerPopup;
class PointNode;
class CCSpritePlus;
class GameObject;
class AnimatedSpriteDelegate;
class PlayerObject;
class PlayerCheckpoint;
class TriggerEffectDelegate;
class GJBaseGameLayer;
class CCCircleWaveDelegate;
class DialogDelegate;
class PlayLayer;
class PlatformToolbox;
class GJDropDownLayer;
class FLAlertLayerProtocol;
class OptionsLayer;
class OpacityEffectAction;
class ObjectToolbox;
class OBB2D;
class NumberInputLayer;
class NumberInputDelegate;
class PlatformDownloadDelegate;
class MusicDownloadManager;
class MusicDownloadDelegate;
class MultilineBitmapFont;
class MoreVideoOptionsLayer;
class MenuLayer;
class MenuGameLayer;
class MapPackCell;
class LoadingCircle;
class ListButtonBar;
class LevelUploadDelegate;
class LevelSettingsDelegate;
class LevelSearchLayer;
class LevelLeaderboard;
class LevelCell;
class MoreSearchLayer;
class LeaderboardsLayer;
class SetupInstantCountPopup;
class InheritanceNode;
class LevelUpdateDelegate;
class LevelCommentDelegate;
class CommentUploadDelegate;
class InfoLayer;
class InfoAlertButton;
class GhostTrailEffect;
class LevelDownloadDelegate;
class RateLevelDelegate;
class LikeItemDelegate;
class LevelDeleteDelegate;
class SetIDPopupDelegate;
class LevelInfoLayer;
class GauntletSelectLayer;
class GameRateDelegate;
class CCAnimatedSprite;
class GJRobotSprite;
class GooglePlayDelegate;
class GManager;
class GJUserScore;
class GJSpriteColor;
class GJScoreCell;
class GJScaleControlDelegate;
class CCMenuItemToggler;
class GJRewardObject;
class OnlineListDelegate;
class GJMessageCell;
class GJMapPack;
class GJLevelScoreCell;
class ListButtonBarDelegate;
class GJGarageLayer;
class GJGameLevel;
class CCScrollLayerExt;
class CCScrollLayerExtDelegate;
class TableView;
class GJDropDownLayerDelegate;
class TopArtistsLayer;
class GJDailyLevelDelegate;
class GJColorSetupLayer;
class GJChallengeDelegate;
class LeaderboardManagerDelegate;
class EndPortalObject;
class LevelPage;
class GJAccountSyncDelegate;
class FriendRequestDelegate;
class SongInfoLayer;
class ObjectManager;
class DrawGridLayer;
class FMODAudioEngine;
class PulseEffectAction;
class CCBlockLayer;
class EditorPauseLayer;
class EditLevelLayer;
class EditButtonBar;
class ToggleTriggerAction;
class DownloadMessageDelegate;
class LoadingLayer;
class DialogObject;
class SetIDLayer;
class HSVWidgetPopupDelegate;
class ColorSelectDelegate;
class ColorSetupDelegate;
class CustomizeObjectLayer;
class GameLevelManager;
class CustomSongLayer;
class CustomSongCell;
class CreatorLayer;
class CurrencyRewardDelegate;
class CreateGuidelinesLayer;
class GameObjectCopy;
class CommentCell;
class MoreOptionsLayer;
class GJRotationControl;
class ColorChannelSprite;
class ExtendedLayer;
class ColorAction;
class CollisionTriggerAction;
class GJRotationControlDelegate;
class EditorUI;
class CollisionBlockPopup;
class CheckpointObject;
class CCMenuItemSpriteExtra;
class CreateMenuItem;
class LocalLevelManager;
class CCMoveCNode;
class CCContentLayer;
class GameStatsManager;
class CCCircleWave;
class LevelBrowserLayer;
class ArtistCell;
class AchievementsLayer;
class AchievementNotifier;
class MessageListDelegate;
class AchievementCell;
class AchievementBar;
class CurrencyRewardLayer;
class ChallengesPage;
class AchievementManager;
class ConfigureHSVWidget;
class SetupInteractObjectPopup;
class UndoObject;
class GJSearchObject;
class GJAccountLoginDelegate;
class EndLevelLayer;
class AnimatedGameObject;
class BoomListView;
class CCTextInputNode;
class GJUserCell;
class LevelSettingsObject;
class UploadPopupDelegate;
class GameToolbox;
class AnimatedShopKeeper;
class BoomScrollLayer;
class SetupCollisionTriggerPopup;
class CustomSongWidget;
class TeleportPortalObject;
class GJSpecialColorSelect;
class GJAccountDelegate;
class SetupTouchTogglePopup;
class GJRewardDelegate;
class EditorOptionsLayer;
class HardStreak;
class GJRequestCell;
class FMODSound;
class SetGroupIDLayer;
class EffectGameObject;
class GJGroundLayer;
class UploadActionDelegate;
class LevelManagerDelegate;
class DialogLayer;
class GJCommentListLayer;
class CountTriggerAction;
class GaragePage;
class GJAccountManager;
class LevelEditorLayer;
class UserInfoDelegate;
class Slider;
class SetItemIDLayer;
class ProfilePage;
class GameSoundManager;
class ButtonSprite;
class CCLightFlash;
class TouchToggleAction;
class ColorActionSprite;
class GJChallengeItem;
class AudioEffectsLayer;
class GJItemIcon;
class VideoOptionsLayer;
class PauseLayer;
class GJListLayer;
class GJSpiderSprite;
class GJScaleControl;
class GJEffectManager;
class LevelSelectLayer;
class SetupOpacityPopup;
class GJAccountBackupDelegate;
class LevelSettingsLayer;
class ColorSelectPopup;
class DailyLevelPage;
class GJComment;
class HSVWidgetPopup;
class CCNodeContainer;
class CCAnimateFrameCache;
class KeybindingsLayer;
class GameManager;
class CustomListView;
class SongInfoObject;
class AppDelegate;
class LabelGameObject;

class GEODE_CODEGEN_DLL UploadMessageDelegate {
public:

};

class GEODE_CODEGEN_DLL UILayer : public cocos2d::CCLayerColor {
public:

    static UILayer* create();

    void disableMenu();

    void enableMenu();

    void pCommand(cocos2d::CCNode* p0);

    void toggleCheckpointsMenu(bool p0);

    void onCheck(cocos2d::CCObject* pSender);

    void onDeleteCheck(cocos2d::CCObject* pSender);

    void onPause(cocos2d::CCObject* pSender);

    virtual void keyDown(cocos2d::enumKeyCodes key);

    virtual void keyUp(cocos2d::enumKeyCodes key);

        GEODE_PAD(0x16);
        cocos2d::CCMenu* m_checkPointMenu;
};

class GEODE_CODEGEN_DLL TextInputDelegate {
public:

    virtual void textChanged(CCTextInputNode* p0);

    virtual void textInputOpened(CCTextInputNode* p0);

    virtual void textInputClosed(CCTextInputNode* p0);

    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    virtual void textInputReturn(CCTextInputNode* p0);

    virtual bool allowTextInput(CCTextInputNode* p0);

};

class GEODE_CODEGEN_DLL TextArea : public cocos2d::CCSprite {
public:
	 TextArea(TextArea const&) : m_fontFile() {}
	 ~TextArea() {}

        TextArea();
    virtual void draw();

    virtual void setOpacity(unsigned char p0);

    bool init(gd::string str, char const* font, float width, float height, cocos2d::CCPoint anchor, float scale, bool disableColor);

    static TextArea* create(gd::string str, char const* font, float width, float height, cocos2d::CCPoint const& anchor, float scale, bool disableColor);

    template <bool T=false>
    void colorAllCharactersTo(cocos2d::ccColor3B color){
        static_assert(T, "Implement TextArea::colorAllCharactersTo");
    }

    void setString(gd::string str);

        bool m_disableColor;
        MultilineBitmapFont* m_label;
        float m_width;
        int m_unknown;
        gd::string m_fontFile;
        float m_height;
};

class GEODE_CODEGEN_DLL TextAlertPopup {
public:

    template <bool T=false>
    static TextAlertPopup* create(gd::string const& text, float time, float scale){
        static_assert(T, "Implement TextAlertPopup::create");
    }

};

class GEODE_CODEGEN_DLL TableViewDelegate {
public:

    virtual void willTweenToIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    virtual void didEndTweenToIndexPath(CCIndexPath& p0, TableView* p1);

    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    virtual void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);

};

class GEODE_CODEGEN_DLL TableViewDataSource {
public:

    virtual int numberOfRowsInSection(unsigned int p0, TableView* p1);

    virtual unsigned int numberOfSectionsInTableView(TableView* p0);

    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);

    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

};

class GEODE_CODEGEN_DLL StatsCell {
public:

    template <bool T=false>
    void updateBGColor(unsigned int index){
        static_assert(T, "Implement StatsCell::updateBGColor");
    }

    void draw();

};

class GEODE_CODEGEN_DLL StartPosObject {
public:

};

class GEODE_CODEGEN_DLL CCIndexPath : public cocos2d::CCObject {
public:

    template <bool T=false>
    static CCIndexPath* create(unsigned int idk1, int idk2){
        static_assert(T, "Implement CCIndexPath::create");
    }

        int m_unknown1;
        int m_unknown2;
};

class GEODE_CODEGEN_DLL TableViewCell : public cocos2d::CCLayer {
public:
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

class GEODE_CODEGEN_DLL SongCell : public TableViewCell {
public:

    template <bool T=false>
    void updateBGColor(unsigned int index){
        static_assert(T, "Implement SongCell::updateBGColor");
    }

};

class GEODE_CODEGEN_DLL SliderTouchLogic : public cocos2d::CCMenu {
public:

    SliderThumb* getThumb() const;

        GEODE_UNIMPLEMENTED_PAD
        float m_length;
        SliderThumb* m_thumb;
        Slider* m_slider;
        bool m_unknown;
        GEODE_UNIMPLEMENTED_PAD
        bool m_vertical;
};

class GEODE_CODEGEN_DLL SliderThumb : public cocos2d::CCMenuItemImage {
public:

    void setValue(float val);

    float getValue();

        float m_length;
        bool m_vertical;
};

class GEODE_CODEGEN_DLL SimplePlayer : public cocos2d::CCSprite {
public:

    void setSecondColor(const cocos2d::ccColor3B& color);

    bool hasGlowOutline();

    void setGlowOutline(bool value);

    bool init(int iconID);

    static SimplePlayer* create(int iconID);

    void updatePlayerFrame(int iconID, IconType iconType);

    void updateColors();

    template <bool T=false>
    void setFrames(const char* firstLayer, const char* secondLayer, const char* birdDome, const char* outlineSprite, const char* detailSprite){
        static_assert(T, "Implement SimplePlayer::setFrames");
    }

    void setColor(const cocos2d::ccColor3B& color);

    template <bool T=false>
    void setOpacity(unsigned char opacity){
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

class GEODE_CODEGEN_DLL SpawnTriggerAction : public cocos2d::CCNode {
public:

    static SpawnTriggerAction* createFromString(gd::string p0);

        bool m_timerEnded;
        float m_delay;
        float m_timer;
        int m_group;
        int m_uuid;
};

class GEODE_CODEGEN_DLL FLAlertLayer : public cocos2d::CCLayerColor {
public:
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

    static FLAlertLayer* create(char const* title, const gd::string& desc, char const* btn);

    virtual void onEnter();

    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void registerWithTouchDispatcher();

    virtual void keyBackClicked();

    virtual void keyDown(cocos2d::enumKeyCodes p0);

    virtual void show();

    bool init(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7);

    static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4);

    static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5);

    static FLAlertLayer* create(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7);

    void onBtn1(cocos2d::CCObject* p0);

    void onBtn2(cocos2d::CCObject* p0);

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

class GEODE_CODEGEN_DLL SetupSpawnPopup : public FLAlertLayer {
public:

    static SetupSpawnPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    void createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCArray* p5);

    void onTargetIDArrow(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateTargetID();

        EffectGameObject* m_selectedObject;
        cocos2d::CCArray* m_selectedArray;
        CCTextInputNode* m_delayTextNode;
        Slider* m_delaySlider;
        float m_delay;
        bool m_touchTriggered;
        bool m_spawnTriggered;
        CCMenuItemToggler* m_touchTriggeredToggle;
        CCMenuItemToggler* m_spawnTriggeredToggle;
        CCTextInputNode* m_targetIDTextNode;
        int m_targetIDValue;
        bool m_textUpdateLock;
        cocos2d::CCArray* m_multiTriggerToggle;
        bool m_multiTrigger;
        bool m_editorDisable;
};

class GEODE_CODEGEN_DLL SetupShakePopup : public FLAlertLayer {
public:

    static SetupShakePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

};

class GEODE_CODEGEN_DLL GJSpecialColorSelectDelegate {
public:

    virtual void colorSelectClosed(GJSpecialColorSelect* p0, int p1);

};

class GEODE_CODEGEN_DLL SetupPulsePopup : public FLAlertLayer, public cocos2d::extension::ColorPickerDelegate, public TextInputDelegate, public GJSpecialColorSelectDelegate {
public:

    template <bool T=false>
    void colorValueChanged(cocos2d::ccColor3B color){
        static_assert(T, "Implement SetupPulsePopup::colorValueChanged");
    }

    template <bool T=false>
    bool init(EffectGameObject* triggerObj, cocos2d::CCArray* triggerObjs){
        static_assert(T, "Implement SetupPulsePopup::init");
    }

    template <bool T=false>
    void updateColorValue(){
        static_assert(T, "Implement SetupPulsePopup::updateColorValue");
    }

    template <bool T=false>
    void onSelectPulseMode(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupPulsePopup::onSelectPulseMode");
    }

    template <bool T=false>
    void updatePulseMode(){
        static_assert(T, "Implement SetupPulsePopup::updatePulseMode");
    }

        cocos2d::extension::CCControlColourPicker* m_colorPicker;
        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCSprite* m_currentColorSpr;
        cocos2d::CCSprite* m_prevColorSpr;
        GEODE_UNIMPLEMENTED_PAD
        int m_pulseMode;
};

class GEODE_CODEGEN_DLL SetupObjectTogglePopup : public FLAlertLayer {
public:

    static SetupObjectTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    bool init(EffectGameObject* p0, cocos2d::CCArray* p1);

    void onTargetIDArrow(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateTargetID();

};

class GEODE_CODEGEN_DLL SetupCountTriggerPopup : public FLAlertLayer {
public:

    static SetupCountTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    void onTargetIDArrow(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateTargetID();

};

class GEODE_CODEGEN_DLL SetupAnimationPopup : public FLAlertLayer {
public:

    static SetupAnimationPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    void onTargetIDArrow(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateTargetID();

};

class GEODE_CODEGEN_DLL SetTargetIDLayer {
public:

    static SetTargetIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1, gd::string p2);

    void onTargetIDArrow(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateTargetID();

};

class GEODE_CODEGEN_DLL SetIDPopup {
public:

};

class GEODE_CODEGEN_DLL SelectArtLayer {
public:

    template <bool T=false>
    static SelectArtLayer* create(SelectArtType type){
        static_assert(T, "Implement SelectArtLayer::create");
    }

};

class GEODE_CODEGEN_DLL ScrollingLayer : public cocos2d::CCLayerColor {
public:

    static ScrollingLayer* create(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2);

};

class GEODE_CODEGEN_DLL RetryLevelLayer {
public:

    static RetryLevelLayer* create();

};

class GEODE_CODEGEN_DLL SetupPickupTriggerPopup : public FLAlertLayer {
public:

    static SetupPickupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    void onItemIDArrow(cocos2d::CCObject* p0);

    void onNextItemID(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateItemID();

        GEODE_UNIMPLEMENTED_PAD
        CCTextInputNode* m_countInput;
};

class GEODE_CODEGEN_DLL PointNode : public cocos2d::CCObject {
public:

    template <bool T=false>
    static PointNode* create(cocos2d::CCPoint point){
        static_assert(T, "Implement PointNode::create");
    }

        cocos2d::CCPoint m_point;
};

class GEODE_CODEGEN_DLL CCSpritePlus : public cocos2d::CCSprite {
public:

    bool initWithSpriteFrameName(const char* p0);

    template <bool T=false>
    void setScaleX(float scale){
        static_assert(T, "Implement CCSpritePlus::setScaleX");
    }

    template <bool T=false>
    void setScaleY(float scale){
        static_assert(T, "Implement CCSpritePlus::setScaleY");
    }

    template <bool T=false>
    void setScale(float scale){
        static_assert(T, "Implement CCSpritePlus::setScale");
    }

    template <bool T=false>
    void setPosition(const cocos2d::CCPoint& pos){
        static_assert(T, "Implement CCSpritePlus::setPosition");
    }

    template <bool T=false>
    void setRotation(float rotation){
        static_assert(T, "Implement CCSpritePlus::setRotation");
    }

    template <bool T=false>
    bool initWithTexture(cocos2d::CCTexture2D* texture){
        static_assert(T, "Implement CCSpritePlus::initWithTexture");
    }

    template <bool T=false>
    void setFlipX(bool flip){
        static_assert(T, "Implement CCSpritePlus::setFlipX");
    }

    template <bool T=false>
    void setFlipY(bool flip){
        static_assert(T, "Implement CCSpritePlus::setFlipY");
    }

    template <bool T=false>
    static CCSpritePlus* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame){
        static_assert(T, "Implement CCSpritePlus::createWithSpriteFrame");
    }

        cocos2d::CCArray* m_followers;
        CCSpritePlus* m_followingSprite;
        bool m_hasFollower;
        bool m_propagateScaleChanges;
        bool m_propagateFlipChanges;
};

class GEODE_CODEGEN_DLL GameObject : public CCSpritePlus {
public:
	 using GroupArrayType = short*; 

    cocos2d::CCPoint getStartPosition();

    void setStartPosition(cocos2d::CCPoint const& p);

    unsigned int getUniqueID();

    short getGroupID(int ix);

    short getGroupIDCount();

    gd::vector<short> getGroupIDs();

    int getGameZOrder();

    void setGameZOrder(int z);

    void setGameObjType(GameObjectType t);

    GJSpriteColor* getBaseColor();

    GJSpriteColor* getDetailColor();

        ~GameObject();
    virtual void update(float p0);

    virtual void setScaleX(float p0);

    virtual void setScaleY(float p0);

    virtual void setScale(float p0);

    virtual void setPosition(const cocos2d::CCPoint& p0);

    virtual void setVisible(bool p0);

    virtual void setRotation(float p0);

    virtual void setOpacity(GLubyte p0);

    virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    virtual void setChildColor(const cocos2d::ccColor3B& p0);

    virtual void setFlipX(bool p0);

    virtual void setFlipY(bool p0);

    virtual void customSetup();

    virtual void setupCustomSprites();

    virtual void addMainSpriteToParent(bool p0);

    virtual void resetObject();

    virtual void triggerObject(GJBaseGameLayer* p0);

    virtual void activateObject();

    virtual void deactivateObject(bool p0);

    virtual cocos2d::CCRect const& getObjectRect();

    virtual cocos2d::CCRect getObjectRect(float p0, float p1);

    virtual cocos2d::CCRect getObjectRect2(float p0, float p1);

    virtual cocos2d::CCRect const& getObjectTextureRect();

    virtual cocos2d::CCPoint getRealPosition();

    virtual void setStartPos(cocos2d::CCPoint p0);

    virtual void updateStartValues();

    virtual void customObjectSetup();

    virtual gd::string getSaveString();

    virtual bool isFlipX();

    virtual bool isFlipY();

    virtual void setRScaleX(float p0);

    virtual void setRScaleY(float p0);

    virtual void setRScale(float p0);

    virtual void getRScaleX();

    virtual void getRScaleY();

    virtual void calculateSpawnXPos();

    virtual void triggerActivated(float p0);

    virtual void powerOnObject();

    virtual void powerOffObject();

    virtual void setObjectColor(const cocos2d::ccColor3B& p0);

    virtual void setGlowColor(cocos2d::_ccColor3B const& p0);

    virtual void getOrientedBox();

    virtual void addToGroup(int p0);

    virtual void removeFromGroup(int p0);

    virtual void spawnXPosition();

    virtual void getObjectRectDirty() const;

    virtual void setObjectRectDirty(bool p0);

    virtual void getOrientedRectDirty() const;

    virtual void setOrientedRectDirty(bool p0);

    virtual GameObjectType getType() const;

    virtual void setType(GameObjectType p0);

    virtual cocos2d::CCPoint const& getStartPos() const;

    void activatedByPlayer(GameObject* p0);

    void addColorSprite();

    void addColorSpriteToParent(bool p0);

    void addGlow();

    void addToTempOffset(float p0, float p1);

    void calculateOrientedBox();

    void canChangeCustomColor();

    void colorForMode(int p0, bool p1);

    void commonSetup();

    void copyGroups(GameObject* p0);

    static GameObject* createWithFrame(const char* p0);

    static GameObject* createWithKey(int p0);

    void destroyObject();

    void determineSlopeDirection();

    void getActiveColorForMode(int p0, bool p1);

    void getBallFrame(int p0);

    cocos2d::CCPoint getBoxOffset();

    const cocos2d::_ccColor3B& getColorIndex();

    void getDidUpdateLastPosition();

    void getLastPosition();

    void getMainColorMode();

    void getObjectZOrder();

    float getObjectRadius();

    void getSecondaryColorMode();

    void getSectionIdx();

    void groupWasDisabled();

    void groupWasEnabled();

    void hasBeenActivated();

    void hasBeenActivatedByPlayer(GameObject* p0);

    void hasSecondaryColor();

    void ignoreEnter();

    void ignoreFade();

    void isBasicTrigger();

    void isColorTrigger();

    void isSpawnableTrigger();

    void isSpecialObject();

    static GameObject* objectFromString(gd::string p0, bool p1);

    void playShineEffect();

    void quickUpdatePosition();

    void removeGlow();

    void resetGroupDisabled();

    void saveActiveColors();

    void selectObject(const cocos2d::ccColor3B& p0);

    void setDefaultMainColorMode(int p0);

    void setDidUpdateLastPosition(bool const& p0);

    void setGlowOpacity(unsigned char p0);

    void setLastPosition(cocos2d::CCPoint const& p0);

    void setMainColorMode(int p0);

    void setSectionIdx(int const& p0);

    void setupCoinArt();

    void slopeFloorTop();

    void slopeWallLeft();

    void updateCustomScale(float p0);

    void updateMainColor();

    void updateOrientedBox();

    void updateSecondaryColor();

    void updateStartPos();

    void updateState();

    void updateSyncedAnimation(float p0);

    template <bool T=false>
    void deselectObject(){
        static_assert(T, "Implement GameObject::deselectObject");
    }

    template <bool T=false>
    cocos2d::CCRepeatForever* createRotateAction(float f, int n){
        static_assert(T, "Implement GameObject::createRotateAction");
    }

    template <bool T=false>
    void setMyAction(cocos2d::CCAction* pAction){
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
        int m_baseColorID;
        int m_detailColorID;
        bool m_baseColorHSVModified;
        bool m_detailColorHSVModified;
        cocos2d::CCPoint m_startPosOffset;
        float m_rotateOffset;
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
        bool m_modifier;
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
        bool m_hasDetailColor;
        bool m_isPulseStick;
        int m_linkedGroup;
        bool m_isSaw;
        int m_customRotateSpeed;
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
        bool m_useAudioScale;
        bool m_sleeping;
        float m_rotation;
        cocos2d::CCSize m_obStartScale;
        bool m_startFlipX;
        bool m_startFlipY;
        bool m_shouldHide;
        float m_spawnXPosition;
        bool m_invisible;
        float m_enterAngle;
        int m_activeEnterEffect;
        int m_parentMode;
        bool m_isGlowDisabled;
        int m_targetColorID;
        float m_scale;
        int m_objectID;
        GEODE_PAD(0x4);
        bool m_unk368;
        bool m_unk369;
        bool m_unk36A;
        bool m_isDontEnter;
        bool m_isDontFade;
        int m_defaultZOrder;
        bool m_useSecondSheet;
        bool m_unknown3d9;
        bool m_isPortal;
        bool m_lockColourAsChild;
        bool m_customAudioScale;
        int m_minAudioScale;
        int m_maxAudioScale;
        bool m_unkParticleSystem2;
        int m_secretCoinID;
        int m_unkUnusedSaveStringKey53;
        bool m_invisibleMode;
        bool m_glowUserBackgroundColour;
        bool m_useSpecialLight;
        bool m_orbOrPad;
        float m_glowOpacityMod;
        bool m_upSlope;
        int m_slopeType;
        float m_slopeAngle;
        bool m_hazardousSlope;
        float m_unkWin18C;
        GJSpriteColor* m_baseColor;
        GJSpriteColor* m_detailColor;
        int m_unknown420;
        ZLayer m_defaultZLayer;
        ZLayer m_zLayer;
        int m_gameZOrder;
        gd::string m_unk3C0;
        bool m_showGamemodeBorders;
        bool m_unk3D9;
        bool m_isSelected;
        int m_globalClickCounter;
        GEODE_PAD(0x8);
        bool m_unknownLayerRelated;
        float m_multiScaleMultiplier;
        bool m_isGroupParent;
        GroupArrayType m_groups;
        short m_groupCount;
        GroupArrayType m_pulseGroups;
        short m_pulseGroupCount;
        GroupArrayType m_alphaGroups;
        short m_alphaGroupCount;
        int m_editorLayer;
        int m_editorLayer2;
        int m_unk414;
        GEODE_PAD(0xc);
        cocos2d::CCPoint m_firstPosition;
        GEODE_PAD(0x15);
        bool m_isTriggerable;
        GEODE_PAD(0x7);
        bool m_highDetail;
        ColorActionSprite* m_colorActionSpriteBase;
        ColorActionSprite* m_colorActionSpriteDetail;
        GJEffectManager* m_effectManager;
        GEODE_PAD(0x10);
};

class GEODE_CODEGEN_DLL AnimatedSpriteDelegate {
public:

};

class GEODE_CODEGEN_DLL PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:

        ~PlayerObject();
    virtual void update(float p0);

    virtual void setScaleX(float p0);

    virtual void setScaleY(float p0);

    virtual void setScale(float p0);

    virtual void setPosition(cocos2d::CCPoint const& p0);

    virtual void setVisible(bool p0);

    virtual void setRotation(float p0);

    virtual void setOpacity(unsigned char p0);

    virtual void setColor(cocos2d::_ccColor3B const& p0);

    virtual void setFlipX(bool p0);

    virtual void setFlipY(bool p0);

    virtual void resetObject();

    virtual cocos2d::CCPoint getRealPosition();

    virtual void getOrientedBox();

    virtual void animationFinished(char const* p0);

    void activateStreak();

    void addAllParticles();

    void addToTouchedRings(GameObject* p0);

    void boostPlayer(float p0);

    void bumpPlayer(float p0, int p1);

    void buttonDown(PlayerButton p0);

    void checkSnapJumpToObject(GameObject* p0);

    bool collidedWithObject(float p0, GameObject* p1);

    bool collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2);

    bool collidedWithSlope(float p0, GameObject* p1, bool p2);

    void convertToClosestRotation(float p0);

    void copyAttributes(PlayerObject* p0);

    static PlayerObject* create(int p0, int p1, cocos2d::CCLayer* p2);

    void deactivateParticle();

    void deactivateStreak(bool p0);

    void fadeOutStreak2(float p0);

    void flashPlayer(float p0, float p1, cocos2d::_ccColor3B p2, cocos2d::_ccColor3B p3);

    void flipGravity(bool p0, bool p1);

    void flipMod();

    void getActiveMode();

    void getModifiedSlopeYVel();

    void getOldPosition(float p0);

    void getSecondColor();

    void gravityDown();

    void gravityUp();

    void hardFlipGravity();

    void hitGround(bool p0);

    void incrementJumps();

    bool init(int p0, int p1, cocos2d::CCLayer* p2);

    void isBoostValid(float p0);

    void isFlying();

    void isSafeFlip(float p0);

    void isSafeMode(float p0);

    void isSafeSpiderFlip(float p0);

    void levelFlipFinished();

    void levelFlipping();

    void levelWillFlip();

    void loadFromCheckpoint(PlayerCheckpoint* p0);

    void lockPlayer();

    void logValues();

    void modeDidChange();

    void placeStreakPoint();

    void playBurstEffect();

    void playDeathEffect();

    void playDynamicSpiderRun();

    void playerDestroyed(bool p0);

    bool playerIsFalling();

    void playerTeleported();

    void playingEndEffect();

    void postCollision(float p0);

    void preCollision();

    void preSlopeCollision(float p0, GameObject* p1);

    void propellPlayer(float p0);

    void pushButton(int p0);

    void pushDown();

    void pushPlayer(float p0);

    void releaseButton(int p0);

    void removeAllParticles();

    void removePendingCheckpoint();

    void resetAllParticles();

    void resetCollisionLog();

    void resetPlayerIcon();

    void resetStateVariables();

    void resetStreak();

    void ringJump(GameObject* p0);

    void runBallRotation(float p0);

    void runBallRotation2();

    void runNormalRotation();

    void runRotateAction(bool p0);

    void saveToCheckpoint(PlayerCheckpoint* p0);

    void setSecondColor(cocos2d::_ccColor3B const& p0);

    void setupStreak();

    void spawnCircle();

    void spawnCircle2();

    void spawnDualCircle();

    void spawnFromPlayer(PlayerObject* p0);

    void spawnPortalCircle(cocos2d::_ccColor3B p0, float p1);

    void spawnScaleCircle();

    void specialGroundHit();

    void speedDown();

    void speedUp();

    void spiderTestJump(bool p0);

    void startDashing(GameObject* p0);

    void stopBurstEffect();

    void stopDashing();

    void stopRotation(bool p0);

    void storeCollision(bool p0, int p1);

    void switchedToMode(GameObjectType p0);

    void testForMoving(float p0, GameObject* p1);

    void toggleBirdMode(bool p0);

    void toggleDartMode(bool p0);

    void toggleFlyMode(bool p0);

    void toggleGhostEffect(GhostType p0);

    void togglePlayerScale(bool p0);

    void toggleRobotMode(bool p0);

    void toggleRollMode(bool p0);

    void toggleSpiderMode(bool p0);

    void toggleVisibility(bool p0);

    void touchedObject(GameObject* p0);

    void tryPlaceCheckpoint();

    void updateCheckpointMode(bool p0);

    void updateCheckpointTest();

    void updateCollide(bool p0, int p1);

    void updateCollideBottom(float p0, int p1);

    void updateCollideTop(float p0, int p1);

    void updateDashAnimation();

    void updateDashArt();

    void updateGlowColor();

    void updateJump(float p0);

    void updateJumpVariables();

    void updatePlayerBirdFrame(int p0);

    void updatePlayerDartFrame(int p0);

    void updatePlayerFrame(int p0);

    void updatePlayerGlow();

    void updatePlayerRobotFrame(int p0);

    void updatePlayerRollFrame(int p0);

    void updatePlayerScale();

    void updatePlayerShipFrame(int p0);

    void updatePlayerSpiderFrame(int p0);

    void updatePlayerSpriteExtra(gd::string p0);

    void updateRobotAnimationSpeed();

    void updateRotation(float p0);

    void updateRotation(float p0, float p1);

    void updateShipRotation(float p0);

    void updateShipSpriteExtra(gd::string p0);

    void updateSlopeRotation(float p0);

    void updateSlopeYVelocity(float p0);

    void updateSpecial(float p0);

    void updateStateVariables();

    void updateTimeMod(float p0);

    void usingWallLimitedMode();

    void yStartDown();

    void yStartUp();

    template <bool T=false>
    void runRotateAction(){
        static_assert(T, "Implement PlayerObject::runRotateAction");
    }

    template <bool T=false>
    void runBallRotation(){
        static_assert(T, "Implement PlayerObject::runBallRotation");
    }

        GEODE_PAD(0x18);
        bool m_unk480;
        cocos2d::CCNode* m_unk484;
        cocos2d::CCDictionary* m_collisionLog;
        cocos2d::CCDictionary* m_collisionLog1;
        GEODE_PAD(0x38);
        bool m_unk4B0;
        cocos2d::CCSprite* m_unk4B4;
        GEODE_PAD(0x1c);
        bool m_unk4D4;
        cocos2d::CCArray* m_particleSystems;
        bool m_unk4DC;
        bool m_isHidden;
        int m_hasGhostTrail;
        GhostTrailEffect* m_ghostTrail;
        void* m_unknown;
        cocos2d::CCSprite* m_iconSprite;
        cocos2d::CCSprite* m_iconSpriteSecondary;
        cocos2d::CCSprite* m_iconSpriteWhitener;
        cocos2d::CCSprite* m_iconGlow;
        cocos2d::CCSprite* m_vehicleSprite;
        cocos2d::CCSprite* m_vehicleSpriteSecondary;
        cocos2d::CCSprite* m_unk500;
        cocos2d::CCSprite* m_vehicleSpriteWhitener;
        cocos2d::CCSprite* m_vehicleGlow;
        cocos2d::CCMotionStreak* m_regularTrail;
        HardStreak* m_waveTrail;
        double m_xAccel;
        double m_jumpAccel;
        double m_gravity;
        GEODE_PAD(0x10);
        bool m_unk538;
        bool m_unk539;
        bool m_unk53A;
        bool m_unk53B;
        bool m_isInPlayLayer;
        bool m_unk53D;
        bool m_unk53E;
        bool m_unk53F;
        GEODE_PAD(0x10);
        double m_lastJumpTime;
        double m_unk558;
        GEODE_PAD(0x24);
        float m_decelerationRate;
        GEODE_PAD(0x14);
        GameObject* m_unk59C;
        GEODE_PAD(0x10);
        GJRobotSprite* m_robotSprite;
        GJSpiderSprite* m_spiderSprite;
        bool m_unk5B0;
        cocos2d::CCParticleSystemQuad* m_unk5B4;
        cocos2d::CCParticleSystemQuad* m_unk5B8;
        cocos2d::CCParticleSystemQuad* m_unk5BC;
        cocos2d::CCParticleSystemQuad* m_unk5C0;
        cocos2d::CCParticleSystemQuad* m_unk5C4;
        cocos2d::CCParticleSystemQuad* m_unk5C8;
        cocos2d::CCParticleSystemQuad* m_unk5CC;
        GEODE_PAD(0x8);
        cocos2d::CCParticleSystemQuad* m_unk5D4;
        cocos2d::CCParticleSystemQuad* m_unk5D8;
        GEODE_PAD(0x20);
        bool m_unk5FC;
        bool m_unk5FD;
        bool m_unk5FE;
        GEODE_PAD(0x11);
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
        bool m_unk675;
        cocos2d::ccColor3B m_playerColor1;
        cocos2d::ccColor3B m_playerColor2;
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

class GEODE_CODEGEN_DLL PlayerCheckpoint : public cocos2d::CCNode {
public:

        ~PlayerCheckpoint();
    virtual bool init();

    static PlayerCheckpoint* create();

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

class GEODE_CODEGEN_DLL TriggerEffectDelegate {
public:

    virtual void toggleGroupTriggered(int p0, bool p1);

    virtual void spawnGroup(int p0);

};

class GEODE_CODEGEN_DLL GJBaseGameLayer : public cocos2d::CCLayer, public TriggerEffectDelegate {
public:

    cocos2d::CCLayer* getObjectLayer();

    cocos2d::CCArray* getAllObjects();

    static GJBaseGameLayer* get();

    virtual void objectsCollided(int p0, int p1);

    virtual void createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, int p7);

    virtual void updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9);

    virtual void flipGravity(PlayerObject* p0, bool p1, bool p2);

    virtual void calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5);

    virtual void toggleGroupTriggered(int p0, bool p1);

    virtual void spawnGroup(int p0);

    virtual void addToSection(GameObject* p0);

    virtual void addToGroup(GameObject* p0, int p1, bool p2);

    virtual void removeFromGroup(GameObject* p0, int p1);

    virtual bool init();

    void addObjectCounter(LabelGameObject* p0, int p1);

    void addToGroups(GameObject* p0, bool p1);

    void atlasValue(int p0);

    void bumpPlayer(PlayerObject* p0, GameObject* p1);

    void calculateOpacityValues(EffectGameObject* p0, EffectGameObject* p1, float p2, GJEffectManager* p3);

    void checkSpawnObjects();

    void collectItem(int p0, int p1);

    void collectedObject(EffectGameObject* p0);

    void createTextLayers();

    cocos2d::CCArray* damagingObjectsInRect(cocos2d::CCRect p0);

    void enableHighCapacityMode();

    void getCapacityString();

    void getGroundHeightForMode(int p0);

    void getGroup(int p0);

    void getMoveDeltaForObjects(int p0, int p1);

    void getOptimizedGroup(int p0);

    void getStaticGroup(int p0);

    void isGroupDisabledForObject(GameObject* p0);

    void isGroupDisabledForObjectFull(GameObject* p0, cocos2d::CCArray* p1);

    void loadUpToPosition(float p0);

    void objectIntersectsCircle(GameObject* p0, GameObject* p1);

    void objectTriggered(EffectGameObject* p0);

    void optimizeMoveGroups();

    cocos2d::CCNode* parentForZLayer(int p0, bool p1, int p2);

    void playerTouchedRing(PlayerObject* p0, GameObject* p1);

    void processColorObject(EffectGameObject* p0, int p1, cocos2d::CCDictionary* p2, float p3, GJEffectManager* p4);

    void processFollowActions();

    void processMoveActions();

    void processMoveActionsStep(float p0);

    void processOpacityObject(EffectGameObject* p0, cocos2d::CCDictionary* p1, float p2, GJEffectManager* p3);

    void processPlayerFollowActions(float p0);

    void processRotationActions();

    void pushButton(int p0, bool p1);

    void rectIntersectsCircle(cocos2d::CCRect p0, cocos2d::CCPoint p1, float p2);

    void refreshCounterLabels();

    void releaseButton(int p0, bool p1);

    void removeFromGroups(GameObject* p0);

    void removeObjectFromSection(GameObject* p0);

    void reorderObjectSection(GameObject* p0);

    void resetGroupCounters(bool p0);

    void resetMoveOptimizedValue();

    int sectionForPos(float p0);

    void setupLayers();

    void shouldExitHackedLevel();

    void spawnGroupTriggered(int p0, float p1, int p2);

    cocos2d::CCArray* staticObjectsInRect(cocos2d::CCRect p0);

    void testInstantCountTrigger(int p0, int p1, int p2, bool p3, int p4);

    void toggleGroup(int p0, bool p1);

    void togglePlayerVisibility(bool p0);

    void triggerMoveCommand(EffectGameObject* p0);

    void updateCollisionBlocks();

    void updateCounters(int p0, int p1);

    void updateDisabledObjectsLastPos(cocos2d::CCArray* p0);

    void updateLayerCapacity(gd::string p0);

    void updateLegacyLayerCapacity(int p0, int p1, int p2, int p3);

    void updateOBB2(cocos2d::CCRect p0);

    void updateQueuedLabels();

        ~GJBaseGameLayer();
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
        int m_lastVisibleSection;
        int m_firstVisibleSection;
        bool m_objectsAreDisabled;
        bool m_blending;
        GEODE_PAD(0x16);
};

class GEODE_CODEGEN_DLL CCCircleWaveDelegate {
public:

    virtual void circleWaveWillBeRemoved(CCCircleWave* wave);

};

class GEODE_CODEGEN_DLL DialogDelegate {
public:

    virtual void dialogClosed(DialogLayer* p0);

};

class GEODE_CODEGEN_DLL PlayLayer : public GJBaseGameLayer, public CCCircleWaveDelegate, public DialogDelegate {
public:

    static PlayLayer* get();

    void addCircle(CCCircleWave* p0);

    void addObject(GameObject* p0);

    void addToGroupOld(GameObject* p0);

    void addToSpeedObjects(GameObject* p0);

    void animateInDualGround(GameObject* p0, float p1, bool p2);

    void animateInGround(bool p0);

    void animateOutGround(bool p0);

    void animateOutGroundFinished();

    void applyEnterEffect(GameObject* p0);

    virtual void calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5);

    void cameraMoveX(float p0, float p1, float p2);

    void cameraMoveY(float p0, float p1, float p2);

    void checkCollisions(PlayerObject* p0, float p1);

    void circleWaveWillBeRemoved(CCCircleWave* p0);

    void claimParticle(gd::string p0);

    void clearPickedUpItems();

    void colorObject(int p0, cocos2d::_ccColor3B p1);

    void commitJumps();

    static PlayLayer* create(GJGameLevel* p0);

    CheckpointObject* createCheckpoint();

    void createObjectsFromSetup(gd::string p0);

    void createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);

    void currencyWillExit(CurrencyRewardLayer* p0);

    void delayedResetLevel();

    void destroyPlayer(PlayerObject* p0, GameObject* p1);

    void dialogClosed(DialogLayer* p0);

    virtual void draw();

    void enterDualMode(GameObject* p0, bool p1);

    void exitAirMode();

    void exitBirdMode(PlayerObject* p0);

    void exitDartMode(PlayerObject* p0);

    void exitFlyMode(PlayerObject* p0);

    void exitRobotMode(PlayerObject* p0);

    void exitRollMode(PlayerObject* p0);

    void exitSpiderMode(PlayerObject* p0);

    void flipFinished();

    virtual void flipGravity(PlayerObject* p0, bool p1, bool p2);

    void flipObjects();

    void fullReset();

    void getLastCheckpoint();

    void getMaxPortalY();

    void getMinPortalY();

    void getObjectsState();

    void getOtherPlayer(PlayerObject* p0);

    void getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3);

    void getParticleKey2(gd::string p0);

    void getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3);

    void getTempMilliTime();

    void gravityEffectFinished();

    void hasItem(int p0);

    void hasUniqueCoin(GameObject* p0);

    void incrementJumps();

    bool init(GJGameLevel* p0);

    void isFlipping();

    void levelComplete();

    void lightningFlash(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::_ccColor3B p2, float p3, float p4, int p5, bool p6, float p7);

    void lightningFlash(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1);

    void loadDefaultColors();

    void loadFromCheckpoint(CheckpointObject* p0);

    void loadLastCheckpoint();

    void loadSavedObjectsState(gd::string p0);

    void markCheckpoint();

    void moveCameraToPos(cocos2d::CCPoint p0);

    virtual void onEnterTransitionDidFinish();

    virtual void onExit();

    void onQuit();

    void optimizeColorGroups();

    void optimizeOpacityGroups();

    void optimizeSaveRequiredGroups();

    void pauseGame(bool p0);

    void pickupItem(GameObject* p0);

    void playAnimationCommand(int p0, int p1);

    void playEndAnimationToPos(cocos2d::CCPoint p0);

    void playExitDualEffect(PlayerObject* p0);

    void playFlashEffect(float p0, int p1, float p2);

    void playGravityEffect(bool p0);

    void playSpeedParticle(float p0);

    void playerWillSwitchMode(PlayerObject* p0, GameObject* p1);

    void prepareSpawnObjects();

    void processItems();

    void processLoadedMoveActions();

    void recordAction(bool p0, PlayerObject* p1);

    void registerActiveObject(GameObject* p0);

    void registerStateObject(GameObject* p0);

    void removeAllObjects();

    void removeFromGroupOld(GameObject* p0);

    void removeLastCheckpoint();

    void removePlayer2();

    void resetLevel();

    void resume();

    void resumeAndRestart();

    void saveRecordAction(bool p0, PlayerObject* p1);

    static cocos2d::CCScene* scene(GJGameLevel* p0);

    void setupLevelStart(LevelSettingsObject* p0);

    void setupReplay(gd::string p0);

    void shakeCamera(float p0, float p1, float p2);

    void shouldBlend(int p0);

    void showCompleteEffect();

    void showCompleteText();

    void showEndLayer();

    void showHint();

    void showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5);

    void showRetryLayer();

    void showTwoPlayerGuide();

    void sortGroups();

    void spawnCircle();

    void spawnFirework();

    void spawnParticle(char const* p0, int p1, cocos2d::tCCPositionType p2, cocos2d::CCPoint p3);

    void spawnPlayer2();

    void startGame();

    void startMusic();

    void startRecording();

    void startRecordingDelayed();

    void stopCameraShake();

    void stopRecording();

    void storeCheckpoint(CheckpointObject* p0);

    void switchToFlyMode(PlayerObject* p0, GameObject* p1, bool p2, int p3);

    void switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2);

    void switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2);

    void switchToSpiderMode(PlayerObject* p0, GameObject* p1, bool p2);

    void timeForXPos(float p0);

    void timeForXPos2(float p0, bool p1);

    void toggleBGEffectVisibility(bool p0);

    void toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);

    void toggleFlipped(bool p0, bool p1);

    void toggleGhostEffect(int p0);

    void toggleGlitter(bool p0);

    void togglePracticeMode(bool p0);

    void toggleProgressbar();

    void tryStartRecord();

    void unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1);

    void unregisterActiveObject(GameObject* p0);

    void unregisterStateObject(GameObject* p0);

    virtual void update(float p0);

    void updateAttempts();

    void updateCamera(float p0);

    virtual void updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9);

    void updateDualGround(PlayerObject* p0, int p1, bool p2);

    void updateEffectPositions();

    void updateLevelColors();

    void updateMoveObjectsLastPosition();

    void updateProgressbar();

    void updateReplay(float p0);

    void updateTimeMod(float p0, bool p1);

    virtual void updateTweenAction(float p0, char const* p1);

    void updateVisibility();

    void vfDChk();

    virtual void visit();

    void visitWithColorFlash();

    void willSwitchToMode(int p0, PlayerObject* p1);

    void xPosForTime(float p0);

        ~PlayLayer();
        float unused4c8;
        bool unused4cc;
        bool m_hasCheated;
        int m_dontSaveRand;
        int m_dontSaveSeed;
        int unknown4d8;
        bool m_debugPauseOff;
        bool m_shouldSmoothCamera;
        float unused_4e0;
        cocos2d::CCObject* unknown4e8;
        float m_camera4f0;
        int unused4f4;
        float m_somegroup4f8;
        float m_groundRestriction;
        float m_ceilRestriction;
        bool m_fullReset;
        bool unknown505;
        float unknown508;
        float unknown50c;
        float unknown510;
        float unknown514;
        float unknown518;
        StartPosObject* m_startPos;
        CheckpointObject* m_startPosCheckpoint;
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
        cocos2d::CCParticleSystemQuad* m_particleSystem;
        cocos2d::CCDictionary* m_pickedUpItems;
        cocos2d::CCArray* m_circleWaves;
        cocos2d::CCArray* unk37C;
        AudioEffectsLayer* m_audioEffectsLayer;
        float unknown5c0;
        float unknown5c4;
        GJGroundLayer* m_bottomGround;
        GJGroundLayer* m_topGround;
        double m_completelyUninitializedData;
        bool m_isDead;
        bool m_startCameraAtCorner;
        bool m_cameraYLocked;
        bool m_cameraXLocked;
        bool unknown5e4;
        int m_ballFrameSeed;
        float unknown5ec;
        float m_lockGroundToCamera;
        float unknown5f4;
        float m_levelLength;
        float m_realLevelLength;
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
        cocos2d::CCSize m_sliderSize;
        void* unknown680;
        int m_activeGravityEffects;
        int m_gravityEffectStatus;
        cocos2d::CCArray* m_gravitySprites;
        bool unk428;
        bool m_shouldRecordActions;
        bool unk42A;
        bool m_isPaused;
        bool unk42C;
        bool m_isPlayer2Frozen;
        gd::string m_previousRecords;
        void* unknown6a8;
        double m_time;
        int unknown6b8;
        int unknown6bc;
        bool unk460;
        bool unk461;
        cocos2d::CCDictionary* unk464;
        gd::map<short, bool> unk468;
        bool m_collisionDisabled;
        bool unknown701;
        GameObject* m_latestVehicle;
        GameObject* m_dualObject;
        bool m_isFlipped;
        float m_mirrorTransition;
        UILayer* m_UILayer;
        GJGameLevel* m_level;
        cocos2d::CCPoint m_cameraPosition;
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
        GEODE_PAD(0xb);
        bool unk4D0;
        bool unk4D1;
        cocos2d::CCArray* unk4D4;
        cocos2d::CCDictionary* unk4D8;
        double m_inlineCalculatedKickTime;
        double m_accumulatedKickDeltaTime;
        double m_unusedKickDouble;
        bool m_shouldTryToKick;
        float m_kickCheckDeltaSnapshot;
        int m_accumulatedKickCounter;
        GEODE_PAD(0x4);
        double unk508;
        GEODE_PAD(0x8);
        double unk518;
        double unk520;
        GEODE_PAD(0x4);
        bool m_hasGlitter;
        bool m_isBgEffectOff;
        bool unk52F;
        GameObject* m_antiCheatObject;
        bool m_antiCheatPassed;
        bool unk535;
        bool m_disableGravityEffect;
};

class GEODE_CODEGEN_DLL PlatformToolbox {
public:

    static void hideCursor();

    static void showCursor();

    static bool isControllerConnected();

};

class GEODE_CODEGEN_DLL GJDropDownLayer : public cocos2d::CCLayerColor {
public:
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

    virtual void customSetup();

    virtual void enterLayer();

    virtual void exitLayer(cocos2d::CCObject* p0);

    virtual void showLayer(bool p0);

    virtual void hideLayer(bool p0);

    virtual void layerVisible();

    virtual void layerHidden();

    virtual void enterAnimFinished();

    virtual void disableUI();

    virtual void enableUI();

    static GJDropDownLayer* create(const char* title, float height);

    virtual bool ccTouchBegan(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);

    virtual void ccTouchMoved(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);

    virtual void ccTouchEnded(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);

    virtual void ccTouchCancelled(cocos2d::CCTouch* pTouch, cocos2d::CCEvent* pEvent);

    virtual void draw();

    bool init(const char* title, float height);

    virtual void registerWithTouchDispatcher();

    virtual void keyBackClicked();

        cocos2d::CCPoint m_endPosition;
        cocos2d::CCPoint m_startPosition;
        cocos2d::CCMenu* m_buttonMenu;
        GJListLayer* m_listLayer;
        bool m_controllerEnabled;
        cocos2d::CCLayer* m_mainLayer;
        bool m_hidden;
        void* m_unknown;
};

class GEODE_CODEGEN_DLL FLAlertLayerProtocol {
public:

    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

};

class GEODE_CODEGEN_DLL OptionsLayer : public GJDropDownLayer, public FLAlertLayerProtocol {
public:

    static OptionsLayer* addToCurrentScene(bool noTransition);

    static OptionsLayer* create();

};

class GEODE_CODEGEN_DLL OpacityEffectAction : public cocos2d::CCNode {
public:

    static OpacityEffectAction* create(float p0, float p1, float p2, int p3);

    static OpacityEffectAction* createFromString(gd::string p0);

    bool init(float p0, float p1, float p2, int p3);

    void step(float p0);

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

class GEODE_CODEGEN_DLL ObjectToolbox : public cocos2d::CCNode {
public:

    cocos2d::CCArray* allKeys();

    const char* frameToKey(const char* frame);

    const char* intKeyToFrame(int key);

    const char* keyToFrame(const char* key);

    void addObject(int id, const char* frame);

    virtual bool init();

    static ObjectToolbox* sharedState();

    template <bool T=false>
    float gridNodeSizeForKey(int key){
        static_assert(T, "Implement ObjectToolbox::gridNodeSizeForKey");
    }

    template <bool T=false>
    const char* perspectiveBlockFrame(int key){
        static_assert(T, "Implement ObjectToolbox::perspectiveBlockFrame");
    }

        cocos2d::CCDictionary* m_frameToKeyDict;
        cocos2d::CCDictionary* m_keyToFrameDict;
};

class GEODE_CODEGEN_DLL OBB2D : public cocos2d::CCNode {
public:

    void calculateWithCenter(cocos2d::CCPoint p0, float p1, float p2, float p3);

    static OBB2D* create(cocos2d::CCPoint p0, float p1, float p2, float p3);

    cocos2d::CCRect getBoundingRect();

    void overlaps(OBB2D* p0);

    void overlaps1Way(OBB2D* p0);

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

class GEODE_CODEGEN_DLL NumberInputLayer {
public:

};

class GEODE_CODEGEN_DLL NumberInputDelegate {
public:

    virtual void numberInputClosed(NumberInputLayer* p0);

};

class GEODE_CODEGEN_DLL PlatformDownloadDelegate {
public:

    virtual void downloadFinished(char const* p0);

    virtual void downloadFailed(char const* p0);

};

class GEODE_CODEGEN_DLL MusicDownloadManager : public cocos2d::CCNode, public PlatformDownloadDelegate {
public:

    void incrementPriorityForSong(int p0);

    static MusicDownloadManager* sharedState();

    gd::string pathForSong(int id);

    template <bool T=false>
    cocos2d::CCArray* getDownloadedSongs(){
        static_assert(T, "Implement MusicDownloadManager::getDownloadedSongs");
    }

    template <bool T=false>
    void songStateChanged(){
        static_assert(T, "Implement MusicDownloadManager::songStateChanged");
    }

        cocos2d::CCDictionary* m_unknownDict;
        cocos2d::CCArray* m_handlers;
        cocos2d::CCDictionary* m_songsDict;
        int m_unknown;
};

class GEODE_CODEGEN_DLL MusicDownloadDelegate {
public:

    virtual void downloadSongFailed(int p0, GJSongError p1);

    virtual void downloadSongFinished(SongInfoObject* p0);

    virtual void loadSongInfoFailed(int p0, GJSongError p1);

    virtual void loadSongInfoFinished(SongInfoObject* p0);

    virtual void songStateChanged();

};

class GEODE_CODEGEN_DLL MultilineBitmapFont : public cocos2d::CCSprite {
public:

};

class GEODE_CODEGEN_DLL MoreVideoOptionsLayer : public FLAlertLayer {
public:

    static MoreVideoOptionsLayer* create();

    virtual bool init();

    void onClose(cocos2d::CCObject* p0);

};

class GEODE_CODEGEN_DLL MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol {
public:

        ~MenuLayer();
    virtual bool init();

    virtual void keyBackClicked();

    virtual void keyDown(cocos2d::enumKeyCodes p0);

    virtual void googlePlaySignedIn();

    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    void onMoreGames(cocos2d::CCObject* p0);

    template <bool T=false>
    void onGarage(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onGarage");
    }

    void onQuit(cocos2d::CCObject* p0);

    void onMyProfile(cocos2d::CCObject* p0);

    template <bool T=false>
    void onPlay(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onPlay");
    }

    template <bool T=false>
    void onCreator(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onCreator");
    }

    template <bool T=false>
    void onRobTop(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onRobTop");
    }

    template <bool T=false>
    void onNewgrounds(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onNewgrounds");
    }

    template <bool T=false>
    void onDaily(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onDaily");
    }

    template <bool T=false>
    void onOptions(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onOptions");
    }

    template <bool T=false>
    void onAchievements(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onAchievements");
    }

    template <bool T=false>
    void onStats(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onStats");
    }

    template <bool T=false>
    void onFacebook(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onFacebook");
    }

    template <bool T=false>
    void onTwitter(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onTwitter");
    }

    template <bool T=false>
    void onYouTube(cocos2d::CCObject* p0){
        static_assert(T, "Implement MenuLayer::onYouTube");
    }

    static cocos2d::CCScene* scene(bool p0);

    template <bool T=false>
    MenuLayer* node(){
        static_assert(T, "Implement MenuLayer::node");
    }

};

class GEODE_CODEGEN_DLL MenuGameLayer {
public:

    void resetPlayer();

    void update(float p0);

};

class GEODE_CODEGEN_DLL MapPackCell : public TableViewCell {
public:

    template <bool T=false>
    void updateBGColor(unsigned int index){
        static_assert(T, "Implement MapPackCell::updateBGColor");
    }

};

class GEODE_CODEGEN_DLL LoadingCircle : public cocos2d::CCLayerColor {
public:

    void setParentLayer(cocos2d::CCLayer* layer);

    void setFade(bool fade);

    static LoadingCircle* create();

    void show();

    void fadeAndRemove();

        cocos2d::CCSprite* m_sprite;
        cocos2d::CCLayer* m_parentLayer;
        bool m_fade;
};

class GEODE_CODEGEN_DLL ListButtonBar : public cocos2d::CCNode {
public:

        BoomScrollLayer* m_scrollLayer;
};

class GEODE_CODEGEN_DLL LevelUploadDelegate {
public:

};

class GEODE_CODEGEN_DLL LevelSettingsDelegate {
public:

};

class GEODE_CODEGEN_DLL LevelSearchLayer {
public:

    template <bool T=false>
    static LevelSearchLayer* create(){
        static_assert(T, "Implement LevelSearchLayer::create");
    }

    template <bool T=false>
    GJSearchObject* getSearchObject(SearchType p0, gd::string p1){
        static_assert(T, "Implement LevelSearchLayer::getSearchObject");
    }

    template <bool T=false>
    void onMoreOptions(cocos2d::CCObject* p0){
        static_assert(T, "Implement LevelSearchLayer::onMoreOptions");
    }

    template <bool T=false>
    void onSearch(cocos2d::CCObject* p0){
        static_assert(T, "Implement LevelSearchLayer::onSearch");
    }

        GEODE_UNIMPLEMENTED_PAD
        CCTextInputNode* m_searchInput;
};

class GEODE_CODEGEN_DLL LevelLeaderboard : public FLAlertLayer {
public:

    template <bool T=false>
    void onChangeType(cocos2d::CCObject* pSender){
        static_assert(T, "Implement LevelLeaderboard::onChangeType");
    }

    template <bool T=false>
    void onGarage(cocos2d::CCObject* pSender){
        static_assert(T, "Implement LevelLeaderboard::onGarage");
    }

    template <bool T=false>
    bool init(GJGameLevel* level, int type){
        static_assert(T, "Implement LevelLeaderboard::init");
    }

    template <bool T=false>
    static LevelLeaderboard* create(GJGameLevel* level, LevelLeaderboardType leaderboardType){
        static_assert(T, "Implement LevelLeaderboard::create");
    }

};

class GEODE_CODEGEN_DLL LevelCell : public TableViewCell {
public:

    template <bool T=false>
    void onViewProfile(cocos2d::CCObject* p0){
        static_assert(T, "Implement LevelCell::onViewProfile");
    }

    template <bool T=false>
    void loadCustomLevelCell(){
        static_assert(T, "Implement LevelCell::loadCustomLevelCell");
    }

    template <bool T=false>
    void updateBGColor(unsigned int index){
        static_assert(T, "Implement LevelCell::updateBGColor");
    }

        CCMenuItemSpriteExtra* m_button;
        GJGameLevel* m_level;
        bool m_cellDrawn;
};

class GEODE_CODEGEN_DLL MoreSearchLayer : public FLAlertLayer {
public:

    template <bool T=false>
    static MoreSearchLayer* create(){
        static_assert(T, "Implement MoreSearchLayer::create");
    }

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement MoreSearchLayer::init");
    }

};

class GEODE_CODEGEN_DLL LeaderboardsLayer : public cocos2d::CCLayer {
public:

    template <bool T=false>
    static LeaderboardsLayer* create(LeaderboardState state){
        static_assert(T, "Implement LeaderboardsLayer::create");
    }

    template <bool T=false>
    bool init(LeaderboardState state){
        static_assert(T, "Implement LeaderboardsLayer::init");
    }

};

class GEODE_CODEGEN_DLL SetupInstantCountPopup : public FLAlertLayer {
public:

    static SetupInstantCountPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    void onTargetIDArrow(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateTargetID();

};

class GEODE_CODEGEN_DLL InheritanceNode : public cocos2d::CCObject {
public:

};

class GEODE_CODEGEN_DLL LevelUpdateDelegate {
public:

    virtual void levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);

    virtual void levelUpdateFailed(int p0);

};

class GEODE_CODEGEN_DLL LevelCommentDelegate {
public:

    virtual void loadCommentsFinished(cocos2d::CCArray* p0, const char* p1);

    virtual void loadCommentsFailed(const char* p0);

    virtual void updateUserScoreFinished();

    virtual void setupPageInfo(gd::string p0, const char* p1);

};

class GEODE_CODEGEN_DLL CommentUploadDelegate {
public:

    virtual void commentUploadFinished(int p0);

    virtual void commentUploadFailed(int p0, CommentError p1);

    virtual void commentDeleteFailed(int p0, int p1);

};

class GEODE_CODEGEN_DLL InfoLayer : public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol {
public:

    template <bool T=false>
    bool init(GJGameLevel* level, GJUserScore* score){
        static_assert(T, "Implement InfoLayer::init");
    }

    template <bool T=false>
    void setupCommentsBrowser(cocos2d::CCArray* comments){
        static_assert(T, "Implement InfoLayer::setupCommentsBrowser");
    }

    template <bool T=false>
    void onMore(cocos2d::CCObject* pSender){
        static_assert(T, "Implement InfoLayer::onMore");
    }

    template <bool T=false>
    void onLevelInfo(cocos2d::CCObject* pSender){
        static_assert(T, "Implement InfoLayer::onLevelInfo");
    }

    template <bool T=false>
    void loadPage(int page){
        static_assert(T, "Implement InfoLayer::loadPage");
    }

    template <bool T=false>
    static InfoLayer* create(GJGameLevel* level, GJUserScore* score){
        static_assert(T, "Implement InfoLayer::create");
    }

        GJGameLevel* m_level;
        GJUserScore* m_score;
        gd::string m_commentKey;
        LoadingCircle* m_loadingCircle;
        cocos2d::CCLabelBMFont* m_pageLabel;
        cocos2d::CCLabelBMFont* m_commentsGoldLabel;
        GJCommentListLayer* m_list;
        CCMenuItemSpriteExtra* m_leftArrow;
        CCMenuItemSpriteExtra* m_rightArrow;
        CCMenuItemSpriteExtra* m_likeBtn;
        CCMenuItemSpriteExtra* m_timeBtn;
        CCMenuItemSpriteExtra* m_reportBtn;
        CCMenuItemSpriteExtra* m_commentsBtn;
        CCMenuItemSpriteExtra* m_refreshCommentsBtn;
        int m_itemCount;
        int m_pageStartIdx;
        int m_pageEndIdx;
        int m_page;
        bool m_canUpdateUserScore;
        bool m_commentHistory;
};

class GEODE_CODEGEN_DLL InfoAlertButton {
public:

    template <bool T=false>
    bool init(gd::string const& title, gd::string const& text, float scale){
        static_assert(T, "Implement InfoAlertButton::init");
    }

    template <bool T=false>
    void activate(){
        static_assert(T, "Implement InfoAlertButton::activate");
    }

    template <bool T=false>
    static InfoAlertButton* create(gd::string const& title, gd::string const& text, float scale){
        static_assert(T, "Implement InfoAlertButton::create");
    }

};

class GEODE_CODEGEN_DLL GhostTrailEffect {
public:

};

class GEODE_CODEGEN_DLL LevelDownloadDelegate {
public:

    virtual void levelDownloadFinished(GJGameLevel* p0);

    virtual void levelDownloadFailed(int p0);

};

class GEODE_CODEGEN_DLL RateLevelDelegate {
public:

    virtual void rateLevelClosed();

};

class GEODE_CODEGEN_DLL LikeItemDelegate {
public:

    virtual void likedItem(LikeItemType p0, int p1, bool p2);

};

class GEODE_CODEGEN_DLL LevelDeleteDelegate {
public:

    virtual void levelDeleteFinished(int p0);

    virtual void levelDeleteFailed(int p0);

};

class GEODE_CODEGEN_DLL SetIDPopupDelegate {
public:

    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

};

class GEODE_CODEGEN_DLL LevelInfoLayer : public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate {
public:

    static LevelInfoLayer* create(GJGameLevel* level);

    template <bool T=false>
    void onGarage(cocos2d::CCObject* pSender){
        static_assert(T, "Implement LevelInfoLayer::onGarage");
    }

    template <bool T=false>
    void onViewProfile(cocos2d::CCObject* pSender){
        static_assert(T, "Implement LevelInfoLayer::onViewProfile");
    }

    template <bool T=false>
    void onLevelInfo(cocos2d::CCObject* pSender){
        static_assert(T, "Implement LevelInfoLayer::onLevelInfo");
    }

    template <bool T=false>
    void setupProgressBars(){
        static_assert(T, "Implement LevelInfoLayer::setupProgressBars");
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

class GEODE_CODEGEN_DLL GauntletSelectLayer {
public:

    template <bool T=false>
    static GauntletSelectLayer* create(){
        static_assert(T, "Implement GauntletSelectLayer::create");
    }

};

class GEODE_CODEGEN_DLL GameRateDelegate {
public:

};

class GEODE_CODEGEN_DLL CCAnimatedSprite : public cocos2d::CCSprite {
public:

    void runAnimation(gd::string p0);

    void tweenToAnimation(gd::string p0, float p1);

    template <bool T=false>
    static CCAnimatedSprite* create(const char* file){
        static_assert(T, "Implement CCAnimatedSprite::create");
    }

        gd::string m_unknown1;
        gd::string m_unknown2;
        GEODE_UNIMPLEMENTED_PAD
        gd::string m_unknown3;
        GEODE_UNIMPLEMENTED_PAD
};

class GEODE_CODEGEN_DLL GJRobotSprite : public CCAnimatedSprite {
public:

        ~GJRobotSprite();
    virtual bool init();

    virtual void setOpacity(unsigned char p0);

    virtual void hideSecondary();

    static GJRobotSprite* create();

    void updateColor02(cocos2d::_ccColor3B p0);

    void updateFrame(int p0);

    void hideGlow();

        GEODE_UNIMPLEMENTED_PAD
        cocos2d::ccColor3B m_secondaryColor;
};

class GEODE_CODEGEN_DLL GooglePlayDelegate {
public:

    virtual void googlePlaySignedIn();

};

class GEODE_CODEGEN_DLL GManager : public cocos2d::CCNode {
public:

    virtual void setup();

    void encodeDataTo(DS_Dictionary* data);

    void dataLoaded(DS_Dictionary* data);

    void firstLoad();

    void save();

    void saveData(DS_Dictionary* p0, gd::string p1);

    void saveGMTo(gd::string p0);

        gd::string m_fileName;
        bool m_setup;
        bool m_saved;
        bool m_quickSave;
};

class GEODE_CODEGEN_DLL GJUserScore : public cocos2d::CCNode {
public:

    IconType getIconType() const;

    int getPlayerCube() const;

    int getPlayerShip() const;

    int getPlayerBall() const;

    int getPlayerUfo() const;

    int getPlayerWave() const;

    int getPlayerRobot() const;

    int getPlayerSpider() const;

    int getPlayerStreak() const;

    bool getGlowEnabled() const;

    int getPlayerExplosion() const;

    int getPlayerColor1() const;

    int getPlayerColor2() const;

    gd::string getPlayerName() const;

    template <bool T=false>
    static GJUserScore* create(){
        static_assert(T, "Implement GJUserScore::create");
    }

    template <bool T=false>
    static GJUserScore* create(cocos2d::CCDictionary* p0){
        static_assert(T, "Implement GJUserScore::create");
    }

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

class GEODE_CODEGEN_DLL GJSpriteColor : public cocos2d::CCNode {
public:

        int m_colorID;
        int m_defaultColorID;
        float m_unk_0F4;
        cocos2d::ccHSVValue m_hsv;
        bool unk_108;
        float unk_10C;
        bool unk_110;
};

class GEODE_CODEGEN_DLL GJScoreCell : public TableViewCell {
public:

    template <bool T=false>
    void FLAlert_Clicked(FLAlertLayer* p0, bool p1){
        static_assert(T, "Implement GJScoreCell::FLAlert_Clicked");
    }

    template <bool T=false>
    void loadFromScore(GJUserScore* score){
        static_assert(T, "Implement GJScoreCell::loadFromScore");
    }

    template <bool T=false>
    void onViewProfile(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJScoreCell::onViewProfile");
    }

    template <bool T=false>
    void updateBGColor(unsigned int index){
        static_assert(T, "Implement GJScoreCell::updateBGColor");
    }

};

class GEODE_CODEGEN_DLL GJScaleControlDelegate {
public:

    virtual void scaleChangeBegin();

    virtual void scaleChangeEnded();

    virtual void scaleChanged(float p0);

};

class GEODE_CODEGEN_DLL CCMenuItemToggler : public cocos2d::CCMenuItem {
public:
	 CCMenuItemToggler() : CCMenuItem(), m_onButton(nullptr), m_offButton(nullptr), m_toggled(false), m_notClickable(false) {}

    static CCMenuItemToggler* createWithSize(const char* spr1, const char* spr2, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    static CCMenuItemToggler* createWithStandardSprites(cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback, float scale);

    bool isOn();

    bool isToggled();

    void setClickable(bool on);

    void toggleWithCallback(bool on);

    static CCMenuItemToggler* create(cocos2d::CCNode* offSpr, cocos2d::CCNode* onSpr, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback);

    void setSizeMult(float p0);

    void toggle(bool p0);

    bool init(cocos2d::CCNode* off, cocos2d::CCNode* on, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler handler);

    void activate();

    void selected();

    void unselected();

    void setEnabled(bool enabled);

        CCMenuItemSpriteExtra* m_offButton;
        CCMenuItemSpriteExtra* m_onButton;
        bool m_toggled;
        bool m_notClickable;
};

class GEODE_CODEGEN_DLL GJRewardObject : public cocos2d::CCObject {
public:

        SpecialRewardItem m_specialRewardItem;
        UnlockType m_unlockType;
        int m_itemID;
        int m_total;
};

class GEODE_CODEGEN_DLL OnlineListDelegate {
public:

    virtual void loadListFinished(cocos2d::CCArray* p0, const char* p1);

    virtual void loadListFailed(const char* p0);

    virtual void setupPageInfo(gd::string p0, const char* p1);

};

class GEODE_CODEGEN_DLL GJMessageCell : public TableViewCell {
public:

    template <bool T=false>
    void updateBGColor(unsigned int index){
        static_assert(T, "Implement GJMessageCell::updateBGColor");
    }

};

class GEODE_CODEGEN_DLL GJMapPack : public cocos2d::CCNode {
public:

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

class GEODE_CODEGEN_DLL GJLevelScoreCell : public TableViewCell {
public:

    template <bool T=false>
    void updateBGColor(unsigned int index){
        static_assert(T, "Implement GJLevelScoreCell::updateBGColor");
    }

};

class GEODE_CODEGEN_DLL ListButtonBarDelegate {
public:

};

class GEODE_CODEGEN_DLL GJGarageLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate {
public:
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

    void onPlayerColor1(cocos2d::CCObject* p0);

    void onPlayerColor2(cocos2d::CCObject* p0);

    template <bool T=false>
    static GJGarageLayer* create(){
        static_assert(T, "Implement GJGarageLayer::create");
    }

    virtual bool init();

    template <bool T=false>
    void onSelectTab(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJGarageLayer::onSelectTab");
    }

    template <bool T=false>
    void onPlayerIcon(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJGarageLayer::onPlayerIcon");
    }

    template <bool T=false>
    void onShipIcon(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJGarageLayer::onShipIcon");
    }

    template <bool T=false>
    void onBallIcon(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJGarageLayer::onBallIcon");
    }

    template <bool T=false>
    void onBirdIcon(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJGarageLayer::onBirdIcon");
    }

    template <bool T=false>
    void onDartIcon(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJGarageLayer::onDartIcon");
    }

    template <bool T=false>
    void onRobotIcon(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJGarageLayer::onRobotIcon");
    }

    template <bool T=false>
    void onSpiderIcon(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJGarageLayer::onSpiderIcon");
    }

    template <bool T=false>
    void onShards(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJGarageLayer::onShards");
    }

    template <bool T=false>
    void onBack(cocos2d::CCObject* pSender){
        static_assert(T, "Implement GJGarageLayer::onBack");
    }

    template <bool T=false>
    void onShop(cocos2d::CCObject* pSender){
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

class GEODE_CODEGEN_DLL GJGameLevel : public cocos2d::CCNode {
public:

    static GJGameLevel* createWithCoder(DS_Dictionary* dict);

        ~GJGameLevel();
    virtual void encodeWithCoder(DS_Dictionary* p0);

    virtual bool canEncode();

    virtual bool init();

    static GJGameLevel* create();

    gd::string getAudioFileName();

    const char* getCoinKey(int p0);

    void getLengthKey(int p0);

    void getNormalPercent();

    void levelWasAltered();

    void savePercentage(int p0, bool p1, int p2, int p3, bool p4);

    void dataLoaded(DS_Dictionary* dict);

    template <bool T=false>
    GJDifficulty getAverageDifficulty(){
        static_assert(T, "Implement GJGameLevel::getAverageDifficulty");
    }

    template <bool T=false>
    gd::string getUnpackedLevelDescription(){
        static_assert(T, "Implement GJGameLevel::getUnpackedLevelDescription");
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
        int m_levelIDRand;
        int m_levelIDSeed;
        int m_levelID;
        gd::string m_levelName;
        gd::string m_levelDesc;
        gd::string m_levelString;
        gd::string m_creatorName;
        gd::string m_recordString;
        gd::string m_uploadDate;
        gd::string m_updateDate;
        int m_userIDRand;
        int m_userIDSeed;
        int m_userID;
        int m_accountIDRand;
        int m_accountIDSeed;
        int m_accountID;
        GJDifficulty m_difficulty;
        int m_audioTrack;
        int m_songID;
        int m_levelRev;
        bool m_unlisted;
        int m_objectCountRand;
        int m_objectCountSeed;
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
        int m_isVerifiedRand;
        int m_isVerifiedSeed;
        bool m_isVerified;
        bool m_isUploaded;
        bool m_hasBeenModified;
        int m_levelVersion;
        int m_gameVersion;
        int m_attemptsRand;
        int m_attemptsSeed;
        int m_attempts;
        int m_jumpsRand;
        int m_jumpsSeed;
        int m_jumps;
        int m_clicksRand;
        int m_clicksSeed;
        int m_clicks;
        int m_attemptTimeRand;
        int m_attemptTimeSeed;
        int m_attemptTime;
        int m_chk;
        bool m_isChkValid;
        bool m_isCompletionLegitimate;
        int m_normalPercent;
        int m_normalPercentSeed;
        int m_normalPercentRand;
        int m_orbCompletionRand;
        int m_orbCompletionSeed;
        int m_orbCompletion;
        int m_newNormalPercent2Rand;
        int m_newNormalPercent2Seed;
        int m_newNormalPercent2;
        int m_practicePercent;
        int m_likes;
        int m_dislikes;
        int m_levelLength;
        int m_featured;
        bool m_isEpic;
        bool m_levelFavorited;
        int m_levelFolder;
        int m_dailyIDRand;
        int m_dailyIDSeed;
        int m_dailyID;
        int m_demonRand;
        int m_demonSeed;
        int m_demon;
        int m_demonDifficulty;
        int m_starsRand;
        int m_starsSeed;
        int m_stars;
        bool m_autoLevel;
        int m_coins;
        int m_coinsVerifiedRand;
        int m_coinsVerifiedSeed;
        int m_coinsVerified;
        int m_passwordRand;
        int m_passwordSeed;
        int m_originalLevelRand;
        int m_originalLevelSeed;
        int m_originalLevel;
        bool m_twoPlayerMode;
        int m_failedPasswordAttempts;
        int m_firstCoinVerifiedRand;
        int m_firstCoinVerifiedSeed;
        int m_firstCoinVerified;
        int m_secondCoinVerifiedRand;
        int m_secondCoinVerifiedSeed;
        int m_secondCoinVerified;
        int m_thirdCoinVerifiedRand;
        int m_thirdCoinVerifiedSeed;
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

class GEODE_CODEGEN_DLL CCScrollLayerExt : public cocos2d::CCLayer {
public:
	 CCScrollLayerExt() {}

    static CCScrollLayerExt* create(cocos2d::CCRect rect, bool vertical);

    float getMinY();

    float getMaxY();

    virtual void visit();

    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void registerWithTouchDispatcher();

    virtual void preVisitWithClippingRect(cocos2d::CCRect p0);

    virtual void postVisit();

    void moveToTop();

    void moveToTopWithOffset(float p0);

        CCScrollLayerExt(cocos2d::CCRect rect);
    void scrollLayer(float scroll);

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

class GEODE_CODEGEN_DLL CCScrollLayerExtDelegate {
public:

    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);

    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* p0);

    virtual void scrollViewTouchMoving(CCScrollLayerExt* p0);

    virtual void scrollViewDidEndMoving(CCScrollLayerExt* p0);

    virtual void scrollViewTouchBegin(CCScrollLayerExt* p0);

    virtual void scrollViewTouchEnd(CCScrollLayerExt* p0);

};

class GEODE_CODEGEN_DLL TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
	 TableView() {}
	 TableView(cocos2d::CCRect rect) : CCScrollLayerExt(rect) {}

    static TableView* create(TableViewDelegate* p0, TableViewDataSource* p1, cocos2d::CCRect p2);

    void reloadData();

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

class GEODE_CODEGEN_DLL GJDropDownLayerDelegate {
public:

    virtual void dropDownLayerWillClose(GJDropDownLayer* p0);

};

class GEODE_CODEGEN_DLL TopArtistsLayer : public FLAlertLayer {
public:

    static TopArtistsLayer* create();

    void setupLeaderboard(cocos2d::CCArray* p0);

    virtual bool init();

    void loadPage(int p0);

    void setupPageInfo(gd::string p0, char const* p1);

        CLASSPARAM(cocos2d::CCNode*, unknown, 0x220);
        CLASSPARAM(GJCommentListLayer*, commentLayer, 0x260);
};

class GEODE_CODEGEN_DLL GJDailyLevelDelegate {
public:

};

class GEODE_CODEGEN_DLL GJColorSetupLayer {
public:

};

class GEODE_CODEGEN_DLL GJChallengeDelegate {
public:

};

class GEODE_CODEGEN_DLL LeaderboardManagerDelegate {
public:

};

class GEODE_CODEGEN_DLL EndPortalObject : public GameObject {
public:

    static EndPortalObject* create();

    void updateColors(cocos2d::_ccColor3B p0);

};

class GEODE_CODEGEN_DLL LevelPage {
public:

        GEODE_UNIMPLEMENTED_PAD
        GJGameLevel* m_level;
};

class GEODE_CODEGEN_DLL GJAccountSyncDelegate {
public:

    virtual bool syncAccountFailed(BackupAccountError p0);

    virtual bool syncAccountFinished();

};

class GEODE_CODEGEN_DLL FriendRequestDelegate {
public:

};

class GEODE_CODEGEN_DLL SongInfoLayer : public FLAlertLayer {
public:

    template <bool T=false>
    static SongInfoLayer* create(int songID){
        static_assert(T, "Implement SongInfoLayer::create");
    }

    template <bool T=false>
    static SongInfoLayer* create(gd::string songName, gd::string artistName, gd::string downloadLink, gd::string artistNG, gd::string artistYT, gd::string artistFB){
        static_assert(T, "Implement SongInfoLayer::create");
    }

        gd::string m_downloadLink;
        gd::string m_artistNewgrounds;
        gd::string m_artistYoutube;
        gd::string m_artistFacebook;
};

class GEODE_CODEGEN_DLL ObjectManager : public cocos2d::CCNode {
public:

    template <bool T=false>
    static ObjectManager* instance(){
        static_assert(T, "Implement ObjectManager::instance");
    }

    template <bool T=false>
    void setup(){
        static_assert(T, "Implement ObjectManager::setup");
    }

};

class GEODE_CODEGEN_DLL DrawGridLayer : public cocos2d::CCLayer {
public:
	 using CCPointArray400 = cocos2d::CCPoint(*)[400];
	 using CCPointArray200 = cocos2d::CCPoint(*)[200];

    template <bool T=false>
    void draw(){
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

class GEODE_CODEGEN_DLL FMODAudioEngine : public cocos2d::CCNode {
public:

    static FMODAudioEngine* sharedEngine();

    template <bool T=false>
    void preloadEffect(gd::string filename){
        static_assert(T, "Implement FMODAudioEngine::preloadEffect");
    }

    template <bool T=false>
    bool isBackgroundMusicPlaying(){
        static_assert(T, "Implement FMODAudioEngine::isBackgroundMusicPlaying");
    }

    template <bool T=false>
    bool isBackgroundMusicPlaying(gd::string path){
        static_assert(T, "Implement FMODAudioEngine::isBackgroundMusicPlaying");
    }

    template <bool T=false>
    void playBackgroundMusic(gd::string path, bool fade, bool paused){
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

class GEODE_CODEGEN_DLL PulseEffectAction : public cocos2d::CCNode {
public:

    static PulseEffectAction* createFromString(gd::string p0);

    void getSaveString();

        CLASSPARAM(int, group, 0x130);
};

class GEODE_CODEGEN_DLL CCBlockLayer : public cocos2d::CCLayerColor {
public:

    void disableUI();

    void draw();

    void enableUI();

    void enterAnimFinished();

    void enterLayer();

    void exitLayer();

    void hideLayer(bool p0);

    virtual bool init();

    void layerHidden();

    void layerVisible();

    void registerWithTouchDispatcher();

    void showLayer(bool p0);

        bool m_unknown;
        bool m_unknown2;
};

class GEODE_CODEGEN_DLL EditorPauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:

    static EditorPauseLayer* create(LevelEditorLayer* editor);

        ~EditorPauseLayer();
    virtual void keyBackClicked();

    virtual void keyDown(cocos2d::enumKeyCodes p0);

    virtual void customSetup();

    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    void saveLevel();

    bool init(LevelEditorLayer* p0);

    template <bool T=false>
    void onExitEditor(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorPauseLayer::onExitEditor");
    }

    template <bool T=false>
    void playStep2(){
        static_assert(T, "Implement EditorPauseLayer::playStep2");
    }

    template <bool T=false>
    void onResume(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorPauseLayer::onResume");
    }

    template <bool T=false>
    void onSaveAndPlay(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorPauseLayer::onSaveAndPlay");
    }

    template <bool T=false>
    void onSaveAndExit(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorPauseLayer::onSaveAndExit");
    }

    template <bool T=false>
    void onSave(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorPauseLayer::onSave");
    }

    template <bool T=false>
    void onExitNoSave(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorPauseLayer::onExitNoSave");
    }

    template <bool T=false>
    void uncheckAllPortals(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorPauseLayer::uncheckAllPortals");
    }

        bool m_saved;
        GEODE_UNIMPLEMENTED_PAD
        CCMenuItemSpriteExtra* m_button0;
        CCMenuItemSpriteExtra* m_button1;
        LevelEditorLayer* m_editorLayer;
};

class GEODE_CODEGEN_DLL EditLevelLayer : public cocos2d::CCLayer {
public:

    static void scene(GJGameLevel* level);

    static EditLevelLayer* create(GJGameLevel* level);

    template <bool T=false>
    void onLevelInfo(){
        static_assert(T, "Implement EditLevelLayer::onLevelInfo");
    }

        cocos2d::CCMenu* m_buttonMenu;
        GJGameLevel* m_level;
        TextArea* m_descriptionInput;
        cocos2d::CCArray* m_someArray;
        cocos2d::CCLabelBMFont* m_someFont;
};

class GEODE_CODEGEN_DLL EditButtonBar : public cocos2d::CCNode {
public:

    void removeAllItems();

    void reloadItems(int rowCount, int columnCount);

    void reloadItemsInNormalSize();

    void addButton(CCMenuItemSpriteExtra* btn, bool reload);

    void loadFromItems(cocos2d::CCArray* buttons, int rowCount, int columnCount, bool idk);

        cocos2d::CCPoint m_position;
        int m_unknown;
        bool m_unknownBool;
        cocos2d::CCArray* m_buttonArray;
        BoomScrollLayer* m_scrollLayer;
        cocos2d::CCArray* m_pagesArray;
};

class GEODE_CODEGEN_DLL ToggleTriggerAction : public cocos2d::CCNode {
public:

    static ToggleTriggerAction* createFromString(gd::string p0);

};

class GEODE_CODEGEN_DLL DownloadMessageDelegate {
public:

};

class GEODE_CODEGEN_DLL LoadingLayer : public cocos2d::CCLayer {
public:

    void setFromRefresh(bool value);

    static LoadingLayer* create(bool fromReload);

    bool init(bool fromReload);

    template <bool T=false>
    const char* getLoadingString(){
        static_assert(T, "Implement LoadingLayer::getLoadingString");
    }

    void loadAssets();

    template <bool T=false>
    void loadingFinished(){
        static_assert(T, "Implement LoadingLayer::loadingFinished");
    }

    static cocos2d::CCScene* scene(bool fromReload);

        bool m_unknown;
        bool m_unknown2;
        int m_loadStep;
        cocos2d::CCLabelBMFont* m_caption;
        TextArea* m_textArea;
        cocos2d::CCSprite* m_sliderBar;
        float m_sliderGrooveXPos;
        float m_sliderGrooveHeight;
        bool m_fromRefresh;
};

class GEODE_CODEGEN_DLL DialogObject : public cocos2d::CCObject {
public:

    template <bool T=false>
    static DialogObject* create(gd::string title, gd::string text, int portrait, float text_scale, bool is_unskippable, cocos2d::ccColor3B text_color){
        static_assert(T, "Implement DialogObject::create");
    }

    template <bool T=false>
    bool init(DialogObject* p0, gd::string title, gd::string text, int portrait, float text_scale, bool is_unskippable, cocos2d::ccColor3B text_color){
        static_assert(T, "Implement DialogObject::init");
    }

        gd::string m_text;
        gd::string m_title;
        int m_dialogType;
        cocos2d::ccColor3B m_colour;
        float m_textWidth;
        bool m_canSkip;
};

class GEODE_CODEGEN_DLL SetIDLayer {
public:

    static SetIDLayer* create(GameObject* p0);

};

class GEODE_CODEGEN_DLL HSVWidgetPopupDelegate {
public:

};

class GEODE_CODEGEN_DLL ColorSelectDelegate {
public:

    virtual void colorSelectClosed(cocos2d::CCNode* p0);

};

class GEODE_CODEGEN_DLL ColorSetupDelegate {
public:

};

class GEODE_CODEGEN_DLL CustomizeObjectLayer : public FLAlertLayer, public TextInputDelegate, public HSVWidgetPopupDelegate, public ColorSelectDelegate, public ColorSetupDelegate {
public:

    template <bool T=false>
    void onNextColorChannel(cocos2d::CCObject* pSender){
        static_assert(T, "Implement CustomizeObjectLayer::onNextColorChannel");
    }

    template <bool T=false>
    void onSelectColor(cocos2d::CCObject* pSender){
        static_assert(T, "Implement CustomizeObjectLayer::onSelectColor");
    }

    template <bool T=false>
    int getActiveMode(bool unknown){
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

class GEODE_CODEGEN_DLL GameLevelManager : public cocos2d::CCNode {
public:

    template <bool T=false>
    cocos2d::CCArray* createAndGetScores(gd::string p0, GJScoreType p1){
        static_assert(T, "Implement GameLevelManager::createAndGetScores");
    }

    GJGameLevel* createNewLevel();

    static GameLevelManager* sharedState();

    template <bool T=false>
    void getCompletedLevels(bool newFilter){
        static_assert(T, "Implement GameLevelManager::getCompletedLevels");
    }

    template <bool T=false>
    void getGJUserInfo(int p0){
        static_assert(T, "Implement GameLevelManager::getGJUserInfo");
    }

    template <bool T=false>
    void getOnlineLevels(GJSearchObject* p0){
        static_assert(T, "Implement GameLevelManager::getOnlineLevels");
    }

    void getPageInfo(char const* p0);

    template <bool T=false>
    cocos2d::CCArray* getSavedLevels(bool favorite, int levelFolder){
        static_assert(T, "Implement GameLevelManager::getSavedLevels");
    }

    cocos2d::CCArray* getStoredOnlineLevels(char const* p0);

    void getTopArtists(int p0, int p1);

    void getTopArtistsKey(int p0);

    void makeTimeStamp(char const* p0);

    template <bool T=false>
    GJGameLevel* getMainLevel(int id, bool unk){
        static_assert(T, "Implement GameLevelManager::getMainLevel");
    }

    template <bool T=false>
    cocos2d::CCDictionary* responseToDict(gd::string response, bool comment){
        static_assert(T, "Implement GameLevelManager::responseToDict");
    }

    template <bool T=false>
    void storeUserNames(gd::string p0){
        static_assert(T, "Implement GameLevelManager::storeUserNames");
    }

    template <bool T=false>
    gd::string userNameForUserID(int id){
        static_assert(T, "Implement GameLevelManager::userNameForUserID");
    }

    template <bool T=false>
    void updateUserScore(){
        static_assert(T, "Implement GameLevelManager::updateUserScore");
    }

        cocos2d::CCDictionary* m_mainLevels;
        cocos2d::CCDictionary* m_searchFilters;
        cocos2d::CCDictionary* m_onlineLevels;
        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCDictionary* m_followedCreators;
        cocos2d::CCDictionary* m_downloadedLevels;
        cocos2d::CCDictionary* m_likedLevels;
        cocos2d::CCDictionary* m_ratedLevels;
        cocos2d::CCDictionary* m_ratedDemons;
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
        cocos2d::CCDictionary* m_unkDict13;
        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCDictionary* m_timerDict;
        cocos2d::CCDictionary* m_knownUsers;
        cocos2d::CCDictionary* m_accountIDtoUserIDDict;
        cocos2d::CCDictionary* m_userIDtoAccountIDDict;
        cocos2d::CCDictionary* m_storedLevels;
        cocos2d::CCDictionary* m_pageInfo;
        cocos2d::CCDictionary* m_unkDict20;
        cocos2d::CCDictionary* m_savedPacks;
        cocos2d::CCDictionary* m_savedGauntlets;
        cocos2d::CCDictionary* m_downloadObjects;
        cocos2d::CCDictionary* m_unkDict24;
        cocos2d::CCDictionary* m_storedUserInfo;
        cocos2d::CCDictionary* m_friendRequests;
        cocos2d::CCDictionary* m_userMessages;
        cocos2d::CCDictionary* m_userReplies;
        gd::string m_unkStr1;
        gd::string m_unkStr2;
        LeaderboardState m_leaderboardState;
        bool m_unkEditLevelLayerOnBack;
        OnlineListDelegate* m_onlineListDelegate;
        LevelDownloadDelegate* m_levelDownloadDelegate;
        LevelCommentDelegate* m_levelCommentDelegate;
        CommentUploadDelegate* m_commentUploadDelegate;
        LevelUploadDelegate* m_levelUploadDelegate;
        LevelUpdateDelegate* m_levelUpdateDelegate;
        LeaderboardManagerDelegate* m_leaderboardManagerDelegate;
        LevelDeleteDelegate* m_levelDeleteDelegate;
        UserInfoDelegate* m_userInfoDelegate;
        LevelManagerDelegate* m_levelManagerDelegate;
        void* m_unkDelegate;
        FriendRequestDelegate* m_friendRequestDelegate;
        MessageListDelegate* m_messageListDelegate;
        DownloadMessageDelegate* m_downloadMessageDelegate;
        UploadMessageDelegate* m_uploadMessageDelegate;
        GJRewardDelegate* m_GJRewardDelegate;
        GJChallengeDelegate* m_GJChallengeDelegate;
        GJDailyLevelDelegate* m_GJDailyLevelDelegate;
        MusicDownloadDelegate* m_musicDownloadDelegate;
        int m_unkDownload;
        GEODE_UNIMPLEMENTED_PAD
        gd::string m_unkStr3;
        cocos2d::CCString* m_unkStr4;
};

class GEODE_CODEGEN_DLL CustomSongLayer : public FLAlertLayer, public FLAlertLayerProtocol, public TextInputDelegate, public GJDropDownLayerDelegate {
public:

    bool init(LevelSettingsObject* p0);

    void onArtists(cocos2d::CCObject* p0);

    void onSongBrowser(cocos2d::CCObject* p0);

        LevelSettingsObject* m_levelSettings;
        CCTextInputNode* m_songIDInput;
        CustomSongWidget* m_songWidget;
        LevelSettingsLayer* m_levelSettingsLayer;
};

class GEODE_CODEGEN_DLL CustomSongCell : public TableViewCell {
public:

    void loadFromObject(SongInfoObject* p0);

};

class GEODE_CODEGEN_DLL CreatorLayer : public cocos2d::CCLayer {
public:

    template <bool T=false>
    void onBack(cocos2d::CCObject* p0){
        static_assert(T, "Implement CreatorLayer::onBack");
    }

    template <bool T=false>
    void onChallenge(cocos2d::CCObject* p0){
        static_assert(T, "Implement CreatorLayer::onChallenge");
    }

    template <bool T=false>
    void onLeaderboards(cocos2d::CCObject* p0){
        static_assert(T, "Implement CreatorLayer::onLeaderboards");
    }

    void onMyLevels(cocos2d::CCObject* p0);

    void onSavedLevels(cocos2d::CCObject* p0);

    template <bool T=false>
    void sceneWillResume(){
        static_assert(T, "Implement CreatorLayer::sceneWillResume");
    }

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement CreatorLayer::init");
    }

    template <bool T=false>
    static CreatorLayer* create(){
        static_assert(T, "Implement CreatorLayer::create");
    }

};

class GEODE_CODEGEN_DLL CurrencyRewardDelegate {
public:

    virtual void currencyWillExit(CurrencyRewardLayer* p0);

};

class GEODE_CODEGEN_DLL CreateGuidelinesLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:

    template <bool T=false>
    void onStop(cocos2d::CCObject* pSender){
        static_assert(T, "Implement CreateGuidelinesLayer::onStop");
    }

        GEODE_UNIMPLEMENTED_PAD
        gd::string m_guidelineString;
};

class GEODE_CODEGEN_DLL GameObjectCopy : public cocos2d::CCObject {
public:

        ~GameObjectCopy();
    static GameObjectCopy* create(GameObject* p0);

    void resetObject();

};

class GEODE_CODEGEN_DLL CommentCell : public TableViewCell {
public:

    void loadFromComment(GJComment* p0);

        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCSprite* m_iconSprite;
        cocos2d::CCLabelBMFont* m_likeLabel;
        GJComment* m_comment;
        GEODE_UNIMPLEMENTED_PAD
};

class GEODE_CODEGEN_DLL MoreOptionsLayer {
public:

    template <bool T=false>
    static MoreOptionsLayer* create(){
        static_assert(T, "Implement MoreOptionsLayer::create");
    }

    template <bool T=false>
    void addToggle(const char* name, const char* key, const char* info){
        static_assert(T, "Implement MoreOptionsLayer::addToggle");
    }

    template <bool T=false>
    void onKeybindings(cocos2d::CCObject* pSender){
        static_assert(T, "Implement MoreOptionsLayer::onKeybindings");
    }

};

class GEODE_CODEGEN_DLL GJRotationControl : public cocos2d::CCLayer {
public:

    void setAngle(float angle);

    template <bool T=false>
    void updateSliderPosition(cocos2d::CCPoint const& pos){
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

class GEODE_CODEGEN_DLL ColorChannelSprite : public cocos2d::CCSprite {
public:

    void updateBlending(bool p0);

    void updateCopyLabel(int p0, bool p1);

    void updateOpacity(float p0);

    void updateValues(ColorAction* p0);

    static ColorChannelSprite* create();

        cocos2d::CCLabelBMFont* m_copyLabel;
        cocos2d::CCLabelBMFont* m_opacityLabel;
        cocos2d::CCLabelBMFont* m_blendingDot;
};

class GEODE_CODEGEN_DLL ExtendedLayer {
public:

};

class GEODE_CODEGEN_DLL ColorAction : public cocos2d::CCNode {
public:

    void getSaveString();

    void setupFromDict(cocos2d::CCDictionary* p0);

    void setupFromString(gd::string p0);

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

class GEODE_CODEGEN_DLL CollisionTriggerAction : public cocos2d::CCNode {
public:

    static CollisionTriggerAction* createFromString(gd::string p0);

};

class GEODE_CODEGEN_DLL GJRotationControlDelegate {
public:

    virtual void angleChangeBegin();

    virtual void angleChangeEnded();

    virtual void angleChanged(float p0);

};

class GEODE_CODEGEN_DLL EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public MusicDownloadDelegate {
public:

    static EditorUI* get();

    void constrainGameLayerPosition();

    void create(LevelEditorLayer* p0);

    void deselectAll();

    void onDeselectAll(cocos2d::CCObject* p0);

    void disableButton(CreateMenuItem* p0);

    void editButtonUsable();

    void editObject(cocos2d::CCObject* p0);

    void enableButton(CreateMenuItem* p0);

    CCMenuItemSpriteExtra* getCreateBtn(int p0, int p1);

    cocos2d::CCPoint getGroupCenter(cocos2d::CCArray* p0, bool p1);

    cocos2d::CCArray* getSelectedObjects();

    void init(LevelEditorLayer* p0);

    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void keyDown(cocos2d::enumKeyCodes p0);

    void moveObject(GameObject* p0, cocos2d::CCPoint p1);

    void onDuplicate(cocos2d::CCObject* p0);

    cocos2d::CCArray* pasteObjects(gd::string const& p0);

    void playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    void playtestStopped();

    void redoLastAction(cocos2d::CCObject* p0);

    void replaceGroupID(GameObject* p0, int p1, int p2);

    void scaleChanged(float p0);

    void scaleObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);

    void selectObjects(cocos2d::CCArray* p0, bool p1);

    void setupCreateMenu();

    void undoLastAction(cocos2d::CCObject* p0);

    void updateButtons();

    void updateObjectInfoLabel();

    void updateSlider();

    void updateZoom(float p0);

    void selectObject(GameObject* obj, bool idk);

    template <bool T=false>
    void selectAll(){
        static_assert(T, "Implement EditorUI::selectAll");
    }

    template <bool T=false>
    void selectAllWithDirection(bool left){
        static_assert(T, "Implement EditorUI::selectAllWithDirection");
    }

    template <bool T=false>
    cocos2d::CCPoint getTouchPoint(cocos2d::CCTouch* touch, cocos2d::CCEvent* event){
        static_assert(T, "Implement EditorUI::getTouchPoint");
    }

    template <bool T=false>
    void onSelectBuildTab(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::onSelectBuildTab");
    }

    template <bool T=false>
    void onCreateButton(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::onCreateButton");
    }

    template <bool T=false>
    CCMenuItemSpriteExtra* getSpriteButton(const char* sprite, cocos2d::SEL_MenuHandler callback, cocos2d::CCMenu* menu, float scale){
        static_assert(T, "Implement EditorUI::getSpriteButton");
    }

    template <bool T=false>
    cocos2d::CCPoint offsetForKey(int objID){
        static_assert(T, "Implement EditorUI::offsetForKey");
    }

    template <bool T=false>
    void updateDeleteMenu(){
        static_assert(T, "Implement EditorUI::updateDeleteMenu");
    }

    void updateCreateMenu(bool updateTab);

    void toggleMode(cocos2d::CCObject* pSender);

    void zoomIn(cocos2d::CCObject* pSender);

    void zoomOut(cocos2d::CCObject* pSender);

    template <bool T=false>
    void rotateObjects(cocos2d::CCArray* objects, float angle, cocos2d::CCPoint center){
        static_assert(T, "Implement EditorUI::rotateObjects");
    }

    void updateGridNodeSize();

    template <bool T=false>
    void updateSpecialUIElements(){
        static_assert(T, "Implement EditorUI::updateSpecialUIElements");
    }

    void constrainGameLayerPosition(float x, float y);

    void moveGameLayer(cocos2d::CCPoint const& pos);

    void showUI(bool show);

    template <bool T=false>
    void editObject2(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::editObject2");
    }

    template <bool T=false>
    void editGroup(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::editGroup");
    }

    void moveObjectCall(EditCommand pSender);

    void transformObjectCall(EditCommand pSender);

    void onDeleteSelected(cocos2d::CCObject* pSender);

    void onCopy(cocos2d::CCObject* pSender);

    void onPaste(cocos2d::CCObject* pSender);

    void toggleEnableRotate(cocos2d::CCObject* pSender);

    void toggleFreeMove(cocos2d::CCObject* pSender);

    void toggleSwipe(cocos2d::CCObject* pSender);

    void toggleSnap(cocos2d::CCObject* pSender);

    void onPlayback(cocos2d::CCObject* pSender);

    void onPlaytest(cocos2d::CCObject* pSender);

    void onStopPlaytest(cocos2d::CCObject* pSender);

    void onGroupUp(cocos2d::CCObject* pSender);

    void onGroupDown(cocos2d::CCObject* pSender);

    void selectBuildTab(int tab);

    void onPause(cocos2d::CCObject* pSender);

    template <bool T=false>
    void onSettings(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::onSettings");
    }

    template <bool T=false>
    void activateRotationControl(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::activateRotationControl");
    }

    template <bool T=false>
    void activateScaleControl(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::activateScaleControl");
    }

    template <bool T=false>
    void dynamicGroupUpdate(bool idk){
        static_assert(T, "Implement EditorUI::dynamicGroupUpdate");
    }

    template <bool T=false>
    void createRockOutline(){
        static_assert(T, "Implement EditorUI::createRockOutline");
    }

    template <bool T=false>
    void createRockEdges(){
        static_assert(T, "Implement EditorUI::createRockEdges");
    }

    template <bool T=false>
    void createRockBase(){
        static_assert(T, "Implement EditorUI::createRockBase");
    }

    template <bool T=false>
    void onCopyState(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::onCopyState");
    }

    template <bool T=false>
    void onPasteColor(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::onPasteColor");
    }

    template <bool T=false>
    void onPasteState(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::onPasteState");
    }

    template <bool T=false>
    void onGroupSticky(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::onGroupSticky");
    }

    template <bool T=false>
    void onUngroupSticky(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::onUngroupSticky");
    }

    template <bool T=false>
    void onGoToLayer(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::onGoToLayer");
    }

    template <bool T=false>
    void onGoToBaseLayer(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::onGoToBaseLayer");
    }

    template <bool T=false>
    void editColor(cocos2d::CCObject* pSender){
        static_assert(T, "Implement EditorUI::editColor");
    }

    template <bool T=false>
    void alignObjects(cocos2d::CCArray* objs, bool alignY){
        static_assert(T, "Implement EditorUI::alignObjects");
    }

    virtual void keyUp(cocos2d::enumKeyCodes key);

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

class GEODE_CODEGEN_DLL CollisionBlockPopup {
public:

    static CollisionBlockPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    void onNextItemID(cocos2d::CCObject* p0);

};

class GEODE_CODEGEN_DLL CheckpointObject : public cocos2d::CCNode {
public:

    static CheckpointObject* create();

    void getObject();

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

class GEODE_CODEGEN_DLL CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
public:
	 static CCMenuItemSpriteExtra* create(cocos2d::CCNode* sprite, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler callback) {
		return CCMenuItemSpriteExtra::create(sprite, nullptr, target, callback);
	}

    void useAnimationType(MenuAnimationType type);

    void setDestination(cocos2d::CCPoint const& pos);

    void setOffset(cocos2d::CCPoint const& pos);

    void setScale(float scale);

    static CCMenuItemSpriteExtra* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    void setSizeMult(float p0);

        CCMenuItemSpriteExtra();
    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    template <bool T=false>
    bool init(cocos2d::CCNode* spr){
        static_assert(T, "Implement CCMenuItemSpriteExtra::init");
    }

    template <bool T=false>
    void activate(){
        static_assert(T, "Implement CCMenuItemSpriteExtra::activate");
    }

    template <bool T=false>
    void selected(){
        static_assert(T, "Implement CCMenuItemSpriteExtra::selected");
    }

    template <bool T=false>
    void unselected(){
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

class GEODE_CODEGEN_DLL CreateMenuItem : public CCMenuItemSpriteExtra {
public:

    static CreateMenuItem* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

        GEODE_UNIMPLEMENTED_PAD
        int m_objectID;
        int m_buildTabPage;
        int m_buildTab;
};

class GEODE_CODEGEN_DLL LocalLevelManager : public cocos2d::CCNode {
public:

    static LocalLevelManager* sharedState();

        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCDictionary* m_loadData;
        cocos2d::CCDictionary* m_levelData;
        cocos2d::CCArray* m_localLevels;
};

class GEODE_CODEGEN_DLL CCMoveCNode : public cocos2d::CCNode {
public:

    static CCMoveCNode* create();

    virtual bool init();

        ~CCMoveCNode();
};

class GEODE_CODEGEN_DLL CCContentLayer : public cocos2d::CCLayerColor {
public:

    template <bool T=false>
    static CCContentLayer* create(cocos2d::ccColor4B const& color, float width, float height){
        static_assert(T, "Implement CCContentLayer::create");
    }

    template <bool T=false>
    void setPosition(cocos2d::CCPoint const& pos){
        static_assert(T, "Implement CCContentLayer::setPosition");
    }

};

class GEODE_CODEGEN_DLL GameStatsManager : public cocos2d::CCNode {
public:

    void awardCurrencyForLevel(GJGameLevel* p0);

    void awardDiamondsForLevel(GJGameLevel* p0);

    void awardSecretKey();

    template <bool T=false>
    int getAwardedCurrencyForLevel(GJGameLevel* p0){
        static_assert(T, "Implement GameStatsManager::getAwardedCurrencyForLevel");
    }

    template <bool T=false>
    int getBaseCurrencyForLevel(GJGameLevel* p0){
        static_assert(T, "Implement GameStatsManager::getBaseCurrencyForLevel");
    }

    template <bool T=false>
    const char* getCoinKey(int p0){
        static_assert(T, "Implement GameStatsManager::getCoinKey");
    }

    template <bool T=false>
    GJChallengeItem* getChallenge(int id){
        static_assert(T, "Implement GameStatsManager::getChallenge");
    }

    void getSecretCoinKey(char const* p0);

    void getStat(char const* p0);

    void hasPendingUserCoin(char const* p0);

    void hasSecretCoin(char const* p0);

    void hasUserCoin(char const* p0);

    template <bool T=false>
    void incrementChallenge(GJChallengeType type, int count){
        static_assert(T, "Implement GameStatsManager::incrementChallenge");
    }

    void incrementStat(char const* p0);

    void incrementStat(char const* p0, int p1);

    static GameStatsManager* sharedState();

    void storePendingUserCoin(char const* p0);

    void storeSecretCoin(char const* p0);

    void storeUserCoin(char const* p0);

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

class GEODE_CODEGEN_DLL CCCircleWave : public cocos2d::CCNode {
public:

    static CCCircleWave* create(float p0, float p1, float p2, bool p3);

    static CCCircleWave* create(float p0, float p1, float p2, bool p3, bool p4);

    bool init(float p0, float p1, float p2, bool p3, bool p4);

    void followObject(cocos2d::CCNode* p0, bool p1);

    void updatePosition(float p0);

    template <bool T=false>
    void setPosition(cocos2d::CCPoint const& pos){
        static_assert(T, "Implement CCCircleWave::setPosition");
    }

    template <bool T=false>
    void removeMeAndCleanup(){
        static_assert(T, "Implement CCCircleWave::removeMeAndCleanup");
    }

    template <bool T=false>
    void draw(){
        static_assert(T, "Implement CCCircleWave::draw");
    }

    template <bool T=false>
    void updateTweenAction(float dt, const char* key){
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

class GEODE_CODEGEN_DLL LevelBrowserLayer : public cocos2d::CCLayer {
public:

    static void scene(GJSearchObject* pSearch);

    template <bool T=false>
    bool init(GJSearchObject* pSearch){
        static_assert(T, "Implement LevelBrowserLayer::init");
    }

    template <bool T=false>
    void loadPage(GJSearchObject* pSearch){
        static_assert(T, "Implement LevelBrowserLayer::loadPage");
    }

    template <bool T=false>
    void setupLevelBrowser(cocos2d::CCArray* levels){
        static_assert(T, "Implement LevelBrowserLayer::setupLevelBrowser");
    }

    template <bool T=false>
    void updateLevelsLabel(){
        static_assert(T, "Implement LevelBrowserLayer::updateLevelsLabel");
    }

    static LevelBrowserLayer* create(GJSearchObject* pSearch);

        GEODE_UNIMPLEMENTED_PAD
        GJListLayer* m_list;
        CCMenuItemSpriteExtra* m_leftArrow;
        CCMenuItemSpriteExtra* m_rightArrow;
        GEODE_UNIMPLEMENTED_PAD
        GJSearchObject* m_searchObject;
        GEODE_UNIMPLEMENTED_PAD
        int m_itemCount;
        int m_pageStartIdx;
        int m_pageEndIdx;
};

class GEODE_CODEGEN_DLL ArtistCell : public TableViewCell {
public:

    void draw();

    virtual bool init();

    void loadFromObject(SongInfoObject* p0);

    void onNewgrounds(cocos2d::CCObject* p0);

    void updateBGColor(int p0);

        void* m_idk;
};

class GEODE_CODEGEN_DLL AchievementsLayer {
public:

    void customSetup();

    void loadPage(int p0);

};

class GEODE_CODEGEN_DLL AchievementNotifier : public cocos2d::CCNode {
public:

    void notifyAchievement(const char* title, const char* desc, const char* icon, bool quest);

    static AchievementNotifier* sharedState();

    void willSwitchToScene(cocos2d::CCScene* p0);

    void showNextAchievement();

        cocos2d::CCScene* m_currentScene;
        cocos2d::CCArray* m_queue;
        AchievementBar* m_currentAchievement;
};

class GEODE_CODEGEN_DLL MessageListDelegate {
public:

};

class GEODE_CODEGEN_DLL AchievementCell {
public:

    void loadFromDict(cocos2d::CCDictionary* p0);

};

class GEODE_CODEGEN_DLL AchievementBar : public cocos2d::CCNodeRGBA {
public:

    static AchievementBar* create(const char* title, const char* desc, const char* icon, bool quest);

        GEODE_UNIMPLEMENTED_PAD
};

class GEODE_CODEGEN_DLL CurrencyRewardLayer {
public:

        ~CurrencyRewardLayer();
    virtual void update(float p0);

};

class GEODE_CODEGEN_DLL ChallengesPage {
public:

    template <bool T=false>
    static ChallengesPage* create(){
        static_assert(T, "Implement ChallengesPage::create");
    }

};

class GEODE_CODEGEN_DLL AchievementManager : public cocos2d::CCNode {
public:

    void getAllAchievements();

    static AchievementManager* sharedState();

        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCDictionary* m_achievements;
        GEODE_UNIMPLEMENTED_PAD
};

class GEODE_CODEGEN_DLL ConfigureHSVWidget : public cocos2d::CCNode {
public:

        cocos2d::CCLabelBMFont* m_hueLabel;
        cocos2d::CCLabelBMFont* m_saturationLabel;
        cocos2d::CCLabelBMFont* m_brightnessLabel;
        Slider* m_hueSlider;
        Slider* m_saturationSlider;
        Slider* m_brightnessSlider;
        cocos2d::ccHSVValue m_value;
};

class GEODE_CODEGEN_DLL SetupInteractObjectPopup : public FLAlertLayer {
public:

    static SetupInteractObjectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    void onTargetIDArrow(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateTargetID();

};

class GEODE_CODEGEN_DLL UndoObject : public cocos2d::CCObject {
public:

        ~UndoObject();
    static UndoObject* create(GameObject* p0, UndoCommand p1);

    static UndoObject* createWithArray(cocos2d::CCArray* p0, UndoCommand p1);

    template <bool T=false>
    static UndoObject* createWithTransformObjects(cocos2d::CCArray* pObjects, UndoCommand nCommand){
        static_assert(T, "Implement UndoObject::createWithTransformObjects");
    }

        GameObject* m_gameObject;
        UndoCommand m_command;
        cocos2d::CCArray* m_objects;
        bool m_redo;
};

class GEODE_CODEGEN_DLL GJSearchObject : public cocos2d::CCNode {
public:

    SearchType getType();

    template <bool T=false>
    static GJSearchObject* create(SearchType nID){
        static_assert(T, "Implement GJSearchObject::create");
    }

    template <bool T=false>
    static GJSearchObject* create(SearchType nID, gd::string str){
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

class GEODE_CODEGEN_DLL GJAccountLoginDelegate {
public:

    virtual bool loginAccountFailed(AccountError p0);

    virtual bool loginAccountFinished(int p0, int p1);

};

class GEODE_CODEGEN_DLL EndLevelLayer {
public:

    static EndLevelLayer* create();

};

class GEODE_CODEGEN_DLL AnimatedGameObject {
public:

    void playAnimation(int p0);

    void updateChildSpriteColor(cocos2d::_ccColor3B p0);

};

class GEODE_CODEGEN_DLL BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
	 ~BoomListView() {
	    CC_SAFE_RELEASE(m_entries);
	}
	 bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height) {
		return this->init(entries, height, width, 0, type);
	}

    static BoomListView* create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);

    bool init(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);

    virtual void draw();

    virtual void setupList();

    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    virtual int numberOfRowsInSection(unsigned int p0, TableView* p1);

    virtual unsigned int numberOfSectionsInTableView(TableView* p0);

    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);

    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    virtual TableViewCell* getListCell(const char* p0);

    virtual void loadCell(TableViewCell* p0, unsigned int p1);

        TableView* m_tableView;
        cocos2d::CCArray* m_entries;
        BoomListType m_type;
        float m_height;
        float m_width;
        float m_itemSeparation;
        int m_currentPage;
};

class GEODE_CODEGEN_DLL CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
	 CCTextInputNode() : cocos2d::CCLayer(), cocos2d::CCIMEDelegate(), cocos2d::CCTextFieldDelegate(), m_caption(), m_allowedChars() {
		m_numberInput = false;
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

    void setLabelNormalColor(cocos2d::ccColor3B color);

    void setLabelPlaceholderColor(cocos2d::ccColor3B color);

    void setLabelPlaceholderScale(float scale);

    void setMaxLabelScale(float scale);

    void setMaxLabelWidth(int length);

    void setAllowedChars(gd::string filter);

    void forceOffset();

    void setString(gd::string text);

    const char* getString();

    cocos2d::CCTextFieldTTF* getTextField();

    cocos2d::CCLabelBMFont* getPlaceholderLabel();

    void setDelegate(TextInputDelegate* delegate);

    bool init(float width, float height, const char* caption, const char* thonburi, int maxCharCount, const char* font);

    void refreshLabel();

    void updateLabel(gd::string p0);

    void updateBlinkLabel();

    virtual void registerWithTouchDispatcher();

    virtual void visit();

    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void textChanged();

    virtual void onClickTrackNode(bool p0);

    virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    virtual bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2);

    virtual bool onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* p0);

    virtual bool onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* p0);

        bool m_numberInput;
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

class GEODE_CODEGEN_DLL GJUserCell : public TableViewCell {
public:

    template <bool T=false>
    void updateBGColor(unsigned int index){
        static_assert(T, "Implement GJUserCell::updateBGColor");
    }

};

class GEODE_CODEGEN_DLL LevelSettingsObject : public cocos2d::CCNode {
public:

        ~LevelSettingsObject();
    virtual bool init();

    static LevelSettingsObject* create();

    void objectFromDict(cocos2d::CCDictionary* p0);

    static LevelSettingsObject* objectFromString(gd::string p0);

    void setupColorsFromLegacyMode(cocos2d::CCDictionary* p0);

        GJEffectManager* m_effectManager;
        int m_startMode;
        int m_startSpeed;
        bool m_startMini;
        bool m_startDual;
        bool m_twoPlayerMode;
        float m_songOffset;
        bool m_fadeIn;
        bool m_fadeOut;
        int m_backgroundIndex;
        int m_groundIndex;
        int m_fontIndex;
        GEODE_UNIMPLEMENTED_PAD
        GJGameLevel* m_level;
        gd::string m_unknownStr;
};

class GEODE_CODEGEN_DLL UploadPopupDelegate {
public:

    virtual void onClosePopup();

};

class GEODE_CODEGEN_DLL GameToolbox {
public:

    template <bool T=false>
    static CCMenuItemToggler* createToggleButton(gd::string text, cocos2d::SEL_MenuHandler onToggled, bool isToggled, cocos2d::CCMenu* toggleMenu, cocos2d::CCPoint position, cocos2d::CCNode* callbackTarget, cocos2d::CCNode* labelParent, cocos2d::CCArray* toggleArray){
        static_assert(T, "Implement GameToolbox::createToggleButton");
    }

    static CCMenuItemToggler* createToggleButton(gd::string text, cocos2d::SEL_MenuHandler onToggled, bool isToggled, cocos2d::CCMenu* toggleMenu, cocos2d::CCPoint position, cocos2d::CCNode* callbackTarget, cocos2d::CCNode* labelParent, float checkboxScale, float labelSize, float maxWidth, cocos2d::CCPoint labelOffset, const char* unknown, bool anchorHorizontally, int toggleTag, cocos2d::CCArray* toggleArray);

    template <bool T=false>
    static void transformColor(cocos2d::ccColor3B* src, cocos2d::ccColor3B* dest, cocos2d::ccHSVValue hsv){
        static_assert(T, "Implement GameToolbox::transformColor");
    }

    template <bool T=false>
    static void alignItemsHorisontally(cocos2d::CCArray* array, bool idk, cocos2d::CCPoint start, float pad){
        static_assert(T, "Implement GameToolbox::alignItemsHorisontally");
    }

};

class GEODE_CODEGEN_DLL AnimatedShopKeeper : public CCAnimatedSprite {
public:

    void animationFinished(const char* p0);

    template <bool T=false>
    static AnimatedShopKeeper* create(ShopType type){
        static_assert(T, "Implement AnimatedShopKeeper::create");
    }

    template <bool T=false>
    void startAnimating(){
        static_assert(T, "Implement AnimatedShopKeeper::startAnimating");
    }

        float m_unknown1;
        float m_unknown2;
        bool m_unknown;
};

class GEODE_CODEGEN_DLL BoomScrollLayer : public cocos2d::CCLayer {
public:

        BoomScrollLayer();
    template <bool T=false>
    void instantMoveToPage(int page){
        static_assert(T, "Implement BoomScrollLayer::instantMoveToPage");
    }

    template <bool T=false>
    void moveToPage(int page){
        static_assert(T, "Implement BoomScrollLayer::moveToPage");
    }

        cocos2d::CCArray* m_dots;
        GEODE_UNIMPLEMENTED_PAD
        ExtendedLayer* m_layer;
        GEODE_UNIMPLEMENTED_PAD
        int m_page;
};

class GEODE_CODEGEN_DLL SetupCollisionTriggerPopup : public FLAlertLayer {
public:

    static SetupCollisionTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    void onTargetIDArrow(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateTargetID();

};

class GEODE_CODEGEN_DLL CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:

    void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    void loadSongInfoFinished(SongInfoObject* p0);

    template <bool T=false>
    void updateSongObject(SongInfoObject* song){
        static_assert(T, "Implement CustomSongWidget::updateSongObject");
    }

        SongInfoObject* m_songInfo;
        GEODE_UNIMPLEMENTED_PAD
        CCMenuItemSpriteExtra* m_downloadBtn;
        GEODE_UNIMPLEMENTED_PAD
};

class GEODE_CODEGEN_DLL TeleportPortalObject : public GameObject {
public:

        GEODE_UNIMPLEMENTED_PAD
        TeleportPortalObject* m_orangePortal;
        bool m_unk470;
        float m_unk474;
        bool m_unk478;
};

class GEODE_CODEGEN_DLL GJSpecialColorSelect {
public:

    static const char* textForColorIdx(int id);

};

class GEODE_CODEGEN_DLL GJAccountDelegate {
public:

    virtual bool accountStatusChanged();

};

class GEODE_CODEGEN_DLL SetupTouchTogglePopup : public FLAlertLayer {
public:

    static SetupTouchTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    void onTargetIDArrow(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateTargetID();

};

class GEODE_CODEGEN_DLL GJRewardDelegate {
public:

};

class GEODE_CODEGEN_DLL EditorOptionsLayer {
public:

    void onButtonsPerRow(cocos2d::CCObject* p0);

};

class GEODE_CODEGEN_DLL HardStreak : public cocos2d::CCDrawNode {
public:

        ~HardStreak();
    virtual bool init();

    void addPoint(cocos2d::CCPoint p0);

    void clearBehindXPos(float p0);

    static HardStreak* create();

    void firstSetup();

    double normalizeAngle(double p0);

    cocos2d::CCPoint quadCornerOffset(cocos2d::CCPoint p0, cocos2d::CCPoint p1, float p2);

    void reset();

    void resumeStroke();

    void stopStroke();

    void updateStroke(float p0);

        cocos2d::CCArray* m_pointsArr;
        cocos2d::CCPoint m_currentPoint;
        float m_waveSize;
        float m_pulseSize;
        bool m_isSolid;
};

class GEODE_CODEGEN_DLL GJRequestCell : public TableViewCell {
public:

    template <bool T=false>
    void updateBGColor(unsigned int index){
        static_assert(T, "Implement GJRequestCell::updateBGColor");
    }

};

class GEODE_CODEGEN_DLL FMODSound : public cocos2d::CCNode {
public:

    template <bool T=false>
    static FMODSound* create(FMOD::Sound* sound){
        static_assert(T, "Implement FMODSound::create");
    }

        FMOD::Sound* m_sound;
};

class GEODE_CODEGEN_DLL SetGroupIDLayer : public FLAlertLayer, public TextInputDelegate {
public:

    void onNextGroupID1(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateGroupIDLabel();

        ~SetGroupIDLayer();
    template <bool T=false>
    void updateEditorLayerID(){
        static_assert(T, "Implement SetGroupIDLayer::updateEditorLayerID");
    }

    template <bool T=false>
    void updateEditorLayerID2(){
        static_assert(T, "Implement SetGroupIDLayer::updateEditorLayerID2");
    }

    template <bool T=false>
    void updateZOrder(){
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

class GEODE_CODEGEN_DLL EffectGameObject : public GameObject {
public:

    void updateLabel();

    static EffectGameObject* create(const char* p0);

    void getTargetColorIndex();

    virtual void triggerObject(GJBaseGameLayer* p0);

    template <bool T=false>
    gd::string getSaveString(){
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

class GEODE_CODEGEN_DLL GJGroundLayer {
public:

    template <bool T=false>
    void updateGroundWidth(){
        static_assert(T, "Implement GJGroundLayer::updateGroundWidth");
    }

};

class GEODE_CODEGEN_DLL UploadActionDelegate {
public:

    virtual void uploadActionFinished(int p0, int p1);

    virtual void uploadActionFailed(int p0, int p1);

};

class GEODE_CODEGEN_DLL LevelManagerDelegate {
public:

};

class GEODE_CODEGEN_DLL DialogLayer : public cocos2d::CCLayerColor {
public:

    static DialogLayer* create(DialogObject* dialog, int color);

    static DialogLayer* createWithObjects(cocos2d::CCArray* dialogs, int color);

    static DialogLayer* createDialogLayer(DialogObject* p0, cocos2d::CCArray* p1, int p2);

    template <bool T=false>
    bool init(DialogLayer* p0, DialogObject* p1, cocos2d::CCArray* p2, int p3){
        static_assert(T, "Implement DialogLayer::init");
    }

    template <bool T=false>
    cocos2d::CCAction* animateIn(int location){
        static_assert(T, "Implement DialogLayer::animateIn");
    }

        ~DialogLayer();
    virtual void onEnter();

    virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    virtual void registerWithTouchDispatcher();

    virtual void keyBackClicked();

    virtual void keyDown(cocos2d::enumKeyCodes p0);

    virtual void fadeInTextFinished(TextArea* p0);

};

class GEODE_CODEGEN_DLL GJCommentListLayer : public cocos2d::CCLayerColor {
public:

        ~GJCommentListLayer();
    static GJCommentListLayer* create(BoomListView* p0, char const* p1, cocos2d::_ccColor4B p2, float p3, float p4, bool p5);

        BoomListView* m_list;
};

class GEODE_CODEGEN_DLL CountTriggerAction : public cocos2d::CCNode {
public:

    static CountTriggerAction* createFromString(gd::string p0);

        int m_previousCount;
        int m_targetCount;
        int m_targetID;
        bool m_activateGroup;
        CLASSPARAM(bool, multiActivate, 0x138);
};

class GEODE_CODEGEN_DLL GaragePage : public cocos2d::CCLayer, public ListButtonBarDelegate {
public:

    static GaragePage* create(IconType type, GJGarageLayer* pGarage, cocos2d::SEL_MenuHandler pSelectCallback);

    template <bool T=false>
    void listButtonBarSwitchedPage(ListButtonBar* bar, int idk){
        static_assert(T, "Implement GaragePage::listButtonBarSwitchedPage");
    }

    bool init(IconType type, GJGarageLayer* pGarage, cocos2d::SEL_MenuHandler pSelectCallback);

        GJGarageLayer* m_garage;
        cocos2d::SEL_MenuHandler m_handler;
        cocos2d::CCSprite* m_selectSprite;
        CCMenuItemSpriteExtra* m_unkNode0x12c;
        IconType m_type;
        int m_unknown;
        GEODE_UNIMPLEMENTED_PAD
};

class GEODE_CODEGEN_DLL GJAccountManager : public cocos2d::CCNode {
public:

    template <bool T=false>
    static GJAccountManager* sharedState(){
        static_assert(T, "Implement GJAccountManager::sharedState");
    }

        GEODE_UNIMPLEMENTED_PAD
        gd::string m_password;
        gd::string m_username;
        int m_accountID;
};

class GEODE_CODEGEN_DLL LevelEditorLayer : public GJBaseGameLayer, public LevelSettingsDelegate {
public:

    static LevelEditorLayer* get();

    static cocos2d::CCScene* scene(GJGameLevel* level);

        ~LevelEditorLayer();
    virtual void update(float p0);

    virtual void draw();

    virtual void updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9);

    virtual void flipGravity(PlayerObject* p0, bool p1, bool p2);

    virtual void calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5);

    virtual void addToGroup(GameObject* p0, int p1, bool p2);

    virtual void removeFromGroup(GameObject* p0, int p1);

    virtual void timeForXPos(float p0);

    virtual void xPosForTime(float p0);

    virtual void levelSettingsUpdated();

    static LevelEditorLayer* create(GJGameLevel* level);

    void activateTriggerEffect(EffectGameObject* p0, float p1, float p2, float p3);

    GameObject* addObjectFromString(gd::string p0);

    void addSpecial(GameObject* p0);

    void addToRedoList(UndoObject* p0);

    void addToUndoList(UndoObject* p0, bool p1);

    void animateInDualGround(GameObject* p0, float p1, bool p2);

    void checkCollisions(PlayerObject* p0, float p1);

    void createBackground();

    void createGroundLayer();

    GameObject* createObject(int p0, cocos2d::CCPoint p1, bool p2);

    void createObjectsFromSetup(gd::string p0);

    void createObjectsFromString(gd::string p0, bool p1);

    void getLastObjectX();

    void getLevelString();

    void getNextColorChannel();

    void getNextFreeBlockID(cocos2d::CCArray* p0);

    int getNextFreeGroupID(cocos2d::CCArray* p0);

    void getNextFreeItemID(cocos2d::CCArray* p0);

    void getObjectRect(GameObject* p0, bool p1);

    void getRelativeOffset(GameObject* p0);

    void handleAction(bool p0, cocos2d::CCArray* p1);

    bool init(GJGameLevel* p0);

    void objectAtPosition(cocos2d::CCPoint p0);

    void objectMoved(GameObject* p0);

    void objectsInRect(cocos2d::CCRect p0, bool p1);

    void onPlaytest();

    void onStopPlaytest();

    template <bool T=false>
    void pasteAttributeState(GameObject* obj, cocos2d::CCArray* objs){
        static_assert(T, "Implement LevelEditorLayer::pasteAttributeState");
    }

    void playMusic();

    void recreateGroups();

    void redoLastAction();

    void removeAllObjects();

    void removeAllObjectsOfType(int p0);

    void removeObject(GameObject* p0, bool p1);

    void removeSpecial(GameObject* p0);

    void resetMovingObjects();

    void resetObjectVector();

    void resetToggledGroups();

    void resetToggledGroupsAndObjects();

    void resetUnusedColorChannels();

    void rotationForSlopeNearObject(GameObject* p0);

    void runColorEffect(EffectGameObject* p0, int p1, float p2, float p3, bool p4);

    void setupLevelStart(LevelSettingsObject* p0);

    void sortStickyGroups();

    void stopTriggersInGroup(int p0, float p1);

    void toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3);

    void toggleGroupPreview(int p0, bool p1);

    void transferDefaultColors(GJEffectManager* p0, GJEffectManager* p1);

    void undoLastAction();

    void updateBGAndGColors();

    void updateBlendValues();

    void updateDualGround(PlayerObject* p0, int p1, bool p2);

    void updateEditorMode();

    void updateGameObjectsNew();

    void updateGround(float p0);

    void updateGroundWidth();

    void updateOptions();

    void updateToggledGroups();

    void updateVisibility(float p0);

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

class GEODE_CODEGEN_DLL UserInfoDelegate {
public:

};

class GEODE_CODEGEN_DLL Slider : public cocos2d::CCLayer {
public:

    void setValue(float val);

    void setBarVisibility(bool v);

    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler click, float scale);

    float getValue();

    void updateBar();

    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler click, const char* unused, const char* grooveSpr, const char* thumbSpr, const char* thumbSprSel, float scale);

        SliderTouchLogic* m_touchLogic;
        cocos2d::CCSprite* m_sliderBar;
        cocos2d::CCSprite* m_groove;
        float m_unknown;
        float m_height;
};

class GEODE_CODEGEN_DLL SetItemIDLayer {
public:

    static SetItemIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1);

};

class GEODE_CODEGEN_DLL ProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate {
public:

    static ProfilePage* create(int accountID, bool idk);

    template <bool T=false>
    void getUserInfoFailed(int p0){
        static_assert(T, "Implement ProfilePage::getUserInfoFailed");
    }

    template <bool T=false>
    bool init(int accountID, bool idk){
        static_assert(T, "Implement ProfilePage::init");
    }

    template <bool T=false>
    void onMyLevels(cocos2d::CCObject* p0){
        static_assert(T, "Implement ProfilePage::onMyLevels");
    }

    template <bool T=false>
    void onUpdate(cocos2d::CCObject* p0){
        static_assert(T, "Implement ProfilePage::onUpdate");
    }

    template <bool T=false>
    void loadPageFromUserInfo(GJUserScore* score){
        static_assert(T, "Implement ProfilePage::loadPageFromUserInfo");
    }

        GJUserScore* m_score;
        int m_accountID;
        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCArray* m_buttons;
};

class GEODE_CODEGEN_DLL GameSoundManager : public cocos2d::CCNode {
public:

    void disableMetering();

    void enableMetering();

    void getMeteringValue();

    void playBackgroundMusic(gd::string p0, bool p1, bool p2);

    void playEffect(gd::string p0, float p1, float p2, float p3);

    void stopBackgroundMusic();

        ~GameSoundManager();
    static GameSoundManager* sharedManager();

        cocos2d::CCDictionary* m_dictionary1;
        cocos2d::CCDictionary* m_dictionary2;
        GEODE_UNIMPLEMENTED_PAD
        bool m_preloaded;
        GEODE_UNIMPLEMENTED_PAD
        gd::string m_filePath;
};

class GEODE_CODEGEN_DLL ButtonSprite : public cocos2d::CCSprite {
public:
	 static ButtonSprite* create(char const* caption) {
		return ButtonSprite::create(caption, 0, 0, "goldFont.fnt", "GJ_button_01.png", .0f, 1.f);
	}
	 static ButtonSprite* create(char const* caption, const char* font, const char* texture, float scale = 1.f) {
		return ButtonSprite::create(caption, 0, 0, font, texture, .0f, scale);
	}

    static ButtonSprite* create(const char* caption, int width, int unknown, float scale, bool absoluteWidth, const char* font, const char* texture, float height);

    
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
	static ButtonSprite* create(const char* caption, int width, bool absolute, const char* font, const char* texture, float height, float scale);

    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4);

    void updateBGImage(const char* p0);

    static ButtonSprite* create(char const* p0, float p1);

    template <bool T=false>
    void setString(const char* txt){
        static_assert(T, "Implement ButtonSprite::setString");
    }

    template <bool T=false>
    void updateSpriteBGSize(cocos2d::CCPoint const& offset){
        static_assert(T, "Implement ButtonSprite::updateSpriteBGSize");
    }

    void setColor(cocos2d::ccColor3B color);

        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCLabelBMFont* m_label;
        cocos2d::CCSprite* m_subSprite;
        cocos2d::CCSprite* m_subBGSprite;
        cocos2d::extension::CCScale9Sprite* m_BGSprite;
        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCPoint m_spritePosition;
};

class GEODE_CODEGEN_DLL CCLightFlash {
public:

    static CCLightFlash* create();

    void playEffect(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, int p16, bool p17, bool p18, float p19);

};

class GEODE_CODEGEN_DLL TouchToggleAction : public cocos2d::CCNode {
public:

    static TouchToggleAction* createFromString(gd::string p0);

};

class GEODE_CODEGEN_DLL ColorActionSprite : public cocos2d::CCNode {
public:

        float m_opacity;
        cocos2d::_ccColor3B m_f0124;
        cocos2d::_ccColor3B m_activeColor;
};

class GEODE_CODEGEN_DLL GJChallengeItem : public cocos2d::CCObject {
public:

        GJChallengeType m_challengeType;
        int m_countSeed;
        int m_countRand;
        int m_count;
        int m_rewardSeed;
        int m_rewardRand;
        int m_reward;
        int m_goalSeed;
        int m_goalRand;
        int m_goal;
        int m_timeLeft;
        bool m_canClaim;
        int m_position;
        gd::string m_name;
};

class GEODE_CODEGEN_DLL AudioEffectsLayer {
public:

    void audioStep(float p0);

    static AudioEffectsLayer* create(gd::string p0);

    void resetAudioVars();

};

class GEODE_CODEGEN_DLL GJItemIcon {
public:

    GJItemIcon* createBrowserIcon(UnlockType _type, int _id);

    static GJItemIcon* create(UnlockType _type, int _id, cocos2d::ccColor3B _col1, cocos2d::ccColor3B _col2, bool _un0, bool _un1, bool _un2, cocos2d::ccColor3B _col3);

};

class GEODE_CODEGEN_DLL VideoOptionsLayer : public FLAlertLayer {
public:

        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCArray* m_resolutions;
        GEODE_UNIMPLEMENTED_PAD
        int m_currentResolution;
};

class GEODE_CODEGEN_DLL PauseLayer : public CCBlockLayer {
public:

    static PauseLayer* create(bool p0);

    void onEdit(cocos2d::CCObject* p0);

    template <bool T=false>
    void createToggleButton(cocos2d::SEL_MenuHandler callback, bool on, cocos2d::CCMenu* menu, gd::string caption, cocos2d::CCPoint pos){
        static_assert(T, "Implement PauseLayer::createToggleButton");
    }

        bool m_unknown;
        bool m_unknown2;
};

class GEODE_CODEGEN_DLL GJListLayer : public cocos2d::CCLayerColor {
public:

        ~GJListLayer();
    static GJListLayer* create(cocos2d::CCObject* target, const char* title, cocos2d::ccColor4B color, float width, float height);

        BoomListView* m_listView;
};

class GEODE_CODEGEN_DLL GJSpiderSprite : public GJRobotSprite {
public:

        ~GJSpiderSprite();
    virtual bool init();

    static GJSpiderSprite* create();

};

class GEODE_CODEGEN_DLL GJScaleControl : public cocos2d::CCLayer {
public:

    template <bool T=false>
    void updateLabel(float value){
        static_assert(T, "Implement GJScaleControl::updateLabel");
    }

    template <bool T=false>
    void loadValues(GameObject* obj, cocos2d::CCArray* objs){
        static_assert(T, "Implement GJScaleControl::loadValues");
    }

        Slider* m_slider;
        unsigned int m_touchID;
        float m_value;
        GEODE_UNIMPLEMENTED_PAD
        cocos2d::CCLabelBMFont* m_label;
        GJScaleControlDelegate* m_delegate;
};

class GEODE_CODEGEN_DLL GJEffectManager : public cocos2d::CCNode {
public:

    virtual bool init();

    void activeColorForIndex(int p0);

    void activeOpacityForIndex(int p0);

    void addAllInheritedColorActions(cocos2d::CCArray* p0);

    void addGroupPulseEffect(PulseEffectAction* p0);

    void calculateBaseActiveColors();

    void calculateInheritedColor(int p0, ColorAction* p1);

    void calculateLightBGColor(cocos2d::_ccColor3B p0);

    void colorActionChanged(ColorAction* p0);

    void colorExists(int p0);

    void colorForEffect(cocos2d::_ccColor3B p0, cocos2d::_ccHSVValue p1);

    cocos2d::_ccColor3B colorForGroupID(int p0, cocos2d::_ccColor3B const& p1, bool p2);

    void colorForIndex(int p0);

    void colorForPulseEffect(cocos2d::_ccColor3B const& p0, PulseEffectAction* p1);

    void countChangedForItem(int p0);

    void countForItem(int p0);

    static GJEffectManager* create();

    void createFollowCommand(float p0, float p1, float p2, int p3, int p4, bool p5, int p6);

    void createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, int p7);

    void createPlayerFollowCommand(float p0, float p1, int p2, float p3, float p4, int p5, int p6);

    void createRotateCommand(int p0, float p1, int p2, int p3, int p4, float p5, bool p6, int p7);

    void getAllColorActions();

    void getAllColorSprites();

    const cocos2d::_ccColor3B& getColorAction(int p0);

    const cocos2d::_ccColor3B& getColorSprite(int p0);

    void getCurrentStateString();

    void getLoadedMoveOffset();

    void getMixedColor(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1, float p2);

    uint8_t getOpacityActionForGroup(int p0);

    void getSaveString();

    void handleObjectCollision(bool p0, int p1, int p2);

    void hasActiveDualTouch();

    void hasBeenTriggered(int p0);

    void hasPulseEffectForGroupID(int p0);

    bool isGroupEnabled(int p0);

    void keyForGroupIDColor(int p0, cocos2d::_ccColor3B const& p1, bool p2);

    void loadState(gd::string p0);

    void objectsCollided(int p0, int p1);

    void opacityForIndex(int p0);

    float opacityModForGroup(int p0);

    void playerButton(bool p0, bool p1);

    void playerDied();

    void postCollisionCheck();

    void preCollisionCheck();

    void prepareMoveActions(float p0, bool p1);

    void processColors();

    void processCopyColorPulseActions();

    void processInheritedColors();

    void processPulseActions();

    void registerCollisionTrigger(int p0, int p1, int p2, bool p3, bool p4, int p5);

    void removeAllPulseActions();

    void removeColorAction(int p0);

    void reset();

    void resetColorCache();

    void resetEffects();

    void resetMoveActions();

    void resetToggledGroups();

    void resetTriggeredIDs();

    void runCountTrigger(int p0, int p1, bool p2, int p3, bool p4, int p5);

    void runDeathTrigger(int p0, bool p1, int p2);

    OpacityEffectAction* runOpacityActionOnGroup(int p0, float p1, float p2, int p3);

    void runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::_ccColor3B p6, cocos2d::_ccHSVValue p7, int p8, bool p9, bool p10, bool p11, int p12);

    void runTouchTriggerCommand(int p0, bool p1, TouchTriggerType p2, bool p3, int p4);

    void setColorAction(ColorAction* p0, int p1);

    void setFollowing(int p0, int p1, bool p2);

    void setupFromString(gd::string p0);

    void shouldBlend(int p0);

    void spawnGroup(int p0, float p1, int p2);

    void stopActionsForTrigger(EffectGameObject* p0);

    void stopMoveActionsForGroup(int p0);

    void storeTriggeredID(int p0);

    void toggleGroup(int p0, bool p1);

    void traverseInheritanceChain(InheritanceNode* p0);

    void updateActiveOpacityEffects();

    void updateColorAction(ColorAction* p0);

    void updateColorEffects(float p0);

    void updateColors(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1);

    void updateEffects(float p0);

    void updateOpacityAction(OpacityEffectAction* p0);

    void updateOpacityEffects(float p0);

    void updatePulseEffects(float p0);

    void updateSpawnTriggers(float p0);

    void wasFollowing(int p0, int p1);

    void wouldCreateLoop(InheritanceNode* p0, int p1);

        ~GJEffectManager();
        TriggerEffectDelegate* m_effectDelegate;
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

class GEODE_CODEGEN_DLL LevelSelectLayer : public cocos2d::CCLayer {
public:

    template <bool T=false>
    static LevelSelectLayer* create(int lvl){
        static_assert(T, "Implement LevelSelectLayer::create");
    }

        GEODE_UNIMPLEMENTED_PAD
        BoomScrollLayer* m_scrollLayer;
};

class GEODE_CODEGEN_DLL SetupOpacityPopup : public FLAlertLayer {
public:

    static SetupOpacityPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1);

    void onTargetIDArrow(cocos2d::CCObject* p0);

    void textChanged(CCTextInputNode* p0);

    void updateTargetID();

};

class GEODE_CODEGEN_DLL GJAccountBackupDelegate {
public:

    virtual bool backupAccountFailed(BackupAccountError p0);

    virtual bool backupAccountFinished();

};

class GEODE_CODEGEN_DLL LevelSettingsLayer {
public:

    template <bool T=false>
    static LevelSettingsLayer* create(LevelSettingsObject* levelSettings, LevelEditorLayer* editor){
        static_assert(T, "Implement LevelSettingsLayer::create");
    }

};

class GEODE_CODEGEN_DLL ColorSelectPopup : public FLAlertLayer, public cocos2d::extension::ColorPickerDelegate, public TextInputDelegate, public GJSpecialColorSelectDelegate {
public:

    template <bool T=false>
    void colorValueChanged(cocos2d::ccColor3B color){
        static_assert(T, "Implement ColorSelectPopup::colorValueChanged");
    }

    template <bool T=false>
    bool init(EffectGameObject* triggerObj, cocos2d::CCArray* triggerObjs, ColorAction* colorAction){
        static_assert(T, "Implement ColorSelectPopup::init");
    }

    template <bool T=false>
    void updateColorValue(){
        static_assert(T, "Implement ColorSelectPopup::updateColorValue");
    }

    template <bool T=false>
    void updateCopyColorTextInputLabel(){
        static_assert(T, "Implement ColorSelectPopup::updateCopyColorTextInputLabel");
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
        int m_playerColor;
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
        ConfigureHSVWidget* m_hsvWidget;
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

class GEODE_CODEGEN_DLL DailyLevelPage : public FLAlertLayer {
public:

    template <bool T=false>
    static DailyLevelPage* create(bool weekly){
        static_assert(T, "Implement DailyLevelPage::create");
    }

    template <bool T=false>
    bool init(bool weekly){
        static_assert(T, "Implement DailyLevelPage::init");
    }

    template <bool T=false>
    void updateTimers(float p0){
        static_assert(T, "Implement DailyLevelPage::updateTimers");
    }

        GEODE_UNIMPLEMENTED_PAD
        bool m_weekly;
};

class GEODE_CODEGEN_DLL GJComment : public cocos2d::CCNode {
public:

        ~GJComment();
    virtual bool init();

    template <bool T=false>
    static GJComment* create(cocos2d::CCDictionary* dict){
        static_assert(T, "Implement GJComment::create");
    }

        gd::string m_commentString;
        gd::string m_userName;
        int m_commentID;
        int m_userID;
        int m_likeCount;
        int m_levelID;
        bool m_isSpam;
        int m_accountID;
        gd::string m_uploadDate;
        bool m_commentDeleted;
        int m_percentage;
        int m_modBadge;
        cocos2d::ccColor3B m_color;
        bool m_hasLevelID;
        GJUserScore* m_userScore;
};

class GEODE_CODEGEN_DLL HSVWidgetPopup : public FLAlertLayer {
public:

        ConfigureHSVWidget* m_configureWidget;
        HSVWidgetPopupDelegate* m_delegate;
};

class GEODE_CODEGEN_DLL CCNodeContainer : public cocos2d::CCNode {
public:

    static CCNodeContainer* create();

    virtual bool init();

    void visit();

};

class GEODE_CODEGEN_DLL CCAnimateFrameCache : public cocos2d::CCObject {
public:

    template <bool T=false>
    static CCAnimateFrameCache* sharedSpriteFrameCache(){
        static_assert(T, "Implement CCAnimateFrameCache::sharedSpriteFrameCache");
    }

    template <bool T=false>
    void addSpriteFramesWithFile(const char* file){
        static_assert(T, "Implement CCAnimateFrameCache::addSpriteFramesWithFile");
    }

};

class GEODE_CODEGEN_DLL KeybindingsLayer : public FLAlertLayer {
public:

    template <bool T=false>
    void onClose(cocos2d::CCObject* pSender){
        static_assert(T, "Implement KeybindingsLayer::onClose");
    }

    template <bool T=false>
    void onPrevPage(cocos2d::CCObject* pSender){
        static_assert(T, "Implement KeybindingsLayer::onPrevPage");
    }

    template <bool T=false>
    void onNextPage(cocos2d::CCObject* pSender){
        static_assert(T, "Implement KeybindingsLayer::onNextPage");
    }

    template <bool T=false>
    void goToPage(int page){
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

class GEODE_CODEGEN_DLL GameManager : public GManager {
public:

    int getPlayerFrame();

    int getPlayerShip();

    int getPlayerBall();

    int getPlayerBird();

    int getPlayerDart();

    int getPlayerRobot();

    int getPlayerSpider();

    int getPlayerStreak();

    int getPlayerDeathEffect();

    int getPlayerColor();

    int getPlayerColor2();

    bool getPlayerGlow();

    IconType getPlayerIconType();

    void setPlayerFrame(int id);

    void setPlayerShip(int id);

    void setPlayerBall(int id);

    void setPlayerBird(int id);

    void setPlayerDart(int id);

    void setPlayerRobot(int id);

    void setPlayerSpider(int id);

    void setPlayerStreak(int id);

    void setPlayerDeathEffect(int id);

    void setPlayerColor(int id);

    void setPlayerColor2(int id);

    void setPlayerGlow(bool v);

    void setPlayerIconType(IconType v);

    void setQuality(cocos2d::TextureQuality quality);

    PlayLayer* getPlayLayer();

    LevelEditorLayer* getEditorLayer();

    bool getGameVariableDefault(const char* key, bool defaultValue);

    int getIntGameVariableDefault(const char* key, int defaultValue);

    static GameManager* get();

    void accountStatusChanged();

    cocos2d::_ccColor3B colorForIdx(int p0);

    void didExitPlayscene();

    void doQuickSave();

    void fadeInMusic(const char* p0);

    void getBGTexture(int p0);

    void getFontFile(int p0);

    bool getGameVariable(const char* p0);

    int getIntGameVariable(const char* p0);

    bool getUGV(const char* p0);

    void loadDeathEffect(int p0);

    void loadFont(int p0);

    void reloadAll(bool p0, bool p1, bool p2);

    void reloadAllStep2();

    void reloadAllStep5();

    void reportPercentageForLevel(int p0, int p1, bool p2);

    void setGameVariable(const char* p0, bool p1);

    void setIntGameVariable(const char* p0, int p1);

    void setUGV(char const* p0, bool p1);

    static GameManager* sharedState();

        ~GameManager();
    void getGTexture(int p0);

    virtual bool init();

    void reportAchievementWithID(char const* p0, int p1, bool p2);

    cocos2d::CCSize* resolutionForKey(cocos2d::CCSize* p0, int p1);

    void update(float p0);

    bool isColorUnlocked(int _id, bool _type);

    bool isIconUnlocked(int _id, IconType _type);

    template <bool T=false>
    void toggleGameVariable(const char* key){
        static_assert(T, "Implement GameManager::toggleGameVariable");
    }

    template <bool T=false>
    static void returnToLastScene(GJGameLevel* level){
        static_assert(T, "Implement GameManager::returnToLastScene");
    }

        bool m_switchModes;
        bool m_toFullscreen;
        bool m_reloading;
        bool m_unknown0;
        GEODE_PAD(0x4);
        cocos2d::CCDictionary* m_valueKeeper;
        cocos2d::CCDictionary* m_unlockValueKeeper;
        cocos2d::CCDictionary* m_customObjectDict;
        double m_adTimer;
        double m_adCache;
        GEODE_PAD(0x8);
        double m_unknownDouble;
        GEODE_PAD(0x4);
        bool m_loaded;
        gd::string m_unknownString;
        PlayLayer* m_playLayer;
        LevelEditorLayer* m_levelEditorLayer;
        int m_unknown1;
        MenuLayer* m_menuLayer;
        bool m_unknownBool2;
        int m_unknownInt2;
        bool m_unknownBool3;
        bool m_unknownPlayLayerBool;
        bool m_unknownBool4;
        bool m_unknownBool5;
        gd::string m_playerUDID;
        gd::string m_playerName;
        bool m_commentsEnabled;
        int m_playerUserIDRand1;
        int m_playerUserIDRand2;
        int m_playerUserID;
        float m_backgroundMusicVolume;
        float m_effectsVolume;
        float m_timeOffset;
        bool m_ratedGame;
        bool m_likedFacebook;
        bool m_followedTwitter;
        bool m_subbedYoutube;
        int m_unknownInt;
        double m_socialsDuration;
        bool m_showedAd;
        bool m_unknownBool;
        bool m_editorEnabled;
        int m_sceneEnum;
        int m_searchObjectType;
        bool m_unknownBool6;
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
        int m_chkSeed;
        int m_chkRand;
        int m_secretNumberSeed;
        int m_secretNumberRand;
        bool m_playerGlow;
        IconType m_playerIconType;
        bool m_everyPlaySetup;
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
        GEODE_PAD(0x30);
        int m_bootups;
        bool m_hasRatedGame;
        bool m_unk0;
        bool m_unk1;
        bool m_unk2;
        bool m_gameCenterEnabled;
        bool m_smoothFix;
        int m_ratePowerSeed;
        int m_ratePowerRand;
        int m_ratePower;
        bool m_canGetLevelSaveData;
        int m_resolution;
        cocos2d::TextureQuality m_quality;
};

class GEODE_CODEGEN_DLL CustomListView : public BoomListView {
public:
	 static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float width, float height) {
		return CustomListView::create(entries, width, height, 0, type);
	}

    static CustomListView* create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);

    virtual TableViewCell* getListCell(const char* p0);

    virtual void loadCell(TableViewCell* p0, unsigned int p1);

    virtual void setupList();

};

class GEODE_CODEGEN_DLL SongInfoObject : public cocos2d::CCNode {
public:

        ~SongInfoObject();
    virtual void encodeWithCoder(DS_Dictionary* p0);

    virtual bool canEncode();

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

class GEODE_CODEGEN_DLL AppDelegate : public cocos2d::CCApplication {
public:

    void bgScale();

    virtual bool applicationDidFinishLaunching();

    virtual void applicationDidEnterBackground();

    virtual void applicationWillEnterForeground();

    virtual void applicationWillBecomeActive();

    virtual void applicationWillResignActive();

    virtual void trySaveGame();

    virtual void willSwitchToScene(cocos2d::CCScene* p0);

    static AppDelegate* get();

        cocos2d::CCScene* m_runningScene;
};

class GEODE_CODEGEN_DLL LabelGameObject : public GameObject {
public:

    virtual bool init();

    void setObjectColor(cocos2d::_ccColor3B const& p0);

};
