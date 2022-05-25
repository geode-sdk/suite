#pragma once
#include <gdstdlib.hpp>
#include <cocos2d.h>
class CCSpritePlus;
class GameObject;
class AnimatedSpriteDelegate;
class PlayerObject;
class CCBlockLayer;
class CreatorLayer;
class FLAlertLayer;
class MoreVideoOptionsLayer;
class DrawGridLayer;
class EditorOptionsLayer;
class LabelGameObject;
class SetupInstantCountPopup;
class CCIndexPath;
class TableViewCell;
class SongCell;
class GhostTrailEffect;
class FLAlertLayerProtocol;
class TextInputDelegate;
class GJDropDownLayerDelegate;
class CustomSongLayer;
class LoadingCircle;
class GJMessageCell;
class SetupInteractObjectPopup;
class OnlineListDelegate;
class MoreOptionsLayer;
class CCMenuItemSpriteExtra;
class ColorChannelSprite;
class CCScrollLayerExt;
class CCScrollLayerExtDelegate;
class TableView;
class ListButtonBar;
class AchievementsLayer;
class LevelCommentDelegate;
class CommentUploadDelegate;
class InfoLayer;
class GJChallengeItem;
class CommentCell;
class ArtistCell;
class SpawnTriggerAction;
class ListButtonBarDelegate;
class GaragePage;
class CCMenuItemToggler;
class LevelSearchLayer;
class NumberInputDelegate;
class PlatformDownloadDelegate;
class MusicDownloadManager;
class GJUserScore;
class SetupCountTriggerPopup;
class CCCircleWaveDelegate;
class PauseLayer;
class GameSoundManager;
class GameLevelManager;
class SetIDLayer;
class CustomSongCell;
class MapPackCell;
class EndLevelLayer;
class AchievementBar;
class AchievementCell;
class AchievementManager;
class AchievementNotifier;
class PlatformToolbox;
class AnimatedGameObject;
class CCAnimatedSprite;
class AnimatedShopKeeper;
class AppDelegate;
class AudioEffectsLayer;
class MenuLayer;
class TableViewDelegate;
class TableViewDataSource;
class BoomListView;
class BoomScrollLayer;
class ButtonSprite;
class SongInfoObject;
class CCAnimateFrameCache;
class CCCircleWave;
class CCContentLayer;
class CCLightFlash;
class TextArea;
class InheritanceNode;
class CCMoveCNode;
class GameToolbox;
class CCNodeContainer;
class SongInfoLayer;
class GJSpecialColorSelect;
class CCTextInputNode;
class StartPosObject;
class ChallengesPage;
class OBB2D;
class CheckpointObject;
class CollisionBlockPopup;
class CollisionTriggerAction;
class ColorAction;
class ColorActionSprite;
class ColorSelectDelegate;
class GJSpecialColorSelectDelegate;
class ColorSelectPopup;
class ColorSetupDelegate;
class ConfigureHSVWidget;
class MultilineBitmapFont;
class CountTriggerAction;
class CreateGuidelinesLayer;
class CreateMenuItem;
class GameRateDelegate;
class DialogLayer;
class CurrencyRewardLayer;
class DialogDelegate;
class CurrencyRewardDelegate;
class CustomListView;
class MusicDownloadDelegate;
class CustomSongWidget;
class HSVWidgetPopupDelegate;
class CustomizeObjectLayer;
class DailyLevelPage;
class DialogObject;
class DownloadMessageDelegate;
class EditButtonBar;
class EditLevelLayer;
class EditorPauseLayer;
class GJDailyLevelDelegate;
class GJRotationControlDelegate;
class GJScaleControlDelegate;
class EditorUI;
class EffectGameObject;
class GJRotationControl;
class EndPortalObject;
class LevelDeleteDelegate;
class GManager;
class ExtendedLayer;
class FMODAudioEngine;
class LeaderboardsLayer;
class FMODSound;
class LevelCell;
class FriendRequestDelegate;
class GJAccountBackupDelegate;
class GJAccountDelegate;
class GJAccountLoginDelegate;
class GJAccountManager;
class GJAccountSyncDelegate;
class LevelLeaderboard;
class TriggerEffectDelegate;
class GJBaseGameLayer;
class GJChallengeDelegate;
class GJColorSetupLayer;
class GJComment;
class GJCommentListLayer;
class LikeItemDelegate;
class GJDropDownLayer;
class GJEffectManager;
class GJLevelScoreCell;
class GJGameLevel;
class GJGarageLayer;
class GJGroundLayer;
class GJItemIcon;
class GJListLayer;
class GJMapPack;
class SetupSpawnPopup;
class LocalLevelManager;
class GJRequestCell;
class GJRewardDelegate;
class SetIDPopup;
class LevelBrowserLayer;
class GJRewardObject;
class GJRobotSprite;
class RateLevelDelegate;
class GJScaleControl;
class GJScoreCell;
class SetIDPopupDelegate;
class GJSearchObject;
class GJSpiderSprite;
class GJSpriteColor;
class GJUserCell;
class GooglePlayDelegate;
class GameManager;
class GameObjectCopy;
class GameStatsManager;
class GauntletSelectLayer;
class HSVWidgetPopup;
class HardStreak;
class InfoAlertButton;
class KeybindingsLayer;
class LeaderboardManagerDelegate;
class PlayerCheckpoint;
class LevelDownloadDelegate;
class LevelSettingsDelegate;
class LevelEditorLayer;
class LevelUpdateDelegate;
class LevelInfoLayer;
class LevelManagerDelegate;
class LevelPage;
class LevelSelectLayer;
class LevelSettingsLayer;
class LevelSettingsObject;
class LevelUploadDelegate;
class TeleportPortalObject;
class LoadingLayer;
class SetupObjectTogglePopup;
class MenuGameLayer;
class MessageListDelegate;
class MoreSearchLayer;
class NumberInputLayer;
class PulseEffectAction;
class ObjectManager;
class ObjectToolbox;
class OpacityEffectAction;
class OptionsLayer;
class PlayLayer;
class PointNode;
class UserInfoDelegate;
class UploadActionDelegate;
class UploadPopupDelegate;
class ProfilePage;
class RetryLevelLayer;
class ScrollingLayer;
class SelectArtLayer;
class SetGroupIDLayer;
class SetItemIDLayer;
class SetTargetIDLayer;
class SetupAnimationPopup;
class SetupCollisionTriggerPopup;
class SetupOpacityPopup;
class SetupPickupTriggerPopup;
class SetupPulsePopup;
class SetupShakePopup;
class SetupTouchTogglePopup;
class SimplePlayer;
class Slider;
class SliderThumb;
class SliderTouchLogic;
class StatsCell;
class TextAlertPopup;
class ToggleTriggerAction;
class TopArtistsLayer;
class TouchToggleAction;
class UILayer;
class UndoObject;
class UploadMessageDelegate;
class VideoOptionsLayer;

class CCSpritePlus : public cocos2d::CCSprite {
public:

    GEODE_CODEGEN_DLL bool initWithSpriteFrameName(const char* p0);

    GEODE_CODEGEN_DLL void setScaleX(float scale);

    GEODE_CODEGEN_DLL void setScaleY(float scale);

    GEODE_CODEGEN_DLL void setScale(float scale);

    GEODE_CODEGEN_DLL void setPosition(const cocos2d::CCPoint& pos);

    GEODE_CODEGEN_DLL void setRotation(float rotation);

    GEODE_CODEGEN_DLL bool initWithTexture(cocos2d::CCTexture2D* texture);

    GEODE_CODEGEN_DLL void setFlipX(bool flip);

    GEODE_CODEGEN_DLL void setFlipY(bool flip);

    GEODE_CODEGEN_DLL static CCSpritePlus* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

        cocos2d::CCArray* m_followers;
        CCSpritePlus* m_followingSprite;
        bool m_hasFollower;
        bool m_propagateScaleChanges;
        bool m_propagateFlipChanges;
};

class GameObject : public CCSpritePlus {
public:
	 using GroupArrayType = short*; 

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

    template <bool T=false>
    void update(float p0){
        static_assert(T, "Implement GameObject::update");
    }

    GEODE_CODEGEN_DLL virtual void setScaleX(float p0);

    GEODE_CODEGEN_DLL virtual void setScaleY(float p0);

    GEODE_CODEGEN_DLL virtual void setScale(float p0);

    GEODE_CODEGEN_DLL virtual void setPosition(const cocos2d::CCPoint& p0);

    GEODE_CODEGEN_DLL virtual void setVisible(bool p0);

    GEODE_CODEGEN_DLL virtual void setRotation(float p0);

    GEODE_CODEGEN_DLL virtual void setOpacity(GLubyte p0);

    GEODE_CODEGEN_DLL virtual bool initWithTexture(cocos2d::CCTexture2D* p0);

    GEODE_CODEGEN_DLL virtual void setChildColor(const cocos2d::ccColor3B& p0);

    template <bool T=false>
    void setFlipX(bool p0){
        static_assert(T, "Implement GameObject::setFlipX");
    }

    template <bool T=false>
    void setFlipY(bool p0){
        static_assert(T, "Implement GameObject::setFlipY");
    }

    template <bool T=false>
    void customSetup(){
        static_assert(T, "Implement GameObject::customSetup");
    }

    GEODE_CODEGEN_DLL virtual void setupCustomSprites();

    GEODE_CODEGEN_DLL virtual void addMainSpriteToParent(bool p0);

    GEODE_CODEGEN_DLL virtual void resetObject();

    template <bool T=false>
    void triggerObject(GJBaseGameLayer* p0){
        static_assert(T, "Implement GameObject::triggerObject");
    }

    GEODE_CODEGEN_DLL virtual void activateObject();

    GEODE_CODEGEN_DLL virtual void deactivateObject(bool p0);

    GEODE_CODEGEN_DLL virtual cocos2d::CCRect* getObjectRect();

    GEODE_CODEGEN_DLL virtual cocos2d::CCRect* getObjectRect(float p0, float p1);

    GEODE_CODEGEN_DLL virtual cocos2d::CCRect* getObjectRect2(float p0, float p1);

    GEODE_CODEGEN_DLL virtual cocos2d::CCRect* getObjectTextureRect();

    GEODE_CODEGEN_DLL virtual void getRealPosition();

    GEODE_CODEGEN_DLL virtual void setStartPos(cocos2d::CCPoint p0);

    GEODE_CODEGEN_DLL virtual void updateStartValues();

    template <bool T=false>
    void customObjectSetup(){
        static_assert(T, "Implement GameObject::customObjectSetup");
    }

    GEODE_CODEGEN_DLL virtual gd::string getSaveString();

    GEODE_CODEGEN_DLL virtual bool isFlipX();

    GEODE_CODEGEN_DLL virtual bool isFlipY();

    GEODE_CODEGEN_DLL virtual void setRScaleX(float p0);

    GEODE_CODEGEN_DLL virtual void setRScaleY(float p0);

    GEODE_CODEGEN_DLL virtual void setRScale(float p0);

    template <bool T=false>
    void getRScaleX(){
        static_assert(T, "Implement GameObject::getRScaleX");
    }

    GEODE_CODEGEN_DLL virtual void getRScaleY();

    GEODE_CODEGEN_DLL virtual void calculateSpawnXPos();

    template <bool T=false>
    void triggerActivated(float p0){
        static_assert(T, "Implement GameObject::triggerActivated");
    }

    GEODE_CODEGEN_DLL virtual void powerOnObject();

    GEODE_CODEGEN_DLL virtual void powerOffObject();

    GEODE_CODEGEN_DLL virtual void setObjectColor(const cocos2d::ccColor3B& p0);

    GEODE_CODEGEN_DLL virtual void setGlowColor(cocos2d::_ccColor3B const& p0);

    GEODE_CODEGEN_DLL virtual void getOrientedBox();

    GEODE_CODEGEN_DLL virtual void addToGroup(int p0);

    GEODE_CODEGEN_DLL virtual void removeFromGroup(int p0);

    template <bool T=false>
    void spawnXPosition(){
        static_assert(T, "Implement GameObject::spawnXPosition");
    }

    template <bool T=false>
    void getObjectRectDirty() const{
        static_assert(T, "Implement GameObject::getObjectRectDirty");
    }

    template <bool T=false>
    void setObjectRectDirty(bool p0){
        static_assert(T, "Implement GameObject::setObjectRectDirty");
    }

    template <bool T=false>
    void getOrientedRectDirty() const{
        static_assert(T, "Implement GameObject::getOrientedRectDirty");
    }

    template <bool T=false>
    void setOrientedRectDirty(bool p0){
        static_assert(T, "Implement GameObject::setOrientedRectDirty");
    }

    GEODE_CODEGEN_DLL virtual GameObjectType getType() const;

    GEODE_CODEGEN_DLL virtual void setType(GameObjectType p0);

    GEODE_CODEGEN_DLL virtual void getStartPos() const;

    template <bool T=false>
    void activatedByPlayer(GameObject* p0){
        static_assert(T, "Implement GameObject::activatedByPlayer");
    }

    template <bool T=false>
    void addColorSprite(){
        static_assert(T, "Implement GameObject::addColorSprite");
    }

    template <bool T=false>
    void addColorSpriteToParent(bool p0){
        static_assert(T, "Implement GameObject::addColorSpriteToParent");
    }

    template <bool T=false>
    void addToTempOffset(float p0, float p1){
        static_assert(T, "Implement GameObject::addToTempOffset");
    }

    template <bool T=false>
    void calculateOrientedBox(){
        static_assert(T, "Implement GameObject::calculateOrientedBox");
    }

    template <bool T=false>
    void canChangeCustomColor(){
        static_assert(T, "Implement GameObject::canChangeCustomColor");
    }

    template <bool T=false>
    void colorForMode(int p0, bool p1){
        static_assert(T, "Implement GameObject::colorForMode");
    }

    GEODE_CODEGEN_DLL void commonSetup();

    template <bool T=false>
    void copyGroups(GameObject* p0){
        static_assert(T, "Implement GameObject::copyGroups");
    }

    GEODE_CODEGEN_DLL static GameObject* createWithFrame(const char* p0);

    GEODE_CODEGEN_DLL static GameObject* createWithKey(int p0);

    template <bool T=false>
    void destroyObject(){
        static_assert(T, "Implement GameObject::destroyObject");
    }

    template <bool T=false>
    void determineSlopeDirection(){
        static_assert(T, "Implement GameObject::determineSlopeDirection");
    }

    template <bool T=false>
    void getActiveColorForMode(int p0, bool p1){
        static_assert(T, "Implement GameObject::getActiveColorForMode");
    }

    template <bool T=false>
    void getBallFrame(int p0){
        static_assert(T, "Implement GameObject::getBallFrame");
    }

    GEODE_CODEGEN_DLL cocos2d::CCPoint getBoxOffset();

    template <bool T=false>
    const cocos2d::_ccColor3B& getColorIndex(){
        static_assert(T, "Implement GameObject::getColorIndex");
    }

    template <bool T=false>
    void getDidUpdateLastPosition(){
        static_assert(T, "Implement GameObject::getDidUpdateLastPosition");
    }

    template <bool T=false>
    void getLastPosition(){
        static_assert(T, "Implement GameObject::getLastPosition");
    }

    template <bool T=false>
    void getMainColorMode(){
        static_assert(T, "Implement GameObject::getMainColorMode");
    }

    template <bool T=false>
    void getObjectZOrder(){
        static_assert(T, "Implement GameObject::getObjectZOrder");
    }

    template <bool T=false>
    float getObjectRadius(){
        static_assert(T, "Implement GameObject::getObjectRadius");
    }

    template <bool T=false>
    void getSecondaryColorMode(){
        static_assert(T, "Implement GameObject::getSecondaryColorMode");
    }

    template <bool T=false>
    void getSectionIdx(){
        static_assert(T, "Implement GameObject::getSectionIdx");
    }

    template <bool T=false>
    void groupWasDisabled(){
        static_assert(T, "Implement GameObject::groupWasDisabled");
    }

    template <bool T=false>
    void groupWasEnabled(){
        static_assert(T, "Implement GameObject::groupWasEnabled");
    }

    template <bool T=false>
    void hasBeenActivated(){
        static_assert(T, "Implement GameObject::hasBeenActivated");
    }

    template <bool T=false>
    void hasBeenActivatedByPlayer(GameObject* p0){
        static_assert(T, "Implement GameObject::hasBeenActivatedByPlayer");
    }

    template <bool T=false>
    void hasSecondaryColor(){
        static_assert(T, "Implement GameObject::hasSecondaryColor");
    }

    template <bool T=false>
    void ignoreEnter(){
        static_assert(T, "Implement GameObject::ignoreEnter");
    }

    template <bool T=false>
    void ignoreFade(){
        static_assert(T, "Implement GameObject::ignoreFade");
    }

    template <bool T=false>
    void isBasicTrigger(){
        static_assert(T, "Implement GameObject::isBasicTrigger");
    }

    template <bool T=false>
    void isColorTrigger(){
        static_assert(T, "Implement GameObject::isColorTrigger");
    }

    template <bool T=false>
    void isSpawnableTrigger(){
        static_assert(T, "Implement GameObject::isSpawnableTrigger");
    }

    template <bool T=false>
    void isSpecialObject(){
        static_assert(T, "Implement GameObject::isSpecialObject");
    }

    GEODE_CODEGEN_DLL static GameObject* objectFromString(gd::string p0, bool p1);

    template <bool T=false>
    void playShineEffect(){
        static_assert(T, "Implement GameObject::playShineEffect");
    }

    template <bool T=false>
    void quickUpdatePosition(){
        static_assert(T, "Implement GameObject::quickUpdatePosition");
    }

    template <bool T=false>
    void removeGlow(){
        static_assert(T, "Implement GameObject::removeGlow");
    }

    template <bool T=false>
    void resetGroupDisabled(){
        static_assert(T, "Implement GameObject::resetGroupDisabled");
    }

    template <bool T=false>
    void saveActiveColors(){
        static_assert(T, "Implement GameObject::saveActiveColors");
    }

    GEODE_CODEGEN_DLL void selectObject(const cocos2d::ccColor3B& p0);

    template <bool T=false>
    void setDefaultMainColorMode(int p0){
        static_assert(T, "Implement GameObject::setDefaultMainColorMode");
    }

    template <bool T=false>
    void setDidUpdateLastPosition(bool const& p0){
        static_assert(T, "Implement GameObject::setDidUpdateLastPosition");
    }

    template <bool T=false>
    void setGlowOpacity(unsigned char p0){
        static_assert(T, "Implement GameObject::setGlowOpacity");
    }

    template <bool T=false>
    void setLastPosition(cocos2d::CCPoint const& p0){
        static_assert(T, "Implement GameObject::setLastPosition");
    }

    template <bool T=false>
    void setMainColorMode(int p0){
        static_assert(T, "Implement GameObject::setMainColorMode");
    }

    template <bool T=false>
    void setSectionIdx(int const& p0){
        static_assert(T, "Implement GameObject::setSectionIdx");
    }

    template <bool T=false>
    void setupCoinArt(){
        static_assert(T, "Implement GameObject::setupCoinArt");
    }

    template <bool T=false>
    void slopeFloorTop(){
        static_assert(T, "Implement GameObject::slopeFloorTop");
    }

    template <bool T=false>
    void slopeWallLeft(){
        static_assert(T, "Implement GameObject::slopeWallLeft");
    }

    GEODE_CODEGEN_DLL void updateCustomScale(float p0);

    template <bool T=false>
    void updateMainColor(){
        static_assert(T, "Implement GameObject::updateMainColor");
    }

    template <bool T=false>
    void updateOrientedBox(){
        static_assert(T, "Implement GameObject::updateOrientedBox");
    }

    template <bool T=false>
    void updateSecondaryColor(){
        static_assert(T, "Implement GameObject::updateSecondaryColor");
    }

    template <bool T=false>
    void updateStartPos(){
        static_assert(T, "Implement GameObject::updateStartPos");
    }

    template <bool T=false>
    void updateState(){
        static_assert(T, "Implement GameObject::updateState");
    }

    template <bool T=false>
    void updateSyncedAnimation(float p0){
        static_assert(T, "Implement GameObject::updateSyncedAnimation");
    }

    GEODE_CODEGEN_DLL void deselectObject();

    GEODE_CODEGEN_DLL cocos2d::CCRepeatForever* createRotateAction(float f, int n);

    GEODE_CODEGEN_DLL void setMyAction(cocos2d::CCAction* pAction);

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
        GEODE_PAD(0x1c);
        bool m_highDetail;
        ColorActionSprite* m_colorActionSpriteBase;
        ColorActionSprite* m_colorActionSpriteDetail;
        GJEffectManager* m_effectManager;
        GEODE_PAD(0x10);
};

class AnimatedSpriteDelegate {
public:

};

class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:

    template <bool T=false>
    void update(float p0){
        static_assert(T, "Implement PlayerObject::update");
    }

    template <bool T=false>
    void setScaleX(float p0){
        static_assert(T, "Implement PlayerObject::setScaleX");
    }

    template <bool T=false>
    void setScaleY(float p0){
        static_assert(T, "Implement PlayerObject::setScaleY");
    }

    template <bool T=false>
    void setScale(float p0){
        static_assert(T, "Implement PlayerObject::setScale");
    }

    template <bool T=false>
    void setPosition(cocos2d::CCPoint const& p0){
        static_assert(T, "Implement PlayerObject::setPosition");
    }

    GEODE_CODEGEN_DLL virtual void setVisible(bool p0);

    template <bool T=false>
    void setRotation(float p0){
        static_assert(T, "Implement PlayerObject::setRotation");
    }

    template <bool T=false>
    void setOpacity(unsigned char p0){
        static_assert(T, "Implement PlayerObject::setOpacity");
    }

    template <bool T=false>
    void setColor(cocos2d::_ccColor3B const& p0){
        static_assert(T, "Implement PlayerObject::setColor");
    }

    GEODE_CODEGEN_DLL virtual void setFlipX(bool p0);

    GEODE_CODEGEN_DLL virtual void setFlipY(bool p0);

    GEODE_CODEGEN_DLL virtual void resetObject();

    GEODE_CODEGEN_DLL virtual void getRealPosition();

    GEODE_CODEGEN_DLL virtual void getOrientedBox();

    template <bool T=false>
    void animationFinished(char const* p0){
        static_assert(T, "Implement PlayerObject::animationFinished");
    }

    GEODE_CODEGEN_DLL void activateStreak();

    template <bool T=false>
    void addAllParticles(){
        static_assert(T, "Implement PlayerObject::addAllParticles");
    }

    template <bool T=false>
    void addToTouchedRings(GameObject* p0){
        static_assert(T, "Implement PlayerObject::addToTouchedRings");
    }

    template <bool T=false>
    void boostPlayer(float p0){
        static_assert(T, "Implement PlayerObject::boostPlayer");
    }

    template <bool T=false>
    void bumpPlayer(float p0, int p1){
        static_assert(T, "Implement PlayerObject::bumpPlayer");
    }

    template <bool T=false>
    void buttonDown(PlayerButton p0){
        static_assert(T, "Implement PlayerObject::buttonDown");
    }

    template <bool T=false>
    void checkSnapJumpToObject(GameObject* p0){
        static_assert(T, "Implement PlayerObject::checkSnapJumpToObject");
    }

    template <bool T=false>
    void collidedWithObject(float p0, GameObject* p1){
        static_assert(T, "Implement PlayerObject::collidedWithObject");
    }

    template <bool T=false>
    void collidedWithObject(float p0, GameObject* p1, cocos2d::CCRect p2){
        static_assert(T, "Implement PlayerObject::collidedWithObject");
    }

    template <bool T=false>
    void collidedWithSlope(float p0, GameObject* p1, bool p2){
        static_assert(T, "Implement PlayerObject::collidedWithSlope");
    }

    template <bool T=false>
    void convertToClosestRotation(float p0){
        static_assert(T, "Implement PlayerObject::convertToClosestRotation");
    }

    template <bool T=false>
    void copyAttributes(PlayerObject* p0){
        static_assert(T, "Implement PlayerObject::copyAttributes");
    }

    template <bool T=false>
    static PlayerObject* create(int p0, int p1, cocos2d::CCLayer* p2){
        static_assert(T, "Implement PlayerObject::create");
    }

    template <bool T=false>
    void deactivateParticle(){
        static_assert(T, "Implement PlayerObject::deactivateParticle");
    }

    template <bool T=false>
    void deactivateStreak(bool p0){
        static_assert(T, "Implement PlayerObject::deactivateStreak");
    }

    GEODE_CODEGEN_DLL void fadeOutStreak2(float p0);

    template <bool T=false>
    void flashPlayer(float p0, float p1, cocos2d::_ccColor3B p2, cocos2d::_ccColor3B p3){
        static_assert(T, "Implement PlayerObject::flashPlayer");
    }

    GEODE_CODEGEN_DLL void flipGravity(bool p0, bool p1);

    template <bool T=false>
    void flipMod(){
        static_assert(T, "Implement PlayerObject::flipMod");
    }

    template <bool T=false>
    void getActiveMode(){
        static_assert(T, "Implement PlayerObject::getActiveMode");
    }

    template <bool T=false>
    void getModifiedSlopeYVel(){
        static_assert(T, "Implement PlayerObject::getModifiedSlopeYVel");
    }

    template <bool T=false>
    void getOldPosition(float p0){
        static_assert(T, "Implement PlayerObject::getOldPosition");
    }

    template <bool T=false>
    void getSecondColor(){
        static_assert(T, "Implement PlayerObject::getSecondColor");
    }

    template <bool T=false>
    void gravityDown(){
        static_assert(T, "Implement PlayerObject::gravityDown");
    }

    template <bool T=false>
    void gravityUp(){
        static_assert(T, "Implement PlayerObject::gravityUp");
    }

    template <bool T=false>
    void hardFlipGravity(){
        static_assert(T, "Implement PlayerObject::hardFlipGravity");
    }

    template <bool T=false>
    void hitGround(bool p0){
        static_assert(T, "Implement PlayerObject::hitGround");
    }

    GEODE_CODEGEN_DLL void incrementJumps();

    template <bool T=false>
    bool init(int p0, int p1, cocos2d::CCLayer* p2){
        static_assert(T, "Implement PlayerObject::init");
    }

    template <bool T=false>
    void isBoostValid(float p0){
        static_assert(T, "Implement PlayerObject::isBoostValid");
    }

    template <bool T=false>
    void isFlying(){
        static_assert(T, "Implement PlayerObject::isFlying");
    }

    template <bool T=false>
    void isSafeFlip(float p0){
        static_assert(T, "Implement PlayerObject::isSafeFlip");
    }

    template <bool T=false>
    void isSafeMode(float p0){
        static_assert(T, "Implement PlayerObject::isSafeMode");
    }

    template <bool T=false>
    void isSafeSpiderFlip(float p0){
        static_assert(T, "Implement PlayerObject::isSafeSpiderFlip");
    }

    template <bool T=false>
    void levelFlipFinished(){
        static_assert(T, "Implement PlayerObject::levelFlipFinished");
    }

    template <bool T=false>
    void levelFlipping(){
        static_assert(T, "Implement PlayerObject::levelFlipping");
    }

    template <bool T=false>
    void levelWillFlip(){
        static_assert(T, "Implement PlayerObject::levelWillFlip");
    }

    template <bool T=false>
    void loadFromCheckpoint(PlayerCheckpoint* p0){
        static_assert(T, "Implement PlayerObject::loadFromCheckpoint");
    }

    template <bool T=false>
    void lockPlayer(){
        static_assert(T, "Implement PlayerObject::lockPlayer");
    }

    template <bool T=false>
    void logValues(){
        static_assert(T, "Implement PlayerObject::logValues");
    }

    template <bool T=false>
    void modeDidChange(){
        static_assert(T, "Implement PlayerObject::modeDidChange");
    }

    template <bool T=false>
    void placeStreakPoint(){
        static_assert(T, "Implement PlayerObject::placeStreakPoint");
    }

    GEODE_CODEGEN_DLL void playBurstEffect();

    GEODE_CODEGEN_DLL void playDeathEffect();

    template <bool T=false>
    void playDynamicSpiderRun(){
        static_assert(T, "Implement PlayerObject::playDynamicSpiderRun");
    }

    GEODE_CODEGEN_DLL void playerDestroyed(bool p0);

    GEODE_CODEGEN_DLL bool playerIsFalling();

    template <bool T=false>
    void playerTeleported(){
        static_assert(T, "Implement PlayerObject::playerTeleported");
    }

    template <bool T=false>
    void playingEndEffect(){
        static_assert(T, "Implement PlayerObject::playingEndEffect");
    }

    template <bool T=false>
    void postCollision(float p0){
        static_assert(T, "Implement PlayerObject::postCollision");
    }

    template <bool T=false>
    void preCollision(){
        static_assert(T, "Implement PlayerObject::preCollision");
    }

    template <bool T=false>
    void preSlopeCollision(float p0, GameObject* p1){
        static_assert(T, "Implement PlayerObject::preSlopeCollision");
    }

    template <bool T=false>
    void propellPlayer(float p0){
        static_assert(T, "Implement PlayerObject::propellPlayer");
    }

    GEODE_CODEGEN_DLL void pushButton(int p0);

    template <bool T=false>
    void pushDown(){
        static_assert(T, "Implement PlayerObject::pushDown");
    }

    template <bool T=false>
    void pushPlayer(float p0){
        static_assert(T, "Implement PlayerObject::pushPlayer");
    }

    GEODE_CODEGEN_DLL void releaseButton(int p0);

    template <bool T=false>
    void removeAllParticles(){
        static_assert(T, "Implement PlayerObject::removeAllParticles");
    }

    template <bool T=false>
    void removePendingCheckpoint(){
        static_assert(T, "Implement PlayerObject::removePendingCheckpoint");
    }

    template <bool T=false>
    void resetAllParticles(){
        static_assert(T, "Implement PlayerObject::resetAllParticles");
    }

    template <bool T=false>
    void resetCollisionLog(){
        static_assert(T, "Implement PlayerObject::resetCollisionLog");
    }

    template <bool T=false>
    void resetPlayerIcon(){
        static_assert(T, "Implement PlayerObject::resetPlayerIcon");
    }

    template <bool T=false>
    void resetStateVariables(){
        static_assert(T, "Implement PlayerObject::resetStateVariables");
    }

    template <bool T=false>
    void resetStreak(){
        static_assert(T, "Implement PlayerObject::resetStreak");
    }

    GEODE_CODEGEN_DLL void ringJump(GameObject* p0);

    template <bool T=false>
    void runBallRotation(float p0){
        static_assert(T, "Implement PlayerObject::runBallRotation");
    }

    template <bool T=false>
    void runBallRotation2(){
        static_assert(T, "Implement PlayerObject::runBallRotation2");
    }

    GEODE_CODEGEN_DLL void runNormalRotation();

    template <bool T=false>
    void runRotateAction(bool p0){
        static_assert(T, "Implement PlayerObject::runRotateAction");
    }

    template <bool T=false>
    void saveToCheckpoint(PlayerCheckpoint* p0){
        static_assert(T, "Implement PlayerObject::saveToCheckpoint");
    }

    template <bool T=false>
    void setSecondColor(cocos2d::_ccColor3B const& p0){
        static_assert(T, "Implement PlayerObject::setSecondColor");
    }

    template <bool T=false>
    void setupStreak(){
        static_assert(T, "Implement PlayerObject::setupStreak");
    }

    template <bool T=false>
    void spawnCircle(){
        static_assert(T, "Implement PlayerObject::spawnCircle");
    }

    template <bool T=false>
    void spawnCircle2(){
        static_assert(T, "Implement PlayerObject::spawnCircle2");
    }

    template <bool T=false>
    void spawnDualCircle(){
        static_assert(T, "Implement PlayerObject::spawnDualCircle");
    }

    template <bool T=false>
    void spawnFromPlayer(PlayerObject* p0){
        static_assert(T, "Implement PlayerObject::spawnFromPlayer");
    }

    template <bool T=false>
    void spawnPortalCircle(cocos2d::_ccColor3B p0, float p1){
        static_assert(T, "Implement PlayerObject::spawnPortalCircle");
    }

    template <bool T=false>
    void spawnScaleCircle(){
        static_assert(T, "Implement PlayerObject::spawnScaleCircle");
    }

    template <bool T=false>
    void specialGroundHit(){
        static_assert(T, "Implement PlayerObject::specialGroundHit");
    }

    template <bool T=false>
    void speedDown(){
        static_assert(T, "Implement PlayerObject::speedDown");
    }

    template <bool T=false>
    void speedUp(){
        static_assert(T, "Implement PlayerObject::speedUp");
    }

    GEODE_CODEGEN_DLL void spiderTestJump(bool p0);

    template <bool T=false>
    void startDashing(GameObject* p0){
        static_assert(T, "Implement PlayerObject::startDashing");
    }

    template <bool T=false>
    void stopBurstEffect(){
        static_assert(T, "Implement PlayerObject::stopBurstEffect");
    }

    template <bool T=false>
    void stopDashing(){
        static_assert(T, "Implement PlayerObject::stopDashing");
    }

    template <bool T=false>
    void stopRotation(bool p0){
        static_assert(T, "Implement PlayerObject::stopRotation");
    }

    template <bool T=false>
    void storeCollision(bool p0, int p1){
        static_assert(T, "Implement PlayerObject::storeCollision");
    }

    template <bool T=false>
    void switchedToMode(GameObjectType p0){
        static_assert(T, "Implement PlayerObject::switchedToMode");
    }

    template <bool T=false>
    void testForMoving(float p0, GameObject* p1){
        static_assert(T, "Implement PlayerObject::testForMoving");
    }

    GEODE_CODEGEN_DLL void toggleBirdMode(bool p0);

    GEODE_CODEGEN_DLL void toggleDartMode(bool p0);

    GEODE_CODEGEN_DLL void toggleFlyMode(bool p0);

    GEODE_CODEGEN_DLL void toggleGhostEffect(GhostType p0);

    GEODE_CODEGEN_DLL void togglePlayerScale(bool p0);

    GEODE_CODEGEN_DLL void toggleRobotMode(bool p0);

    GEODE_CODEGEN_DLL void toggleRollMode(bool p0);

    GEODE_CODEGEN_DLL void toggleSpiderMode(bool p0);

    template <bool T=false>
    void toggleVisibility(bool p0){
        static_assert(T, "Implement PlayerObject::toggleVisibility");
    }

    template <bool T=false>
    void touchedObject(GameObject* p0){
        static_assert(T, "Implement PlayerObject::touchedObject");
    }

    template <bool T=false>
    void tryPlaceCheckpoint(){
        static_assert(T, "Implement PlayerObject::tryPlaceCheckpoint");
    }

    template <bool T=false>
    void updateCheckpointMode(bool p0){
        static_assert(T, "Implement PlayerObject::updateCheckpointMode");
    }

    template <bool T=false>
    void updateCheckpointTest(){
        static_assert(T, "Implement PlayerObject::updateCheckpointTest");
    }

    template <bool T=false>
    void updateCollide(bool p0, int p1){
        static_assert(T, "Implement PlayerObject::updateCollide");
    }

    template <bool T=false>
    void updateCollideBottom(float p0, int p1){
        static_assert(T, "Implement PlayerObject::updateCollideBottom");
    }

    template <bool T=false>
    void updateCollideTop(float p0, int p1){
        static_assert(T, "Implement PlayerObject::updateCollideTop");
    }

    template <bool T=false>
    void updateDashAnimation(){
        static_assert(T, "Implement PlayerObject::updateDashAnimation");
    }

    template <bool T=false>
    void updateDashArt(){
        static_assert(T, "Implement PlayerObject::updateDashArt");
    }

    template <bool T=false>
    void updateGlowColor(){
        static_assert(T, "Implement PlayerObject::updateGlowColor");
    }

    template <bool T=false>
    void updateJump(float p0){
        static_assert(T, "Implement PlayerObject::updateJump");
    }

    template <bool T=false>
    void updateJumpVariables(){
        static_assert(T, "Implement PlayerObject::updateJumpVariables");
    }

    template <bool T=false>
    void updatePlayerBirdFrame(int p0){
        static_assert(T, "Implement PlayerObject::updatePlayerBirdFrame");
    }

    template <bool T=false>
    void updatePlayerDartFrame(int p0){
        static_assert(T, "Implement PlayerObject::updatePlayerDartFrame");
    }

    template <bool T=false>
    void updatePlayerFrame(int p0){
        static_assert(T, "Implement PlayerObject::updatePlayerFrame");
    }

    template <bool T=false>
    void updatePlayerGlow(){
        static_assert(T, "Implement PlayerObject::updatePlayerGlow");
    }

    template <bool T=false>
    void updatePlayerRobotFrame(int p0){
        static_assert(T, "Implement PlayerObject::updatePlayerRobotFrame");
    }

    template <bool T=false>
    void updatePlayerRollFrame(int p0){
        static_assert(T, "Implement PlayerObject::updatePlayerRollFrame");
    }

    template <bool T=false>
    void updatePlayerScale(){
        static_assert(T, "Implement PlayerObject::updatePlayerScale");
    }

    template <bool T=false>
    void updatePlayerShipFrame(int p0){
        static_assert(T, "Implement PlayerObject::updatePlayerShipFrame");
    }

    template <bool T=false>
    void updatePlayerSpiderFrame(int p0){
        static_assert(T, "Implement PlayerObject::updatePlayerSpiderFrame");
    }

    template <bool T=false>
    void updatePlayerSpriteExtra(gd::string p0){
        static_assert(T, "Implement PlayerObject::updatePlayerSpriteExtra");
    }

    template <bool T=false>
    void updateRobotAnimationSpeed(){
        static_assert(T, "Implement PlayerObject::updateRobotAnimationSpeed");
    }

    template <bool T=false>
    void updateRotation(float p0){
        static_assert(T, "Implement PlayerObject::updateRotation");
    }

    template <bool T=false>
    void updateRotation(float p0, float p1){
        static_assert(T, "Implement PlayerObject::updateRotation");
    }

    template <bool T=false>
    void updateShipRotation(float p0){
        static_assert(T, "Implement PlayerObject::updateShipRotation");
    }

    template <bool T=false>
    void updateShipSpriteExtra(gd::string p0){
        static_assert(T, "Implement PlayerObject::updateShipSpriteExtra");
    }

    template <bool T=false>
    void updateSlopeRotation(float p0){
        static_assert(T, "Implement PlayerObject::updateSlopeRotation");
    }

    template <bool T=false>
    void updateSlopeYVelocity(float p0){
        static_assert(T, "Implement PlayerObject::updateSlopeYVelocity");
    }

    template <bool T=false>
    void updateSpecial(float p0){
        static_assert(T, "Implement PlayerObject::updateSpecial");
    }

    template <bool T=false>
    void updateStateVariables(){
        static_assert(T, "Implement PlayerObject::updateStateVariables");
    }

    GEODE_CODEGEN_DLL void updateTimeMod(float p0);

    template <bool T=false>
    void usingWallLimitedMode(){
        static_assert(T, "Implement PlayerObject::usingWallLimitedMode");
    }

    template <bool T=false>
    void yStartDown(){
        static_assert(T, "Implement PlayerObject::yStartDown");
    }

    template <bool T=false>
    void yStartUp(){
        static_assert(T, "Implement PlayerObject::yStartUp");
    }

    GEODE_CODEGEN_DLL void runRotateAction();

    GEODE_CODEGEN_DLL void runBallRotation();

        GEODE_PAD(0x14);
        bool m_unk480;
        cocos2d::CCNode* m_unk484;
        cocos2d::CCDictionary* m_collisionLog;
        cocos2d::CCDictionary* m_collisionLog1;
        GEODE_PAD(0x20);
        bool m_unk4B0;
        cocos2d::CCSprite* m_unk4B4;
        GEODE_PAD(0x1c);
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
        GEODE_PAD(0x08);
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
        float m_unk584;
        GEODE_PAD(0x14);
        GameObject* m_unk59C;
        GEODE_PAD(0x8);
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
        GEODE_PAD(0x4);
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
        GEODE_PAD(0x4);
        cocos2d::CCPoint m_position;
        bool m_unk684;
        bool m_unk685;
        double m_unk688;
        GEODE_PAD(0x8);
        float m_groundHeight;
        float m_unk69C;
        GEODE_PAD(0x4);
        float m_unk6A4[200];
        GEODE_PAD(0x1c);
};

class CCBlockLayer : public cocos2d::CCLayerColor {
public:

    template <bool T=false>
    void disableUI(){
        static_assert(T, "Implement CCBlockLayer::disableUI");
    }

    template <bool T=false>
    void draw(){
        static_assert(T, "Implement CCBlockLayer::draw");
    }

    template <bool T=false>
    void enableUI(){
        static_assert(T, "Implement CCBlockLayer::enableUI");
    }

    template <bool T=false>
    void enterAnimFinished(){
        static_assert(T, "Implement CCBlockLayer::enterAnimFinished");
    }

    template <bool T=false>
    void enterLayer(){
        static_assert(T, "Implement CCBlockLayer::enterLayer");
    }

    template <bool T=false>
    void exitLayer(){
        static_assert(T, "Implement CCBlockLayer::exitLayer");
    }

    template <bool T=false>
    void hideLayer(bool p0){
        static_assert(T, "Implement CCBlockLayer::hideLayer");
    }

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement CCBlockLayer::init");
    }

    template <bool T=false>
    void layerHidden(){
        static_assert(T, "Implement CCBlockLayer::layerHidden");
    }

    template <bool T=false>
    void layerVisible(){
        static_assert(T, "Implement CCBlockLayer::layerVisible");
    }

    template <bool T=false>
    void registerWithTouchDispatcher(){
        static_assert(T, "Implement CCBlockLayer::registerWithTouchDispatcher");
    }

    template <bool T=false>
    void showLayer(bool p0){
        static_assert(T, "Implement CCBlockLayer::showLayer");
    }

        bool m_unknown;
        bool m_unknown2;
};

class CreatorLayer : public cocos2d::CCLayer {
public:

    GEODE_CODEGEN_DLL void onBack(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onChallenge(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onLeaderboards(cocos2d::CCObject* p0);

    template <bool T=false>
    void onMyLevels(cocos2d::CCObject* p0){
        static_assert(T, "Implement CreatorLayer::onMyLevels");
    }

    template <bool T=false>
    void onSavedLevels(cocos2d::CCObject* p0){
        static_assert(T, "Implement CreatorLayer::onSavedLevels");
    }

    GEODE_CODEGEN_DLL virtual void sceneWillResume();

    GEODE_CODEGEN_DLL bool init();

    GEODE_CODEGEN_DLL static CreatorLayer* create();

};

class FLAlertLayer : public cocos2d::CCLayerColor {
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

    template <bool T=false>
    bool init(FLAlertLayerProtocol* p0, char const* p1, gd::string p2, char const* p3, char const* p4, float p5, bool p6, float p7){
        static_assert(T, "Implement FLAlertLayer::init");
    }

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

class MoreVideoOptionsLayer : public FLAlertLayer {
public:

    template <bool T=false>
    static MoreVideoOptionsLayer* create(){
        static_assert(T, "Implement MoreVideoOptionsLayer::create");
    }

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement MoreVideoOptionsLayer::init");
    }

    template <bool T=false>
    void onClose(cocos2d::CCObject* p0){
        static_assert(T, "Implement MoreVideoOptionsLayer::onClose");
    }

};

class DrawGridLayer : public cocos2d::CCLayer {
public:
	 using CCPointArray400 = cocos2d::CCPoint(*)[400];
	 using CCPointArray200 = cocos2d::CCPoint(*)[200];

    GEODE_CODEGEN_DLL void draw();

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

class EditorOptionsLayer {
public:

    template <bool T=false>
    void onButtonsPerRow(cocos2d::CCObject* p0){
        static_assert(T, "Implement EditorOptionsLayer::onButtonsPerRow");
    }

};

class LabelGameObject : public GameObject {
public:

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement LabelGameObject::init");
    }

    template <bool T=false>
    void setObjectColor(cocos2d::_ccColor3B const& p0){
        static_assert(T, "Implement LabelGameObject::setObjectColor");
    }

};

class SetupInstantCountPopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupInstantCountPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupInstantCountPopup::create");
    }

    template <bool T=false>
    void onTargetIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupInstantCountPopup::onTargetIDArrow");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetupInstantCountPopup::textChanged");
    }

    template <bool T=false>
    void updateTargetID(){
        static_assert(T, "Implement SetupInstantCountPopup::updateTargetID");
    }

};

class CCIndexPath : public cocos2d::CCObject {
public:

    GEODE_CODEGEN_DLL static CCIndexPath* create(unsigned int idk1, int idk2);

        int m_unknown1;
        int m_unknown2;
};

class TableViewCell : public cocos2d::CCLayer {
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

class SongCell : public TableViewCell {
public:

    GEODE_CODEGEN_DLL void updateBGColor(unsigned int index);

};

class GhostTrailEffect {
public:

};

class FLAlertLayerProtocol {
public:

    GEODE_CODEGEN_DLL virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

};

class TextInputDelegate {
public:

    GEODE_CODEGEN_DLL virtual void textChanged(CCTextInputNode* p0);

    GEODE_CODEGEN_DLL virtual void textInputOpened(CCTextInputNode* p0);

    GEODE_CODEGEN_DLL virtual void textInputClosed(CCTextInputNode* p0);

    GEODE_CODEGEN_DLL virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    GEODE_CODEGEN_DLL virtual void textInputReturn(CCTextInputNode* p0);

    GEODE_CODEGEN_DLL virtual bool allowTextInput(CCTextInputNode* p0);

};

class GJDropDownLayerDelegate {
public:

    GEODE_CODEGEN_DLL virtual void dropDownLayerWillClose(GJDropDownLayer* p0);

};

class CustomSongLayer : public FLAlertLayer, public FLAlertLayerProtocol, public TextInputDelegate, public GJDropDownLayerDelegate {
public:

    template <bool T=false>
    bool init(LevelSettingsObject* p0){
        static_assert(T, "Implement CustomSongLayer::init");
    }

    template <bool T=false>
    void onArtists(cocos2d::CCObject* p0){
        static_assert(T, "Implement CustomSongLayer::onArtists");
    }

    template <bool T=false>
    void onSongBrowser(cocos2d::CCObject* p0){
        static_assert(T, "Implement CustomSongLayer::onSongBrowser");
    }

        LevelSettingsObject* m_levelSettings;
        CCTextInputNode* m_songIDInput;
        CustomSongWidget* m_songWidget;
        LevelSettingsLayer* m_levelSettingsLayer;
};

class LoadingCircle : public cocos2d::CCLayerColor {
public:

    GEODE_CODEGEN_DLL void setParentLayer(cocos2d::CCLayer* layer);

    GEODE_CODEGEN_DLL void setFade(bool fade);

    GEODE_CODEGEN_DLL static LoadingCircle* create();

    GEODE_CODEGEN_DLL void show();

    GEODE_CODEGEN_DLL void fadeAndRemove();

        cocos2d::CCSprite* m_sprite;
        cocos2d::CCLayer* m_parentLayer;
        bool m_fade;
};

class GJMessageCell : public TableViewCell {
public:

    GEODE_CODEGEN_DLL void updateBGColor(unsigned int index);

};

class SetupInteractObjectPopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupInteractObjectPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupInteractObjectPopup::create");
    }

    template <bool T=false>
    void onTargetIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupInteractObjectPopup::onTargetIDArrow");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetupInteractObjectPopup::textChanged");
    }

    template <bool T=false>
    void updateTargetID(){
        static_assert(T, "Implement SetupInteractObjectPopup::updateTargetID");
    }

};

class OnlineListDelegate {
public:

    GEODE_CODEGEN_DLL virtual void loadListFinished(cocos2d::CCArray* p0, const char* p1);

    GEODE_CODEGEN_DLL virtual void loadListFailed(const char* p0);

    GEODE_CODEGEN_DLL virtual void setupPageInfo(gd::string p0, const char* p1);

};

class MoreOptionsLayer {
public:

    GEODE_CODEGEN_DLL static MoreOptionsLayer* create();

    GEODE_CODEGEN_DLL void addToggle(const char* name, const char* key, const char* info);

    GEODE_CODEGEN_DLL void onKeybindings(cocos2d::CCObject* pSender);

};

class CCMenuItemSpriteExtra : public cocos2d::CCMenuItemSprite {
public:
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
        GEODE_CODEGEN_DLL ~CCMenuItemSpriteExtra();
    GEODE_CODEGEN_DLL bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3);

    GEODE_CODEGEN_DLL bool init(cocos2d::CCNode* spr);

    GEODE_CODEGEN_DLL void activate();

    GEODE_CODEGEN_DLL void selected();

    GEODE_CODEGEN_DLL void unselected();

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

class ColorChannelSprite : public cocos2d::CCSprite {
public:

    GEODE_CODEGEN_DLL void updateBlending(bool p0);

    GEODE_CODEGEN_DLL void updateCopyLabel(int p0, bool p1);

    GEODE_CODEGEN_DLL void updateOpacity(float p0);

    GEODE_CODEGEN_DLL void updateValues(ColorAction* p0);

    GEODE_CODEGEN_DLL static ColorChannelSprite* create();

        cocos2d::CCLabelBMFont* m_copyLabel;
        cocos2d::CCLabelBMFont* m_opacityLabel;
        cocos2d::CCLabelBMFont* m_blendingDot;
};

class CCScrollLayerExt : public cocos2d::CCLayer {
public:
	 CCScrollLayerExt() {}

    GEODE_CODEGEN_DLL static CCScrollLayerExt* create(cocos2d::CCRect rect, bool vertical);

    GEODE_CODEGEN_DLL float getMinY();

    GEODE_CODEGEN_DLL float getMaxY();

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

class CCScrollLayerExtDelegate {
public:

    GEODE_CODEGEN_DLL virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);

    GEODE_CODEGEN_DLL virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* p0);

    GEODE_CODEGEN_DLL virtual void scrollViewTouchMoving(CCScrollLayerExt* p0);

    GEODE_CODEGEN_DLL virtual void scrollViewDidEndMoving(CCScrollLayerExt* p0);

    GEODE_CODEGEN_DLL virtual void scrollViewTouchBegin(CCScrollLayerExt* p0);

    GEODE_CODEGEN_DLL virtual void scrollViewTouchEnd(CCScrollLayerExt* p0);

};

class TableView : public CCScrollLayerExt, public CCScrollLayerExtDelegate {
public:
	 TableView() {}
	 TableView(cocos2d::CCRect rect) : CCScrollLayerExt(rect) {}

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

class ListButtonBar : public cocos2d::CCNode {
public:

        BoomScrollLayer* m_scrollLayer;
};

class AchievementsLayer {
public:

    template <bool T=false>
    void customSetup(){
        static_assert(T, "Implement AchievementsLayer::customSetup");
    }

    GEODE_CODEGEN_DLL void loadPage(int p0);

};

class LevelCommentDelegate {
public:

    GEODE_CODEGEN_DLL virtual void loadCommentsFinished(cocos2d::CCArray* p0, const char* p1);

    GEODE_CODEGEN_DLL virtual void loadCommentsFailed(const char* p0);

    GEODE_CODEGEN_DLL virtual void updateUserScoreFinished();

    GEODE_CODEGEN_DLL virtual void setupPageInfo(gd::string p0, const char* p1);

};

class CommentUploadDelegate {
public:

    GEODE_CODEGEN_DLL virtual void commentUploadFinished(int p0);

    GEODE_CODEGEN_DLL virtual void commentUploadFailed(int p0, CommentError p1);

    GEODE_CODEGEN_DLL virtual void commentDeleteFailed(int p0, int p1);

};

class InfoLayer : public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol {
public:

    GEODE_CODEGEN_DLL bool init(GJGameLevel* level, GJUserScore* score);

    GEODE_CODEGEN_DLL void setupCommentsBrowser(cocos2d::CCArray* comments);

    GEODE_CODEGEN_DLL void onMore(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onLevelInfo(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void loadPage(int page);

    GEODE_CODEGEN_DLL static InfoLayer* create(GJGameLevel* level, GJUserScore* score);

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

class GJChallengeItem : public cocos2d::CCObject {
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

class CommentCell : public TableViewCell {
public:

    GEODE_CODEGEN_DLL void loadFromComment(GJComment* p0);

        GEODE_PAD(0x4);
        cocos2d::CCSprite* m_iconSprite;
        cocos2d::CCLabelBMFont* m_likeLabel;
        GJComment* m_comment;
        GEODE_PAD(0x4);
};

class ArtistCell : public TableViewCell {
public:

    template <bool T=false>
    void draw(){
        static_assert(T, "Implement ArtistCell::draw");
    }

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement ArtistCell::init");
    }

    template <bool T=false>
    void loadFromObject(SongInfoObject* p0){
        static_assert(T, "Implement ArtistCell::loadFromObject");
    }

    template <bool T=false>
    void onNewgrounds(cocos2d::CCObject* p0){
        static_assert(T, "Implement ArtistCell::onNewgrounds");
    }

    GEODE_CODEGEN_DLL void updateBGColor(int p0);

        void* m_idk;
};

class SpawnTriggerAction : public cocos2d::CCNode {
public:

    template <bool T=false>
    static SpawnTriggerAction* createFromString(gd::string p0){
        static_assert(T, "Implement SpawnTriggerAction::createFromString");
    }

        bool m_timerEnded;
        float m_delay;
        float m_timer;
        int m_group;
        int m_uuid;
};

class ListButtonBarDelegate {
public:

};

class GaragePage : public cocos2d::CCLayer, public ListButtonBarDelegate {
public:

    GEODE_CODEGEN_DLL static GaragePage* create(IconType type, GJGarageLayer* pGarage, cocos2d::SEL_MenuHandler pSelectCallback);

    GEODE_CODEGEN_DLL void listButtonBarSwitchedPage(ListButtonBar* bar, int idk);

        GEODE_CODEGEN_DLL GaragePage();
    GEODE_CODEGEN_DLL bool init(IconType type, GJGarageLayer* pGarage, cocos2d::SEL_MenuHandler pSelectCallback);

        GJGarageLayer* m_garage;
        cocos2d::SEL_MenuHandler m_handler;
        cocos2d::CCSprite* m_selectSprite;
        CCMenuItemSpriteExtra* m_unkNode0x12c;
        IconType m_type;
        int m_unknown;
        GEODE_PAD(0x4);
};

class CCMenuItemToggler : public cocos2d::CCMenuItem {
public:
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

class LevelSearchLayer {
public:

    GEODE_CODEGEN_DLL static LevelSearchLayer* create();

    GEODE_CODEGEN_DLL GJSearchObject* getSearchObject(SearchType p0, gd::string p1);

    GEODE_CODEGEN_DLL void onMoreOptions(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onSearch(cocos2d::CCObject* p0);

        GEODE_PAD(0xC);
        CCTextInputNode* m_searchInput;
};

class NumberInputDelegate {
public:

    GEODE_CODEGEN_DLL virtual void numberInputClosed(NumberInputLayer* p0);

};

class PlatformDownloadDelegate {
public:

    GEODE_CODEGEN_DLL virtual void downloadFinished(char const* p0);

    GEODE_CODEGEN_DLL virtual void downloadFailed(char const* p0);

};

class MusicDownloadManager : public cocos2d::CCNode, public PlatformDownloadDelegate {
public:

    template <bool T=false>
    void incrementPriorityForSong(int p0){
        static_assert(T, "Implement MusicDownloadManager::incrementPriorityForSong");
    }

    GEODE_CODEGEN_DLL static MusicDownloadManager* sharedState();

    GEODE_CODEGEN_DLL gd::string pathForSong(int id);

    GEODE_CODEGEN_DLL cocos2d::CCArray* getDownloadedSongs();

    GEODE_CODEGEN_DLL void songStateChanged();

        cocos2d::CCDictionary* m_unknownDict;
        cocos2d::CCArray* m_handlers;
        cocos2d::CCDictionary* m_songsDict;
        int m_unknown;
};

class GJUserScore : public cocos2d::CCNode {
public:

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

    GEODE_CODEGEN_DLL static GJUserScore* create();

    GEODE_CODEGEN_DLL static GJUserScore* create(cocos2d::CCDictionary* p0);

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

class SetupCountTriggerPopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupCountTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupCountTriggerPopup::create");
    }

    template <bool T=false>
    void onTargetIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupCountTriggerPopup::onTargetIDArrow");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetupCountTriggerPopup::textChanged");
    }

    template <bool T=false>
    void updateTargetID(){
        static_assert(T, "Implement SetupCountTriggerPopup::updateTargetID");
    }

};

class CCCircleWaveDelegate {
public:

    GEODE_CODEGEN_DLL virtual void circleWaveWillBeRemoved(CCCircleWave* wave);

};

class PauseLayer : public CCBlockLayer {
public:

    template <bool T=false>
    static PauseLayer* create(bool p0){
        static_assert(T, "Implement PauseLayer::create");
    }

    template <bool T=false>
    void onEdit(cocos2d::CCObject* p0){
        static_assert(T, "Implement PauseLayer::onEdit");
    }

    GEODE_CODEGEN_DLL void createToggleButton(cocos2d::SEL_MenuHandler callback, bool on, cocos2d::CCMenu* menu, gd::string caption, cocos2d::CCPoint pos);

        bool m_unknown;
        bool m_unknown2;
};

class GameSoundManager : public cocos2d::CCNode {
public:

    template <bool T=false>
    void disableMetering(){
        static_assert(T, "Implement GameSoundManager::disableMetering");
    }

    template <bool T=false>
    void enableMetering(){
        static_assert(T, "Implement GameSoundManager::enableMetering");
    }

    template <bool T=false>
    void getMeteringValue(){
        static_assert(T, "Implement GameSoundManager::getMeteringValue");
    }

    template <bool T=false>
    void playBackgroundMusic(gd::string p0, bool p1, bool p2){
        static_assert(T, "Implement GameSoundManager::playBackgroundMusic");
    }

    GEODE_CODEGEN_DLL void playEffect(gd::string p0, float p1, float p2, float p3);

    template <bool T=false>
    void stopBackgroundMusic(){
        static_assert(T, "Implement GameSoundManager::stopBackgroundMusic");
    }

    GEODE_CODEGEN_DLL static GameSoundManager* sharedManager();

        cocos2d::CCDictionary* m_dictionary1;
        cocos2d::CCDictionary* m_dictionary2;
        GEODE_PAD(0xc);
        bool m_preloaded;
        GEODE_PAD(0x4);
        gd::string m_filePath;
};

class GameLevelManager : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL cocos2d::CCArray* createAndGetScores(gd::string p0, GJScoreType p1);

    GEODE_CODEGEN_DLL GJGameLevel* createNewLevel();

    GEODE_CODEGEN_DLL static GameLevelManager* sharedState();

    GEODE_CODEGEN_DLL void getCompletedLevels(bool newFilter);

    GEODE_CODEGEN_DLL void getGJUserInfo(int p0);

    GEODE_CODEGEN_DLL void getOnlineLevels(GJSearchObject* p0);

    template <bool T=false>
    void getPageInfo(char const* p0){
        static_assert(T, "Implement GameLevelManager::getPageInfo");
    }

    GEODE_CODEGEN_DLL cocos2d::CCArray* getSavedLevels(bool favorite, int levelFolder);

    GEODE_CODEGEN_DLL cocos2d::CCArray* getStoredOnlineLevels(char const* p0);

    template <bool T=false>
    void getTopArtists(int p0, int p1){
        static_assert(T, "Implement GameLevelManager::getTopArtists");
    }

    template <bool T=false>
    void getTopArtistsKey(int p0){
        static_assert(T, "Implement GameLevelManager::getTopArtistsKey");
    }

    template <bool T=false>
    void makeTimeStamp(char const* p0){
        static_assert(T, "Implement GameLevelManager::makeTimeStamp");
    }

    GEODE_CODEGEN_DLL GJGameLevel* getMainLevel(int id, bool unk);

    GEODE_CODEGEN_DLL cocos2d::CCDictionary* responseToDict(gd::string response, bool comment);

    GEODE_CODEGEN_DLL void storeUserNames(gd::string p0);

    GEODE_CODEGEN_DLL gd::string userNameForUserID(int id);

    GEODE_CODEGEN_DLL void updateUserScore();

        cocos2d::CCDictionary* m_mainLevels;
        cocos2d::CCDictionary* m_searchFilters;
        cocos2d::CCDictionary* m_onlineLevels;
        GEODE_PAD(0x4);
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
        GEODE_PAD(0x4);
        int m_weeklyTimeLeft;
        int m_weeklyID;
        int m_weeklyIDUnk;
        cocos2d::CCDictionary* m_gauntletLevels;
        cocos2d::CCDictionary* m_unkDict13;
        GEODE_PAD(0x4);
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
        GEODE_PAD(0x4);
        gd::string m_unkStr3;
        cocos2d::CCString* m_unkStr4;
};

class SetIDLayer {
public:

    template <bool T=false>
    static SetIDLayer* create(GameObject* p0){
        static_assert(T, "Implement SetIDLayer::create");
    }

};

class CustomSongCell : public TableViewCell {
public:

    template <bool T=false>
    void loadFromObject(SongInfoObject* p0){
        static_assert(T, "Implement CustomSongCell::loadFromObject");
    }

};

class MapPackCell : public TableViewCell {
public:

    GEODE_CODEGEN_DLL void updateBGColor(unsigned int index);

};

class EndLevelLayer {
public:

    template <bool T=false>
    static EndLevelLayer* create(){
        static_assert(T, "Implement EndLevelLayer::create");
    }

};

class AchievementBar : public cocos2d::CCNodeRGBA {
public:

    GEODE_CODEGEN_DLL static AchievementBar* create(const char* title, const char* desc, const char* icon, bool quest);

        GEODE_PAD(0x24);
};

class AchievementCell {
public:

    template <bool T=false>
    void loadFromDict(cocos2d::CCDictionary* p0){
        static_assert(T, "Implement AchievementCell::loadFromDict");
    }

};

class AchievementManager : public cocos2d::CCNode {
public:

    template <bool T=false>
    void getAllAchievements(){
        static_assert(T, "Implement AchievementManager::getAllAchievements");
    }

    GEODE_CODEGEN_DLL static AchievementManager* sharedState();

        GEODE_PAD(0x10);
        cocos2d::CCDictionary* m_achievements;
        GEODE_PAD(0x4);
};

class AchievementNotifier : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL void notifyAchievement(const char* title, const char* desc, const char* icon, bool quest);

    GEODE_CODEGEN_DLL static AchievementNotifier* sharedState();

    GEODE_CODEGEN_DLL void willSwitchToScene(cocos2d::CCScene* p0);

    GEODE_CODEGEN_DLL void showNextAchievement();

        cocos2d::CCScene* m_currentScene;
        cocos2d::CCArray* m_queue;
        AchievementBar* m_currentAchievement;
};

class PlatformToolbox {
public:

    template <bool T=false>
    static void hideCursor(){
        static_assert(T, "Implement PlatformToolbox::hideCursor");
    }

    template <bool T=false>
    static void showCursor(){
        static_assert(T, "Implement PlatformToolbox::showCursor");
    }

    template <bool T=false>
    static bool isControllerConnected(){
        static_assert(T, "Implement PlatformToolbox::isControllerConnected");
    }

};

class AnimatedGameObject {
public:

    template <bool T=false>
    void playAnimation(int p0){
        static_assert(T, "Implement AnimatedGameObject::playAnimation");
    }

    template <bool T=false>
    void updateChildSpriteColor(cocos2d::_ccColor3B p0){
        static_assert(T, "Implement AnimatedGameObject::updateChildSpriteColor");
    }

};

class CCAnimatedSprite : public cocos2d::CCSprite {
public:

    GEODE_CODEGEN_DLL void runAnimation(gd::string p0);

    template <bool T=false>
    void tweenToAnimation(gd::string p0, float p1){
        static_assert(T, "Implement CCAnimatedSprite::tweenToAnimation");
    }

    GEODE_CODEGEN_DLL static CCAnimatedSprite* create(const char* file);

        gd::string m_unknown1;
        gd::string m_unknown2;
        GEODE_PAD(0x14);
        gd::string m_unknown3;
        GEODE_PAD(0x4);
};

class AnimatedShopKeeper : public CCAnimatedSprite {
public:

    GEODE_CODEGEN_DLL void animationFinished(const char* p0);

    GEODE_CODEGEN_DLL static AnimatedShopKeeper* create(ShopType type);

    GEODE_CODEGEN_DLL void startAnimating();

        float m_unknown1;
        float m_unknown2;
        bool m_unknown;
};

class AppDelegate : public cocos2d::CCApplication {
public:

    template <bool T=false>
    void bgScale(){
        static_assert(T, "Implement AppDelegate::bgScale");
    }

    GEODE_CODEGEN_DLL virtual bool applicationDidFinishLaunching();

    GEODE_CODEGEN_DLL virtual void applicationDidEnterBackground();

    GEODE_CODEGEN_DLL virtual void applicationWillEnterForeground();

    GEODE_CODEGEN_DLL virtual void applicationWillBecomeActive();

    GEODE_CODEGEN_DLL virtual void applicationWillResignActive();

    GEODE_CODEGEN_DLL virtual void trySaveGame();

    GEODE_CODEGEN_DLL virtual void willSwitchToScene(cocos2d::CCScene* p0);

    template <bool T=false>
    static AppDelegate* get(){
        static_assert(T, "Implement AppDelegate::get");
    }

        cocos2d::CCScene* m_runningScene;
};

class AudioEffectsLayer {
public:

    template <bool T=false>
    void audioStep(float p0){
        static_assert(T, "Implement AudioEffectsLayer::audioStep");
    }

    template <bool T=false>
    static AudioEffectsLayer* create(gd::string p0){
        static_assert(T, "Implement AudioEffectsLayer::create");
    }

    template <bool T=false>
    void resetAudioVars(){
        static_assert(T, "Implement AudioEffectsLayer::resetAudioVars");
    }

};

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol {
public:

    GEODE_CODEGEN_DLL virtual bool init();

    GEODE_CODEGEN_DLL virtual void keyBackClicked();

    GEODE_CODEGEN_DLL virtual void keyDown(cocos2d::enumKeyCodes p0);

    template <bool T=false>
    void googlePlaySignedIn(){
        static_assert(T, "Implement MenuLayer::googlePlaySignedIn");
    }

    GEODE_CODEGEN_DLL virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    GEODE_CODEGEN_DLL void onMoreGames(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onGarage(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onQuit(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onMyProfile(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onPlay(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onCreator(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onRobTop(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onNewgrounds(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onDaily(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onOptions(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onAchievements(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onStats(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onFacebook(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onTwitter(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onYouTube(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL static cocos2d::CCScene* scene(bool p0);

    GEODE_CODEGEN_DLL MenuLayer* node();

};

class TableViewDelegate {
public:

    GEODE_CODEGEN_DLL virtual void willTweenToIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    GEODE_CODEGEN_DLL virtual void didEndTweenToIndexPath(CCIndexPath& p0, TableView* p1);

    GEODE_CODEGEN_DLL virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    GEODE_CODEGEN_DLL virtual void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    GEODE_CODEGEN_DLL virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);

    GEODE_CODEGEN_DLL virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    GEODE_CODEGEN_DLL virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);

};

class TableViewDataSource {
public:

    GEODE_CODEGEN_DLL virtual int numberOfRowsInSection(unsigned int p0, TableView* p1);

    GEODE_CODEGEN_DLL virtual unsigned int numberOfSectionsInTableView(TableView* p0);

    GEODE_CODEGEN_DLL virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2);

    GEODE_CODEGEN_DLL virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

};

class BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
	 ~BoomListView() {
	    CC_SAFE_RELEASE(m_entries);
	}
	 bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height) {
		return this->init(entries, height, width, 0, type);
	}

    template <bool T=false>
    static BoomListView* create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4){
        static_assert(T, "Implement BoomListView::create");
    }

    GEODE_CODEGEN_DLL bool init(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);

    template <bool T=false>
    void draw(){
        static_assert(T, "Implement BoomListView::draw");
    }

    GEODE_CODEGEN_DLL virtual void setupList();

    template <bool T=false>
    void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2){
        static_assert(T, "Implement BoomListView::TableViewWillDisplayCellForRowAtIndexPath");
    }

    GEODE_CODEGEN_DLL virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    GEODE_CODEGEN_DLL virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    GEODE_CODEGEN_DLL virtual int numberOfRowsInSection(unsigned int p0, TableView* p1);

    GEODE_CODEGEN_DLL virtual unsigned int numberOfSectionsInTableView(TableView* p0);

    GEODE_CODEGEN_DLL virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& p0, TableView* p1);

    template <bool T=false>
    void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* p0, TableViewCellEditingStyle p1, CCIndexPath& p2){
        static_assert(T, "Implement BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath");
    }

    template <bool T=false>
    void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2){
        static_assert(T, "Implement BoomListView::TableViewWillReloadCellForRowAtIndexPath");
    }

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

class BoomScrollLayer : public cocos2d::CCLayer {
public:

    GEODE_CODEGEN_DLL void instantMoveToPage(int page);

    GEODE_CODEGEN_DLL void moveToPage(int page);

        cocos2d::CCArray* m_dots;
        GEODE_PAD(0x40);
        ExtendedLayer* m_layer;
        GEODE_PAD(0x48);
        int m_page;
};

class ButtonSprite : public cocos2d::CCSprite {
public:
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

    template <bool T=false>
    static ButtonSprite* create(char const* p0, int p1, int p2, float p3, bool p4){
        static_assert(T, "Implement ButtonSprite::create");
    }

    GEODE_CODEGEN_DLL void updateBGImage(const char* p0);

    template <bool T=false>
    static ButtonSprite* create(char const* p0, float p1){
        static_assert(T, "Implement ButtonSprite::create");
    }

    GEODE_CODEGEN_DLL void setString(const char* txt);

    GEODE_CODEGEN_DLL void updateSpriteBGSize(cocos2d::CCPoint const& offset);

    GEODE_CODEGEN_DLL void setColor(cocos2d::ccColor3B color);

        GEODE_PAD(0x18);
        cocos2d::CCLabelBMFont* m_label;
        cocos2d::CCSprite* m_subSprite;
        cocos2d::CCSprite* m_subBGSprite;
        cocos2d::extension::CCScale9Sprite* m_BGSprite;
        GEODE_PAD(0x8);
        cocos2d::CCPoint m_spritePosition;
};

class SongInfoObject : public cocos2d::CCNode {
public:

    template <bool T=false>
    void encodeWithCoder(DS_Dictionary* p0){
        static_assert(T, "Implement SongInfoObject::encodeWithCoder");
    }

    template <bool T=false>
    bool canEncode(){
        static_assert(T, "Implement SongInfoObject::canEncode");
    }

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

class CCAnimateFrameCache : public cocos2d::CCObject {
public:

    GEODE_CODEGEN_DLL static CCAnimateFrameCache* sharedSpriteFrameCache();

    GEODE_CODEGEN_DLL void addSpriteFramesWithFile(const char* file);

};

class CCCircleWave : public cocos2d::CCNode {
public:

    template <bool T=false>
    static CCCircleWave* create(float p0, float p1, float p2, bool p3){
        static_assert(T, "Implement CCCircleWave::create");
    }

    GEODE_CODEGEN_DLL static CCCircleWave* create(float p0, float p1, float p2, bool p3, bool p4);

    template <bool T=false>
    bool init(float p0, float p1, float p2, bool p3, bool p4){
        static_assert(T, "Implement CCCircleWave::init");
    }

    GEODE_CODEGEN_DLL void followObject(cocos2d::CCNode* p0, bool p1);

    GEODE_CODEGEN_DLL void updatePosition(float p0);

    GEODE_CODEGEN_DLL void setPosition(cocos2d::CCPoint const& pos);

    GEODE_CODEGEN_DLL void removeMeAndCleanup();

    GEODE_CODEGEN_DLL void draw();

    GEODE_CODEGEN_DLL void updateTweenAction(float dt, const char* key);

        cocos2d::CCArray* m_children;
        GEODE_PAD(0x4);
        float m_currentRadius;
        float m_currentOpacity;
        cocos2d::CCPoint m_circleCenter;
        int m_filled;
        int m_lineWidth;
        float m_opacityMultiplier;
        bool m_blendFuncDirty;
};

class CCContentLayer : public cocos2d::CCLayerColor {
public:

    GEODE_CODEGEN_DLL static CCContentLayer* create(cocos2d::ccColor4B const& color, float width, float height);

    GEODE_CODEGEN_DLL virtual void setPosition(cocos2d::CCPoint const& pos);

};

class CCLightFlash {
public:

    template <bool T=false>
    static CCLightFlash* create(){
        static_assert(T, "Implement CCLightFlash::create");
    }

    GEODE_CODEGEN_DLL void playEffect(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, int p16, bool p17, bool p18, float p19);

};

class TextArea : public cocos2d::CCSprite {
public:
	 TextArea(TextArea const&) : m_fontFile() {}
	 ~TextArea() {}

        GEODE_CODEGEN_DLL TextArea();
    template <bool T=false>
    void draw(){
        static_assert(T, "Implement TextArea::draw");
    }

    template <bool T=false>
    void setOpacity(unsigned char p0){
        static_assert(T, "Implement TextArea::setOpacity");
    }

    GEODE_CODEGEN_DLL bool init(gd::string str, char const* font, float width, float height, cocos2d::CCPoint anchor, float scale, bool disableColor);

    GEODE_CODEGEN_DLL static TextArea* create(gd::string const& str, char const* font, float width, float height, cocos2d::CCPoint const& anchor, float scale, bool disableColor);

    GEODE_CODEGEN_DLL void colorAllCharactersTo(cocos2d::ccColor3B color);

    GEODE_CODEGEN_DLL void setString(gd::string str);

        bool m_disableColor;
        MultilineBitmapFont* m_label;
        float m_width;
        int m_unknown;
        gd::string m_fontFile;
        float m_height;
};

class InheritanceNode : public cocos2d::CCObject {
public:

};

class CCMoveCNode : public cocos2d::CCNode {
public:

    template <bool T=false>
    static CCMoveCNode* create(){
        static_assert(T, "Implement CCMoveCNode::create");
    }

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement CCMoveCNode::init");
    }

};

class GameToolbox {
public:

    template <bool T=false>
    static CCMenuItemToggler* createToggleButton(gd::string text, cocos2d::SEL_MenuHandler onToggled, bool isToggled, cocos2d::CCMenu* toggleMenu, cocos2d::CCPoint position, cocos2d::CCNode* callbackTarget, cocos2d::CCNode* labelParent, cocos2d::CCArray* toggleArray){
        static_assert(T, "Implement GameToolbox::createToggleButton");
    }

    GEODE_CODEGEN_DLL static CCMenuItemToggler* createToggleButton(gd::string text, cocos2d::SEL_MenuHandler onToggled, bool isToggled, cocos2d::CCMenu* toggleMenu, cocos2d::CCPoint position, cocos2d::CCNode* callbackTarget, cocos2d::CCNode* labelParent, float checkboxScale, float labelSize, float maxWidth, cocos2d::CCPoint labelOffset, const char* unknown, bool anchorHorizontally, int toggleTag, cocos2d::CCArray* toggleArray);

    GEODE_CODEGEN_DLL static void transformColor(cocos2d::ccColor3B* src, cocos2d::ccColor3B* dest, cocos2d::ccHSVValue hsv);

    GEODE_CODEGEN_DLL static void alignItemsHorisontally(cocos2d::CCArray* array, bool idk, cocos2d::CCPoint start, float pad);

};

class CCNodeContainer : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL static CCNodeContainer* create();

    GEODE_CODEGEN_DLL virtual bool init();

    GEODE_CODEGEN_DLL void visit();

};

class SongInfoLayer : public FLAlertLayer {
public:

    GEODE_CODEGEN_DLL static SongInfoLayer* create(int songID);

    GEODE_CODEGEN_DLL static SongInfoLayer* create(gd::string songName, gd::string artistName, gd::string downloadLink, gd::string artistNG, gd::string artistYT, gd::string artistFB);

        gd::string m_downloadLink;
        gd::string m_artistNewgrounds;
        gd::string m_artistYoutube;
        gd::string m_artistFacebook;
};

class GJSpecialColorSelect {
public:

    GEODE_CODEGEN_DLL static const char* textForColorIdx(int id);

};

class CCTextInputNode : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate, public cocos2d::CCTextFieldDelegate {
public:
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

    GEODE_CODEGEN_DLL void setAllowedChars(gd::string filter);

    GEODE_CODEGEN_DLL void forceOffset();

    GEODE_CODEGEN_DLL void setString(gd::string text);

    GEODE_CODEGEN_DLL const char* getString();

    GEODE_CODEGEN_DLL cocos2d::CCTextFieldTTF* getTextField();

    GEODE_CODEGEN_DLL cocos2d::CCLabelBMFont* getPlaceholderLabel();

    GEODE_CODEGEN_DLL void setDelegate(TextInputDelegate* delegate);

    GEODE_CODEGEN_DLL bool init(float width, float height, const char* caption, const char* thonburi, int maxCharCount, const char* font);

    GEODE_CODEGEN_DLL void refreshLabel();

    template <bool T=false>
    void updateLabel(gd::string p0){
        static_assert(T, "Implement CCTextInputNode::updateLabel");
    }

    GEODE_CODEGEN_DLL virtual void registerWithTouchDispatcher();

    GEODE_CODEGEN_DLL virtual void visit();

    GEODE_CODEGEN_DLL virtual bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1);

    template <bool T=false>
    void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement CCTextInputNode::ccTouchCancelled");
    }

    template <bool T=false>
    void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement CCTextInputNode::ccTouchEnded");
    }

    template <bool T=false>
    void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement CCTextInputNode::ccTouchMoved");
    }

    GEODE_CODEGEN_DLL virtual void textChanged();

    GEODE_CODEGEN_DLL virtual void onClickTrackNode(bool p0);

    GEODE_CODEGEN_DLL virtual void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    GEODE_CODEGEN_DLL virtual void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& p0);

    template <bool T=false>
    bool onTextFieldInsertText(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2){
        static_assert(T, "Implement CCTextInputNode::onTextFieldInsertText");
    }

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

class StartPosObject {
public:

};

class ChallengesPage {
public:

    GEODE_CODEGEN_DLL static ChallengesPage* create();

};

class OBB2D : public cocos2d::CCNode {
public:

    template <bool T=false>
    void calculateWithCenter(cocos2d::CCPoint p0, float p1, float p2, float p3){
        static_assert(T, "Implement OBB2D::calculateWithCenter");
    }

    template <bool T=false>
    static OBB2D* create(cocos2d::CCPoint p0, float p1, float p2, float p3){
        static_assert(T, "Implement OBB2D::create");
    }

    template <bool T=false>
    cocos2d::CCRect getBoundingRect(){
        static_assert(T, "Implement OBB2D::getBoundingRect");
    }

    template <bool T=false>
    void overlaps(OBB2D* p0){
        static_assert(T, "Implement OBB2D::overlaps");
    }

    template <bool T=false>
    void overlaps1Way(OBB2D* p0){
        static_assert(T, "Implement OBB2D::overlaps1Way");
    }

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

class CheckpointObject : public cocos2d::CCNode {
public:

    template <bool T=false>
    static CheckpointObject* create(){
        static_assert(T, "Implement CheckpointObject::create");
    }

    template <bool T=false>
    void getObject(){
        static_assert(T, "Implement CheckpointObject::getObject");
    }

        GameObject* m_gameObject;
        PlayerCheckpoint* m_player1;
        PlayerCheckpoint* m_player2;
        bool m_isDual;
        bool m_isFlipped;
        cocos2d::CCPoint m_cameraPos;
        int m_unk104;
        GameObject* m_lastPortal;
        GEODE_PAD(0x4);
        double m_unk110;
        gd::string m_currentStateString;
        gd::string m_objectsStateString;
};

class CollisionBlockPopup {
public:

    template <bool T=false>
    static CollisionBlockPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement CollisionBlockPopup::create");
    }

    template <bool T=false>
    void onNextItemID(cocos2d::CCObject* p0){
        static_assert(T, "Implement CollisionBlockPopup::onNextItemID");
    }

};

class CollisionTriggerAction : public cocos2d::CCNode {
public:

    template <bool T=false>
    static CollisionTriggerAction* createFromString(gd::string p0){
        static_assert(T, "Implement CollisionTriggerAction::createFromString");
    }

};

class ColorAction : public cocos2d::CCNode {
public:

    template <bool T=false>
    void getSaveString(){
        static_assert(T, "Implement ColorAction::getSaveString");
    }

    template <bool T=false>
    void setupFromDict(cocos2d::CCDictionary* p0){
        static_assert(T, "Implement ColorAction::setupFromDict");
    }

    template <bool T=false>
    void setupFromString(gd::string p0){
        static_assert(T, "Implement ColorAction::setupFromString");
    }

        GEODE_UNIMPLEMENTED_PAD
        GEODE_UNIMPLEMENTED_PAD
        float m_unk100;
        bool m_blending;
        GEODE_UNIMPLEMENTED_PAD
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
        GEODE_UNIMPLEMENTED_PAD
        bool m_copyOpacity;
        GEODE_UNIMPLEMENTED_PAD
        ColorActionSprite* m_colorSprite;
        GEODE_UNIMPLEMENTED_PAD
};

class ColorActionSprite : public cocos2d::CCNode {
public:

        float m_opacity;
        cocos2d::_ccColor3B m_f0124;
        cocos2d::_ccColor3B m_activeColor;
};

class ColorSelectDelegate {
public:

    GEODE_CODEGEN_DLL virtual void colorSelectClosed(cocos2d::CCNode* p0);

};

class GJSpecialColorSelectDelegate {
public:

    GEODE_CODEGEN_DLL virtual void colorSelectClosed(GJSpecialColorSelect* p0, int p1);

};

class ColorSelectPopup : public FLAlertLayer, public cocos2d::extension::ColorPickerDelegate, public TextInputDelegate, public GJSpecialColorSelectDelegate {
public:

    GEODE_CODEGEN_DLL virtual void colorValueChanged(cocos2d::ccColor3B color);

    GEODE_CODEGEN_DLL bool init(EffectGameObject* triggerObj, cocos2d::CCArray* triggerObjs, ColorAction* colorAction);

    GEODE_CODEGEN_DLL void updateColorValue();

    GEODE_CODEGEN_DLL void updateCopyColorTextInputLabel();

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
        GEODE_PAD(0x10);
        cocos2d::CCArray* m_unk254;
        cocos2d::CCArray* m_unk258;
        CCTextInputNode* m_textInput2;
        GEODE_PAD(0x4);
        CCMenuItemToggler* m_toggler3;
        CCMenuItemToggler* m_toggler4;
        GEODE_PAD(0x8);
        cocos2d::CCArray* m_unk274;
        bool m_spawnTrigger;
        bool m_multiTrigger;
        bool m_copyColor;
};

class ColorSetupDelegate {
public:

};

class ConfigureHSVWidget : public cocos2d::CCNode {
public:

        cocos2d::CCLabelBMFont* m_hueLabel;
        cocos2d::CCLabelBMFont* m_saturationLabel;
        cocos2d::CCLabelBMFont* m_brightnessLabel;
        Slider* m_hueSlider;
        Slider* m_saturationSlider;
        Slider* m_brightnessSlider;
        cocos2d::ccHSVValue m_value;
};

class MultilineBitmapFont : public cocos2d::CCSprite {
public:

};

class CountTriggerAction : public cocos2d::CCNode {
public:

    template <bool T=false>
    static CountTriggerAction* createFromString(gd::string p0){
        static_assert(T, "Implement CountTriggerAction::createFromString");
    }

        int m_previousCount;
        int m_targetCount;
        int m_targetID;
        bool m_activateGroup;
};

class CreateGuidelinesLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:

    GEODE_CODEGEN_DLL void onStop(cocos2d::CCObject* pSender);

        GEODE_PAD(0x24);
        gd::string m_guidelineString;
};

class CreateMenuItem : public CCMenuItemSpriteExtra {
public:

    template <bool T=false>
    static CreateMenuItem* create(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3){
        static_assert(T, "Implement CreateMenuItem::create");
    }

        GEODE_PAD(0x18);
        int m_objectID;
        int m_buildTabPage;
        int m_buildTab;
};

class GameRateDelegate {
public:

};

class DialogLayer : public cocos2d::CCLayerColor {
public:

    GEODE_CODEGEN_DLL static DialogLayer* create(DialogObject* dialog, int color);

    GEODE_CODEGEN_DLL static DialogLayer* createWithObjects(cocos2d::CCArray* dialogs, int color);

    GEODE_CODEGEN_DLL static DialogLayer* createDialogLayer(DialogObject* p0, cocos2d::CCArray* p1, int p2);

    GEODE_CODEGEN_DLL bool init(DialogLayer* p0, DialogObject* p1, cocos2d::CCArray* p2, int p3);

    GEODE_CODEGEN_DLL cocos2d::CCAction* animateIn(int location);

    template <bool T=false>
    void onEnter(){
        static_assert(T, "Implement DialogLayer::onEnter");
    }

    template <bool T=false>
    bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement DialogLayer::ccTouchBegan");
    }

    template <bool T=false>
    void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement DialogLayer::ccTouchMoved");
    }

    template <bool T=false>
    void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement DialogLayer::ccTouchEnded");
    }

    template <bool T=false>
    void ccTouchCancelled(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement DialogLayer::ccTouchCancelled");
    }

    template <bool T=false>
    void registerWithTouchDispatcher(){
        static_assert(T, "Implement DialogLayer::registerWithTouchDispatcher");
    }

    template <bool T=false>
    void keyBackClicked(){
        static_assert(T, "Implement DialogLayer::keyBackClicked");
    }

    template <bool T=false>
    void keyDown(cocos2d::enumKeyCodes p0){
        static_assert(T, "Implement DialogLayer::keyDown");
    }

    template <bool T=false>
    void fadeInTextFinished(TextArea* p0){
        static_assert(T, "Implement DialogLayer::fadeInTextFinished");
    }

};

class CurrencyRewardLayer {
public:

    template <bool T=false>
    void update(float p0){
        static_assert(T, "Implement CurrencyRewardLayer::update");
    }

};

class DialogDelegate {
public:

    GEODE_CODEGEN_DLL virtual void dialogClosed(DialogLayer* p0);

};

class CurrencyRewardDelegate {
public:

    GEODE_CODEGEN_DLL virtual void currencyWillExit(CurrencyRewardLayer* p0);

};

class CustomListView : public BoomListView {
public:
	 static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float width, float height) {
		return CustomListView::create(entries, width, height, 0, type);
	}

    GEODE_CODEGEN_DLL static CustomListView* create(cocos2d::CCArray* p0, float p1, float p2, int p3, BoomListType p4);

    GEODE_CODEGEN_DLL virtual TableViewCell* getListCell(const char* p0);

    GEODE_CODEGEN_DLL virtual void loadCell(TableViewCell* p0, unsigned int p1);

    GEODE_CODEGEN_DLL virtual void setupList();

        GEODE_CODEGEN_DLL CustomListView();
};

class MusicDownloadDelegate {
public:

    GEODE_CODEGEN_DLL virtual void downloadSongFailed(int p0, GJSongError p1);

    GEODE_CODEGEN_DLL virtual void downloadSongFinished(SongInfoObject* p0);

    GEODE_CODEGEN_DLL virtual void loadSongInfoFailed(int p0, GJSongError p1);

    GEODE_CODEGEN_DLL virtual void loadSongInfoFinished(SongInfoObject* p0);

    GEODE_CODEGEN_DLL virtual void songStateChanged();

};

class CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:

    GEODE_CODEGEN_DLL void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    GEODE_CODEGEN_DLL void loadSongInfoFinished(SongInfoObject* p0);

    GEODE_CODEGEN_DLL void updateSongObject(SongInfoObject* song);

        SongInfoObject* m_songInfo;
        GEODE_PAD(0x1C);
        CCMenuItemSpriteExtra* m_downloadBtn;
        GEODE_PAD(0x30);
};

class HSVWidgetPopupDelegate {
public:

};

class CustomizeObjectLayer : public FLAlertLayer, public TextInputDelegate, public HSVWidgetPopupDelegate, public ColorSelectDelegate, public ColorSetupDelegate {
public:

    GEODE_CODEGEN_DLL void onNextColorChannel(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onSelectColor(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL int getActiveMode(bool unknown);

        EffectGameObject* m_targetObject;
        cocos2d::CCArray* m_targetObjects;
        cocos2d::CCArray* m_colorButtons;
        cocos2d::CCArray* m_colorNodes;
        cocos2d::CCArray* m_textInputNodes;
        GEODE_PAD(0x4);
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

class DailyLevelPage : public FLAlertLayer {
public:

    GEODE_CODEGEN_DLL static DailyLevelPage* create(bool weekly);

    GEODE_CODEGEN_DLL bool init(bool weekly);

    GEODE_CODEGEN_DLL void updateTimers(float p0);

        GEODE_PAD(0x21);
        bool m_weekly;
};

class DialogObject : public cocos2d::CCObject {
public:

    GEODE_CODEGEN_DLL static DialogObject* create(gd::string title, gd::string text, int portrait, float text_scale, bool is_unskippable, cocos2d::ccColor3B text_color);

    GEODE_CODEGEN_DLL bool init(DialogObject* p0, gd::string title, gd::string text, int portrait, float text_scale, bool is_unskippable, cocos2d::ccColor3B text_color);

        gd::string m_text;
        gd::string m_title;
        int m_dialogType;
        cocos2d::ccColor3B m_colour;
        float m_textWidth;
        bool m_canSkip;
};

class DownloadMessageDelegate {
public:

};

class EditButtonBar : public cocos2d::CCNode {
public:

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

class EditLevelLayer : public cocos2d::CCLayer {
public:

    GEODE_CODEGEN_DLL static void scene(GJGameLevel* level);

    GEODE_CODEGEN_DLL static EditLevelLayer* create(GJGameLevel* level);

    GEODE_CODEGEN_DLL void onLevelInfo();

        cocos2d::CCMenu* m_buttonMenu;
        GJGameLevel* m_level;
        TextArea* m_descriptionInput;
        cocos2d::CCArray* m_someArray;
        cocos2d::CCLabelBMFont* m_someFont;
};

class EditorPauseLayer : public CCBlockLayer, public FLAlertLayerProtocol {
public:

    GEODE_CODEGEN_DLL static EditorPauseLayer* create(LevelEditorLayer* editor);

    GEODE_CODEGEN_DLL virtual void keyBackClicked();

    template <bool T=false>
    void keyDown(cocos2d::enumKeyCodes p0){
        static_assert(T, "Implement EditorPauseLayer::keyDown");
    }

    template <bool T=false>
    void customSetup(){
        static_assert(T, "Implement EditorPauseLayer::customSetup");
    }

    GEODE_CODEGEN_DLL virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    GEODE_CODEGEN_DLL void saveLevel();

    GEODE_CODEGEN_DLL bool init(LevelEditorLayer* p0);

    GEODE_CODEGEN_DLL void onExitEditor(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void playStep2();

    GEODE_CODEGEN_DLL void onResume(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onSaveAndPlay(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onSaveAndExit(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onSave(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onExitNoSave(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void uncheckAllPortals(cocos2d::CCObject* pSender);

        GEODE_CODEGEN_DLL EditorPauseLayer();
        bool m_saved;
        GEODE_PAD(0x4);
        CCMenuItemSpriteExtra* m_button0;
        CCMenuItemSpriteExtra* m_button1;
        LevelEditorLayer* m_editorLayer;
};

class GJDailyLevelDelegate {
public:

};

class GJRotationControlDelegate {
public:

    GEODE_CODEGEN_DLL virtual void angleChangeBegin();

    GEODE_CODEGEN_DLL virtual void angleChangeEnded();

    GEODE_CODEGEN_DLL virtual void angleChanged(float p0);

};

class GJScaleControlDelegate {
public:

    GEODE_CODEGEN_DLL virtual void scaleChangeBegin();

    GEODE_CODEGEN_DLL virtual void scaleChangeEnded();

    GEODE_CODEGEN_DLL virtual void scaleChanged(float p0);

};

class EditorUI : public cocos2d::CCLayer, public FLAlertLayerProtocol, public ColorSelectDelegate, public GJRotationControlDelegate, public GJScaleControlDelegate, public MusicDownloadDelegate {
public:

    GEODE_CODEGEN_DLL static EditorUI* get();

    template <bool T=false>
    void constrainGameLayerPosition(){
        static_assert(T, "Implement EditorUI::constrainGameLayerPosition");
    }

    template <bool T=false>
    void create(LevelEditorLayer* p0){
        static_assert(T, "Implement EditorUI::create");
    }

    GEODE_CODEGEN_DLL void deselectAll();

    template <bool T=false>
    void onDeselectAll(cocos2d::CCObject* p0){
        static_assert(T, "Implement EditorUI::onDeselectAll");
    }

    GEODE_CODEGEN_DLL void disableButton(CreateMenuItem* p0);

    template <bool T=false>
    void editButtonUsable(){
        static_assert(T, "Implement EditorUI::editButtonUsable");
    }

    GEODE_CODEGEN_DLL void editObject(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void enableButton(CreateMenuItem* p0);

    GEODE_CODEGEN_DLL CCMenuItemSpriteExtra* getCreateBtn(int p0, int p1);

    GEODE_CODEGEN_DLL cocos2d::CCPoint getGroupCenter(cocos2d::CCArray* p0, bool p1);

    GEODE_CODEGEN_DLL cocos2d::CCArray* getSelectedObjects();

    template <bool T=false>
    void init(LevelEditorLayer* p0){
        static_assert(T, "Implement EditorUI::init");
    }

    template <bool T=false>
    bool ccTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement EditorUI::ccTouchBegan");
    }

    template <bool T=false>
    void ccTouchMoved(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement EditorUI::ccTouchMoved");
    }

    template <bool T=false>
    void ccTouchEnded(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement EditorUI::ccTouchEnded");
    }

    GEODE_CODEGEN_DLL virtual void keyDown(cocos2d::enumKeyCodes p0);

    GEODE_CODEGEN_DLL void moveObject(GameObject* p0, cocos2d::CCPoint p1);

    GEODE_CODEGEN_DLL void onDuplicate(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL cocos2d::CCArray* pasteObjects(gd::string const& p0);

    template <bool T=false>
    void playerTouchBegan(cocos2d::CCTouch* p0, cocos2d::CCEvent* p1){
        static_assert(T, "Implement EditorUI::playerTouchBegan");
    }

    template <bool T=false>
    void playtestStopped(){
        static_assert(T, "Implement EditorUI::playtestStopped");
    }

    GEODE_CODEGEN_DLL void redoLastAction(cocos2d::CCObject* p0);

    template <bool T=false>
    void replaceGroupID(GameObject* p0, int p1, int p2){
        static_assert(T, "Implement EditorUI::replaceGroupID");
    }

    template <bool T=false>
    void scaleChanged(float p0){
        static_assert(T, "Implement EditorUI::scaleChanged");
    }

    GEODE_CODEGEN_DLL void scaleObjects(cocos2d::CCArray* p0, float p1, cocos2d::CCPoint p2);

    GEODE_CODEGEN_DLL void selectObjects(cocos2d::CCArray* p0, bool p1);

    template <bool T=false>
    void setupCreateMenu(){
        static_assert(T, "Implement EditorUI::setupCreateMenu");
    }

    GEODE_CODEGEN_DLL void undoLastAction(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void updateButtons();

    GEODE_CODEGEN_DLL void updateObjectInfoLabel();

    GEODE_CODEGEN_DLL void updateSlider();

    GEODE_CODEGEN_DLL void updateZoom(float p0);

    GEODE_CODEGEN_DLL void selectObject(GameObject* obj, bool idk);

    GEODE_CODEGEN_DLL void selectAll();

    GEODE_CODEGEN_DLL void selectAllWithDirection(bool left);

    GEODE_CODEGEN_DLL cocos2d::CCPoint getTouchPoint(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    GEODE_CODEGEN_DLL void onSelectBuildTab(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onCreateButton(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL CCMenuItemSpriteExtra* getSpriteButton(const char* sprite, cocos2d::SEL_MenuHandler callback, cocos2d::CCMenu* menu, float scale);

    GEODE_CODEGEN_DLL cocos2d::CCPoint offsetForKey(int objID);

    GEODE_CODEGEN_DLL void updateDeleteMenu();

    GEODE_CODEGEN_DLL void updateCreateMenu(bool updateTab);

    GEODE_CODEGEN_DLL void toggleMode(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void zoomIn(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void zoomOut(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void rotateObjects(cocos2d::CCArray* objects, float angle, cocos2d::CCPoint center);

    GEODE_CODEGEN_DLL void updateGridNodeSize();

    GEODE_CODEGEN_DLL void updateSpecialUIElements();

    GEODE_CODEGEN_DLL void constrainGameLayerPosition(float x, float y);

    GEODE_CODEGEN_DLL void moveGameLayer(cocos2d::CCPoint const& pos);

    GEODE_CODEGEN_DLL void showUI(bool show);

    GEODE_CODEGEN_DLL void editObject2(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void editGroup(cocos2d::CCObject* pSender);

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

    GEODE_CODEGEN_DLL void onSettings(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void activateRotationControl(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void activateScaleControl(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void dynamicGroupUpdate(bool idk);

    GEODE_CODEGEN_DLL void createRockOutline();

    GEODE_CODEGEN_DLL void createRockEdges();

    GEODE_CODEGEN_DLL void createRockBase();

    GEODE_CODEGEN_DLL void onCopyState(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onPasteColor(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onPasteState(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onGroupSticky(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onUngroupSticky(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onGoToLayer(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onGoToBaseLayer(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void editColor(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void alignObjects(cocos2d::CCArray* objs, bool alignY);

    GEODE_CODEGEN_DLL virtual void keyUp(cocos2d::enumKeyCodes key);

        EditButtonBar* m_buttonBar;
        GEODE_PAD(0x4);
        cocos2d::CCArray* m_hideableUIElementArray;
        GEODE_PAD(0x4);
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
        GEODE_PAD(0xc);
        cocos2d::CCArray* m_unknownArray2;
        GEODE_PAD(0x8);
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
        GEODE_PAD(0x8);
        int m_selectedCreateObjectID;
        cocos2d::CCArray* m_createButtonArray;
        cocos2d::CCArray* m_customObjectButtonArray;
        cocos2d::CCArray* m_unknownArray9;
        int m_selectedMode;
        LevelEditorLayer* m_editorLayer;
        cocos2d::CCPoint m_swipeStart;
        cocos2d::CCPoint m_swipeEnd;
        GEODE_PAD(0x20);
        GameObject* m_selectedObject;
        GEODE_PAD(0x8);
        gd::string m_clipboard;
        GEODE_PAD(0x8);
        int m_selectedTab;
        int m_timesSelected;
        GEODE_PAD(0x20);
        bool m_spaceKeyPressed;
};

class EffectGameObject : public GameObject {
public:

    GEODE_CODEGEN_DLL void updateLabel();

    GEODE_CODEGEN_DLL static EffectGameObject* create(const char* p0);

    template <bool T=false>
    void getTargetColorIndex(){
        static_assert(T, "Implement EffectGameObject::getTargetColorIndex");
    }

    GEODE_CODEGEN_DLL virtual void triggerObject(GJBaseGameLayer* p0);

    GEODE_CODEGEN_DLL gd::string getSaveString();

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
        GEODE_PAD(0x24);
};

class GJRotationControl : public cocos2d::CCLayer {
public:

    GEODE_CODEGEN_DLL void setAngle(float angle);

    GEODE_CODEGEN_DLL void updateSliderPosition(cocos2d::CCPoint const& pos);

        float m_unknown0;
        float m_unknown1;
        cocos2d::CCPoint m_sliderPosition;
        cocos2d::CCSprite* m_sliderThumb;
        float m_objAngle;
        float m_angle;
        int m_touchID;
};

class EndPortalObject : public GameObject {
public:

    template <bool T=false>
    static EndPortalObject* create(){
        static_assert(T, "Implement EndPortalObject::create");
    }

    template <bool T=false>
    void updateColors(cocos2d::_ccColor3B p0){
        static_assert(T, "Implement EndPortalObject::updateColors");
    }

};

class LevelDeleteDelegate {
public:

    GEODE_CODEGEN_DLL virtual void levelDeleteFinished(int p0);

    GEODE_CODEGEN_DLL virtual void levelDeleteFailed(int p0);

};

class GManager : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL virtual void setup();

    GEODE_CODEGEN_DLL void encodeDataTo(DS_Dictionary* data);

    GEODE_CODEGEN_DLL void dataLoaded(DS_Dictionary* data);

    GEODE_CODEGEN_DLL void firstLoad();

    GEODE_CODEGEN_DLL void save();

    template <bool T=false>
    void saveData(DS_Dictionary* p0, gd::string p1){
        static_assert(T, "Implement GManager::saveData");
    }

    template <bool T=false>
    void saveGMTo(gd::string p0){
        static_assert(T, "Implement GManager::saveGMTo");
    }

        gd::string m_fileName;
        bool m_setup;
        bool m_saved;
        bool m_quickSave;
};

class ExtendedLayer {
public:

};

class FMODAudioEngine : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL static FMODAudioEngine* sharedEngine();

    GEODE_CODEGEN_DLL void preloadEffect(gd::string filename);

    GEODE_CODEGEN_DLL bool isBackgroundMusicPlaying();

    GEODE_CODEGEN_DLL bool isBackgroundMusicPlaying(gd::string path);

    GEODE_CODEGEN_DLL void playBackgroundMusic(gd::string path, bool fade, bool paused);

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

class LeaderboardsLayer : public cocos2d::CCLayer {
public:

    GEODE_CODEGEN_DLL static LeaderboardsLayer* create(LeaderboardState state);

    GEODE_CODEGEN_DLL bool init(LeaderboardState state);

};

class FMODSound : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL static FMODSound* create(FMOD::Sound* sound);

        FMOD::Sound* m_sound;
};

class LevelCell : public TableViewCell {
public:

    GEODE_CODEGEN_DLL void onViewProfile(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void loadCustomLevelCell();

    GEODE_CODEGEN_DLL void updateBGColor(unsigned int index);

        CCMenuItemSpriteExtra* m_button;
        GJGameLevel* m_level;
        bool m_cellDrawn;
};

class FriendRequestDelegate {
public:

};

class GJAccountBackupDelegate {
public:

    GEODE_CODEGEN_DLL virtual bool backupAccountFailed(BackupAccountError p0);

    GEODE_CODEGEN_DLL virtual bool backupAccountFinished();

};

class GJAccountDelegate {
public:

    GEODE_CODEGEN_DLL virtual bool accountStatusChanged();

};

class GJAccountLoginDelegate {
public:

    GEODE_CODEGEN_DLL virtual bool loginAccountFailed(AccountError p0);

    GEODE_CODEGEN_DLL virtual bool loginAccountFinished(int p0, int p1);

};

class GJAccountManager : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL static GJAccountManager* sharedState();

        GEODE_PAD(0x4);
        gd::string m_password;
        gd::string m_username;
        int m_accountID;
};

class GJAccountSyncDelegate {
public:

    GEODE_CODEGEN_DLL virtual bool syncAccountFailed(BackupAccountError p0);

    GEODE_CODEGEN_DLL virtual bool syncAccountFinished();

};

class LevelLeaderboard : public FLAlertLayer {
public:

    GEODE_CODEGEN_DLL void onChangeType(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onGarage(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL bool init(GJGameLevel* level, int type);

    GEODE_CODEGEN_DLL static LevelLeaderboard* create(GJGameLevel* level, LevelLeaderboardType leaderboardType);

};

class TriggerEffectDelegate {
public:

    GEODE_CODEGEN_DLL virtual void toggleGroupTriggered(int p0, bool p1);

    GEODE_CODEGEN_DLL virtual void spawnGroup(int p0);

};

class GJBaseGameLayer : public cocos2d::CCLayer, public TriggerEffectDelegate {
public:

    GEODE_CODEGEN_DLL cocos2d::CCLayer* getObjectLayer();

    GEODE_CODEGEN_DLL cocos2d::CCArray* getAllObjects();

    GEODE_CODEGEN_DLL static GJBaseGameLayer* get();

    template <bool T=false>
    void objectsCollided(int p0, int p1){
        static_assert(T, "Implement GJBaseGameLayer::objectsCollided");
    }

    template <bool T=false>
    void createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, int p7){
        static_assert(T, "Implement GJBaseGameLayer::createMoveCommand");
    }

    template <bool T=false>
    void updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9){
        static_assert(T, "Implement GJBaseGameLayer::updateColor");
    }

    template <bool T=false>
    void flipGravity(PlayerObject* p0, bool p1, bool p2){
        static_assert(T, "Implement GJBaseGameLayer::flipGravity");
    }

    template <bool T=false>
    void calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5){
        static_assert(T, "Implement GJBaseGameLayer::calculateColorValues");
    }

    GEODE_CODEGEN_DLL virtual void toggleGroupTriggered(int p0, bool p1);

    GEODE_CODEGEN_DLL virtual void spawnGroup(int p0);

    template <bool T=false>
    void addToSection(GameObject* p0){
        static_assert(T, "Implement GJBaseGameLayer::addToSection");
    }

    template <bool T=false>
    void addToGroup(GameObject* p0, int p1, bool p2){
        static_assert(T, "Implement GJBaseGameLayer::addToGroup");
    }

    template <bool T=false>
    void removeFromGroup(GameObject* p0, int p1){
        static_assert(T, "Implement GJBaseGameLayer::removeFromGroup");
    }

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement GJBaseGameLayer::init");
    }

    template <bool T=false>
    void addObjectCounter(LabelGameObject* p0, int p1){
        static_assert(T, "Implement GJBaseGameLayer::addObjectCounter");
    }

    template <bool T=false>
    void addToGroups(GameObject* p0, bool p1){
        static_assert(T, "Implement GJBaseGameLayer::addToGroups");
    }

    template <bool T=false>
    void atlasValue(int p0){
        static_assert(T, "Implement GJBaseGameLayer::atlasValue");
    }

    template <bool T=false>
    void bumpPlayer(PlayerObject* p0, GameObject* p1){
        static_assert(T, "Implement GJBaseGameLayer::bumpPlayer");
    }

    template <bool T=false>
    void calculateOpacityValues(EffectGameObject* p0, EffectGameObject* p1, float p2, GJEffectManager* p3){
        static_assert(T, "Implement GJBaseGameLayer::calculateOpacityValues");
    }

    template <bool T=false>
    void checkSpawnObjects(){
        static_assert(T, "Implement GJBaseGameLayer::checkSpawnObjects");
    }

    template <bool T=false>
    void collectItem(int p0, int p1){
        static_assert(T, "Implement GJBaseGameLayer::collectItem");
    }

    template <bool T=false>
    void collectedObject(EffectGameObject* p0){
        static_assert(T, "Implement GJBaseGameLayer::collectedObject");
    }

    template <bool T=false>
    void createTextLayers(){
        static_assert(T, "Implement GJBaseGameLayer::createTextLayers");
    }

    template <bool T=false>
    cocos2d::CCArray* damagingObjectsInRect(cocos2d::CCRect p0){
        static_assert(T, "Implement GJBaseGameLayer::damagingObjectsInRect");
    }

    template <bool T=false>
    void enableHighCapacityMode(){
        static_assert(T, "Implement GJBaseGameLayer::enableHighCapacityMode");
    }

    GEODE_CODEGEN_DLL void getCapacityString();

    template <bool T=false>
    void getGroundHeightForMode(int p0){
        static_assert(T, "Implement GJBaseGameLayer::getGroundHeightForMode");
    }

    template <bool T=false>
    void getGroup(int p0){
        static_assert(T, "Implement GJBaseGameLayer::getGroup");
    }

    template <bool T=false>
    void getMoveDeltaForObjects(int p0, int p1){
        static_assert(T, "Implement GJBaseGameLayer::getMoveDeltaForObjects");
    }

    template <bool T=false>
    void getOptimizedGroup(int p0){
        static_assert(T, "Implement GJBaseGameLayer::getOptimizedGroup");
    }

    template <bool T=false>
    void getStaticGroup(int p0){
        static_assert(T, "Implement GJBaseGameLayer::getStaticGroup");
    }

    template <bool T=false>
    void isGroupDisabledForObject(GameObject* p0){
        static_assert(T, "Implement GJBaseGameLayer::isGroupDisabledForObject");
    }

    template <bool T=false>
    void isGroupDisabledForObjectFull(GameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement GJBaseGameLayer::isGroupDisabledForObjectFull");
    }

    template <bool T=false>
    void loadUpToPosition(float p0){
        static_assert(T, "Implement GJBaseGameLayer::loadUpToPosition");
    }

    template <bool T=false>
    void objectIntersectsCircle(GameObject* p0, GameObject* p1){
        static_assert(T, "Implement GJBaseGameLayer::objectIntersectsCircle");
    }

    template <bool T=false>
    void objectTriggered(EffectGameObject* p0){
        static_assert(T, "Implement GJBaseGameLayer::objectTriggered");
    }

    template <bool T=false>
    void optimizeMoveGroups(){
        static_assert(T, "Implement GJBaseGameLayer::optimizeMoveGroups");
    }

    template <bool T=false>
    void parentForZLayer(int p0, bool p1, int p2){
        static_assert(T, "Implement GJBaseGameLayer::parentForZLayer");
    }

    template <bool T=false>
    void playerTouchedRing(PlayerObject* p0, GameObject* p1){
        static_assert(T, "Implement GJBaseGameLayer::playerTouchedRing");
    }

    template <bool T=false>
    void processColorObject(EffectGameObject* p0, int p1, cocos2d::CCDictionary* p2, float p3, GJEffectManager* p4){
        static_assert(T, "Implement GJBaseGameLayer::processColorObject");
    }

    template <bool T=false>
    void processFollowActions(){
        static_assert(T, "Implement GJBaseGameLayer::processFollowActions");
    }

    template <bool T=false>
    void processMoveActions(){
        static_assert(T, "Implement GJBaseGameLayer::processMoveActions");
    }

    template <bool T=false>
    void processMoveActionsStep(float p0){
        static_assert(T, "Implement GJBaseGameLayer::processMoveActionsStep");
    }

    template <bool T=false>
    void processOpacityObject(EffectGameObject* p0, cocos2d::CCDictionary* p1, float p2, GJEffectManager* p3){
        static_assert(T, "Implement GJBaseGameLayer::processOpacityObject");
    }

    template <bool T=false>
    void processPlayerFollowActions(float p0){
        static_assert(T, "Implement GJBaseGameLayer::processPlayerFollowActions");
    }

    template <bool T=false>
    void processRotationActions(){
        static_assert(T, "Implement GJBaseGameLayer::processRotationActions");
    }

    GEODE_CODEGEN_DLL void pushButton(int p0, bool p1);

    template <bool T=false>
    void rectIntersectsCircle(cocos2d::CCRect p0, cocos2d::CCPoint p1, float p2){
        static_assert(T, "Implement GJBaseGameLayer::rectIntersectsCircle");
    }

    template <bool T=false>
    void refreshCounterLabels(){
        static_assert(T, "Implement GJBaseGameLayer::refreshCounterLabels");
    }

    GEODE_CODEGEN_DLL void releaseButton(int p0, bool p1);

    template <bool T=false>
    void removeFromGroups(GameObject* p0){
        static_assert(T, "Implement GJBaseGameLayer::removeFromGroups");
    }

    template <bool T=false>
    void removeObjectFromSection(GameObject* p0){
        static_assert(T, "Implement GJBaseGameLayer::removeObjectFromSection");
    }

    template <bool T=false>
    void reorderObjectSection(GameObject* p0){
        static_assert(T, "Implement GJBaseGameLayer::reorderObjectSection");
    }

    template <bool T=false>
    void resetGroupCounters(bool p0){
        static_assert(T, "Implement GJBaseGameLayer::resetGroupCounters");
    }

    template <bool T=false>
    void resetMoveOptimizedValue(){
        static_assert(T, "Implement GJBaseGameLayer::resetMoveOptimizedValue");
    }

    template <bool T=false>
    int sectionForPos(float p0){
        static_assert(T, "Implement GJBaseGameLayer::sectionForPos");
    }

    template <bool T=false>
    void setupLayers(){
        static_assert(T, "Implement GJBaseGameLayer::setupLayers");
    }

    template <bool T=false>
    void shouldExitHackedLevel(){
        static_assert(T, "Implement GJBaseGameLayer::shouldExitHackedLevel");
    }

    template <bool T=false>
    void spawnGroupTriggered(int p0, float p1, int p2){
        static_assert(T, "Implement GJBaseGameLayer::spawnGroupTriggered");
    }

    template <bool T=false>
    cocos2d::CCArray* staticObjectsInRect(cocos2d::CCRect p0){
        static_assert(T, "Implement GJBaseGameLayer::staticObjectsInRect");
    }

    template <bool T=false>
    void testInstantCountTrigger(int p0, int p1, int p2, bool p3, int p4){
        static_assert(T, "Implement GJBaseGameLayer::testInstantCountTrigger");
    }

    template <bool T=false>
    void toggleGroup(int p0, bool p1){
        static_assert(T, "Implement GJBaseGameLayer::toggleGroup");
    }

    template <bool T=false>
    void togglePlayerVisibility(bool p0){
        static_assert(T, "Implement GJBaseGameLayer::togglePlayerVisibility");
    }

    template <bool T=false>
    void triggerMoveCommand(EffectGameObject* p0){
        static_assert(T, "Implement GJBaseGameLayer::triggerMoveCommand");
    }

    template <bool T=false>
    void updateCollisionBlocks(){
        static_assert(T, "Implement GJBaseGameLayer::updateCollisionBlocks");
    }

    template <bool T=false>
    void updateCounters(int p0, int p1){
        static_assert(T, "Implement GJBaseGameLayer::updateCounters");
    }

    template <bool T=false>
    void updateDisabledObjectsLastPos(cocos2d::CCArray* p0){
        static_assert(T, "Implement GJBaseGameLayer::updateDisabledObjectsLastPos");
    }

    template <bool T=false>
    void updateLayerCapacity(gd::string p0){
        static_assert(T, "Implement GJBaseGameLayer::updateLayerCapacity");
    }

    template <bool T=false>
    void updateLegacyLayerCapacity(int p0, int p1, int p2, int p3){
        static_assert(T, "Implement GJBaseGameLayer::updateLegacyLayerCapacity");
    }

    template <bool T=false>
    void updateOBB2(cocos2d::CCRect p0){
        static_assert(T, "Implement GJBaseGameLayer::updateOBB2");
    }

    template <bool T=false>
    void updateQueuedLabels(){
        static_assert(T, "Implement GJBaseGameLayer::updateQueuedLabels");
    }

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
        GEODE_PAD(0x8);
};

class GJChallengeDelegate {
public:

};

class GJColorSetupLayer {
public:

};

class GJComment : public cocos2d::CCNode {
public:

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement GJComment::init");
    }

    GEODE_CODEGEN_DLL static GJComment* create(cocos2d::CCDictionary* dict);

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

class GJCommentListLayer : public cocos2d::CCLayerColor {
public:

    template <bool T=false>
    static GJCommentListLayer* create(BoomListView* p0, char const* p1, cocos2d::_ccColor4B p2, float p3, float p4, bool p5){
        static_assert(T, "Implement GJCommentListLayer::create");
    }

        BoomListView* m_list;
};

class LikeItemDelegate {
public:

    GEODE_CODEGEN_DLL virtual void likedItem(LikeItemType p0, int p1, bool p2);

};

class GJDropDownLayer : public cocos2d::CCLayerColor {
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

class GJEffectManager : public cocos2d::CCNode {
public:

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement GJEffectManager::init");
    }

    template <bool T=false>
    void activeColorForIndex(int p0){
        static_assert(T, "Implement GJEffectManager::activeColorForIndex");
    }

    template <bool T=false>
    void activeOpacityForIndex(int p0){
        static_assert(T, "Implement GJEffectManager::activeOpacityForIndex");
    }

    template <bool T=false>
    void addAllInheritedColorActions(cocos2d::CCArray* p0){
        static_assert(T, "Implement GJEffectManager::addAllInheritedColorActions");
    }

    template <bool T=false>
    void addGroupPulseEffect(PulseEffectAction* p0){
        static_assert(T, "Implement GJEffectManager::addGroupPulseEffect");
    }

    template <bool T=false>
    void calculateBaseActiveColors(){
        static_assert(T, "Implement GJEffectManager::calculateBaseActiveColors");
    }

    template <bool T=false>
    void calculateInheritedColor(int p0, ColorAction* p1){
        static_assert(T, "Implement GJEffectManager::calculateInheritedColor");
    }

    template <bool T=false>
    void calculateLightBGColor(cocos2d::_ccColor3B p0){
        static_assert(T, "Implement GJEffectManager::calculateLightBGColor");
    }

    template <bool T=false>
    void colorActionChanged(ColorAction* p0){
        static_assert(T, "Implement GJEffectManager::colorActionChanged");
    }

    template <bool T=false>
    void colorExists(int p0){
        static_assert(T, "Implement GJEffectManager::colorExists");
    }

    template <bool T=false>
    void colorForEffect(cocos2d::_ccColor3B p0, cocos2d::_ccHSVValue p1){
        static_assert(T, "Implement GJEffectManager::colorForEffect");
    }

    template <bool T=false>
    cocos2d::_ccColor3B colorForGroupID(int p0, cocos2d::_ccColor3B const& p1, bool p2){
        static_assert(T, "Implement GJEffectManager::colorForGroupID");
    }

    template <bool T=false>
    void colorForIndex(int p0){
        static_assert(T, "Implement GJEffectManager::colorForIndex");
    }

    template <bool T=false>
    void colorForPulseEffect(cocos2d::_ccColor3B const& p0, PulseEffectAction* p1){
        static_assert(T, "Implement GJEffectManager::colorForPulseEffect");
    }

    template <bool T=false>
    void countChangedForItem(int p0){
        static_assert(T, "Implement GJEffectManager::countChangedForItem");
    }

    template <bool T=false>
    void countForItem(int p0){
        static_assert(T, "Implement GJEffectManager::countForItem");
    }

    template <bool T=false>
    static GJEffectManager* create(){
        static_assert(T, "Implement GJEffectManager::create");
    }

    template <bool T=false>
    void createFollowCommand(float p0, float p1, float p2, int p3, int p4, bool p5, int p6){
        static_assert(T, "Implement GJEffectManager::createFollowCommand");
    }

    template <bool T=false>
    void createMoveCommand(cocos2d::CCPoint p0, int p1, float p2, int p3, float p4, bool p5, bool p6, int p7){
        static_assert(T, "Implement GJEffectManager::createMoveCommand");
    }

    template <bool T=false>
    void createPlayerFollowCommand(float p0, float p1, int p2, float p3, float p4, int p5, int p6){
        static_assert(T, "Implement GJEffectManager::createPlayerFollowCommand");
    }

    template <bool T=false>
    void createRotateCommand(int p0, float p1, int p2, int p3, int p4, float p5, bool p6, int p7){
        static_assert(T, "Implement GJEffectManager::createRotateCommand");
    }

    template <bool T=false>
    void getAllColorActions(){
        static_assert(T, "Implement GJEffectManager::getAllColorActions");
    }

    template <bool T=false>
    void getAllColorSprites(){
        static_assert(T, "Implement GJEffectManager::getAllColorSprites");
    }

    GEODE_CODEGEN_DLL const cocos2d::_ccColor3B& getColorAction(int p0);

    template <bool T=false>
    const cocos2d::_ccColor3B& getColorSprite(int p0){
        static_assert(T, "Implement GJEffectManager::getColorSprite");
    }

    template <bool T=false>
    void getCurrentStateString(){
        static_assert(T, "Implement GJEffectManager::getCurrentStateString");
    }

    template <bool T=false>
    void getLoadedMoveOffset(){
        static_assert(T, "Implement GJEffectManager::getLoadedMoveOffset");
    }

    template <bool T=false>
    void getMixedColor(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1, float p2){
        static_assert(T, "Implement GJEffectManager::getMixedColor");
    }

    template <bool T=false>
    uint8_t getOpacityActionForGroup(int p0){
        static_assert(T, "Implement GJEffectManager::getOpacityActionForGroup");
    }

    template <bool T=false>
    void getSaveString(){
        static_assert(T, "Implement GJEffectManager::getSaveString");
    }

    template <bool T=false>
    void handleObjectCollision(bool p0, int p1, int p2){
        static_assert(T, "Implement GJEffectManager::handleObjectCollision");
    }

    template <bool T=false>
    void hasActiveDualTouch(){
        static_assert(T, "Implement GJEffectManager::hasActiveDualTouch");
    }

    template <bool T=false>
    void hasBeenTriggered(int p0){
        static_assert(T, "Implement GJEffectManager::hasBeenTriggered");
    }

    template <bool T=false>
    void hasPulseEffectForGroupID(int p0){
        static_assert(T, "Implement GJEffectManager::hasPulseEffectForGroupID");
    }

    template <bool T=false>
    bool isGroupEnabled(int p0){
        static_assert(T, "Implement GJEffectManager::isGroupEnabled");
    }

    template <bool T=false>
    void keyForGroupIDColor(int p0, cocos2d::_ccColor3B const& p1, bool p2){
        static_assert(T, "Implement GJEffectManager::keyForGroupIDColor");
    }

    template <bool T=false>
    void loadState(gd::string p0){
        static_assert(T, "Implement GJEffectManager::loadState");
    }

    template <bool T=false>
    void objectsCollided(int p0, int p1){
        static_assert(T, "Implement GJEffectManager::objectsCollided");
    }

    template <bool T=false>
    void opacityForIndex(int p0){
        static_assert(T, "Implement GJEffectManager::opacityForIndex");
    }

    template <bool T=false>
    float opacityModForGroup(int p0){
        static_assert(T, "Implement GJEffectManager::opacityModForGroup");
    }

    template <bool T=false>
    void playerButton(bool p0, bool p1){
        static_assert(T, "Implement GJEffectManager::playerButton");
    }

    template <bool T=false>
    void playerDied(){
        static_assert(T, "Implement GJEffectManager::playerDied");
    }

    template <bool T=false>
    void postCollisionCheck(){
        static_assert(T, "Implement GJEffectManager::postCollisionCheck");
    }

    template <bool T=false>
    void preCollisionCheck(){
        static_assert(T, "Implement GJEffectManager::preCollisionCheck");
    }

    template <bool T=false>
    void prepareMoveActions(float p0, bool p1){
        static_assert(T, "Implement GJEffectManager::prepareMoveActions");
    }

    template <bool T=false>
    void processColors(){
        static_assert(T, "Implement GJEffectManager::processColors");
    }

    template <bool T=false>
    void processCopyColorPulseActions(){
        static_assert(T, "Implement GJEffectManager::processCopyColorPulseActions");
    }

    template <bool T=false>
    void processInheritedColors(){
        static_assert(T, "Implement GJEffectManager::processInheritedColors");
    }

    template <bool T=false>
    void processPulseActions(){
        static_assert(T, "Implement GJEffectManager::processPulseActions");
    }

    template <bool T=false>
    void registerCollisionTrigger(int p0, int p1, int p2, bool p3, bool p4, int p5){
        static_assert(T, "Implement GJEffectManager::registerCollisionTrigger");
    }

    template <bool T=false>
    void removeAllPulseActions(){
        static_assert(T, "Implement GJEffectManager::removeAllPulseActions");
    }

    template <bool T=false>
    void removeColorAction(int p0){
        static_assert(T, "Implement GJEffectManager::removeColorAction");
    }

    template <bool T=false>
    void reset(){
        static_assert(T, "Implement GJEffectManager::reset");
    }

    template <bool T=false>
    void resetColorCache(){
        static_assert(T, "Implement GJEffectManager::resetColorCache");
    }

    template <bool T=false>
    void resetEffects(){
        static_assert(T, "Implement GJEffectManager::resetEffects");
    }

    template <bool T=false>
    void resetMoveActions(){
        static_assert(T, "Implement GJEffectManager::resetMoveActions");
    }

    template <bool T=false>
    void resetToggledGroups(){
        static_assert(T, "Implement GJEffectManager::resetToggledGroups");
    }

    template <bool T=false>
    void resetTriggeredIDs(){
        static_assert(T, "Implement GJEffectManager::resetTriggeredIDs");
    }

    template <bool T=false>
    void runCountTrigger(int p0, int p1, bool p2, int p3, bool p4, int p5){
        static_assert(T, "Implement GJEffectManager::runCountTrigger");
    }

    template <bool T=false>
    void runDeathTrigger(int p0, bool p1, int p2){
        static_assert(T, "Implement GJEffectManager::runDeathTrigger");
    }

    template <bool T=false>
    OpacityEffectAction* runOpacityActionOnGroup(int p0, float p1, float p2, int p3){
        static_assert(T, "Implement GJEffectManager::runOpacityActionOnGroup");
    }

    template <bool T=false>
    void runPulseEffect(int p0, bool p1, float p2, float p3, float p4, PulseEffectType p5, cocos2d::_ccColor3B p6, cocos2d::_ccHSVValue p7, int p8, bool p9, bool p10, bool p11, int p12){
        static_assert(T, "Implement GJEffectManager::runPulseEffect");
    }

    template <bool T=false>
    void runTouchTriggerCommand(int p0, bool p1, TouchTriggerType p2, bool p3, int p4){
        static_assert(T, "Implement GJEffectManager::runTouchTriggerCommand");
    }

    template <bool T=false>
    void setColorAction(ColorAction* p0, int p1){
        static_assert(T, "Implement GJEffectManager::setColorAction");
    }

    template <bool T=false>
    void setFollowing(int p0, int p1, bool p2){
        static_assert(T, "Implement GJEffectManager::setFollowing");
    }

    template <bool T=false>
    void setupFromString(gd::string p0){
        static_assert(T, "Implement GJEffectManager::setupFromString");
    }

    template <bool T=false>
    void shouldBlend(int p0){
        static_assert(T, "Implement GJEffectManager::shouldBlend");
    }

    template <bool T=false>
    void spawnGroup(int p0, float p1, int p2){
        static_assert(T, "Implement GJEffectManager::spawnGroup");
    }

    template <bool T=false>
    void stopActionsForTrigger(EffectGameObject* p0){
        static_assert(T, "Implement GJEffectManager::stopActionsForTrigger");
    }

    template <bool T=false>
    void stopMoveActionsForGroup(int p0){
        static_assert(T, "Implement GJEffectManager::stopMoveActionsForGroup");
    }

    template <bool T=false>
    void storeTriggeredID(int p0){
        static_assert(T, "Implement GJEffectManager::storeTriggeredID");
    }

    template <bool T=false>
    void toggleGroup(int p0, bool p1){
        static_assert(T, "Implement GJEffectManager::toggleGroup");
    }

    template <bool T=false>
    void traverseInheritanceChain(InheritanceNode* p0){
        static_assert(T, "Implement GJEffectManager::traverseInheritanceChain");
    }

    template <bool T=false>
    void updateActiveOpacityEffects(){
        static_assert(T, "Implement GJEffectManager::updateActiveOpacityEffects");
    }

    template <bool T=false>
    void updateColorAction(ColorAction* p0){
        static_assert(T, "Implement GJEffectManager::updateColorAction");
    }

    template <bool T=false>
    void updateColorEffects(float p0){
        static_assert(T, "Implement GJEffectManager::updateColorEffects");
    }

    template <bool T=false>
    void updateColors(cocos2d::_ccColor3B p0, cocos2d::_ccColor3B p1){
        static_assert(T, "Implement GJEffectManager::updateColors");
    }

    template <bool T=false>
    void updateEffects(float p0){
        static_assert(T, "Implement GJEffectManager::updateEffects");
    }

    template <bool T=false>
    void updateOpacityAction(OpacityEffectAction* p0){
        static_assert(T, "Implement GJEffectManager::updateOpacityAction");
    }

    GEODE_CODEGEN_DLL void updateOpacityEffects(float p0);

    template <bool T=false>
    void updatePulseEffects(float p0){
        static_assert(T, "Implement GJEffectManager::updatePulseEffects");
    }

    template <bool T=false>
    void updateSpawnTriggers(float p0){
        static_assert(T, "Implement GJEffectManager::updateSpawnTriggers");
    }

    template <bool T=false>
    void wasFollowing(int p0, int p1){
        static_assert(T, "Implement GJEffectManager::wasFollowing");
    }

    template <bool T=false>
    void wouldCreateLoop(InheritanceNode* p0, int p1){
        static_assert(T, "Implement GJEffectManager::wouldCreateLoop");
    }

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

class GJLevelScoreCell : public TableViewCell {
public:

    GEODE_CODEGEN_DLL void updateBGColor(unsigned int index);

};

class GJGameLevel : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL static GJGameLevel* createWithCoder(DS_Dictionary* dict);

    template <bool T=false>
    void encodeWithCoder(DS_Dictionary* p0){
        static_assert(T, "Implement GJGameLevel::encodeWithCoder");
    }

    template <bool T=false>
    bool canEncode(){
        static_assert(T, "Implement GJGameLevel::canEncode");
    }

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement GJGameLevel::init");
    }

    GEODE_CODEGEN_DLL static GJGameLevel* create();

    GEODE_CODEGEN_DLL gd::string getAudioFileName();

    GEODE_CODEGEN_DLL const char* getCoinKey(int p0);

    template <bool T=false>
    void getLengthKey(int p0){
        static_assert(T, "Implement GJGameLevel::getLengthKey");
    }

    template <bool T=false>
    void getNormalPercent(){
        static_assert(T, "Implement GJGameLevel::getNormalPercent");
    }

    GEODE_CODEGEN_DLL void levelWasAltered();

    template <bool T=false>
    void savePercentage(int p0, bool p1, int p2, int p3, bool p4){
        static_assert(T, "Implement GJGameLevel::savePercentage");
    }

    GEODE_CODEGEN_DLL void dataLoaded(DS_Dictionary* dict);

    GEODE_CODEGEN_DLL GJDifficulty getAverageDifficulty();

    GEODE_CODEGEN_DLL gd::string getUnpackedLevelDescription();

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

class GJGarageLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate {
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

    GEODE_CODEGEN_DLL void onPlayerColor1(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onPlayerColor2(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL static GJGarageLayer* create();

    GEODE_CODEGEN_DLL virtual bool init();

    GEODE_CODEGEN_DLL void onSelectTab(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onPlayerIcon(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onShipIcon(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onBallIcon(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onBirdIcon(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onDartIcon(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onRobotIcon(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onSpiderIcon(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onShards(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onBack(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onShop(cocos2d::CCObject* pSender);

        CCTextInputNode* m_nameInput;
        SimplePlayer* m_playerPreview;
        GEODE_PAD(0x8);
        cocos2d::CCSprite* m_unkSprite0x140;
        cocos2d::CCSprite* m_unkSprite0x144;
        CCMenuItemSpriteExtra* m_unkButton0x148;
        CCMenuItemSpriteExtra* m_unkButton0x14c;
        GEODE_PAD(0x8);
        cocos2d::CCArray* m_pagesArray;
        GEODE_PAD(0x8);
        CCMenuItemToggler* m_tabToggleCube;
        CCMenuItemToggler* m_tabToggleShip;
        CCMenuItemToggler* m_tabToggleBall;
        CCMenuItemToggler* m_tabToggleUfo;
        CCMenuItemToggler* m_tabToggleWave;
        CCMenuItemToggler* m_tabToggleRobot;
        CCMenuItemToggler* m_tabToggleSpider;
        CCMenuItemToggler* m_tabToggleSpecial;
        CCMenuItemToggler* m_tabToggleDeathEffect;
        GEODE_PAD(0x4);
        bool m_updateSelector;
};

class GJGroundLayer {
public:

    GEODE_CODEGEN_DLL void updateGroundWidth();

};

class GJItemIcon {
public:

    GEODE_CODEGEN_DLL GJItemIcon* createBrowserIcon(UnlockType _type, int _id);

    GEODE_CODEGEN_DLL static GJItemIcon* create(UnlockType _type, int _id, cocos2d::ccColor3B _col1, cocos2d::ccColor3B _col2, bool _un0, bool _un1, bool _un2, cocos2d::ccColor3B _col3);

};

class GJListLayer : public cocos2d::CCLayerColor {
public:

    GEODE_CODEGEN_DLL static GJListLayer* create(cocos2d::CCObject* target, const char* title, cocos2d::ccColor4B color, float width, float height);

        BoomListView* m_listView;
};

class GJMapPack : public cocos2d::CCNode {
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

class SetupSpawnPopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupSpawnPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupSpawnPopup::create");
    }

    template <bool T=false>
    void createToggleButton(gd::string p0, cocos2d::SEL_MenuHandler p1, bool p2, cocos2d::CCMenu* p3, cocos2d::CCPoint p4, cocos2d::CCArray* p5){
        static_assert(T, "Implement SetupSpawnPopup::createToggleButton");
    }

    template <bool T=false>
    void onTargetIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupSpawnPopup::onTargetIDArrow");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetupSpawnPopup::textChanged");
    }

    template <bool T=false>
    void updateTargetID(){
        static_assert(T, "Implement SetupSpawnPopup::updateTargetID");
    }

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

class LocalLevelManager : public cocos2d::CCNode {
public:

    template <bool T=false>
    static LocalLevelManager* sharedState(){
        static_assert(T, "Implement LocalLevelManager::sharedState");
    }

        GEODE_PAD(0x1C);
        cocos2d::CCDictionary* m_loadData;
        cocos2d::CCDictionary* m_levelData;
        cocos2d::CCArray* m_localLevels;
};

class GJRequestCell : public TableViewCell {
public:

    GEODE_CODEGEN_DLL void updateBGColor(unsigned int index);

};

class GJRewardDelegate {
public:

};

class SetIDPopup {
public:

};

class LevelBrowserLayer : public cocos2d::CCLayer {
public:

    GEODE_CODEGEN_DLL static void scene(GJSearchObject* pSearch);

    GEODE_CODEGEN_DLL bool init(GJSearchObject* pSearch);

    GEODE_CODEGEN_DLL void loadPage(GJSearchObject* pSearch);

    GEODE_CODEGEN_DLL void setupLevelBrowser(cocos2d::CCArray* levels);

    GEODE_CODEGEN_DLL void updateLevelsLabel();

    GEODE_CODEGEN_DLL static LevelBrowserLayer* create(GJSearchObject* pSearch);

        GEODE_PAD(0x18);
        GJListLayer* m_list;
        CCMenuItemSpriteExtra* m_leftArrow;
        CCMenuItemSpriteExtra* m_rightArrow;
        GEODE_PAD(0x10);
        GJSearchObject* m_searchObject;
        GEODE_PAD(0x14);
        int m_itemCount;
        int m_pageStartIdx;
        int m_pageEndIdx;
};

class GJRewardObject : public cocos2d::CCObject {
public:

        SpecialRewardItem m_specialRewardItem;
        UnlockType m_unlockType;
        int m_itemID;
        int m_total;
};

class GJRobotSprite : public CCAnimatedSprite {
public:

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement GJRobotSprite::init");
    }

    template <bool T=false>
    void setOpacity(unsigned char p0){
        static_assert(T, "Implement GJRobotSprite::setOpacity");
    }

    template <bool T=false>
    void hideSecondary(){
        static_assert(T, "Implement GJRobotSprite::hideSecondary");
    }

    template <bool T=false>
    static GJRobotSprite* create(){
        static_assert(T, "Implement GJRobotSprite::create");
    }

    template <bool T=false>
    void updateColor02(cocos2d::_ccColor3B p0){
        static_assert(T, "Implement GJRobotSprite::updateColor02");
    }

    template <bool T=false>
    void updateFrame(int p0){
        static_assert(T, "Implement GJRobotSprite::updateFrame");
    }

    template <bool T=false>
    void hideGlow(){
        static_assert(T, "Implement GJRobotSprite::hideGlow");
    }

        GEODE_PAD(0x8);
        cocos2d::ccColor3B m_secondaryColor;
};

class RateLevelDelegate {
public:

    GEODE_CODEGEN_DLL virtual void rateLevelClosed();

};

class GJScaleControl : public cocos2d::CCLayer {
public:

    GEODE_CODEGEN_DLL void updateLabel(float value);

    GEODE_CODEGEN_DLL void loadValues(GameObject* obj, cocos2d::CCArray* objs);

        Slider* m_slider;
        unsigned int m_touchID;
        float m_value;
        GEODE_PAD(0x4);
        cocos2d::CCLabelBMFont* m_label;
        GJScaleControlDelegate* m_delegate;
};

class GJScoreCell : public TableViewCell {
public:

    GEODE_CODEGEN_DLL virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    GEODE_CODEGEN_DLL void loadFromScore(GJUserScore* score);

    GEODE_CODEGEN_DLL void onViewProfile(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void updateBGColor(unsigned int index);

};

class SetIDPopupDelegate {
public:

    GEODE_CODEGEN_DLL virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

};

class GJSearchObject : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL SearchType getType();

    GEODE_CODEGEN_DLL static GJSearchObject* create(SearchType nID);

    GEODE_CODEGEN_DLL static GJSearchObject* create(SearchType nID, gd::string str);

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

class GJSpiderSprite : public GJRobotSprite {
public:

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement GJSpiderSprite::init");
    }

    template <bool T=false>
    static GJSpiderSprite* create(){
        static_assert(T, "Implement GJSpiderSprite::create");
    }

};

class GJSpriteColor : public cocos2d::CCNode {
public:

        int m_colorID;
        int m_defaultColorID;
        float m_unk_0F4;
        cocos2d::ccHSVValue m_hsv;
        bool unk_108;
        float unk_10C;
        bool unk_110;
};

class GJUserCell : public TableViewCell {
public:

    GEODE_CODEGEN_DLL void updateBGColor(unsigned int index);

};

class GooglePlayDelegate {
public:

    GEODE_CODEGEN_DLL virtual void googlePlaySignedIn();

};

class GameManager : public GManager {
public:

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

    GEODE_CODEGEN_DLL static GameManager* get();

    template <bool T=false>
    void accountStatusChanged(){
        static_assert(T, "Implement GameManager::accountStatusChanged");
    }

    GEODE_CODEGEN_DLL cocos2d::_ccColor3B colorForIdx(int p0);

    template <bool T=false>
    void didExitPlayscene(){
        static_assert(T, "Implement GameManager::didExitPlayscene");
    }

    template <bool T=false>
    void doQuickSave(){
        static_assert(T, "Implement GameManager::doQuickSave");
    }

    GEODE_CODEGEN_DLL void fadeInMusic(const char* p0);

    template <bool T=false>
    void getBGTexture(int p0){
        static_assert(T, "Implement GameManager::getBGTexture");
    }

    template <bool T=false>
    void getFontFile(int p0){
        static_assert(T, "Implement GameManager::getFontFile");
    }

    GEODE_CODEGEN_DLL bool getGameVariable(const char* p0);

    GEODE_CODEGEN_DLL int getIntGameVariable(const char* p0);

    GEODE_CODEGEN_DLL bool getUGV(const char* p0);

    template <bool T=false>
    void loadDeathEffect(int p0){
        static_assert(T, "Implement GameManager::loadDeathEffect");
    }

    template <bool T=false>
    void loadFont(int p0){
        static_assert(T, "Implement GameManager::loadFont");
    }

    GEODE_CODEGEN_DLL void reloadAll(bool p0, bool p1, bool p2);

    GEODE_CODEGEN_DLL void reloadAllStep2();

    template <bool T=false>
    void reloadAllStep5(){
        static_assert(T, "Implement GameManager::reloadAllStep5");
    }

    template <bool T=false>
    void reportPercentageForLevel(int p0, int p1, bool p2){
        static_assert(T, "Implement GameManager::reportPercentageForLevel");
    }

    GEODE_CODEGEN_DLL void setGameVariable(const char* p0, bool p1);

    GEODE_CODEGEN_DLL void setIntGameVariable(const char* p0, int p1);

    template <bool T=false>
    void setUGV(char const* p0, bool p1){
        static_assert(T, "Implement GameManager::setUGV");
    }

    GEODE_CODEGEN_DLL static GameManager* sharedState();

    template <bool T=false>
    void getGTexture(int p0){
        static_assert(T, "Implement GameManager::getGTexture");
    }

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement GameManager::init");
    }

    template <bool T=false>
    void reportAchievementWithID(char const* p0, int p1, bool p2){
        static_assert(T, "Implement GameManager::reportAchievementWithID");
    }

    GEODE_CODEGEN_DLL cocos2d::CCSize* resolutionForKey(cocos2d::CCSize* p0, int p1);

    template <bool T=false>
    void update(float p0){
        static_assert(T, "Implement GameManager::update");
    }

    GEODE_CODEGEN_DLL bool isColorUnlocked(int _id, bool _type);

    GEODE_CODEGEN_DLL bool isIconUnlocked(int _id, IconType _type);

    GEODE_CODEGEN_DLL void toggleGameVariable(const char* key);

    GEODE_CODEGEN_DLL static void returnToLastScene(GJGameLevel* level);

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

class GameObjectCopy : public cocos2d::CCObject {
public:

    template <bool T=false>
    static GameObjectCopy* create(GameObject* p0){
        static_assert(T, "Implement GameObjectCopy::create");
    }

    template <bool T=false>
    void resetObject(){
        static_assert(T, "Implement GameObjectCopy::resetObject");
    }

};

class GameStatsManager : public cocos2d::CCNode {
public:

    template <bool T=false>
    void awardCurrencyForLevel(GJGameLevel* p0){
        static_assert(T, "Implement GameStatsManager::awardCurrencyForLevel");
    }

    template <bool T=false>
    void awardDiamondsForLevel(GJGameLevel* p0){
        static_assert(T, "Implement GameStatsManager::awardDiamondsForLevel");
    }

    template <bool T=false>
    void awardSecretKey(){
        static_assert(T, "Implement GameStatsManager::awardSecretKey");
    }

    GEODE_CODEGEN_DLL int getAwardedCurrencyForLevel(GJGameLevel* p0);

    GEODE_CODEGEN_DLL int getBaseCurrencyForLevel(GJGameLevel* p0);

    GEODE_CODEGEN_DLL const char* getCoinKey(int p0);

    GEODE_CODEGEN_DLL GJChallengeItem* getChallenge(int id);

    template <bool T=false>
    void getSecretCoinKey(char const* p0){
        static_assert(T, "Implement GameStatsManager::getSecretCoinKey");
    }

    template <bool T=false>
    void getStat(char const* p0){
        static_assert(T, "Implement GameStatsManager::getStat");
    }

    template <bool T=false>
    void hasPendingUserCoin(char const* p0){
        static_assert(T, "Implement GameStatsManager::hasPendingUserCoin");
    }

    template <bool T=false>
    void hasSecretCoin(char const* p0){
        static_assert(T, "Implement GameStatsManager::hasSecretCoin");
    }

    template <bool T=false>
    void hasUserCoin(char const* p0){
        static_assert(T, "Implement GameStatsManager::hasUserCoin");
    }

    GEODE_CODEGEN_DLL void incrementChallenge(GJChallengeType type, int count);

    template <bool T=false>
    void incrementStat(char const* p0){
        static_assert(T, "Implement GameStatsManager::incrementStat");
    }

    template <bool T=false>
    void incrementStat(char const* p0, int p1){
        static_assert(T, "Implement GameStatsManager::incrementStat");
    }

    GEODE_CODEGEN_DLL static GameStatsManager* sharedState();

    template <bool T=false>
    void storePendingUserCoin(char const* p0){
        static_assert(T, "Implement GameStatsManager::storePendingUserCoin");
    }

    template <bool T=false>
    void storeSecretCoin(char const* p0){
        static_assert(T, "Implement GameStatsManager::storeSecretCoin");
    }

    template <bool T=false>
    void storeUserCoin(char const* p0){
        static_assert(T, "Implement GameStatsManager::storeUserCoin");
    }

        GEODE_PAD(0x28);
        cocos2d::CCDictionary* m_dailyChests;
        cocos2d::CCDictionary* m_worldAdvertChests;
        cocos2d::CCDictionary* m_activeChallenges;
        cocos2d::CCDictionary* m_upcomingChallenges;
        GEODE_PAD(0xc);
        cocos2d::CCDictionary* m_playerStats;
        GEODE_PAD(0x10);
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

class GauntletSelectLayer {
public:

    GEODE_CODEGEN_DLL static GauntletSelectLayer* create();

};

class HSVWidgetPopup : public FLAlertLayer {
public:

        ConfigureHSVWidget* m_configureWidget;
        HSVWidgetPopupDelegate* m_delegate;
};

class HardStreak : public cocos2d::CCDrawNode {
public:

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement HardStreak::init");
    }

    template <bool T=false>
    void addPoint(cocos2d::CCPoint p0){
        static_assert(T, "Implement HardStreak::addPoint");
    }

    template <bool T=false>
    void clearBehindXPos(float p0){
        static_assert(T, "Implement HardStreak::clearBehindXPos");
    }

    template <bool T=false>
    static HardStreak* create(){
        static_assert(T, "Implement HardStreak::create");
    }

    template <bool T=false>
    void firstSetup(){
        static_assert(T, "Implement HardStreak::firstSetup");
    }

    template <bool T=false>
    double normalizeAngle(double p0){
        static_assert(T, "Implement HardStreak::normalizeAngle");
    }

    template <bool T=false>
    cocos2d::CCPoint quadCornerOffset(cocos2d::CCPoint p0, cocos2d::CCPoint p1, float p2){
        static_assert(T, "Implement HardStreak::quadCornerOffset");
    }

    template <bool T=false>
    void reset(){
        static_assert(T, "Implement HardStreak::reset");
    }

    template <bool T=false>
    void resumeStroke(){
        static_assert(T, "Implement HardStreak::resumeStroke");
    }

    template <bool T=false>
    void stopStroke(){
        static_assert(T, "Implement HardStreak::stopStroke");
    }

    template <bool T=false>
    void updateStroke(float p0){
        static_assert(T, "Implement HardStreak::updateStroke");
    }

        cocos2d::CCArray* m_pointsArr;
        cocos2d::CCPoint m_currentPoint;
        float m_waveSize;
        float m_pulseSize;
        bool m_isSolid;
};

class InfoAlertButton {
public:

    GEODE_CODEGEN_DLL bool init(gd::string const& title, gd::string const& text, float scale);

    GEODE_CODEGEN_DLL void activate();

        GEODE_CODEGEN_DLL InfoAlertButton();
    GEODE_CODEGEN_DLL static InfoAlertButton* create(gd::string const& title, gd::string const& text, float scale);

};

class KeybindingsLayer : public FLAlertLayer {
public:

    GEODE_CODEGEN_DLL void onClose(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onPrevPage(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onNextPage(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void goToPage(int page);

        int m_currentPage;
        int m_itemCount;
        int m_pageCount;
        cocos2d::CCDictionary* m_pages;
        cocos2d::CCDictionary* m_unused;
        cocos2d::CCNode* m_leftArrow;
        cocos2d::CCNode* m_rightArrow;
};

class LeaderboardManagerDelegate {
public:

};

class PlayerCheckpoint : public cocos2d::CCNode {
public:

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement PlayerCheckpoint::init");
    }

    template <bool T=false>
    static PlayerCheckpoint* create(){
        static_assert(T, "Implement PlayerCheckpoint::create");
    }

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

class LevelDownloadDelegate {
public:

    GEODE_CODEGEN_DLL virtual void levelDownloadFinished(GJGameLevel* p0);

    GEODE_CODEGEN_DLL virtual void levelDownloadFailed(int p0);

};

class LevelSettingsDelegate {
public:

};

class LevelEditorLayer : public GJBaseGameLayer, public LevelSettingsDelegate {
public:

    GEODE_CODEGEN_DLL static LevelEditorLayer* get();

    GEODE_CODEGEN_DLL static cocos2d::CCScene* scene(GJGameLevel* level);

    GEODE_CODEGEN_DLL virtual void update(float p0);

    template <bool T=false>
    void draw(){
        static_assert(T, "Implement LevelEditorLayer::draw");
    }

    template <bool T=false>
    void updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9){
        static_assert(T, "Implement LevelEditorLayer::updateColor");
    }

    template <bool T=false>
    void flipGravity(PlayerObject* p0, bool p1, bool p2){
        static_assert(T, "Implement LevelEditorLayer::flipGravity");
    }

    template <bool T=false>
    void calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5){
        static_assert(T, "Implement LevelEditorLayer::calculateColorValues");
    }

    template <bool T=false>
    void addToGroup(GameObject* p0, int p1, bool p2){
        static_assert(T, "Implement LevelEditorLayer::addToGroup");
    }

    template <bool T=false>
    void removeFromGroup(GameObject* p0, int p1){
        static_assert(T, "Implement LevelEditorLayer::removeFromGroup");
    }

    template <bool T=false>
    void timeForXPos(float p0){
        static_assert(T, "Implement LevelEditorLayer::timeForXPos");
    }

    template <bool T=false>
    void xPosForTime(float p0){
        static_assert(T, "Implement LevelEditorLayer::xPosForTime");
    }

    template <bool T=false>
    void levelSettingsUpdated(){
        static_assert(T, "Implement LevelEditorLayer::levelSettingsUpdated");
    }

    GEODE_CODEGEN_DLL static LevelEditorLayer* create(GJGameLevel* level);

    template <bool T=false>
    void activateTriggerEffect(EffectGameObject* p0, float p1, float p2, float p3){
        static_assert(T, "Implement LevelEditorLayer::activateTriggerEffect");
    }

    GEODE_CODEGEN_DLL GameObject* addObjectFromString(gd::string p0);

    GEODE_CODEGEN_DLL void addSpecial(GameObject* p0);

    template <bool T=false>
    void addToRedoList(UndoObject* p0){
        static_assert(T, "Implement LevelEditorLayer::addToRedoList");
    }

    template <bool T=false>
    void addToUndoList(UndoObject* p0, bool p1){
        static_assert(T, "Implement LevelEditorLayer::addToUndoList");
    }

    template <bool T=false>
    void animateInDualGround(GameObject* p0, float p1, bool p2){
        static_assert(T, "Implement LevelEditorLayer::animateInDualGround");
    }

    template <bool T=false>
    void checkCollisions(PlayerObject* p0, float p1){
        static_assert(T, "Implement LevelEditorLayer::checkCollisions");
    }

    template <bool T=false>
    void createBackground(){
        static_assert(T, "Implement LevelEditorLayer::createBackground");
    }

    template <bool T=false>
    void createGroundLayer(){
        static_assert(T, "Implement LevelEditorLayer::createGroundLayer");
    }

    GEODE_CODEGEN_DLL GameObject* createObject(int p0, cocos2d::CCPoint p1, bool p2);

    template <bool T=false>
    void createObjectsFromSetup(gd::string p0){
        static_assert(T, "Implement LevelEditorLayer::createObjectsFromSetup");
    }

    template <bool T=false>
    void createObjectsFromString(gd::string p0, bool p1){
        static_assert(T, "Implement LevelEditorLayer::createObjectsFromString");
    }

    GEODE_CODEGEN_DLL void getLastObjectX();

    GEODE_CODEGEN_DLL void getLevelString();

    template <bool T=false>
    void getNextColorChannel(){
        static_assert(T, "Implement LevelEditorLayer::getNextColorChannel");
    }

    template <bool T=false>
    void getNextFreeBlockID(cocos2d::CCArray* p0){
        static_assert(T, "Implement LevelEditorLayer::getNextFreeBlockID");
    }

    GEODE_CODEGEN_DLL int getNextFreeGroupID(cocos2d::CCArray* p0);

    template <bool T=false>
    void getNextFreeItemID(cocos2d::CCArray* p0){
        static_assert(T, "Implement LevelEditorLayer::getNextFreeItemID");
    }

    GEODE_CODEGEN_DLL void getObjectRect(GameObject* p0, bool p1);

    template <bool T=false>
    void getRelativeOffset(GameObject* p0){
        static_assert(T, "Implement LevelEditorLayer::getRelativeOffset");
    }

    template <bool T=false>
    void handleAction(bool p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement LevelEditorLayer::handleAction");
    }

    template <bool T=false>
    bool init(GJGameLevel* p0){
        static_assert(T, "Implement LevelEditorLayer::init");
    }

    GEODE_CODEGEN_DLL void objectAtPosition(cocos2d::CCPoint p0);

    template <bool T=false>
    void objectMoved(GameObject* p0){
        static_assert(T, "Implement LevelEditorLayer::objectMoved");
    }

    template <bool T=false>
    void objectsInRect(cocos2d::CCRect p0, bool p1){
        static_assert(T, "Implement LevelEditorLayer::objectsInRect");
    }

    template <bool T=false>
    void onPlaytest(){
        static_assert(T, "Implement LevelEditorLayer::onPlaytest");
    }

    template <bool T=false>
    void onStopPlaytest(){
        static_assert(T, "Implement LevelEditorLayer::onStopPlaytest");
    }

    GEODE_CODEGEN_DLL void pasteAttributeState(GameObject* obj, cocos2d::CCArray* objs);

    template <bool T=false>
    void playMusic(){
        static_assert(T, "Implement LevelEditorLayer::playMusic");
    }

    template <bool T=false>
    void recreateGroups(){
        static_assert(T, "Implement LevelEditorLayer::recreateGroups");
    }

    template <bool T=false>
    void redoLastAction(){
        static_assert(T, "Implement LevelEditorLayer::redoLastAction");
    }

    GEODE_CODEGEN_DLL void removeAllObjects();

    template <bool T=false>
    void removeAllObjectsOfType(int p0){
        static_assert(T, "Implement LevelEditorLayer::removeAllObjectsOfType");
    }

    GEODE_CODEGEN_DLL void removeObject(GameObject* p0, bool p1);

    template <bool T=false>
    void removeSpecial(GameObject* p0){
        static_assert(T, "Implement LevelEditorLayer::removeSpecial");
    }

    template <bool T=false>
    void resetMovingObjects(){
        static_assert(T, "Implement LevelEditorLayer::resetMovingObjects");
    }

    template <bool T=false>
    void resetObjectVector(){
        static_assert(T, "Implement LevelEditorLayer::resetObjectVector");
    }

    template <bool T=false>
    void resetToggledGroups(){
        static_assert(T, "Implement LevelEditorLayer::resetToggledGroups");
    }

    template <bool T=false>
    void resetToggledGroupsAndObjects(){
        static_assert(T, "Implement LevelEditorLayer::resetToggledGroupsAndObjects");
    }

    template <bool T=false>
    void resetUnusedColorChannels(){
        static_assert(T, "Implement LevelEditorLayer::resetUnusedColorChannels");
    }

    template <bool T=false>
    void rotationForSlopeNearObject(GameObject* p0){
        static_assert(T, "Implement LevelEditorLayer::rotationForSlopeNearObject");
    }

    template <bool T=false>
    void runColorEffect(EffectGameObject* p0, int p1, float p2, float p3, bool p4){
        static_assert(T, "Implement LevelEditorLayer::runColorEffect");
    }

    template <bool T=false>
    void setupLevelStart(LevelSettingsObject* p0){
        static_assert(T, "Implement LevelEditorLayer::setupLevelStart");
    }

    template <bool T=false>
    void sortStickyGroups(){
        static_assert(T, "Implement LevelEditorLayer::sortStickyGroups");
    }

    template <bool T=false>
    void stopTriggersInGroup(int p0, float p1){
        static_assert(T, "Implement LevelEditorLayer::stopTriggersInGroup");
    }

    template <bool T=false>
    void toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3){
        static_assert(T, "Implement LevelEditorLayer::toggleDualMode");
    }

    template <bool T=false>
    void toggleGroupPreview(int p0, bool p1){
        static_assert(T, "Implement LevelEditorLayer::toggleGroupPreview");
    }

    template <bool T=false>
    void transferDefaultColors(GJEffectManager* p0, GJEffectManager* p1){
        static_assert(T, "Implement LevelEditorLayer::transferDefaultColors");
    }

    template <bool T=false>
    void undoLastAction(){
        static_assert(T, "Implement LevelEditorLayer::undoLastAction");
    }

    template <bool T=false>
    void updateBGAndGColors(){
        static_assert(T, "Implement LevelEditorLayer::updateBGAndGColors");
    }

    template <bool T=false>
    void updateBlendValues(){
        static_assert(T, "Implement LevelEditorLayer::updateBlendValues");
    }

    template <bool T=false>
    void updateDualGround(PlayerObject* p0, int p1, bool p2){
        static_assert(T, "Implement LevelEditorLayer::updateDualGround");
    }

    GEODE_CODEGEN_DLL void updateEditorMode();

    template <bool T=false>
    void updateGameObjectsNew(){
        static_assert(T, "Implement LevelEditorLayer::updateGameObjectsNew");
    }

    template <bool T=false>
    void updateGround(float p0){
        static_assert(T, "Implement LevelEditorLayer::updateGround");
    }

    template <bool T=false>
    void updateGroundWidth(){
        static_assert(T, "Implement LevelEditorLayer::updateGroundWidth");
    }

    GEODE_CODEGEN_DLL void updateOptions();

    template <bool T=false>
    void updateToggledGroups(){
        static_assert(T, "Implement LevelEditorLayer::updateToggledGroups");
    }

    template <bool T=false>
    void updateVisibility(float p0){
        static_assert(T, "Implement LevelEditorLayer::updateVisibility");
    }

        GEODE_PAD(0x4);
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
        GEODE_PAD(0x30);
        GameObject* m_copyStateObject;
        GEODE_PAD(0xc);
        int m_coinCountRand1;
        int m_coinCountRand2;
        int m_coinCount;
        GEODE_PAD(0x28);
        int m_currentLayer;
        GEODE_PAD(0x28);
        EditorUI* m_editorUI;
        GEODE_PAD(0x4);
        cocos2d::CCArray* m_undoObjects;
        cocos2d::CCArray* m_someArray;
        GEODE_PAD(0x8);
        int m_objectsRand1;
        int m_objectsRand2;
        int m_objects;
        DrawGridLayer* m_drawGridLayer;
        GJGameLevel* m_level;
        PlaybackMode m_playbackMode;
        GEODE_PAD(0x14);
        GJGroundLayer* m_groundLayer;
};

class LevelUpdateDelegate {
public:

    GEODE_CODEGEN_DLL virtual void levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);

    GEODE_CODEGEN_DLL virtual void levelUpdateFailed(int p0);

};

class LevelInfoLayer : public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate {
public:

    GEODE_CODEGEN_DLL static LevelInfoLayer* create(GJGameLevel* level);

    GEODE_CODEGEN_DLL void onGarage(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onViewProfile(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onLevelInfo(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void setupProgressBars();

        GEODE_PAD(0x4);
        cocos2d::CCMenu* m_playBtnMenu;
        GJGameLevel* m_level;
        cocos2d::CCArray* m_unknown;
        CCMenuItemSpriteExtra* m_likeBtn;
        CCMenuItemSpriteExtra* m_starRateBtn;
        CCMenuItemSpriteExtra* m_demonRateBtn;
        GEODE_PAD(0x4);
        CCMenuItemToggler* m_toggler;
        cocos2d::CCLabelBMFont* m_label0;
        cocos2d::CCLabelBMFont* m_label1;
        cocos2d::CCLabelBMFont* m_label2;
        cocos2d::CCLabelBMFont* m_label3;
        cocos2d::CCLabelBMFont* m_label4;
        cocos2d::CCLabelBMFont* m_label5;
        CCMenuItemSpriteExtra* m_cloneBtn;
        GEODE_PAD(0x4);
};

class LevelManagerDelegate {
public:

};

class LevelPage {
public:

        GEODE_PAD(0x124);
        GJGameLevel* m_level;
};

class LevelSelectLayer : public cocos2d::CCLayer {
public:

    GEODE_CODEGEN_DLL static LevelSelectLayer* create(int lvl);

        GEODE_PAD(0x10);
        BoomScrollLayer* m_scrollLayer;
};

class LevelSettingsLayer {
public:

    GEODE_CODEGEN_DLL static LevelSettingsLayer* create(LevelSettingsObject* levelSettings, LevelEditorLayer* editor);

};

class LevelSettingsObject : public cocos2d::CCNode {
public:

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement LevelSettingsObject::init");
    }

    template <bool T=false>
    static LevelSettingsObject* create(){
        static_assert(T, "Implement LevelSettingsObject::create");
    }

    template <bool T=false>
    void objectFromDict(cocos2d::CCDictionary* p0){
        static_assert(T, "Implement LevelSettingsObject::objectFromDict");
    }

    template <bool T=false>
    static LevelSettingsObject* objectFromString(gd::string p0){
        static_assert(T, "Implement LevelSettingsObject::objectFromString");
    }

    template <bool T=false>
    void setupColorsFromLegacyMode(cocos2d::CCDictionary* p0){
        static_assert(T, "Implement LevelSettingsObject::setupColorsFromLegacyMode");
    }

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
        GEODE_PAD(0x4);
        GJGameLevel* m_level;
        gd::string m_unknownStr;
};

class LevelUploadDelegate {
public:

};

class TeleportPortalObject : public GameObject {
public:

        GEODE_PAD(0x4);
        TeleportPortalObject* m_orangePortal;
        bool m_unk470;
        float m_unk474;
        bool m_unk478;
};

class LoadingLayer : public cocos2d::CCLayer {
public:

    GEODE_CODEGEN_DLL void setFromRefresh(bool value);

    GEODE_CODEGEN_DLL static LoadingLayer* create(bool fromReload);

    GEODE_CODEGEN_DLL bool init(bool fromReload);

    GEODE_CODEGEN_DLL const char* getLoadingString();

    GEODE_CODEGEN_DLL void loadAssets();

    GEODE_CODEGEN_DLL void loadingFinished();

    GEODE_CODEGEN_DLL static cocos2d::CCScene* scene(bool fromReload);

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

class SetupObjectTogglePopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupObjectTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupObjectTogglePopup::create");
    }

    template <bool T=false>
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupObjectTogglePopup::init");
    }

    template <bool T=false>
    void onTargetIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupObjectTogglePopup::onTargetIDArrow");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetupObjectTogglePopup::textChanged");
    }

    template <bool T=false>
    void updateTargetID(){
        static_assert(T, "Implement SetupObjectTogglePopup::updateTargetID");
    }

};

class MenuGameLayer {
public:

    template <bool T=false>
    void resetPlayer(){
        static_assert(T, "Implement MenuGameLayer::resetPlayer");
    }

    template <bool T=false>
    void update(float p0){
        static_assert(T, "Implement MenuGameLayer::update");
    }

};

class MessageListDelegate {
public:

};

class MoreSearchLayer : public FLAlertLayer {
public:

    GEODE_CODEGEN_DLL static MoreSearchLayer* create();

    GEODE_CODEGEN_DLL bool init();

};

class NumberInputLayer {
public:

};

class PulseEffectAction : public cocos2d::CCNode {
public:

    template <bool T=false>
    static PulseEffectAction* createFromString(gd::string p0){
        static_assert(T, "Implement PulseEffectAction::createFromString");
    }

    template <bool T=false>
    void getSaveString(){
        static_assert(T, "Implement PulseEffectAction::getSaveString");
    }

};

class ObjectManager : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL static ObjectManager* instance();

    GEODE_CODEGEN_DLL void setup();

};

class ObjectToolbox : public cocos2d::CCNode {
public:

    GEODE_CODEGEN_DLL cocos2d::CCArray* allKeys();

    GEODE_CODEGEN_DLL const char* frameToKey(const char* frame);

    GEODE_CODEGEN_DLL const char* intKeyToFrame(int key);

    GEODE_CODEGEN_DLL const char* keyToFrame(const char* key);

    GEODE_CODEGEN_DLL void addObject(int id, const char* frame);

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement ObjectToolbox::init");
    }

    GEODE_CODEGEN_DLL static ObjectToolbox* sharedState();

    GEODE_CODEGEN_DLL float gridNodeSizeForKey(int key);

    GEODE_CODEGEN_DLL const char* perspectiveBlockFrame(int key);

        cocos2d::CCDictionary* m_frameToKeyDict;
        cocos2d::CCDictionary* m_keyToFrameDict;
};

class OpacityEffectAction : public cocos2d::CCNode {
public:

    template <bool T=false>
    static OpacityEffectAction* create(float p0, float p1, float p2, int p3){
        static_assert(T, "Implement OpacityEffectAction::create");
    }

    template <bool T=false>
    static OpacityEffectAction* createFromString(gd::string p0){
        static_assert(T, "Implement OpacityEffectAction::createFromString");
    }

    template <bool T=false>
    bool init(float p0, float p1, float p2, int p3){
        static_assert(T, "Implement OpacityEffectAction::init");
    }

    template <bool T=false>
    void step(float p0){
        static_assert(T, "Implement OpacityEffectAction::step");
    }

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

class OptionsLayer : public GJDropDownLayer, public FLAlertLayerProtocol {
public:

    GEODE_CODEGEN_DLL static OptionsLayer* addToCurrentScene(bool noTransition);

    GEODE_CODEGEN_DLL static OptionsLayer* create();

};

class PlayLayer : public GJBaseGameLayer, public CCCircleWaveDelegate, public DialogDelegate {
public:

    GEODE_CODEGEN_DLL static PlayLayer* get();

    template <bool T=false>
    void addCircle(CCCircleWave* p0){
        static_assert(T, "Implement PlayLayer::addCircle");
    }

    GEODE_CODEGEN_DLL void addObject(GameObject* p0);

    template <bool T=false>
    void addToGroupOld(GameObject* p0){
        static_assert(T, "Implement PlayLayer::addToGroupOld");
    }

    template <bool T=false>
    void addToSpeedObjects(GameObject* p0){
        static_assert(T, "Implement PlayLayer::addToSpeedObjects");
    }

    template <bool T=false>
    void animateInDualGround(GameObject* p0, float p1, bool p2){
        static_assert(T, "Implement PlayLayer::animateInDualGround");
    }

    template <bool T=false>
    void animateInGround(bool p0){
        static_assert(T, "Implement PlayLayer::animateInGround");
    }

    template <bool T=false>
    void animateOutGround(bool p0){
        static_assert(T, "Implement PlayLayer::animateOutGround");
    }

    template <bool T=false>
    void animateOutGroundFinished(){
        static_assert(T, "Implement PlayLayer::animateOutGroundFinished");
    }

    template <bool T=false>
    void applyEnterEffect(GameObject* p0){
        static_assert(T, "Implement PlayLayer::applyEnterEffect");
    }

    template <bool T=false>
    void calculateColorValues(EffectGameObject* p0, EffectGameObject* p1, int p2, float p3, ColorActionSprite* p4, GJEffectManager* p5){
        static_assert(T, "Implement PlayLayer::calculateColorValues");
    }

    template <bool T=false>
    void cameraMoveX(float p0, float p1, float p2){
        static_assert(T, "Implement PlayLayer::cameraMoveX");
    }

    template <bool T=false>
    void cameraMoveY(float p0, float p1, float p2){
        static_assert(T, "Implement PlayLayer::cameraMoveY");
    }

    template <bool T=false>
    void checkCollisions(PlayerObject* p0, float p1){
        static_assert(T, "Implement PlayLayer::checkCollisions");
    }

    template <bool T=false>
    void circleWaveWillBeRemoved(CCCircleWave* p0){
        static_assert(T, "Implement PlayLayer::circleWaveWillBeRemoved");
    }

    template <bool T=false>
    void claimParticle(gd::string p0){
        static_assert(T, "Implement PlayLayer::claimParticle");
    }

    template <bool T=false>
    void clearPickedUpItems(){
        static_assert(T, "Implement PlayLayer::clearPickedUpItems");
    }

    template <bool T=false>
    void colorObject(int p0, cocos2d::_ccColor3B p1){
        static_assert(T, "Implement PlayLayer::colorObject");
    }

    template <bool T=false>
    void commitJumps(){
        static_assert(T, "Implement PlayLayer::commitJumps");
    }

    GEODE_CODEGEN_DLL static PlayLayer* create(GJGameLevel* p0);

    GEODE_CODEGEN_DLL void createCheckpoint();

    template <bool T=false>
    void createObjectsFromSetup(gd::string p0){
        static_assert(T, "Implement PlayLayer::createObjectsFromSetup");
    }

    template <bool T=false>
    void createParticle(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3){
        static_assert(T, "Implement PlayLayer::createParticle");
    }

    template <bool T=false>
    void currencyWillExit(CurrencyRewardLayer* p0){
        static_assert(T, "Implement PlayLayer::currencyWillExit");
    }

    template <bool T=false>
    void delayedResetLevel(){
        static_assert(T, "Implement PlayLayer::delayedResetLevel");
    }

    GEODE_CODEGEN_DLL void destroyPlayer(PlayerObject* p0, GameObject* p1);

    template <bool T=false>
    void dialogClosed(DialogLayer* p0){
        static_assert(T, "Implement PlayLayer::dialogClosed");
    }

    GEODE_CODEGEN_DLL virtual void draw();

    template <bool T=false>
    void enterDualMode(GameObject* p0, bool p1){
        static_assert(T, "Implement PlayLayer::enterDualMode");
    }

    template <bool T=false>
    void exitAirMode(){
        static_assert(T, "Implement PlayLayer::exitAirMode");
    }

    template <bool T=false>
    void exitBirdMode(PlayerObject* p0){
        static_assert(T, "Implement PlayLayer::exitBirdMode");
    }

    template <bool T=false>
    void exitDartMode(PlayerObject* p0){
        static_assert(T, "Implement PlayLayer::exitDartMode");
    }

    template <bool T=false>
    void exitFlyMode(PlayerObject* p0){
        static_assert(T, "Implement PlayLayer::exitFlyMode");
    }

    template <bool T=false>
    void exitRobotMode(PlayerObject* p0){
        static_assert(T, "Implement PlayLayer::exitRobotMode");
    }

    template <bool T=false>
    void exitRollMode(PlayerObject* p0){
        static_assert(T, "Implement PlayLayer::exitRollMode");
    }

    template <bool T=false>
    void exitSpiderMode(PlayerObject* p0){
        static_assert(T, "Implement PlayLayer::exitSpiderMode");
    }

    template <bool T=false>
    void flipFinished(){
        static_assert(T, "Implement PlayLayer::flipFinished");
    }

    template <bool T=false>
    void flipGravity(PlayerObject* p0, bool p1, bool p2){
        static_assert(T, "Implement PlayLayer::flipGravity");
    }

    template <bool T=false>
    void flipObjects(){
        static_assert(T, "Implement PlayLayer::flipObjects");
    }

    template <bool T=false>
    void fullReset(){
        static_assert(T, "Implement PlayLayer::fullReset");
    }

    template <bool T=false>
    void getLastCheckpoint(){
        static_assert(T, "Implement PlayLayer::getLastCheckpoint");
    }

    template <bool T=false>
    void getMaxPortalY(){
        static_assert(T, "Implement PlayLayer::getMaxPortalY");
    }

    template <bool T=false>
    void getMinPortalY(){
        static_assert(T, "Implement PlayLayer::getMinPortalY");
    }

    template <bool T=false>
    void getObjectsState(){
        static_assert(T, "Implement PlayLayer::getObjectsState");
    }

    template <bool T=false>
    void getOtherPlayer(PlayerObject* p0){
        static_assert(T, "Implement PlayLayer::getOtherPlayer");
    }

    template <bool T=false>
    void getParticleKey(int p0, char const* p1, int p2, cocos2d::tCCPositionType p3){
        static_assert(T, "Implement PlayLayer::getParticleKey");
    }

    template <bool T=false>
    void getParticleKey2(gd::string p0){
        static_assert(T, "Implement PlayLayer::getParticleKey2");
    }

    template <bool T=false>
    void getRelativeMod(cocos2d::CCPoint p0, float p1, float p2, float p3){
        static_assert(T, "Implement PlayLayer::getRelativeMod");
    }

    template <bool T=false>
    void getTempMilliTime(){
        static_assert(T, "Implement PlayLayer::getTempMilliTime");
    }

    template <bool T=false>
    void gravityEffectFinished(){
        static_assert(T, "Implement PlayLayer::gravityEffectFinished");
    }

    template <bool T=false>
    void hasItem(int p0){
        static_assert(T, "Implement PlayLayer::hasItem");
    }

    template <bool T=false>
    void hasUniqueCoin(GameObject* p0){
        static_assert(T, "Implement PlayLayer::hasUniqueCoin");
    }

    template <bool T=false>
    void incrementJumps(){
        static_assert(T, "Implement PlayLayer::incrementJumps");
    }

    GEODE_CODEGEN_DLL bool init(GJGameLevel* p0);

    template <bool T=false>
    void isFlipping(){
        static_assert(T, "Implement PlayLayer::isFlipping");
    }

    GEODE_CODEGEN_DLL void levelComplete();

    template <bool T=false>
    void lightningFlash(cocos2d::CCPoint p0, cocos2d::CCPoint p1, cocos2d::_ccColor3B p2, float p3, float p4, int p5, bool p6, float p7){
        static_assert(T, "Implement PlayLayer::lightningFlash");
    }

    template <bool T=false>
    void lightningFlash(cocos2d::CCPoint p0, cocos2d::_ccColor3B p1){
        static_assert(T, "Implement PlayLayer::lightningFlash");
    }

    template <bool T=false>
    void loadDefaultColors(){
        static_assert(T, "Implement PlayLayer::loadDefaultColors");
    }

    template <bool T=false>
    void loadFromCheckpoint(CheckpointObject* p0){
        static_assert(T, "Implement PlayLayer::loadFromCheckpoint");
    }

    template <bool T=false>
    void loadLastCheckpoint(){
        static_assert(T, "Implement PlayLayer::loadLastCheckpoint");
    }

    template <bool T=false>
    void loadSavedObjectsState(gd::string p0){
        static_assert(T, "Implement PlayLayer::loadSavedObjectsState");
    }

    GEODE_CODEGEN_DLL void markCheckpoint();

    template <bool T=false>
    void moveCameraToPos(cocos2d::CCPoint p0){
        static_assert(T, "Implement PlayLayer::moveCameraToPos");
    }

    GEODE_CODEGEN_DLL virtual void onEnterTransitionDidFinish();

    GEODE_CODEGEN_DLL virtual void onExit();

    GEODE_CODEGEN_DLL void onQuit();

    template <bool T=false>
    void optimizeColorGroups(){
        static_assert(T, "Implement PlayLayer::optimizeColorGroups");
    }

    template <bool T=false>
    void optimizeOpacityGroups(){
        static_assert(T, "Implement PlayLayer::optimizeOpacityGroups");
    }

    template <bool T=false>
    void optimizeSaveRequiredGroups(){
        static_assert(T, "Implement PlayLayer::optimizeSaveRequiredGroups");
    }

    template <bool T=false>
    void pauseGame(bool p0){
        static_assert(T, "Implement PlayLayer::pauseGame");
    }

    template <bool T=false>
    void pickupItem(GameObject* p0){
        static_assert(T, "Implement PlayLayer::pickupItem");
    }

    template <bool T=false>
    void playAnimationCommand(int p0, int p1){
        static_assert(T, "Implement PlayLayer::playAnimationCommand");
    }

    template <bool T=false>
    void playEndAnimationToPos(cocos2d::CCPoint p0){
        static_assert(T, "Implement PlayLayer::playEndAnimationToPos");
    }

    template <bool T=false>
    void playExitDualEffect(PlayerObject* p0){
        static_assert(T, "Implement PlayLayer::playExitDualEffect");
    }

    template <bool T=false>
    void playFlashEffect(float p0, int p1, float p2){
        static_assert(T, "Implement PlayLayer::playFlashEffect");
    }

    template <bool T=false>
    void playGravityEffect(bool p0){
        static_assert(T, "Implement PlayLayer::playGravityEffect");
    }

    template <bool T=false>
    void playSpeedParticle(float p0){
        static_assert(T, "Implement PlayLayer::playSpeedParticle");
    }

    template <bool T=false>
    void playerWillSwitchMode(PlayerObject* p0, GameObject* p1){
        static_assert(T, "Implement PlayLayer::playerWillSwitchMode");
    }

    template <bool T=false>
    void prepareSpawnObjects(){
        static_assert(T, "Implement PlayLayer::prepareSpawnObjects");
    }

    template <bool T=false>
    void processItems(){
        static_assert(T, "Implement PlayLayer::processItems");
    }

    template <bool T=false>
    void processLoadedMoveActions(){
        static_assert(T, "Implement PlayLayer::processLoadedMoveActions");
    }

    template <bool T=false>
    void recordAction(bool p0, PlayerObject* p1){
        static_assert(T, "Implement PlayLayer::recordAction");
    }

    template <bool T=false>
    void registerActiveObject(GameObject* p0){
        static_assert(T, "Implement PlayLayer::registerActiveObject");
    }

    template <bool T=false>
    void registerStateObject(GameObject* p0){
        static_assert(T, "Implement PlayLayer::registerStateObject");
    }

    template <bool T=false>
    void removeAllObjects(){
        static_assert(T, "Implement PlayLayer::removeAllObjects");
    }

    template <bool T=false>
    void removeFromGroupOld(GameObject* p0){
        static_assert(T, "Implement PlayLayer::removeFromGroupOld");
    }

    GEODE_CODEGEN_DLL void removeLastCheckpoint();

    template <bool T=false>
    void removePlayer2(){
        static_assert(T, "Implement PlayLayer::removePlayer2");
    }

    GEODE_CODEGEN_DLL void resetLevel();

    template <bool T=false>
    void resume(){
        static_assert(T, "Implement PlayLayer::resume");
    }

    template <bool T=false>
    void resumeAndRestart(){
        static_assert(T, "Implement PlayLayer::resumeAndRestart");
    }

    template <bool T=false>
    void saveRecordAction(bool p0, PlayerObject* p1){
        static_assert(T, "Implement PlayLayer::saveRecordAction");
    }

    GEODE_CODEGEN_DLL static cocos2d::CCScene* scene(GJGameLevel* p0);

    GEODE_CODEGEN_DLL void setupLevelStart(LevelSettingsObject* p0);

    template <bool T=false>
    void setupReplay(gd::string p0){
        static_assert(T, "Implement PlayLayer::setupReplay");
    }

    GEODE_CODEGEN_DLL void shakeCamera(float p0, float p1, float p2);

    template <bool T=false>
    void shouldBlend(int p0){
        static_assert(T, "Implement PlayLayer::shouldBlend");
    }

    template <bool T=false>
    void showCompleteEffect(){
        static_assert(T, "Implement PlayLayer::showCompleteEffect");
    }

    template <bool T=false>
    void showCompleteText(){
        static_assert(T, "Implement PlayLayer::showCompleteText");
    }

    template <bool T=false>
    void showEndLayer(){
        static_assert(T, "Implement PlayLayer::showEndLayer");
    }

    template <bool T=false>
    void showHint(){
        static_assert(T, "Implement PlayLayer::showHint");
    }

    template <bool T=false>
    void showNewBest(bool p0, int p1, int p2, bool p3, bool p4, bool p5){
        static_assert(T, "Implement PlayLayer::showNewBest");
    }

    template <bool T=false>
    void showRetryLayer(){
        static_assert(T, "Implement PlayLayer::showRetryLayer");
    }

    template <bool T=false>
    void showTwoPlayerGuide(){
        static_assert(T, "Implement PlayLayer::showTwoPlayerGuide");
    }

    template <bool T=false>
    void sortGroups(){
        static_assert(T, "Implement PlayLayer::sortGroups");
    }

    template <bool T=false>
    void spawnCircle(){
        static_assert(T, "Implement PlayLayer::spawnCircle");
    }

    template <bool T=false>
    void spawnFirework(){
        static_assert(T, "Implement PlayLayer::spawnFirework");
    }

    template <bool T=false>
    void spawnParticle(char const* p0, int p1, cocos2d::tCCPositionType p2, cocos2d::CCPoint p3){
        static_assert(T, "Implement PlayLayer::spawnParticle");
    }

    template <bool T=false>
    void spawnPlayer2(){
        static_assert(T, "Implement PlayLayer::spawnPlayer2");
    }

    template <bool T=false>
    void startGame(){
        static_assert(T, "Implement PlayLayer::startGame");
    }

    template <bool T=false>
    void startMusic(){
        static_assert(T, "Implement PlayLayer::startMusic");
    }

    template <bool T=false>
    void startRecording(){
        static_assert(T, "Implement PlayLayer::startRecording");
    }

    template <bool T=false>
    void startRecordingDelayed(){
        static_assert(T, "Implement PlayLayer::startRecordingDelayed");
    }

    template <bool T=false>
    void stopCameraShake(){
        static_assert(T, "Implement PlayLayer::stopCameraShake");
    }

    template <bool T=false>
    void stopRecording(){
        static_assert(T, "Implement PlayLayer::stopRecording");
    }

    template <bool T=false>
    void storeCheckpoint(CheckpointObject* p0){
        static_assert(T, "Implement PlayLayer::storeCheckpoint");
    }

    template <bool T=false>
    void switchToFlyMode(PlayerObject* p0, GameObject* p1, bool p2, int p3){
        static_assert(T, "Implement PlayLayer::switchToFlyMode");
    }

    template <bool T=false>
    void switchToRobotMode(PlayerObject* p0, GameObject* p1, bool p2){
        static_assert(T, "Implement PlayLayer::switchToRobotMode");
    }

    template <bool T=false>
    void switchToRollMode(PlayerObject* p0, GameObject* p1, bool p2){
        static_assert(T, "Implement PlayLayer::switchToRollMode");
    }

    template <bool T=false>
    void switchToSpiderMode(PlayerObject* p0, GameObject* p1, bool p2){
        static_assert(T, "Implement PlayLayer::switchToSpiderMode");
    }

    template <bool T=false>
    void timeForXPos(float p0){
        static_assert(T, "Implement PlayLayer::timeForXPos");
    }

    GEODE_CODEGEN_DLL void timeForXPos2(float p0, bool p1);

    template <bool T=false>
    void toggleBGEffectVisibility(bool p0){
        static_assert(T, "Implement PlayLayer::toggleBGEffectVisibility");
    }

    template <bool T=false>
    void toggleDualMode(GameObject* p0, bool p1, PlayerObject* p2, bool p3){
        static_assert(T, "Implement PlayLayer::toggleDualMode");
    }

    template <bool T=false>
    void toggleFlipped(bool p0, bool p1){
        static_assert(T, "Implement PlayLayer::toggleFlipped");
    }

    template <bool T=false>
    void toggleGhostEffect(int p0){
        static_assert(T, "Implement PlayLayer::toggleGhostEffect");
    }

    template <bool T=false>
    void toggleGlitter(bool p0){
        static_assert(T, "Implement PlayLayer::toggleGlitter");
    }

    GEODE_CODEGEN_DLL void togglePracticeMode(bool p0);

    template <bool T=false>
    void toggleProgressbar(){
        static_assert(T, "Implement PlayLayer::toggleProgressbar");
    }

    template <bool T=false>
    void tryStartRecord(){
        static_assert(T, "Implement PlayLayer::tryStartRecord");
    }

    template <bool T=false>
    void unclaimParticle(char const* p0, cocos2d::CCParticleSystemQuad* p1){
        static_assert(T, "Implement PlayLayer::unclaimParticle");
    }

    template <bool T=false>
    void unregisterActiveObject(GameObject* p0){
        static_assert(T, "Implement PlayLayer::unregisterActiveObject");
    }

    template <bool T=false>
    void unregisterStateObject(GameObject* p0){
        static_assert(T, "Implement PlayLayer::unregisterStateObject");
    }

    GEODE_CODEGEN_DLL virtual void update(float p0);

    GEODE_CODEGEN_DLL void updateAttempts();

    template <bool T=false>
    void updateCamera(float p0){
        static_assert(T, "Implement PlayLayer::updateCamera");
    }

    template <bool T=false>
    void updateColor(cocos2d::_ccColor3B p0, float p1, int p2, bool p3, float p4, cocos2d::_ccHSVValue p5, int p6, bool p7, int p8, EffectGameObject* p9){
        static_assert(T, "Implement PlayLayer::updateColor");
    }

    template <bool T=false>
    void updateDualGround(PlayerObject* p0, int p1, bool p2){
        static_assert(T, "Implement PlayLayer::updateDualGround");
    }

    template <bool T=false>
    void updateEffectPositions(){
        static_assert(T, "Implement PlayLayer::updateEffectPositions");
    }

    template <bool T=false>
    void updateLevelColors(){
        static_assert(T, "Implement PlayLayer::updateLevelColors");
    }

    template <bool T=false>
    void updateMoveObjectsLastPosition(){
        static_assert(T, "Implement PlayLayer::updateMoveObjectsLastPosition");
    }

    template <bool T=false>
    void updateProgressbar(){
        static_assert(T, "Implement PlayLayer::updateProgressbar");
    }

    GEODE_CODEGEN_DLL void updateReplay(float p0);

    template <bool T=false>
    void updateTimeMod(float p0, bool p1){
        static_assert(T, "Implement PlayLayer::updateTimeMod");
    }

    GEODE_CODEGEN_DLL virtual void updateTweenAction(float p0, char const* p1);

    GEODE_CODEGEN_DLL void updateVisibility();

    template <bool T=false>
    void vfDChk(){
        static_assert(T, "Implement PlayLayer::vfDChk");
    }

    GEODE_CODEGEN_DLL virtual void visit();

    template <bool T=false>
    void visitWithColorFlash(){
        static_assert(T, "Implement PlayLayer::visitWithColorFlash");
    }

    template <bool T=false>
    void willSwitchToMode(int p0, PlayerObject* p1){
        static_assert(T, "Implement PlayLayer::willSwitchToMode");
    }

    template <bool T=false>
    void xPosForTime(float p0){
        static_assert(T, "Implement PlayLayer::xPosForTime");
    }

        GEODE_CODEGEN_DLL ~PlayLayer();
        float unused4c8;
        bool unused4cc;
        bool m_hasCheated;
        int m_dontSaveRand;
        int m_dontSaveSeed;
        int unknown4d8;
        bool unknown4dc;
        bool m_shouldSmoothCamera;
        float unused_4e0;
        cocos2d::CCObject* unknown4e8;
        float m_camera4f0;
        int unused4f4;
        float m_somegroup4f8;
        float m_groundRestriction;
        float m_ceilRestriction;
        bool unknown504;
        bool unknown505;
        float unknown508;
        float unknown50c;
        float unknown510;
        float unknown514;
        float unknown518;
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
        float unknown5c0;
        float unknown5c4;
        GJGroundLayer* m_bottomGround;
        GJGroundLayer* m_topGround;
        GEODE_PAD(0x8);
        bool m_isDead;
        bool m_startCameraAtCorner;
        bool m_cameraYLocked;
        bool m_cameraXLocked;
        bool unknown5e4;
        int m_ballFrameSeed;
        float unknown5ec;
        float unknown5f0;
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
        GEODE_PAD(0xb);
        bool unk4D0;
        bool unk4D1;
        cocos2d::CCArray* unk4D4;
        cocos2d::CCDictionary* unk4D8;
        GEODE_PAD(0x4);
        double unk4E0;
        double unk4E8;
        GEODE_PAD(0xc);
        float unk4FC;
        int unk500;
        GEODE_PAD(0x4);
        double unk508;
        GEODE_PAD(0x8);
        double unk518;
        double unk520;
        GEODE_PAD(0x4);
        bool m_hasGlitter;
        bool m_isBgEffectOff;
        bool unk52F;
        GameObject* unk530;
        bool unk534;
        bool unk535;
        bool m_disableGravityEffect;
};

class PointNode : public cocos2d::CCObject {
public:

    GEODE_CODEGEN_DLL static PointNode* create(cocos2d::CCPoint point);

        cocos2d::CCPoint m_point;
};

class UserInfoDelegate {
public:

};

class UploadActionDelegate {
public:

    GEODE_CODEGEN_DLL virtual void uploadActionFinished(int p0, int p1);

    GEODE_CODEGEN_DLL virtual void uploadActionFailed(int p0, int p1);

};

class UploadPopupDelegate {
public:

    GEODE_CODEGEN_DLL virtual void onClosePopup();

};

class ProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate {
public:

    GEODE_CODEGEN_DLL static ProfilePage* create(int accountID, bool idk);

    GEODE_CODEGEN_DLL void getUserInfoFailed(int p0);

    GEODE_CODEGEN_DLL bool init(int accountID, bool idk);

    GEODE_CODEGEN_DLL void onMyLevels(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void onUpdate(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void loadPageFromUserInfo(GJUserScore* score);

        GJUserScore* m_score;
        int m_accountID;
        GEODE_PAD(0x38);
        cocos2d::CCArray* m_buttons;
};

class RetryLevelLayer {
public:

    template <bool T=false>
    static RetryLevelLayer* create(){
        static_assert(T, "Implement RetryLevelLayer::create");
    }

};

class ScrollingLayer : public cocos2d::CCLayerColor {
public:

    template <bool T=false>
    static ScrollingLayer* create(cocos2d::CCSize p0, cocos2d::CCPoint p1, float p2){
        static_assert(T, "Implement ScrollingLayer::create");
    }

};

class SelectArtLayer {
public:

    GEODE_CODEGEN_DLL static SelectArtLayer* create(SelectArtType type);

};

class SetGroupIDLayer : public FLAlertLayer, public TextInputDelegate {
public:

    template <bool T=false>
    void onNextGroupID1(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetGroupIDLayer::onNextGroupID1");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetGroupIDLayer::textChanged");
    }

    GEODE_CODEGEN_DLL void updateGroupIDLabel();

    GEODE_CODEGEN_DLL void updateEditorLayerID();

    GEODE_CODEGEN_DLL void updateEditorLayerID2();

    GEODE_CODEGEN_DLL void updateZOrder();

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

class SetItemIDLayer {
public:

    template <bool T=false>
    static SetItemIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetItemIDLayer::create");
    }

};

class SetTargetIDLayer {
public:

    template <bool T=false>
    static SetTargetIDLayer* create(EffectGameObject* p0, cocos2d::CCArray* p1, gd::string p2){
        static_assert(T, "Implement SetTargetIDLayer::create");
    }

    template <bool T=false>
    void onTargetIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetTargetIDLayer::onTargetIDArrow");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetTargetIDLayer::textChanged");
    }

    template <bool T=false>
    void updateTargetID(){
        static_assert(T, "Implement SetTargetIDLayer::updateTargetID");
    }

};

class SetupAnimationPopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupAnimationPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupAnimationPopup::create");
    }

    template <bool T=false>
    void onTargetIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupAnimationPopup::onTargetIDArrow");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetupAnimationPopup::textChanged");
    }

    template <bool T=false>
    void updateTargetID(){
        static_assert(T, "Implement SetupAnimationPopup::updateTargetID");
    }

};

class SetupCollisionTriggerPopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupCollisionTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupCollisionTriggerPopup::create");
    }

    template <bool T=false>
    void onTargetIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupCollisionTriggerPopup::onTargetIDArrow");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetupCollisionTriggerPopup::textChanged");
    }

    template <bool T=false>
    void updateTargetID(){
        static_assert(T, "Implement SetupCollisionTriggerPopup::updateTargetID");
    }

};

class SetupOpacityPopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupOpacityPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupOpacityPopup::create");
    }

    template <bool T=false>
    void onTargetIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupOpacityPopup::onTargetIDArrow");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetupOpacityPopup::textChanged");
    }

    template <bool T=false>
    void updateTargetID(){
        static_assert(T, "Implement SetupOpacityPopup::updateTargetID");
    }

};

class SetupPickupTriggerPopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupPickupTriggerPopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupPickupTriggerPopup::create");
    }

    template <bool T=false>
    void onItemIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupPickupTriggerPopup::onItemIDArrow");
    }

    template <bool T=false>
    void onNextItemID(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupPickupTriggerPopup::onNextItemID");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetupPickupTriggerPopup::textChanged");
    }

    template <bool T=false>
    void updateItemID(){
        static_assert(T, "Implement SetupPickupTriggerPopup::updateItemID");
    }

        GEODE_PAD(0xc);
        CCTextInputNode* m_countInput;
};

class SetupPulsePopup : public FLAlertLayer, public cocos2d::extension::ColorPickerDelegate, public TextInputDelegate, public GJSpecialColorSelectDelegate {
public:

    GEODE_CODEGEN_DLL virtual void colorValueChanged(cocos2d::ccColor3B color);

    GEODE_CODEGEN_DLL bool init(EffectGameObject* triggerObj, cocos2d::CCArray* triggerObjs);

    GEODE_CODEGEN_DLL void updateColorValue();

    GEODE_CODEGEN_DLL void onSelectPulseMode(cocos2d::CCObject* p0);

    GEODE_CODEGEN_DLL void updatePulseMode();

        cocos2d::extension::CCControlColourPicker* m_colorPicker;
        GEODE_PAD(0x30);
        cocos2d::CCSprite* m_currentColorSpr;
        cocos2d::CCSprite* m_prevColorSpr;
        GEODE_PAD(0x64);
        int m_pulseMode;
};

class SetupShakePopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupShakePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupShakePopup::create");
    }

};

class SetupTouchTogglePopup : public FLAlertLayer {
public:

    template <bool T=false>
    static SetupTouchTogglePopup* create(EffectGameObject* p0, cocos2d::CCArray* p1){
        static_assert(T, "Implement SetupTouchTogglePopup::create");
    }

    template <bool T=false>
    void onTargetIDArrow(cocos2d::CCObject* p0){
        static_assert(T, "Implement SetupTouchTogglePopup::onTargetIDArrow");
    }

    template <bool T=false>
    void textChanged(CCTextInputNode* p0){
        static_assert(T, "Implement SetupTouchTogglePopup::textChanged");
    }

    template <bool T=false>
    void updateTargetID(){
        static_assert(T, "Implement SetupTouchTogglePopup::updateTargetID");
    }

};

class SimplePlayer : public cocos2d::CCSprite {
public:

    GEODE_CODEGEN_DLL void setSecondColor(const cocos2d::ccColor3B& color);

    GEODE_CODEGEN_DLL bool hasGlowOutline();

    GEODE_CODEGEN_DLL void setGlowOutline(bool value);

    GEODE_CODEGEN_DLL bool init(int iconID);

    GEODE_CODEGEN_DLL static SimplePlayer* create(int iconID);

    GEODE_CODEGEN_DLL void updatePlayerFrame(int iconID, IconType iconType);

    GEODE_CODEGEN_DLL void updateColors();

    GEODE_CODEGEN_DLL void setFrames(const char* firstLayer, const char* secondLayer, const char* birdDome, const char* outlineSprite, const char* detailSprite);

    GEODE_CODEGEN_DLL void setColor(const cocos2d::ccColor3B& color);

    GEODE_CODEGEN_DLL void setOpacity(unsigned char opacity);

        cocos2d::CCSprite* m_firstLayer;
        cocos2d::CCSprite* m_secondLayer;
        cocos2d::CCSprite* m_birdDome;
        cocos2d::CCSprite* m_outlineSprite;
        cocos2d::CCSprite* m_detailSprite;
        GJRobotSprite* m_robotSprite;
        GJSpiderSprite* m_spiderSprite;
        GEODE_PAD(0x4);
        bool m_hasGlowOutline;
};

class Slider : public cocos2d::CCLayer {
public:

    GEODE_CODEGEN_DLL void setValue(float val);

    GEODE_CODEGEN_DLL void setBarVisibility(bool v);

    GEODE_CODEGEN_DLL static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler click, float scale);

    GEODE_CODEGEN_DLL float getValue();

    GEODE_CODEGEN_DLL void updateBar();

    GEODE_CODEGEN_DLL static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler click, const char* unused, const char* grooveSpr, const char* thumbSpr, const char* thumbSprSel, float scale);

        SliderTouchLogic* m_touchLogic;
        cocos2d::CCSprite* m_sliderBar;
        cocos2d::CCSprite* m_groove;
        float m_unknown;
        float m_height;
};

class SliderThumb : public cocos2d::CCMenuItemImage {
public:

    GEODE_CODEGEN_DLL void setValue(float val);

    GEODE_CODEGEN_DLL float getValue();

        float m_length;
        bool m_vertical;
};

class SliderTouchLogic : public cocos2d::CCMenu {
public:

    GEODE_CODEGEN_DLL SliderThumb* getThumb() const;

        GEODE_PAD(0x4);
        float m_length;
        SliderThumb* m_thumb;
        Slider* m_slider;
        bool m_unknown;
        GEODE_PAD(0x8);
        bool m_vertical;
};

class StatsCell {
public:

    GEODE_CODEGEN_DLL void updateBGColor(unsigned int index);

    GEODE_CODEGEN_DLL void draw();

};

class TextAlertPopup {
public:

    GEODE_CODEGEN_DLL static TextAlertPopup* create(gd::string const& text, float time, float scale);

};

class ToggleTriggerAction : public cocos2d::CCNode {
public:

    template <bool T=false>
    static ToggleTriggerAction* createFromString(gd::string p0){
        static_assert(T, "Implement ToggleTriggerAction::createFromString");
    }

};

class TopArtistsLayer : public FLAlertLayer {
public:

    template <bool T=false>
    static TopArtistsLayer* create(){
        static_assert(T, "Implement TopArtistsLayer::create");
    }

    template <bool T=false>
    void setupLeaderboard(cocos2d::CCArray* p0){
        static_assert(T, "Implement TopArtistsLayer::setupLeaderboard");
    }

    template <bool T=false>
    bool init(){
        static_assert(T, "Implement TopArtistsLayer::init");
    }

    template <bool T=false>
    void loadPage(int p0){
        static_assert(T, "Implement TopArtistsLayer::loadPage");
    }

    template <bool T=false>
    void setupPageInfo(gd::string p0, char const* p1){
        static_assert(T, "Implement TopArtistsLayer::setupPageInfo");
    }

};

class TouchToggleAction : public cocos2d::CCNode {
public:

    template <bool T=false>
    static TouchToggleAction* createFromString(gd::string p0){
        static_assert(T, "Implement TouchToggleAction::createFromString");
    }

};

class UILayer : public cocos2d::CCLayerColor {
public:

    GEODE_CODEGEN_DLL static UILayer* create();

    template <bool T=false>
    void disableMenu(){
        static_assert(T, "Implement UILayer::disableMenu");
    }

    template <bool T=false>
    void enableMenu(){
        static_assert(T, "Implement UILayer::enableMenu");
    }

    template <bool T=false>
    void pCommand(cocos2d::CCNode* p0){
        static_assert(T, "Implement UILayer::pCommand");
    }

    template <bool T=false>
    void toggleCheckpointsMenu(bool p0){
        static_assert(T, "Implement UILayer::toggleCheckpointsMenu");
    }

    GEODE_CODEGEN_DLL void onCheck(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onDeleteCheck(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL void onPause(cocos2d::CCObject* pSender);

    GEODE_CODEGEN_DLL virtual void keyDown(cocos2d::enumKeyCodes key);

    GEODE_CODEGEN_DLL virtual void keyUp(cocos2d::enumKeyCodes key);

        GEODE_CODEGEN_DLL UILayer();
        GEODE_CODEGEN_DLL ~UILayer();
        GEODE_PAD(0x8);
        cocos2d::CCMenu* m_checkPointMenu;
};

class UndoObject : public cocos2d::CCObject {
public:

    GEODE_CODEGEN_DLL static UndoObject* create(GameObject* p0, UndoCommand p1);

    GEODE_CODEGEN_DLL static UndoObject* createWithArray(cocos2d::CCArray* p0, UndoCommand p1);

    GEODE_CODEGEN_DLL static UndoObject* createWithTransformObjects(cocos2d::CCArray* pObjects, UndoCommand nCommand);

        GameObject* m_gameObject;
        UndoCommand m_command;
        cocos2d::CCArray* m_objects;
        bool m_redo;
};

class UploadMessageDelegate {
public:

};

class VideoOptionsLayer : public FLAlertLayer {
public:

        GEODE_PAD(0x18);
        cocos2d::CCArray* m_resolutions;
        GEODE_PAD(0x4);
        int m_currentResolution;
};
