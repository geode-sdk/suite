
template<class Derived>
struct Modify<Derived, cocos2d::CCPoolManager> : ModifyBase<Modify<Derived, cocos2d::CCPoolManager>> {
	using ModifyBase<Modify<Derived, cocos2d::CCPoolManager>>::ModifyBase;
	using Base = cocos2d::CCPoolManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(426, x86::Thiscall, cocos2d::CCPoolManager, pop)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(427, x86::Cdecl, cocos2d::CCPoolManager, sharedPoolManager)
	}
};

template<class Derived>
struct Modify<Derived, PlayerObject> : ModifyBase<Modify<Derived, PlayerObject>> {
	using ModifyBase<Modify<Derived, PlayerObject>>::ModifyBase;
	using Base = PlayerObject;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1978, x86::Thiscall, PlayerObject, setVisible)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1982, x86::Thiscall, PlayerObject, setFlipX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1983, x86::Thiscall, PlayerObject, setFlipY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1984, x86::Thiscall, PlayerObject, resetObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1985, x86::Thiscall, PlayerObject, getRealPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1986, x86::Thiscall, PlayerObject, getOrientedBox)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1988, x86::Membercall, PlayerObject, activateStreak)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2003, x86::Membercall, PlayerObject, fadeOutStreak2)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2005, x86::Membercall, PlayerObject, flipGravity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2015, x86::Membercall, PlayerObject, incrementJumps)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2030, x86::Membercall, PlayerObject, playBurstEffect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2031, x86::Membercall, PlayerObject, playDeathEffect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2033, x86::Membercall, PlayerObject, playerDestroyed)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2034, x86::Membercall, PlayerObject, playerIsFalling)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2041, x86::Membercall, PlayerObject, pushButton)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2044, x86::Membercall, PlayerObject, releaseButton)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2052, x86::Membercall, PlayerObject, ringJump)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2055, x86::Membercall, PlayerObject, runNormalRotation)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2069, x86::Membercall, PlayerObject, spiderTestJump)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2077, x86::Membercall, PlayerObject, toggleBirdMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2078, x86::Membercall, PlayerObject, toggleDartMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2079, x86::Membercall, PlayerObject, toggleFlyMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2080, x86::Membercall, PlayerObject, toggleGhostEffect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2081, x86::Membercall, PlayerObject, togglePlayerScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2082, x86::Membercall, PlayerObject, toggleRobotMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2083, x86::Membercall, PlayerObject, toggleRollMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2084, x86::Membercall, PlayerObject, toggleSpiderMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2117, x86::Membercall, PlayerObject, updateTimeMod)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2121, x86::Membercall, PlayerObject, runRotateAction)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2122, x86::Membercall, PlayerObject, runBallRotation)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCActionTween> : ModifyBase<Modify<Derived, cocos2d::CCActionTween>> {
	using ModifyBase<Modify<Derived, cocos2d::CCActionTween>>::ModifyBase;
	using Base = cocos2d::CCActionTween;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1, x86::Cdecl, cocos2d::CCActionTween, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEGLView> : ModifyBase<Modify<Derived, cocos2d::CCEGLView>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEGLView>>::ModifyBase;
	using Base = cocos2d::CCEGLView;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(102, x86::Thiscall, cocos2d::CCEGLView, swapBuffers)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(103, x86::Thiscall, cocos2d::CCEGLView, updateWindow)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(104, x86::Thiscall, cocos2d::CCEGLView, toggleFullScreen)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(105, x86::Thiscall, cocos2d::CCEGLView, pollEvents)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(107, x86::Thiscall, cocos2d::CCEGLView, onGLFWCharCallback)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(108, x86::Thiscall, cocos2d::CCEGLView, onGLFWCursorEnterFunCallback)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(109, x86::Thiscall, cocos2d::CCEGLView, onGLFWDeviceChangeFunCallback)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(110, x86::Thiscall, cocos2d::CCEGLView, onGLFWError)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(111, x86::Thiscall, cocos2d::CCEGLView, onGLFWframebuffersize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(112, x86::Thiscall, cocos2d::CCEGLView, onGLFWMouseMoveCallBack)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(113, x86::Thiscall, cocos2d::CCEGLView, onGLFWMouseCallBack)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(114, x86::Thiscall, cocos2d::CCEGLView, onGLFWKeyCallback)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(115, x86::Thiscall, cocos2d::CCEGLView, onGLFWMouseScrollCallback)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(116, x86::Thiscall, cocos2d::CCEGLView, onGLFWWindowIconifyFunCallback)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(117, x86::Thiscall, cocos2d::CCEGLView, onGLFWWindowPosCallback)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(118, x86::Thiscall, cocos2d::CCEGLView, onGLFWWindowSizeFunCallback)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCActionManager> : ModifyBase<Modify<Derived, cocos2d::CCActionManager>> {
	using ModifyBase<Modify<Derived, cocos2d::CCActionManager>>::ModifyBase;
	using Base = cocos2d::CCActionManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2, x86::Thiscall, cocos2d::CCActionManager, addAction)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCFileUtils> : ModifyBase<Modify<Derived, cocos2d::CCFileUtils>> {
	using ModifyBase<Modify<Derived, cocos2d::CCFileUtils>>::ModifyBase;
	using Base = cocos2d::CCFileUtils;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(122, x86::Cdecl, cocos2d::CCFileUtils, sharedFileUtils)
	}
};

template<class Derived>
struct Modify<Derived, CCBlockLayer> : ModifyBase<Modify<Derived, CCBlockLayer>> {
	using ModifyBase<Modify<Derived, CCBlockLayer>>::ModifyBase;
	using Base = CCBlockLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCAnimate> : ModifyBase<Modify<Derived, cocos2d::CCAnimate>> {
	using ModifyBase<Modify<Derived, cocos2d::CCAnimate>>::ModifyBase;
	using Base = cocos2d::CCAnimate;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(3, x86::Cdecl, cocos2d::CCAnimate, create)
	}
};

template<class Derived>
struct Modify<Derived, CreatorLayer> : ModifyBase<Modify<Derived, CreatorLayer>> {
	using ModifyBase<Modify<Derived, CreatorLayer>>::ModifyBase;
	using Base = CreatorLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(863, x86::Membercall, CreatorLayer, onBack)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(864, x86::Membercall, CreatorLayer, onChallenge)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(865, x86::Membercall, CreatorLayer, onLeaderboards)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(868, x86::Thiscall, CreatorLayer, sceneWillResume)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(869, x86::Membercall, CreatorLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(870, x86::Optcall, CreatorLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCRotateBy> : ModifyBase<Modify<Derived, cocos2d::CCRotateBy>> {
	using ModifyBase<Modify<Derived, cocos2d::CCRotateBy>>::ModifyBase;
	using Base = cocos2d::CCRotateBy;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(433, x86::Cdecl, cocos2d::CCRotateBy, create)
	}
};

template<class Derived>
struct Modify<Derived, MoreVideoOptionsLayer> : ModifyBase<Modify<Derived, MoreVideoOptionsLayer>> {
	using ModifyBase<Modify<Derived, MoreVideoOptionsLayer>>::ModifyBase;
	using Base = MoreVideoOptionsLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCApplication> : ModifyBase<Modify<Derived, cocos2d::CCApplication>> {
	using ModifyBase<Modify<Derived, cocos2d::CCApplication>>::ModifyBase;
	using Base = cocos2d::CCApplication;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(5, x86::Thiscall, cocos2d::CCApplication, getCurrentLanguage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(6, x86::Thiscall, cocos2d::CCApplication, getTargetPlatform)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(7, x86::Thiscall, cocos2d::CCApplication, openURL)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(8, x86::Thiscall, cocos2d::CCApplication, setAnimationInterval)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(9, x86::Cdecl, cocos2d::CCApplication, sharedApplication)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCRepeatForever> : ModifyBase<Modify<Derived, cocos2d::CCRepeatForever>> {
	using ModifyBase<Modify<Derived, cocos2d::CCRepeatForever>>::ModifyBase;
	using Base = cocos2d::CCRepeatForever;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(432, x86::Cdecl, cocos2d::CCRepeatForever, create)
	}
};

template<class Derived>
struct Modify<Derived, DrawGridLayer> : ModifyBase<Modify<Derived, DrawGridLayer>> {
	using ModifyBase<Modify<Derived, DrawGridLayer>>::ModifyBase;
	using Base = DrawGridLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(910, x86::Membercall, DrawGridLayer, draw)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCAnimation> : ModifyBase<Modify<Derived, cocos2d::CCAnimation>> {
	using ModifyBase<Modify<Derived, cocos2d::CCAnimation>>::ModifyBase;
	using Base = cocos2d::CCAnimation;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(4, x86::Cdecl, cocos2d::CCAnimation, createWithSpriteFrames)
	}
};

template<class Derived>
struct Modify<Derived, EditorOptionsLayer> : ModifyBase<Modify<Derived, EditorOptionsLayer>> {
	using ModifyBase<Modify<Derived, EditorOptionsLayer>>::ModifyBase;
	using Base = EditorOptionsLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCArray> : ModifyBase<Modify<Derived, cocos2d::CCArray>> {
	using ModifyBase<Modify<Derived, cocos2d::CCArray>>::ModifyBase;
	using Base = cocos2d::CCArray;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(11, x86::Thiscall, cocos2d::CCArray, addObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(12, x86::Thiscall, cocos2d::CCArray, addObjectNew)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(13, x86::Thiscall, cocos2d::CCArray, addObjectsFromArray)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(14, x86::Thiscall, cocos2d::CCArray, containsObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(15, x86::Thiscall, cocos2d::CCArray, count)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(16, x86::Cdecl, cocos2d::CCArray, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(17, x86::Cdecl, cocos2d::CCArray, createWithObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(18, x86::Thiscall, cocos2d::CCArray, fastRemoveObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(19, x86::Thiscall, cocos2d::CCArray, fastRemoveObjectAtIndex)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(20, x86::Thiscall, cocos2d::CCArray, fastRemoveObjectAtIndexNew)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(21, x86::Thiscall, cocos2d::CCArray, lastObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(22, x86::Thiscall, cocos2d::CCArray, objectAtIndex)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(23, x86::Thiscall, cocos2d::CCArray, removeAllObjects)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(24, x86::Thiscall, cocos2d::CCArray, removeLastObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(25, x86::Thiscall, cocos2d::CCArray, removeObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(26, x86::Thiscall, cocos2d::CCArray, removeObjectAtIndex)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(27, x86::Thiscall, cocos2d::CCArray, stringAtIndex)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCBMFontConfiguration> : ModifyBase<Modify<Derived, cocos2d::CCBMFontConfiguration>> {
	using ModifyBase<Modify<Derived, cocos2d::CCBMFontConfiguration>>::ModifyBase;
	using Base = cocos2d::CCBMFontConfiguration;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(29, x86::Cdecl, cocos2d::CCBMFontConfiguration, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLabelBMFont> : ModifyBase<Modify<Derived, cocos2d::CCLabelBMFont>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLabelBMFont>>::ModifyBase;
	using Base = cocos2d::CCLabelBMFont;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(141, x86::Cdecl, cocos2d::CCLabelBMFont, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(142, x86::Thiscall, cocos2d::CCLabelBMFont, limitLabelWidth)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(143, x86::Thiscall, cocos2d::CCLabelBMFont, setScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(144, x86::Thiscall, cocos2d::CCLabelBMFont, setString)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(145, x86::Thiscall, cocos2d::CCLabelBMFont, setAnchorPoint)
	}
};

template<class Derived>
struct Modify<Derived, LabelGameObject> : ModifyBase<Modify<Derived, LabelGameObject>> {
	using ModifyBase<Modify<Derived, LabelGameObject>>::ModifyBase;
	using Base = LabelGameObject;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCBezierTo> : ModifyBase<Modify<Derived, cocos2d::CCBezierTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCBezierTo>>::ModifyBase;
	using Base = cocos2d::CCBezierTo;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(28, x86::Cdecl, cocos2d::CCBezierTo, create)
	}
};

template<class Derived>
struct Modify<Derived, SetupInstantCountPopup> : ModifyBase<Modify<Derived, SetupInstantCountPopup>> {
	using ModifyBase<Modify<Derived, SetupInstantCountPopup>>::ModifyBase;
	using Base = SetupInstantCountPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCNodeRGBA> : ModifyBase<Modify<Derived, cocos2d::CCNodeRGBA>> {
	using ModifyBase<Modify<Derived, cocos2d::CCNodeRGBA>>::ModifyBase;
	using Base = cocos2d::CCNodeRGBA;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(398, x86::Thiscall, cocos2d::CCNodeRGBA, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(399, x86::Thiscall, cocos2d::CCNodeRGBA, getOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(400, x86::Thiscall, cocos2d::CCNodeRGBA, getDisplayedOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(401, x86::Thiscall, cocos2d::CCNodeRGBA, setOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(402, x86::Thiscall, cocos2d::CCNodeRGBA, updateDisplayedOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(403, x86::Thiscall, cocos2d::CCNodeRGBA, isCascadeOpacityEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(404, x86::Thiscall, cocos2d::CCNodeRGBA, setCascadeOpacityEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(405, x86::Thiscall, cocos2d::CCNodeRGBA, getColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(406, x86::Thiscall, cocos2d::CCNodeRGBA, getDisplayedColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(407, x86::Thiscall, cocos2d::CCNodeRGBA, setColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(408, x86::Thiscall, cocos2d::CCNodeRGBA, updateDisplayedColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(409, x86::Thiscall, cocos2d::CCNodeRGBA, isCascadeColorEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(410, x86::Thiscall, cocos2d::CCNodeRGBA, setCascadeColorEnabled)
	}
};

template<class Derived>
struct Modify<Derived, SongCell> : ModifyBase<Modify<Derived, SongCell>> {
	using ModifyBase<Modify<Derived, SongCell>>::ModifyBase;
	using Base = SongCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2218, x86::Membercall, SongCell, updateBGColor)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCCallFunc> : ModifyBase<Modify<Derived, cocos2d::CCCallFunc>> {
	using ModifyBase<Modify<Derived, cocos2d::CCCallFunc>>::ModifyBase;
	using Base = cocos2d::CCCallFunc;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(30, x86::Cdecl, cocos2d::CCCallFunc, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSpriteBatchNode> : ModifyBase<Modify<Derived, cocos2d::CCSpriteBatchNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSpriteBatchNode>>::ModifyBase;
	using Base = cocos2d::CCSpriteBatchNode;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(511, x86::Cdecl, cocos2d::CCSpriteBatchNode, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(512, x86::Cdecl, cocos2d::CCSpriteBatchNode, createWithTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(513, x86::Thiscall, cocos2d::CCSpriteBatchNode, getUsedAtlasCapacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(514, x86::Thiscall, cocos2d::CCSpriteBatchNode, increaseAtlasCapacity)
	}
};

template<class Derived>
struct Modify<Derived, GhostTrailEffect> : ModifyBase<Modify<Derived, GhostTrailEffect>> {
	using ModifyBase<Modify<Derived, GhostTrailEffect>>::ModifyBase;
	using Base = GhostTrailEffect;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCCallFuncO> : ModifyBase<Modify<Derived, cocos2d::CCCallFuncO>> {
	using ModifyBase<Modify<Derived, cocos2d::CCCallFuncO>>::ModifyBase;
	using Base = cocos2d::CCCallFuncO;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(31, x86::Cdecl, cocos2d::CCCallFuncO, create)
	}
};

template<class Derived>
struct Modify<Derived, CustomSongLayer> : ModifyBase<Modify<Derived, CustomSongLayer>> {
	using ModifyBase<Modify<Derived, CustomSongLayer>>::ModifyBase;
	using Base = CustomSongLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSpriteFrame> : ModifyBase<Modify<Derived, cocos2d::CCSpriteFrame>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSpriteFrame>>::ModifyBase;
	using Base = cocos2d::CCSpriteFrame;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(515, x86::Cdecl, cocos2d::CCSpriteFrame, createWithTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(516, x86::Cdecl, cocos2d::CCSpriteFrame, createWithTexture)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCControl> : ModifyBase<Modify<Derived, cocos2d::extension::CCControl>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCControl>>::ModifyBase;
	using Base = cocos2d::extension::CCControl;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(573, x86::Thiscall, cocos2d::extension::CCControl, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(575, x86::Thiscall, cocos2d::extension::CCControl, sendActionsForControlEvents)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(576, x86::Thiscall, cocos2d::extension::CCControl, registerWithTouchDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(577, x86::Thiscall, cocos2d::extension::CCControl, setOpacityModifyRGB)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(578, x86::Thiscall, cocos2d::extension::CCControl, onExit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(579, x86::Thiscall, cocos2d::extension::CCControl, isTouchInside)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(580, x86::Thiscall, cocos2d::extension::CCControl, setEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(581, x86::Thiscall, cocos2d::extension::CCControl, onEnter)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(582, x86::Thiscall, cocos2d::extension::CCControl, isEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(583, x86::Thiscall, cocos2d::extension::CCControl, setSelected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(584, x86::Thiscall, cocos2d::extension::CCControl, isOpacityModifyRGB)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(585, x86::Thiscall, cocos2d::extension::CCControl, setHighlighted)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(586, x86::Thiscall, cocos2d::extension::CCControl, needsLayout)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(587, x86::Thiscall, cocos2d::extension::CCControl, getTouchLocation)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(588, x86::Thiscall, cocos2d::extension::CCControl, isHighlighted)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(589, x86::Thiscall, cocos2d::extension::CCControl, addTargetWithActionForControlEvents)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(590, x86::Thiscall, cocos2d::extension::CCControl, removeTargetWithActionForControlEvents)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(591, x86::Thiscall, cocos2d::extension::CCControl, isSelected)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDrawNode> : ModifyBase<Modify<Derived, cocos2d::CCDrawNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDrawNode>>::ModifyBase;
	using Base = cocos2d::CCDrawNode;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(89, x86::Thiscall, cocos2d::CCDrawNode, clear)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(90, x86::Cdecl, cocos2d::CCDrawNode, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(91, x86::Thiscall, cocos2d::CCDrawNode, drawPolygon)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(92, x86::Thiscall, cocos2d::CCDrawNode, drawSegment)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(93, x86::Thiscall, cocos2d::CCDrawNode, getBlendFunc)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(94, x86::Thiscall, cocos2d::CCDrawNode, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(95, x86::Thiscall, cocos2d::CCDrawNode, setBlendFunc)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(96, x86::Thiscall, cocos2d::CCDrawNode, draw)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCClippingNode> : ModifyBase<Modify<Derived, cocos2d::CCClippingNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCClippingNode>>::ModifyBase;
	using Base = cocos2d::CCClippingNode;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(32, x86::Cdecl, cocos2d::CCClippingNode, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(33, x86::Cdecl, cocos2d::CCClippingNode, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(34, x86::Thiscall, cocos2d::CCClippingNode, getAlphaThreshold)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(35, x86::Thiscall, cocos2d::CCClippingNode, getStencil)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(36, x86::Thiscall, cocos2d::CCClippingNode, isInverted)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(37, x86::Thiscall, cocos2d::CCClippingNode, onEnter)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(38, x86::Thiscall, cocos2d::CCClippingNode, onEnterTransitionDidFinish)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(39, x86::Thiscall, cocos2d::CCClippingNode, onExit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(40, x86::Thiscall, cocos2d::CCClippingNode, onExitTransitionDidStart)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(41, x86::Thiscall, cocos2d::CCClippingNode, setAlphaThreshold)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(42, x86::Thiscall, cocos2d::CCClippingNode, setInverted)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(43, x86::Thiscall, cocos2d::CCClippingNode, setStencil)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(44, x86::Thiscall, cocos2d::CCClippingNode, visit)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCIMEDelegate> : ModifyBase<Modify<Derived, cocos2d::CCIMEDelegate>> {
	using ModifyBase<Modify<Derived, cocos2d::CCIMEDelegate>>::ModifyBase;
	using Base = cocos2d::CCIMEDelegate;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(124, x86::Thiscall, cocos2d::CCIMEDelegate, attachWithIME)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(125, x86::Thiscall, cocos2d::CCIMEDelegate, detachWithIME)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDelayTime> : ModifyBase<Modify<Derived, cocos2d::CCDelayTime>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDelayTime>>::ModifyBase;
	using Base = cocos2d::CCDelayTime;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(45, x86::Cdecl, cocos2d::CCDelayTime, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDictionary> : ModifyBase<Modify<Derived, cocos2d::CCDictionary>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDictionary>>::ModifyBase;
	using Base = cocos2d::CCDictionary;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(46, x86::Thiscall, cocos2d::CCDictionary, allKeys)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(47, x86::Thiscall, cocos2d::CCDictionary, count)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(48, x86::Cdecl, cocos2d::CCDictionary, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(49, x86::Thiscall, cocos2d::CCDictionary, objectForKey)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(50, x86::Thiscall, cocos2d::CCDictionary, objectForKey)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(51, x86::Thiscall, cocos2d::CCDictionary, removeAllObjects)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(52, x86::Thiscall, cocos2d::CCDictionary, removeObjectForKey)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(53, x86::Thiscall, cocos2d::CCDictionary, setObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(54, x86::Thiscall, cocos2d::CCDictionary, setObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(55, x86::Thiscall, cocos2d::CCDictionary, valueForKey)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(56, x86::Thiscall, cocos2d::CCDictionary, valueForKey)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLabelTTF> : ModifyBase<Modify<Derived, cocos2d::CCLabelTTF>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLabelTTF>>::ModifyBase;
	using Base = cocos2d::CCLabelTTF;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(146, x86::Cdecl, cocos2d::CCLabelTTF, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(147, x86::Cdecl, cocos2d::CCLabelTTF, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(148, x86::Thiscall, cocos2d::CCLabelTTF, updateTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(149, x86::Thiscall, cocos2d::CCLabelTTF, setString)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSpriteFrameCache> : ModifyBase<Modify<Derived, cocos2d::CCSpriteFrameCache>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSpriteFrameCache>>::ModifyBase;
	using Base = cocos2d::CCSpriteFrameCache;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(517, x86::Thiscall, cocos2d::CCSpriteFrameCache, addSpriteFramesWithFile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(518, x86::Cdecl, cocos2d::CCSpriteFrameCache, sharedSpriteFrameCache)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(519, x86::Thiscall, cocos2d::CCSpriteFrameCache, spriteFrameByName)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDirector> : ModifyBase<Modify<Derived, cocos2d::CCDirector>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDirector>>::ModifyBase;
	using Base = cocos2d::CCDirector;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(58, x86::Thiscall, cocos2d::CCDirector, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(59, x86::Thiscall, cocos2d::CCDirector, getScheduler)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(60, x86::Thiscall, cocos2d::CCDirector, setScheduler)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(61, x86::Thiscall, cocos2d::CCDirector, getActionManager)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(62, x86::Thiscall, cocos2d::CCDirector, setActionManager)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(63, x86::Thiscall, cocos2d::CCDirector, getTouchDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(64, x86::Thiscall, cocos2d::CCDirector, setTouchDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(65, x86::Thiscall, cocos2d::CCDirector, getKeypadDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(66, x86::Thiscall, cocos2d::CCDirector, setKeypadDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(67, x86::Thiscall, cocos2d::CCDirector, getKeyboardDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(68, x86::Thiscall, cocos2d::CCDirector, setKeyboardDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(69, x86::Thiscall, cocos2d::CCDirector, getMouseDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(70, x86::Thiscall, cocos2d::CCDirector, setMouseDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(71, x86::Thiscall, cocos2d::CCDirector, getAccelerometer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(72, x86::Thiscall, cocos2d::CCDirector, setAccelerometer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(73, x86::Thiscall, cocos2d::CCDirector, getDeltaTime)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(74, x86::Thiscall, cocos2d::CCDirector, getSceneDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(75, x86::Thiscall, cocos2d::CCDirector, setSceneDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(76, x86::Thiscall, cocos2d::CCDirector, getWinSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(77, x86::Thiscall, cocos2d::CCDirector, pushScene)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(78, x86::Thiscall, cocos2d::CCDirector, replaceScene)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(79, x86::Thiscall, cocos2d::CCDirector, resetSmoothFixCounter)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(80, x86::Cdecl, cocos2d::CCDirector, sharedDirector)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(81, x86::Thiscall, cocos2d::CCDirector, calculateDeltaTime)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(82, x86::Thiscall, cocos2d::CCDirector, calculateMPF)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(83, x86::Thiscall, cocos2d::CCDirector, convertToGL)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(84, x86::Thiscall, cocos2d::CCDirector, drawScene)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(85, x86::Thiscall, cocos2d::CCDirector, setNextScene)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(86, x86::Thiscall, cocos2d::CCDirector, showStats)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(87, x86::Thiscall, cocos2d::CCDirector, updateContentScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(88, x86::Thiscall, cocos2d::CCDirector, popSceneWithTransition)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCFadeTo> : ModifyBase<Modify<Derived, cocos2d::CCFadeTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCFadeTo>>::ModifyBase;
	using Base = cocos2d::CCFadeTo;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(121, x86::Cdecl, cocos2d::CCFadeTo, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseElasticOut> : ModifyBase<Modify<Derived, cocos2d::CCEaseElasticOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseElasticOut>>::ModifyBase;
	using Base = cocos2d::CCEaseElasticOut;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(98, x86::Cdecl, cocos2d::CCEaseElasticOut, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMouseHandler> : ModifyBase<Modify<Derived, cocos2d::CCMouseHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMouseHandler>>::ModifyBase;
	using Base = cocos2d::CCMouseHandler;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(276, x86::Cdecl, cocos2d::CCMouseHandler, handlerWithDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(277, x86::Thiscall, cocos2d::CCMouseHandler, initWithDelegate)
	}
};

template<class Derived>
struct Modify<Derived, LoadingCircle> : ModifyBase<Modify<Derived, LoadingCircle>> {
	using ModifyBase<Modify<Derived, LoadingCircle>>::ModifyBase;
	using Base = LoadingCircle;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1727, x86::Optcall, LoadingCircle, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1728, x86::Membercall, LoadingCircle, show)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1729, x86::Membercall, LoadingCircle, fadeAndRemove)
	}
};

template<class Derived>
struct Modify<Derived, GJMessageCell> : ModifyBase<Modify<Derived, GJMessageCell>> {
	using ModifyBase<Modify<Derived, GJMessageCell>>::ModifyBase;
	using Base = GJMessageCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1281, x86::Membercall, GJMessageCell, updateBGColor)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCImage> : ModifyBase<Modify<Derived, cocos2d::CCImage>> {
	using ModifyBase<Modify<Derived, cocos2d::CCImage>>::ModifyBase;
	using Base = cocos2d::CCImage;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(131, x86::Thiscall, cocos2d::CCImage, initWithImageData)
	}
};

template<class Derived>
struct Modify<Derived, SetupInteractObjectPopup> : ModifyBase<Modify<Derived, SetupInteractObjectPopup>> {
	using ModifyBase<Modify<Derived, SetupInteractObjectPopup>>::ModifyBase;
	using Base = SetupInteractObjectPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseIn> : ModifyBase<Modify<Derived, cocos2d::CCEaseIn>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseIn>>::ModifyBase;
	using Base = cocos2d::CCEaseIn;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(99, x86::Cdecl, cocos2d::CCEaseIn, create)
	}
};

template<class Derived>
struct Modify<Derived, OnlineListDelegate> : ModifyBase<Modify<Derived, OnlineListDelegate>> {
	using ModifyBase<Modify<Derived, OnlineListDelegate>>::ModifyBase;
	using Base = OnlineListDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseInOut> : ModifyBase<Modify<Derived, cocos2d::CCEaseInOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseInOut>>::ModifyBase;
	using Base = cocos2d::CCEaseInOut;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(100, x86::Cdecl, cocos2d::CCEaseInOut, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMouseDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCMouseDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMouseDispatcher>>::ModifyBase;
	using Base = cocos2d::CCMouseDispatcher;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(274, x86::Thiscall, cocos2d::CCMouseDispatcher, dispatchScrollMSG)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(275, x86::Thiscall, cocos2d::CCMouseDispatcher, removeDelegate)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseOut> : ModifyBase<Modify<Derived, cocos2d::CCEaseOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseOut>>::ModifyBase;
	using Base = cocos2d::CCEaseOut;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(101, x86::Cdecl, cocos2d::CCEaseOut, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItemLabel> : ModifyBase<Modify<Derived, cocos2d::CCMenuItemLabel>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItemLabel>>::ModifyBase;
	using Base = cocos2d::CCMenuItemLabel;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(248, x86::Thiscall, cocos2d::CCMenuItemLabel, activate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(249, x86::Thiscall, cocos2d::CCMenuItemLabel, selected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(250, x86::Thiscall, cocos2d::CCMenuItemLabel, unselected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(251, x86::Thiscall, cocos2d::CCMenuItemLabel, setEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(252, x86::Thiscall, cocos2d::CCMenuItemLabel, getDisabledColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(253, x86::Thiscall, cocos2d::CCMenuItemLabel, setDisabledColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(254, x86::Thiscall, cocos2d::CCMenuItemLabel, getLabel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(255, x86::Thiscall, cocos2d::CCMenuItemLabel, setLabel)
	}
};

template<class Derived>
struct Modify<Derived, MoreOptionsLayer> : ModifyBase<Modify<Derived, MoreOptionsLayer>> {
	using ModifyBase<Modify<Derived, MoreOptionsLayer>>::ModifyBase;
	using Base = MoreOptionsLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1766, x86::Optcall, MoreOptionsLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1767, x86::Membercall, MoreOptionsLayer, addToggle)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1768, x86::Membercall, MoreOptionsLayer, onKeybindings)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEGLViewProtocol> : ModifyBase<Modify<Derived, cocos2d::CCEGLViewProtocol>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEGLViewProtocol>>::ModifyBase;
	using Base = cocos2d::CCEGLViewProtocol;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(119, x86::Thiscall, cocos2d::CCEGLViewProtocol, getViewPortRect)
	}
};

template<class Derived>
struct Modify<Derived, CCMenuItemSpriteExtra> : ModifyBase<Modify<Derived, CCMenuItemSpriteExtra>> {
	using ModifyBase<Modify<Derived, CCMenuItemSpriteExtra>>::ModifyBase;
	using Base = CCMenuItemSpriteExtra;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(748, x86::Optcall, CCMenuItemSpriteExtra, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(749, x86::Membercall, CCMenuItemSpriteExtra, setSizeMult)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(750, x86::Membercall, CCMenuItemSpriteExtra, destructor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(751, x86::Membercall, CCMenuItemSpriteExtra, destructor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(752, x86::Membercall, CCMenuItemSpriteExtra, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(753, x86::Membercall, CCMenuItemSpriteExtra, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(754, x86::Membercall, CCMenuItemSpriteExtra, activate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(755, x86::Membercall, CCMenuItemSpriteExtra, selected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(756, x86::Membercall, CCMenuItemSpriteExtra, unselected)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCFadeOut> : ModifyBase<Modify<Derived, cocos2d::CCFadeOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCFadeOut>>::ModifyBase;
	using Base = cocos2d::CCFadeOut;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(120, x86::Cdecl, cocos2d::CCFadeOut, create)
	}
};

template<class Derived>
struct Modify<Derived, TableViewCell> : ModifyBase<Modify<Derived, TableViewCell>> {
	using ModifyBase<Modify<Derived, TableViewCell>>::ModifyBase;
	using Base = TableViewCell;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCHide> : ModifyBase<Modify<Derived, cocos2d::CCHide>> {
	using ModifyBase<Modify<Derived, cocos2d::CCHide>>::ModifyBase;
	using Base = cocos2d::CCHide;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(123, x86::Cdecl, cocos2d::CCHide, create)
	}
};

template<class Derived>
struct Modify<Derived, ColorChannelSprite> : ModifyBase<Modify<Derived, ColorChannelSprite>> {
	using ModifyBase<Modify<Derived, ColorChannelSprite>>::ModifyBase;
	using Base = ColorChannelSprite;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(846, x86::Membercall, ColorChannelSprite, updateBlending)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(847, x86::Membercall, ColorChannelSprite, updateCopyLabel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(848, x86::Membercall, ColorChannelSprite, updateOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(849, x86::Membercall, ColorChannelSprite, updateValues)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(850, x86::Optcall, ColorChannelSprite, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSet> : ModifyBase<Modify<Derived, cocos2d::CCSet>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSet>>::ModifyBase;
	using Base = cocos2d::CCSet;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(445, x86::Thiscall, cocos2d::CCSet, acceptVisitor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(446, x86::Thiscall, cocos2d::CCSet, anyObject)
	}
};

template<class Derived>
struct Modify<Derived, TableView> : ModifyBase<Modify<Derived, TableView>> {
	using ModifyBase<Modify<Derived, TableView>>::ModifyBase;
	using Base = TableView;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2227, x86::Optcall, TableView, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2228, x86::Membercall, TableView, reloadData)
	}
};

template<class Derived>
struct Modify<Derived, ListButtonBar> : ModifyBase<Modify<Derived, ListButtonBar>> {
	using ModifyBase<Modify<Derived, ListButtonBar>>::ModifyBase;
	using Base = ListButtonBar;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, AchievementsLayer> : ModifyBase<Modify<Derived, AchievementsLayer>> {
	using ModifyBase<Modify<Derived, AchievementsLayer>>::ModifyBase;
	using Base = AchievementsLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(664, x86::Membercall, AchievementsLayer, loadPage)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCIMEDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCIMEDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCIMEDispatcher>>::ModifyBase;
	using Base = cocos2d::CCIMEDispatcher;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(126, x86::Cdecl, cocos2d::CCIMEDispatcher, sharedDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(127, x86::Thiscall, cocos2d::CCIMEDispatcher, addDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(128, x86::Thiscall, cocos2d::CCIMEDispatcher, removeDelegate)
	}
};

template<class Derived>
struct Modify<Derived, InfoLayer> : ModifyBase<Modify<Derived, InfoLayer>> {
	using ModifyBase<Modify<Derived, InfoLayer>>::ModifyBase;
	using Base = InfoLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1597, x86::Membercall, InfoLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1598, x86::Membercall, InfoLayer, setupCommentsBrowser)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1599, x86::Membercall, InfoLayer, onMore)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1600, x86::Membercall, InfoLayer, onLevelInfo)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1601, x86::Membercall, InfoLayer, loadPage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1602, x86::Optcall, InfoLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLayerColor> : ModifyBase<Modify<Derived, cocos2d::CCLayerColor>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLayerColor>>::ModifyBase;
	using Base = cocos2d::CCLayerColor;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(188, x86::Cdecl, cocos2d::CCLayerColor, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(189, x86::Thiscall, cocos2d::CCLayerColor, draw)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(190, x86::Thiscall, cocos2d::CCLayerColor, getBlendFunc)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(191, x86::Thiscall, cocos2d::CCLayerColor, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(192, x86::Thiscall, cocos2d::CCLayerColor, initWithColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(193, x86::Thiscall, cocos2d::CCLayerColor, initWithColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(194, x86::Thiscall, cocos2d::CCLayerColor, setBlendFunc)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(195, x86::Thiscall, cocos2d::CCLayerColor, setColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(196, x86::Thiscall, cocos2d::CCLayerColor, setContentSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(197, x86::Thiscall, cocos2d::CCLayerColor, setOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(198, x86::Thiscall, cocos2d::CCLayerColor, updateColor)
	}
};

template<class Derived>
struct Modify<Derived, GJChallengeItem> : ModifyBase<Modify<Derived, GJChallengeItem>> {
	using ModifyBase<Modify<Derived, GJChallengeItem>>::ModifyBase;
	using Base = GJChallengeItem;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CommentCell> : ModifyBase<Modify<Derived, CommentCell>> {
	using ModifyBase<Modify<Derived, CommentCell>>::ModifyBase;
	using Base = CommentCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(856, x86::Membercall, CommentCell, loadFromComment)
	}
};

template<class Derived>
struct Modify<Derived, ArtistCell> : ModifyBase<Modify<Derived, ArtistCell>> {
	using ModifyBase<Modify<Derived, ArtistCell>>::ModifyBase;
	using Base = ArtistCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(683, x86::Membercall, ArtistCell, updateBGColor)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCKeypadHandler> : ModifyBase<Modify<Derived, cocos2d::CCKeypadHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCKeypadHandler>>::ModifyBase;
	using Base = cocos2d::CCKeypadHandler;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(137, x86::Cdecl, cocos2d::CCKeypadHandler, handlerWithDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(138, x86::Thiscall, cocos2d::CCKeypadHandler, initWithDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(140, x86::Thiscall, cocos2d::CCKeypadHandler, getDelegate)
	}
};

template<class Derived>
struct Modify<Derived, SpawnTriggerAction> : ModifyBase<Modify<Derived, SpawnTriggerAction>> {
	using ModifyBase<Modify<Derived, SpawnTriggerAction>>::ModifyBase;
	using Base = SpawnTriggerAction;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCKeyboardDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCKeyboardDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCKeyboardDispatcher>>::ModifyBase;
	using Base = cocos2d::CCKeyboardDispatcher;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(132, x86::Thiscall, cocos2d::CCKeyboardDispatcher, dispatchKeyboardMSG)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(133, x86::Thiscall, cocos2d::CCKeyboardDispatcher, keyToString)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCKeyboardHandler> : ModifyBase<Modify<Derived, cocos2d::CCKeyboardHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCKeyboardHandler>>::ModifyBase;
	using Base = cocos2d::CCKeyboardHandler;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(134, x86::Cdecl, cocos2d::CCKeyboardHandler, handlerWithDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(135, x86::Thiscall, cocos2d::CCKeyboardHandler, initWithDelegate)
	}
};

template<class Derived>
struct Modify<Derived, GaragePage> : ModifyBase<Modify<Derived, GaragePage>> {
	using ModifyBase<Modify<Derived, GaragePage>>::ModifyBase;
	using Base = GaragePage;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1577, x86::Membercall, GaragePage, listButtonBarSwitchedPage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1578, x86::Membercall, GaragePage, destructor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1579, x86::Membercall, GaragePage, init)
	}
};

template<class Derived>
struct Modify<Derived, CCMenuItemToggler> : ModifyBase<Modify<Derived, CCMenuItemToggler>> {
	using ModifyBase<Modify<Derived, CCMenuItemToggler>>::ModifyBase;
	using Base = CCMenuItemToggler;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(763, x86::Optcall, CCMenuItemToggler, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(764, x86::Membercall, CCMenuItemToggler, setSizeMult)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(765, x86::Membercall, CCMenuItemToggler, toggle)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(766, x86::Membercall, CCMenuItemToggler, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(767, x86::Membercall, CCMenuItemToggler, activate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(768, x86::Membercall, CCMenuItemToggler, selected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(769, x86::Membercall, CCMenuItemToggler, unselected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(770, x86::Membercall, CCMenuItemToggler, setEnabled)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLayer> : ModifyBase<Modify<Derived, cocos2d::CCLayer>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLayer>>::ModifyBase;
	using Base = cocos2d::CCLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(151, x86::Thiscall, cocos2d::CCLayer, ccTouchBegan)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(152, x86::Thiscall, cocos2d::CCLayer, ccTouchCancelled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(153, x86::Thiscall, cocos2d::CCLayer, ccTouchEnded)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(154, x86::Thiscall, cocos2d::CCLayer, ccTouchMoved)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(155, x86::Thiscall, cocos2d::CCLayer, ccTouchesBegan)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(156, x86::Thiscall, cocos2d::CCLayer, ccTouchesCancelled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(157, x86::Thiscall, cocos2d::CCLayer, ccTouchesEnded)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(158, x86::Thiscall, cocos2d::CCLayer, ccTouchesMoved)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(159, x86::Cdecl, cocos2d::CCLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(160, x86::Thiscall, cocos2d::CCLayer, didAccelerate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(161, x86::Thiscall, cocos2d::CCLayer, getTouchMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(162, x86::Thiscall, cocos2d::CCLayer, getTouchPriority)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(163, x86::Thiscall, cocos2d::CCLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(164, x86::Thiscall, cocos2d::CCLayer, isAccelerometerEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(165, x86::Thiscall, cocos2d::CCLayer, isKeyboardEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(166, x86::Thiscall, cocos2d::CCLayer, isKeypadEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(167, x86::Thiscall, cocos2d::CCLayer, isMouseEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(168, x86::Thiscall, cocos2d::CCLayer, isTouchEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(169, x86::Thiscall, cocos2d::CCLayer, keyBackClicked)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(170, x86::Thiscall, cocos2d::CCLayer, keyDown)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(171, x86::Thiscall, cocos2d::CCLayer, keyMenuClicked)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(172, x86::Thiscall, cocos2d::CCLayer, onEnter)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(173, x86::Thiscall, cocos2d::CCLayer, onEnterTransitionDidFinish)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(174, x86::Thiscall, cocos2d::CCLayer, onExit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(175, x86::Thiscall, cocos2d::CCLayer, registerScriptTouchHandler)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(176, x86::Thiscall, cocos2d::CCLayer, registerWithTouchDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(177, x86::Thiscall, cocos2d::CCLayer, setAccelerometerEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(178, x86::Thiscall, cocos2d::CCLayer, setAccelerometerInterval)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(179, x86::Thiscall, cocos2d::CCLayer, setKeyboardEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(180, x86::Thiscall, cocos2d::CCLayer, setKeypadEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(181, x86::Thiscall, cocos2d::CCLayer, setMouseEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(182, x86::Thiscall, cocos2d::CCLayer, setTouchEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(183, x86::Thiscall, cocos2d::CCLayer, setTouchMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(184, x86::Thiscall, cocos2d::CCLayer, setTouchPriority)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(185, x86::Thiscall, cocos2d::CCLayer, unregisterScriptTouchHandler)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLayerRGBA> : ModifyBase<Modify<Derived, cocos2d::CCLayerRGBA>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLayerRGBA>>::ModifyBase;
	using Base = cocos2d::CCLayerRGBA;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(201, x86::Thiscall, cocos2d::CCLayerRGBA, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(202, x86::Thiscall, cocos2d::CCLayerRGBA, getOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(203, x86::Thiscall, cocos2d::CCLayerRGBA, getDisplayedOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(204, x86::Thiscall, cocos2d::CCLayerRGBA, setOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(205, x86::Thiscall, cocos2d::CCLayerRGBA, updateDisplayedOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(206, x86::Thiscall, cocos2d::CCLayerRGBA, isCascadeOpacityEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(207, x86::Thiscall, cocos2d::CCLayerRGBA, setCascadeOpacityEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(208, x86::Thiscall, cocos2d::CCLayerRGBA, getColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(209, x86::Thiscall, cocos2d::CCLayerRGBA, getDisplayedColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(210, x86::Thiscall, cocos2d::CCLayerRGBA, setColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(211, x86::Thiscall, cocos2d::CCLayerRGBA, updateDisplayedColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(212, x86::Thiscall, cocos2d::CCLayerRGBA, isCascadeColorEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(213, x86::Thiscall, cocos2d::CCLayerRGBA, setCascadeColorEnabled)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCParticleSystem> : ModifyBase<Modify<Derived, cocos2d::CCParticleSystem>> {
	using ModifyBase<Modify<Derived, cocos2d::CCParticleSystem>>::ModifyBase;
	using Base = cocos2d::CCParticleSystem;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(422, x86::Thiscall, cocos2d::CCParticleSystem, resetSystem)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(423, x86::Thiscall, cocos2d::CCParticleSystem, resumeSystem)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(424, x86::Thiscall, cocos2d::CCParticleSystem, stopSystem)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenu> : ModifyBase<Modify<Derived, cocos2d::CCMenu>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenu>>::ModifyBase;
	using Base = cocos2d::CCMenu;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(215, x86::Thiscall, cocos2d::CCMenu, alignItemsHorizontallyWithPadding)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(216, x86::Thiscall, cocos2d::CCMenu, alignItemsVerticallyWithPadding)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(217, x86::Cdecl, cocos2d::CCMenu, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(218, x86::Cdecl, cocos2d::CCMenu, createWithArray)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(219, x86::Cdecl, cocos2d::CCMenu, createWithItem)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(220, x86::Thiscall, cocos2d::CCMenu, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(221, x86::Thiscall, cocos2d::CCMenu, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(222, x86::Thiscall, cocos2d::CCMenu, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(223, x86::Thiscall, cocos2d::CCMenu, ccTouchBegan)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(224, x86::Thiscall, cocos2d::CCMenu, ccTouchMoved)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(225, x86::Thiscall, cocos2d::CCMenu, ccTouchEnded)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(226, x86::Thiscall, cocos2d::CCMenu, ccTouchCancelled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(227, x86::Thiscall, cocos2d::CCMenu, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(228, x86::Thiscall, cocos2d::CCMenu, registerWithTouchDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(229, x86::Thiscall, cocos2d::CCMenu, onExit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(230, x86::Thiscall, cocos2d::CCMenu, removeChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(231, x86::Thiscall, cocos2d::CCMenu, initWithArray)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItem> : ModifyBase<Modify<Derived, cocos2d::CCMenuItem>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItem>>::ModifyBase;
	using Base = cocos2d::CCMenuItem;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(236, x86::Thiscall, cocos2d::CCMenuItem, activate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(237, x86::Thiscall, cocos2d::CCMenuItem, selected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(238, x86::Thiscall, cocos2d::CCMenuItem, unselected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(239, x86::Thiscall, cocos2d::CCMenuItem, registerScriptTapHandler)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(240, x86::Thiscall, cocos2d::CCMenuItem, unregisterScriptTapHandler)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(241, x86::Thiscall, cocos2d::CCMenuItem, isEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(242, x86::Thiscall, cocos2d::CCMenuItem, setEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(243, x86::Thiscall, cocos2d::CCMenuItem, isSelected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(244, x86::Thiscall, cocos2d::CCMenuItem, setTarget)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(245, x86::Thiscall, cocos2d::CCMenuItem, rect)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItemImage> : ModifyBase<Modify<Derived, cocos2d::CCMenuItemImage>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItemImage>>::ModifyBase;
	using Base = cocos2d::CCMenuItemImage;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(246, x86::Thiscall, cocos2d::CCMenuItemImage, init)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItemSprite> : ModifyBase<Modify<Derived, cocos2d::CCMenuItemSprite>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItemSprite>>::ModifyBase;
	using Base = cocos2d::CCMenuItemSprite;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(256, x86::Thiscall, cocos2d::CCMenuItemSprite, selected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(257, x86::Thiscall, cocos2d::CCMenuItemSprite, unselected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(258, x86::Thiscall, cocos2d::CCMenuItemSprite, setEnabled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(259, x86::Thiscall, cocos2d::CCMenuItemSprite, getNormalImage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(260, x86::Thiscall, cocos2d::CCMenuItemSprite, setNormalImage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(261, x86::Thiscall, cocos2d::CCMenuItemSprite, getSelectedImage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(262, x86::Thiscall, cocos2d::CCMenuItemSprite, setSelectedImage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(263, x86::Thiscall, cocos2d::CCMenuItemSprite, getDisabledImage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(264, x86::Thiscall, cocos2d::CCMenuItemSprite, setDisabledImage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(265, x86::Thiscall, cocos2d::CCMenuItemSprite, updateImagesVisibility)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(266, x86::Thiscall, cocos2d::CCMenuItemSprite, initWithNormalSprite)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(267, x86::Cdecl, cocos2d::CCMenuItemSprite, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(268, x86::Cdecl, cocos2d::CCMenuItemSprite, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(269, x86::Cdecl, cocos2d::CCMenuItemSprite, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMoveTo> : ModifyBase<Modify<Derived, cocos2d::CCMoveTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMoveTo>>::ModifyBase;
	using Base = cocos2d::CCMoveTo;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(280, x86::Cdecl, cocos2d::CCMoveTo, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMotionStreak> : ModifyBase<Modify<Derived, cocos2d::CCMotionStreak>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMotionStreak>>::ModifyBase;
	using Base = cocos2d::CCMotionStreak;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(270, x86::Thiscall, cocos2d::CCMotionStreak, reset)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(271, x86::Thiscall, cocos2d::CCMotionStreak, resumeStroke)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(272, x86::Thiscall, cocos2d::CCMotionStreak, stopStroke)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(273, x86::Thiscall, cocos2d::CCMotionStreak, initWithFade)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMoveBy> : ModifyBase<Modify<Derived, cocos2d::CCMoveBy>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMoveBy>>::ModifyBase;
	using Base = cocos2d::CCMoveBy;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(279, x86::Cdecl, cocos2d::CCMoveBy, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCNode> : ModifyBase<Modify<Derived, cocos2d::CCNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCNode>>::ModifyBase;
	using Base = cocos2d::CCNode;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(282, x86::Thiscall, cocos2d::CCNode, _setZOrder)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(283, x86::Thiscall, cocos2d::CCNode, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(284, x86::Thiscall, cocos2d::CCNode, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(285, x86::Thiscall, cocos2d::CCNode, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(286, x86::Thiscall, cocos2d::CCNode, addComponent)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(287, x86::Thiscall, cocos2d::CCNode, cleanup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(288, x86::Thiscall, cocos2d::CCNode, convertToNodeSpace)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(289, x86::Thiscall, cocos2d::CCNode, convertToWorldSpace)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(290, x86::Cdecl, cocos2d::CCNode, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(291, x86::Thiscall, cocos2d::CCNode, draw)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(292, x86::Thiscall, cocos2d::CCNode, getActionByTag)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(293, x86::Thiscall, cocos2d::CCNode, getActionManager)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(294, x86::Thiscall, cocos2d::CCNode, getAnchorPoint)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(295, x86::Thiscall, cocos2d::CCNode, getAnchorPointInPoints)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(296, x86::Thiscall, cocos2d::CCNode, getCamera)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(297, x86::Thiscall, cocos2d::CCNode, getChildByTag)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(298, x86::Thiscall, cocos2d::CCNode, getChildren)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(299, x86::Thiscall, cocos2d::CCNode, getChildrenCount)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(300, x86::Thiscall, cocos2d::CCNode, getContentSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(301, x86::Thiscall, cocos2d::CCNode, getGLServerState)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(302, x86::Thiscall, cocos2d::CCNode, getGrid)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(303, x86::Thiscall, cocos2d::CCNode, getOrderOfArrival)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(304, x86::Thiscall, cocos2d::CCNode, getParent)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(305, x86::Thiscall, cocos2d::CCNode, getPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(306, x86::Thiscall, cocos2d::CCNode, getPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(307, x86::Thiscall, cocos2d::CCNode, getPositionX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(308, x86::Thiscall, cocos2d::CCNode, getPositionY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(309, x86::Thiscall, cocos2d::CCNode, getRotation)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(310, x86::Thiscall, cocos2d::CCNode, getRotationX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(311, x86::Thiscall, cocos2d::CCNode, getRotationY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(312, x86::Thiscall, cocos2d::CCNode, getScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(313, x86::Thiscall, cocos2d::CCNode, getScaleX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(314, x86::Thiscall, cocos2d::CCNode, getScaleY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(315, x86::Thiscall, cocos2d::CCNode, getScaledContentSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(316, x86::Thiscall, cocos2d::CCNode, getScheduler)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(317, x86::Thiscall, cocos2d::CCNode, getShaderProgram)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(318, x86::Thiscall, cocos2d::CCNode, getSkewX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(319, x86::Thiscall, cocos2d::CCNode, getSkewY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(320, x86::Thiscall, cocos2d::CCNode, getUserData)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(321, x86::Thiscall, cocos2d::CCNode, getUserObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(322, x86::Thiscall, cocos2d::CCNode, getVertexZ)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(323, x86::Thiscall, cocos2d::CCNode, getZOrder)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(324, x86::Thiscall, cocos2d::CCNode, ignoreAnchorPointForPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(325, x86::Thiscall, cocos2d::CCNode, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(326, x86::Thiscall, cocos2d::CCNode, isIgnoreAnchorPointForPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(327, x86::Thiscall, cocos2d::CCNode, isRunning)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(328, x86::Thiscall, cocos2d::CCNode, isVisible)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(329, x86::Thiscall, cocos2d::CCNode, nodeToParentTransform)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(330, x86::Thiscall, cocos2d::CCNode, nodeToWorldTransform)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(331, x86::Thiscall, cocos2d::CCNode, onEnter)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(332, x86::Thiscall, cocos2d::CCNode, onEnterTransitionDidFinish)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(333, x86::Thiscall, cocos2d::CCNode, onExit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(334, x86::Thiscall, cocos2d::CCNode, onExitTransitionDidStart)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(335, x86::Thiscall, cocos2d::CCNode, parentToNodeTransform)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(336, x86::Thiscall, cocos2d::CCNode, pauseSchedulerAndActions)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(337, x86::Thiscall, cocos2d::CCNode, registerScriptHandler)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(338, x86::Thiscall, cocos2d::CCNode, removeAllChildren)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(339, x86::Thiscall, cocos2d::CCNode, removeAllChildrenWithCleanup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(340, x86::Thiscall, cocos2d::CCNode, removeAllComponents)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(341, x86::Thiscall, cocos2d::CCNode, removeChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(342, x86::Thiscall, cocos2d::CCNode, removeChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(343, x86::Thiscall, cocos2d::CCNode, removeChildByTag)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(344, x86::Thiscall, cocos2d::CCNode, removeChildByTag)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(345, x86::Thiscall, cocos2d::CCNode, removeComponent)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(346, x86::Thiscall, cocos2d::CCNode, removeComponent)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(347, x86::Thiscall, cocos2d::CCNode, removeFromParent)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(348, x86::Thiscall, cocos2d::CCNode, removeFromParentAndCleanup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(349, x86::Thiscall, cocos2d::CCNode, removeMeAndCleanup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(350, x86::Thiscall, cocos2d::CCNode, reorderChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(351, x86::Thiscall, cocos2d::CCNode, resumeSchedulerAndActions)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(352, x86::Thiscall, cocos2d::CCNode, runAction)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(353, x86::Thiscall, cocos2d::CCNode, schedule)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(354, x86::Thiscall, cocos2d::CCNode, schedule)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(355, x86::Thiscall, cocos2d::CCNode, scheduleUpdate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(356, x86::Thiscall, cocos2d::CCNode, setActionManager)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(357, x86::Thiscall, cocos2d::CCNode, setAnchorPoint)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(358, x86::Thiscall, cocos2d::CCNode, setContentSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(359, x86::Thiscall, cocos2d::CCNode, setGLServerState)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(360, x86::Thiscall, cocos2d::CCNode, setGrid)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(361, x86::Thiscall, cocos2d::CCNode, setOrderOfArrival)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(362, x86::Thiscall, cocos2d::CCNode, setParent)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(363, x86::Thiscall, cocos2d::CCNode, setPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(364, x86::Thiscall, cocos2d::CCNode, setPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(365, x86::Thiscall, cocos2d::CCNode, setPositionX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(366, x86::Thiscall, cocos2d::CCNode, setPositionY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(367, x86::Thiscall, cocos2d::CCNode, setRotation)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(368, x86::Thiscall, cocos2d::CCNode, setRotationX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(369, x86::Thiscall, cocos2d::CCNode, setRotationY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(370, x86::Thiscall, cocos2d::CCNode, setScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(371, x86::Thiscall, cocos2d::CCNode, setScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(372, x86::Thiscall, cocos2d::CCNode, setScaleX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(373, x86::Thiscall, cocos2d::CCNode, setScaleY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(374, x86::Thiscall, cocos2d::CCNode, setScheduler)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(375, x86::Thiscall, cocos2d::CCNode, setShaderProgram)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(376, x86::Thiscall, cocos2d::CCNode, setSkewX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(377, x86::Thiscall, cocos2d::CCNode, setSkewY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(378, x86::Thiscall, cocos2d::CCNode, setUserData)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(379, x86::Thiscall, cocos2d::CCNode, setUserObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(380, x86::Thiscall, cocos2d::CCNode, setVertexZ)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(381, x86::Thiscall, cocos2d::CCNode, setVisible)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(382, x86::Thiscall, cocos2d::CCNode, setZOrder)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(383, x86::Thiscall, cocos2d::CCNode, sortAllChildren)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(384, x86::Thiscall, cocos2d::CCNode, stopActionByTag)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(385, x86::Thiscall, cocos2d::CCNode, stopAllActions)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(386, x86::Thiscall, cocos2d::CCNode, unregisterScriptHandler)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(387, x86::Thiscall, cocos2d::CCNode, unschedule)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(388, x86::Thiscall, cocos2d::CCNode, unscheduleAllSelectors)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(389, x86::Thiscall, cocos2d::CCNode, unscheduleUpdate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(390, x86::Thiscall, cocos2d::CCNode, update)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(391, x86::Thiscall, cocos2d::CCNode, updateTransform)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(392, x86::Thiscall, cocos2d::CCNode, updateTweenAction)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(393, x86::Thiscall, cocos2d::CCNode, visit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(394, x86::Thiscall, cocos2d::CCNode, worldToNodeTransform)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCRenderTexture> : ModifyBase<Modify<Derived, cocos2d::CCRenderTexture>> {
	using ModifyBase<Modify<Derived, cocos2d::CCRenderTexture>>::ModifyBase;
	using Base = cocos2d::CCRenderTexture;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(428, x86::Thiscall, cocos2d::CCRenderTexture, begin)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(429, x86::Thiscall, cocos2d::CCRenderTexture, end)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(430, x86::Cdecl, cocos2d::CCRenderTexture, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(431, x86::Thiscall, cocos2d::CCRenderTexture, newCCImage)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCObject> : ModifyBase<Modify<Derived, cocos2d::CCObject>> {
	using ModifyBase<Modify<Derived, cocos2d::CCObject>>::ModifyBase;
	using Base = cocos2d::CCObject;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(412, x86::Thiscall, cocos2d::CCObject, acceptVisitor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(413, x86::Thiscall, cocos2d::CCObject, autorelease)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(414, x86::Thiscall, cocos2d::CCObject, canEncode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(415, x86::Thiscall, cocos2d::CCObject, encodeWithCoder)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(416, x86::Thiscall, cocos2d::CCObject, getTag)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(417, x86::Thiscall, cocos2d::CCObject, isEqual)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(418, x86::Thiscall, cocos2d::CCObject, release)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(419, x86::Thiscall, cocos2d::CCObject, retain)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(420, x86::Thiscall, cocos2d::CCObject, setTag)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCParticleSystemQuad> : ModifyBase<Modify<Derived, cocos2d::CCParticleSystemQuad>> {
	using ModifyBase<Modify<Derived, cocos2d::CCParticleSystemQuad>>::ModifyBase;
	using Base = cocos2d::CCParticleSystemQuad;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(425, x86::Cdecl, cocos2d::CCParticleSystemQuad, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCScaleTo> : ModifyBase<Modify<Derived, cocos2d::CCScaleTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCScaleTo>>::ModifyBase;
	using Base = cocos2d::CCScaleTo;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(434, x86::Cdecl, cocos2d::CCScaleTo, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(435, x86::Cdecl, cocos2d::CCScaleTo, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCScene> : ModifyBase<Modify<Derived, cocos2d::CCScene>> {
	using ModifyBase<Modify<Derived, cocos2d::CCScene>>::ModifyBase;
	using Base = cocos2d::CCScene;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(436, x86::Cdecl, cocos2d::CCScene, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(437, x86::Thiscall, cocos2d::CCScene, getHighestChildZ)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCScheduler> : ModifyBase<Modify<Derived, cocos2d::CCScheduler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCScheduler>>::ModifyBase;
	using Base = cocos2d::CCScheduler;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(438, x86::Thiscall, cocos2d::CCScheduler, scheduleSelector)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(439, x86::Thiscall, cocos2d::CCScheduler, scheduleUpdateForTarget)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(440, x86::Thiscall, cocos2d::CCScheduler, unscheduleAllForTarget)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(441, x86::Thiscall, cocos2d::CCScheduler, update)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSequence> : ModifyBase<Modify<Derived, cocos2d::CCSequence>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSequence>>::ModifyBase;
	using Base = cocos2d::CCSequence;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(442, x86::Cdecl, cocos2d::CCSequence, createWithVariableList)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSprite> : ModifyBase<Modify<Derived, cocos2d::CCSprite>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSprite>>::ModifyBase;
	using Base = cocos2d::CCSprite;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(448, x86::Thiscall, cocos2d::CCSprite, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(449, x86::Thiscall, cocos2d::CCSprite, setVertexZ)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(450, x86::Thiscall, cocos2d::CCSprite, setScaleX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(451, x86::Thiscall, cocos2d::CCSprite, setScaleY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(452, x86::Thiscall, cocos2d::CCSprite, setScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(453, x86::Thiscall, cocos2d::CCSprite, setPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(454, x86::Thiscall, cocos2d::CCSprite, setSkewX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(455, x86::Thiscall, cocos2d::CCSprite, setSkewY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(456, x86::Thiscall, cocos2d::CCSprite, setAnchorPoint)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(457, x86::Thiscall, cocos2d::CCSprite, setVisible)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(458, x86::Thiscall, cocos2d::CCSprite, setRotation)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(459, x86::Thiscall, cocos2d::CCSprite, setRotationX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(460, x86::Thiscall, cocos2d::CCSprite, setRotationY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(461, x86::Thiscall, cocos2d::CCSprite, ignoreAnchorPointForPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(462, x86::Thiscall, cocos2d::CCSprite, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(463, x86::Thiscall, cocos2d::CCSprite, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(464, x86::Thiscall, cocos2d::CCSprite, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(465, x86::Thiscall, cocos2d::CCSprite, removeChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(466, x86::Thiscall, cocos2d::CCSprite, removeAllChildrenWithCleanup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(467, x86::Thiscall, cocos2d::CCSprite, reorderChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(468, x86::Thiscall, cocos2d::CCSprite, sortAllChildren)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(469, x86::Thiscall, cocos2d::CCSprite, draw)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(470, x86::Thiscall, cocos2d::CCSprite, updateTransform)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(471, x86::Thiscall, cocos2d::CCSprite, setOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(472, x86::Thiscall, cocos2d::CCSprite, updateDisplayedOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(473, x86::Thiscall, cocos2d::CCSprite, setColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(474, x86::Thiscall, cocos2d::CCSprite, updateDisplayedColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(475, x86::Thiscall, cocos2d::CCSprite, setOpacityModifyRGB)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(476, x86::Thiscall, cocos2d::CCSprite, isOpacityModifyRGB)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(477, x86::Thiscall, cocos2d::CCSprite, initWithTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(478, x86::Thiscall, cocos2d::CCSprite, initWithTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(479, x86::Thiscall, cocos2d::CCSprite, initWithTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(480, x86::Thiscall, cocos2d::CCSprite, initWithSpriteFrame)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(481, x86::Thiscall, cocos2d::CCSprite, initWithSpriteFrameName)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(482, x86::Thiscall, cocos2d::CCSprite, initWithFile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(483, x86::Thiscall, cocos2d::CCSprite, initWithFile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(484, x86::Thiscall, cocos2d::CCSprite, setTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(485, x86::Thiscall, cocos2d::CCSprite, getTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(486, x86::Thiscall, cocos2d::CCSprite, setChildColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(487, x86::Thiscall, cocos2d::CCSprite, setChildOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(488, x86::Thiscall, cocos2d::CCSprite, getBatchNode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(489, x86::Thiscall, cocos2d::CCSprite, setBatchNode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(490, x86::Thiscall, cocos2d::CCSprite, refreshTextureRect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(491, x86::Thiscall, cocos2d::CCSprite, setTextureRect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(492, x86::Thiscall, cocos2d::CCSprite, setTextureRect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(493, x86::Thiscall, cocos2d::CCSprite, setVertexRect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(494, x86::Thiscall, cocos2d::CCSprite, setDisplayFrame)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(495, x86::Thiscall, cocos2d::CCSprite, isFrameDisplayed)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(496, x86::Thiscall, cocos2d::CCSprite, displayFrame)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(497, x86::Thiscall, cocos2d::CCSprite, setDisplayFrameWithAnimationName)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(498, x86::Thiscall, cocos2d::CCSprite, setTextureCoords)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(499, x86::Thiscall, cocos2d::CCSprite, updateBlendFunc)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(500, x86::Thiscall, cocos2d::CCSprite, setReorderChildDirtyRecursively)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(501, x86::Thiscall, cocos2d::CCSprite, setDirtyRecursively)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(503, x86::Cdecl, cocos2d::CCSprite, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(504, x86::Cdecl, cocos2d::CCSprite, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(505, x86::Cdecl, cocos2d::CCSprite, createWithSpriteFrame)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(506, x86::Cdecl, cocos2d::CCSprite, createWithSpriteFrameName)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(507, x86::Cdecl, cocos2d::CCSprite, createWithTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(508, x86::Cdecl, cocos2d::CCSprite, createWithTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(509, x86::Thiscall, cocos2d::CCSprite, setFlipX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(510, x86::Thiscall, cocos2d::CCSprite, setFlipY)
	}
};

template<class Derived>
struct Modify<Derived, LevelSearchLayer> : ModifyBase<Modify<Derived, LevelSearchLayer>> {
	using ModifyBase<Modify<Derived, LevelSearchLayer>>::ModifyBase;
	using Base = LevelSearchLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1710, x86::Optcall, LevelSearchLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1711, x86::Membercall, LevelSearchLayer, getSearchObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1712, x86::Membercall, LevelSearchLayer, onMoreOptions)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1713, x86::Membercall, LevelSearchLayer, onSearch)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCStandardTouchHandler> : ModifyBase<Modify<Derived, cocos2d::CCStandardTouchHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCStandardTouchHandler>>::ModifyBase;
	using Base = cocos2d::CCStandardTouchHandler;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(520, x86::Cdecl, cocos2d::CCStandardTouchHandler, handlerWithDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(521, x86::Thiscall, cocos2d::CCStandardTouchHandler, initWithDelegate)
	}
};

template<class Derived>
struct Modify<Derived, NumberInputDelegate> : ModifyBase<Modify<Derived, NumberInputDelegate>> {
	using ModifyBase<Modify<Derived, NumberInputDelegate>>::ModifyBase;
	using Base = NumberInputDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MusicDownloadManager> : ModifyBase<Modify<Derived, MusicDownloadManager>> {
	using ModifyBase<Modify<Derived, MusicDownloadManager>>::ModifyBase;
	using Base = MusicDownloadManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1778, x86::Optcall, MusicDownloadManager, sharedState)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1779, x86::Membercall, MusicDownloadManager, pathForSong)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1780, x86::Membercall, MusicDownloadManager, getDownloadedSongs)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1781, x86::Membercall, MusicDownloadManager, songStateChanged)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCString> : ModifyBase<Modify<Derived, cocos2d::CCString>> {
	using ModifyBase<Modify<Derived, cocos2d::CCString>>::ModifyBase;
	using Base = cocos2d::CCString;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(523, x86::Thiscall, cocos2d::CCString, isEqual)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(524, x86::Thiscall, cocos2d::CCString, acceptVisitor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(525, x86::Thiscall, cocos2d::CCString, copyWithZone)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(526, x86::Thiscall, cocos2d::CCString, boolValue)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(527, x86::Thiscall, cocos2d::CCString, doubleValue)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(528, x86::Thiscall, cocos2d::CCString, floatValue)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(529, x86::Thiscall, cocos2d::CCString, getCString)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(530, x86::Thiscall, cocos2d::CCString, intValue)
	}
};

template<class Derived>
struct Modify<Derived, GJUserScore> : ModifyBase<Modify<Derived, GJUserScore>> {
	using ModifyBase<Modify<Derived, GJUserScore>>::ModifyBase;
	using Base = GJUserScore;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1328, x86::Optcall, GJUserScore, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1329, x86::Optcall, GJUserScore, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTargetedTouchHandler> : ModifyBase<Modify<Derived, cocos2d::CCTargetedTouchHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTargetedTouchHandler>>::ModifyBase;
	using Base = cocos2d::CCTargetedTouchHandler;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(531, x86::Cdecl, cocos2d::CCTargetedTouchHandler, handlerWithDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(532, x86::Thiscall, cocos2d::CCTargetedTouchHandler, initWithDelegate)
	}
};

template<class Derived>
struct Modify<Derived, SetupCountTriggerPopup> : ModifyBase<Modify<Derived, SetupCountTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupCountTriggerPopup>>::ModifyBase;
	using Base = SetupCountTriggerPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTexture2D> : ModifyBase<Modify<Derived, cocos2d::CCTexture2D>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTexture2D>>::ModifyBase;
	using Base = cocos2d::CCTexture2D;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(536, x86::Thiscall, cocos2d::CCTexture2D, getContentSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(537, x86::Thiscall, cocos2d::CCTexture2D, getMaxS)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(538, x86::Thiscall, cocos2d::CCTexture2D, getMaxT)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(539, x86::Thiscall, cocos2d::CCTexture2D, getName)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(540, x86::Thiscall, cocos2d::CCTexture2D, getPixelFormat)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(541, x86::Thiscall, cocos2d::CCTexture2D, getPixelsHigh)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(542, x86::Thiscall, cocos2d::CCTexture2D, getPixelsWide)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(543, x86::Thiscall, cocos2d::CCTexture2D, getShaderProgram)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(544, x86::Thiscall, cocos2d::CCTexture2D, initPremultipliedATextureWithImage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(545, x86::Thiscall, cocos2d::CCTexture2D, initWithData)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(546, x86::Thiscall, cocos2d::CCTexture2D, setAliasTexParameters)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(547, x86::Thiscall, cocos2d::CCTexture2D, setAntiAliasTexParameters)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(548, x86::Thiscall, cocos2d::CCTexture2D, setMaxS)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(549, x86::Thiscall, cocos2d::CCTexture2D, setMaxT)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(550, x86::Thiscall, cocos2d::CCTexture2D, setShaderProgram)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(551, x86::Thiscall, cocos2d::CCTexture2D, initWithImage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(552, x86::Thiscall, cocos2d::CCTexture2D, setTexParameters)
	}
};

template<class Derived>
struct Modify<Derived, ColorSelectDelegate> : ModifyBase<Modify<Derived, ColorSelectDelegate>> {
	using ModifyBase<Modify<Derived, ColorSelectDelegate>>::ModifyBase;
	using Base = ColorSelectDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTextFieldTTF> : ModifyBase<Modify<Derived, cocos2d::CCTextFieldTTF>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTextFieldTTF>>::ModifyBase;
	using Base = cocos2d::CCTextFieldTTF;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(553, x86::Cdecl, cocos2d::CCTextFieldTTF, textFieldWithPlaceHolder)
	}
};

template<class Derived>
struct Modify<Derived, CCCircleWaveDelegate> : ModifyBase<Modify<Derived, CCCircleWaveDelegate>> {
	using ModifyBase<Modify<Derived, CCCircleWaveDelegate>>::ModifyBase;
	using Base = CCCircleWaveDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTextureCache> : ModifyBase<Modify<Derived, cocos2d::CCTextureCache>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTextureCache>>::ModifyBase;
	using Base = cocos2d::CCTextureCache;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(554, x86::Thiscall, cocos2d::CCTextureCache, addImage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(555, x86::Cdecl, cocos2d::CCTextureCache, sharedTextureCache)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTime> : ModifyBase<Modify<Derived, cocos2d::CCTime>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTime>>::ModifyBase;
	using Base = cocos2d::CCTime;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(556, x86::Cdecl, cocos2d::CCTime, gettimeofdayCocos2d)
	}
};

template<class Derived>
struct Modify<Derived, PauseLayer> : ModifyBase<Modify<Derived, PauseLayer>> {
	using ModifyBase<Modify<Derived, PauseLayer>>::ModifyBase;
	using Base = PauseLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1810, x86::Membercall, PauseLayer, createToggleButton)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTintTo> : ModifyBase<Modify<Derived, cocos2d::CCTintTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTintTo>>::ModifyBase;
	using Base = cocos2d::CCTintTo;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(557, x86::Cdecl, cocos2d::CCTintTo, create)
	}
};

template<class Derived>
struct Modify<Derived, GameSoundManager> : ModifyBase<Modify<Derived, GameSoundManager>> {
	using ModifyBase<Modify<Derived, GameSoundManager>>::ModifyBase;
	using Base = GameSoundManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1549, x86::Membercall, GameSoundManager, playEffect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1552, x86::Optcall, GameSoundManager, sharedManager)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTouch> : ModifyBase<Modify<Derived, cocos2d::CCTouch>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTouch>>::ModifyBase;
	using Base = cocos2d::CCTouch;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(558, x86::Thiscall, cocos2d::CCTouch, getDelta)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(559, x86::Thiscall, cocos2d::CCTouch, getLocationInView)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(560, x86::Thiscall, cocos2d::CCTouch, getPreviousLocationInView)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(561, x86::Thiscall, cocos2d::CCTouch, getLocation)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTouchDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCTouchDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTouchDispatcher>>::ModifyBase;
	using Base = cocos2d::CCTouchDispatcher;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(562, x86::Thiscall, cocos2d::CCTouchDispatcher, addTargetedDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(563, x86::Thiscall, cocos2d::CCTouchDispatcher, addStandardDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(564, x86::Thiscall, cocos2d::CCTouchDispatcher, removeDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(565, x86::Thiscall, cocos2d::CCTouchDispatcher, decrementForcePrio)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(566, x86::Thiscall, cocos2d::CCTouchDispatcher, incrementForcePrio)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(567, x86::Thiscall, cocos2d::CCTouchDispatcher, touches)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTouchHandler> : ModifyBase<Modify<Derived, cocos2d::CCTouchHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTouchHandler>>::ModifyBase;
	using Base = cocos2d::CCTouchHandler;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(569, x86::Thiscall, cocos2d::CCTouchHandler, initWithDelegate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(570, x86::Thiscall, cocos2d::CCTouchHandler, getPriority)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTransitionFade> : ModifyBase<Modify<Derived, cocos2d::CCTransitionFade>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTransitionFade>>::ModifyBase;
	using Base = cocos2d::CCTransitionFade;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(572, x86::Cdecl, cocos2d::CCTransitionFade, create)
	}
};

template<class Derived>
struct Modify<Derived, GameLevelManager> : ModifyBase<Modify<Derived, GameLevelManager>> {
	using ModifyBase<Modify<Derived, GameLevelManager>>::ModifyBase;
	using Base = GameLevelManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1338, x86::Membercall, GameLevelManager, createAndGetScores)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1339, x86::Membercall, GameLevelManager, createNewLevel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1340, x86::Optcall, GameLevelManager, sharedState)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1341, x86::Membercall, GameLevelManager, getCompletedLevels)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1342, x86::Membercall, GameLevelManager, getGJUserInfo)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1343, x86::Membercall, GameLevelManager, getOnlineLevels)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1345, x86::Membercall, GameLevelManager, getSavedLevels)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1346, x86::Membercall, GameLevelManager, getStoredOnlineLevels)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1350, x86::Membercall, GameLevelManager, getMainLevel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1351, x86::Membercall, GameLevelManager, responseToDict)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1352, x86::Membercall, GameLevelManager, storeUserNames)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1353, x86::Membercall, GameLevelManager, userNameForUserID)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1354, x86::Membercall, GameLevelManager, updateUserScore)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCControlColourPicker> : ModifyBase<Modify<Derived, cocos2d::extension::CCControlColourPicker>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCControlColourPicker>>::ModifyBase;
	using Base = cocos2d::extension::CCControlColourPicker;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(593, x86::Thiscall, cocos2d::extension::CCControlColourPicker, setColorValue)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(594, x86::Thiscall, cocos2d::extension::CCControlColourPicker, ccTouchBegan)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(595, x86::Thiscall, cocos2d::extension::CCControlColourPicker, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(596, x86::Cdecl, cocos2d::extension::CCControlColourPicker, colourPicker)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCControlUtils> : ModifyBase<Modify<Derived, cocos2d::extension::CCControlUtils>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCControlUtils>>::ModifyBase;
	using Base = cocos2d::extension::CCControlUtils;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(597, x86::Cdecl, cocos2d::extension::CCControlUtils, HSVfromRGB)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(598, x86::Cdecl, cocos2d::extension::CCControlUtils, RGBfromHSV)
	}
};

template<class Derived>
struct Modify<Derived, SetIDLayer> : ModifyBase<Modify<Derived, SetIDLayer>> {
	using ModifyBase<Modify<Derived, SetIDLayer>>::ModifyBase;
	using Base = SetIDLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CustomSongCell> : ModifyBase<Modify<Derived, CustomSongCell>> {
	using ModifyBase<Modify<Derived, CustomSongCell>>::ModifyBase;
	using Base = CustomSongCell;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCScale9Sprite> : ModifyBase<Modify<Derived, cocos2d::extension::CCScale9Sprite>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCScale9Sprite>>::ModifyBase;
	using Base = cocos2d::extension::CCScale9Sprite;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(600, x86::Cdecl, cocos2d::extension::CCScale9Sprite, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(601, x86::Cdecl, cocos2d::extension::CCScale9Sprite, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(603, x86::Thiscall, cocos2d::extension::CCScale9Sprite, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(604, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setContentSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(605, x86::Thiscall, cocos2d::extension::CCScale9Sprite, visit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(606, x86::Thiscall, cocos2d::extension::CCScale9Sprite, getOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(607, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(608, x86::Thiscall, cocos2d::extension::CCScale9Sprite, updateDisplayedOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(609, x86::Thiscall, cocos2d::extension::CCScale9Sprite, getColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(610, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(611, x86::Thiscall, cocos2d::extension::CCScale9Sprite, updateDisplayedColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(612, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setOpacityModifyRGB)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(613, x86::Thiscall, cocos2d::extension::CCScale9Sprite, isOpacityModifyRGB)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(614, x86::Thiscall, cocos2d::extension::CCScale9Sprite, getPreferredSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(615, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setPreferredSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(616, x86::Thiscall, cocos2d::extension::CCScale9Sprite, getCapInsets)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(617, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setCapInsets)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(618, x86::Thiscall, cocos2d::extension::CCScale9Sprite, getInsetLeft)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(619, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setInsetLeft)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(620, x86::Thiscall, cocos2d::extension::CCScale9Sprite, getInsetTop)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(621, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setInsetTop)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(622, x86::Thiscall, cocos2d::extension::CCScale9Sprite, getInsetRight)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(623, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setInsetRight)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(624, x86::Thiscall, cocos2d::extension::CCScale9Sprite, getInsetBottom)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(625, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setInsetBottom)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(626, x86::Thiscall, cocos2d::extension::CCScale9Sprite, initWithBatchNode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(627, x86::Thiscall, cocos2d::extension::CCScale9Sprite, initWithBatchNode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(628, x86::Thiscall, cocos2d::extension::CCScale9Sprite, initWithFile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(629, x86::Thiscall, cocos2d::extension::CCScale9Sprite, initWithFile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(630, x86::Thiscall, cocos2d::extension::CCScale9Sprite, initWithFile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(631, x86::Thiscall, cocos2d::extension::CCScale9Sprite, initWithFile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(632, x86::Thiscall, cocos2d::extension::CCScale9Sprite, initWithSpriteFrame)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(633, x86::Thiscall, cocos2d::extension::CCScale9Sprite, initWithSpriteFrame)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(634, x86::Thiscall, cocos2d::extension::CCScale9Sprite, initWithSpriteFrameName)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(635, x86::Thiscall, cocos2d::extension::CCScale9Sprite, initWithSpriteFrameName)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(636, x86::Thiscall, cocos2d::extension::CCScale9Sprite, updateWithBatchNode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(637, x86::Thiscall, cocos2d::extension::CCScale9Sprite, setSpriteFrame)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCScrollView> : ModifyBase<Modify<Derived, cocos2d::extension::CCScrollView>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCScrollView>>::ModifyBase;
	using Base = cocos2d::extension::CCScrollView;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(640, x86::Thiscall, cocos2d::extension::CCScrollView, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(641, x86::Thiscall, cocos2d::extension::CCScrollView, setContentSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(642, x86::Thiscall, cocos2d::extension::CCScrollView, getContentSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(643, x86::Thiscall, cocos2d::extension::CCScrollView, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(644, x86::Thiscall, cocos2d::extension::CCScrollView, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(645, x86::Thiscall, cocos2d::extension::CCScrollView, addChild)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(646, x86::Thiscall, cocos2d::extension::CCScrollView, visit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(647, x86::Thiscall, cocos2d::extension::CCScrollView, ccTouchBegan)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(648, x86::Thiscall, cocos2d::extension::CCScrollView, ccTouchMoved)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(649, x86::Thiscall, cocos2d::extension::CCScrollView, ccTouchEnded)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(650, x86::Thiscall, cocos2d::extension::CCScrollView, ccTouchCancelled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(651, x86::Thiscall, cocos2d::extension::CCScrollView, registerWithTouchDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(652, x86::Thiscall, cocos2d::extension::CCScrollView, setTouchEnabled)
	}
};

template<class Derived>
struct Modify<Derived, MapPackCell> : ModifyBase<Modify<Derived, MapPackCell>> {
	using ModifyBase<Modify<Derived, MapPackCell>>::ModifyBase;
	using Base = MapPackCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1738, x86::Membercall, MapPackCell, updateBGColor)
	}
};

template<class Derived>
struct Modify<Derived, EndLevelLayer> : ModifyBase<Modify<Derived, EndLevelLayer>> {
	using ModifyBase<Modify<Derived, EndLevelLayer>>::ModifyBase;
	using Base = EndLevelLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, AchievementBar> : ModifyBase<Modify<Derived, AchievementBar>> {
	using ModifyBase<Modify<Derived, AchievementBar>>::ModifyBase;
	using Base = AchievementBar;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(655, x86::Optcall, AchievementBar, create)
	}
};

template<class Derived>
struct Modify<Derived, AchievementCell> : ModifyBase<Modify<Derived, AchievementCell>> {
	using ModifyBase<Modify<Derived, AchievementCell>>::ModifyBase;
	using Base = AchievementCell;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, AchievementManager> : ModifyBase<Modify<Derived, AchievementManager>> {
	using ModifyBase<Modify<Derived, AchievementManager>>::ModifyBase;
	using Base = AchievementManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(658, x86::Optcall, AchievementManager, sharedState)
	}
};

template<class Derived>
struct Modify<Derived, AnimatedSpriteDelegate> : ModifyBase<Modify<Derived, AnimatedSpriteDelegate>> {
	using ModifyBase<Modify<Derived, AnimatedSpriteDelegate>>::ModifyBase;
	using Base = AnimatedSpriteDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, AchievementNotifier> : ModifyBase<Modify<Derived, AchievementNotifier>> {
	using ModifyBase<Modify<Derived, AchievementNotifier>>::ModifyBase;
	using Base = AchievementNotifier;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(660, x86::Optcall, AchievementNotifier, sharedState)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(661, x86::Membercall, AchievementNotifier, willSwitchToScene)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(662, x86::Membercall, AchievementNotifier, showNextAchievement)
	}
};

template<class Derived>
struct Modify<Derived, PlatformToolbox> : ModifyBase<Modify<Derived, PlatformToolbox>> {
	using ModifyBase<Modify<Derived, PlatformToolbox>>::ModifyBase;
	using Base = PlatformToolbox;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, AnimatedGameObject> : ModifyBase<Modify<Derived, AnimatedGameObject>> {
	using ModifyBase<Modify<Derived, AnimatedGameObject>>::ModifyBase;
	using Base = AnimatedGameObject;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, AnimatedShopKeeper> : ModifyBase<Modify<Derived, AnimatedShopKeeper>> {
	using ModifyBase<Modify<Derived, AnimatedShopKeeper>>::ModifyBase;
	using Base = AnimatedShopKeeper;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(668, x86::Optcall, AnimatedShopKeeper, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(669, x86::Membercall, AnimatedShopKeeper, startAnimating)
	}
};

template<class Derived>
struct Modify<Derived, AppDelegate> : ModifyBase<Modify<Derived, AppDelegate>> {
	using ModifyBase<Modify<Derived, AppDelegate>>::ModifyBase;
	using Base = AppDelegate;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(671, x86::Thiscall, AppDelegate, applicationDidFinishLaunching)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(672, x86::Thiscall, AppDelegate, applicationDidEnterBackground)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(673, x86::Thiscall, AppDelegate, applicationWillEnterForeground)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(674, x86::Thiscall, AppDelegate, applicationWillBecomeActive)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(675, x86::Thiscall, AppDelegate, applicationWillResignActive)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(676, x86::Thiscall, AppDelegate, trySaveGame)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(677, x86::Thiscall, AppDelegate, willSwitchToScene)
	}
};

template<class Derived>
struct Modify<Derived, AudioEffectsLayer> : ModifyBase<Modify<Derived, AudioEffectsLayer>> {
	using ModifyBase<Modify<Derived, AudioEffectsLayer>>::ModifyBase;
	using Base = AudioEffectsLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MenuLayer> : ModifyBase<Modify<Derived, MenuLayer>> {
	using ModifyBase<Modify<Derived, MenuLayer>>::ModifyBase;
	using Base = MenuLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1742, x86::Thiscall, MenuLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1743, x86::Thiscall, MenuLayer, keyBackClicked)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1744, x86::Thiscall, MenuLayer, keyDown)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1746, x86::Thiscall, MenuLayer, FLAlert_Clicked)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1747, x86::Membercall, MenuLayer, onMoreGames)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1748, x86::Membercall, MenuLayer, onGarage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1749, x86::Membercall, MenuLayer, onQuit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1750, x86::Membercall, MenuLayer, onMyProfile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1751, x86::Membercall, MenuLayer, onPlay)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1752, x86::Membercall, MenuLayer, onCreator)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1753, x86::Membercall, MenuLayer, onRobTop)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1754, x86::Membercall, MenuLayer, onNewgrounds)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1755, x86::Membercall, MenuLayer, onDaily)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1756, x86::Membercall, MenuLayer, onOptions)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1757, x86::Membercall, MenuLayer, onAchievements)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1758, x86::Membercall, MenuLayer, onStats)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1759, x86::Membercall, MenuLayer, onFacebook)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1760, x86::Membercall, MenuLayer, onTwitter)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1761, x86::Membercall, MenuLayer, onYouTube)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1762, x86::Optcall, MenuLayer, scene)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1763, x86::Membercall, MenuLayer, node)
	}
};

template<class Derived>
struct Modify<Derived, BoomListView> : ModifyBase<Modify<Derived, BoomListView>> {
	using ModifyBase<Modify<Derived, BoomListView>>::ModifyBase;
	using Base = BoomListView;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(688, x86::Membercall, BoomListView, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(690, x86::Thiscall, BoomListView, setupList)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(692, x86::Thiscall, BoomListView, cellHeightForRowAtIndexPath)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(694, x86::Thiscall, BoomListView, numberOfRowsInSection)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(695, x86::Thiscall, BoomListView, numberOfSectionsInTableView)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(696, x86::Thiscall, BoomListView, cellForRowAtIndexPath)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(699, x86::Thiscall, BoomListView, getListCell)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(700, x86::Thiscall, BoomListView, loadCell)
	}
};

template<class Derived>
struct Modify<Derived, BoomScrollLayer> : ModifyBase<Modify<Derived, BoomScrollLayer>> {
	using ModifyBase<Modify<Derived, BoomScrollLayer>>::ModifyBase;
	using Base = BoomScrollLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(702, x86::Membercall, BoomScrollLayer, instantMoveToPage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(703, x86::Membercall, BoomScrollLayer, moveToPage)
	}
};

template<class Derived>
struct Modify<Derived, ButtonSprite> : ModifyBase<Modify<Derived, ButtonSprite>> {
	using ModifyBase<Modify<Derived, ButtonSprite>>::ModifyBase;
	using Base = ButtonSprite;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(704, x86::Optcall, ButtonSprite, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(707, x86::Membercall, ButtonSprite, updateBGImage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(709, x86::Membercall, ButtonSprite, setString)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(710, x86::Membercall, ButtonSprite, updateSpriteBGSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(711, x86::Membercall, ButtonSprite, setColor)
	}
};

template<class Derived>
struct Modify<Derived, SongInfoObject> : ModifyBase<Modify<Derived, SongInfoObject>> {
	using ModifyBase<Modify<Derived, SongInfoObject>>::ModifyBase;
	using Base = SongInfoObject;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CCAnimatedSprite> : ModifyBase<Modify<Derived, CCAnimatedSprite>> {
	using ModifyBase<Modify<Derived, CCAnimatedSprite>>::ModifyBase;
	using Base = CCAnimatedSprite;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(712, x86::Membercall, CCAnimatedSprite, runAnimation)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(714, x86::Optcall, CCAnimatedSprite, create)
	}
};

template<class Derived>
struct Modify<Derived, CCAnimateFrameCache> : ModifyBase<Modify<Derived, CCAnimateFrameCache>> {
	using ModifyBase<Modify<Derived, CCAnimateFrameCache>>::ModifyBase;
	using Base = CCAnimateFrameCache;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(715, x86::Optcall, CCAnimateFrameCache, sharedSpriteFrameCache)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(716, x86::Membercall, CCAnimateFrameCache, addSpriteFramesWithFile)
	}
};

template<class Derived>
struct Modify<Derived, CCCircleWave> : ModifyBase<Modify<Derived, CCCircleWave>> {
	using ModifyBase<Modify<Derived, CCCircleWave>>::ModifyBase;
	using Base = CCCircleWave;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(730, x86::Optcall, CCCircleWave, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(732, x86::Membercall, CCCircleWave, followObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(733, x86::Membercall, CCCircleWave, updatePosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(734, x86::Membercall, CCCircleWave, setPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(735, x86::Membercall, CCCircleWave, removeMeAndCleanup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(736, x86::Membercall, CCCircleWave, draw)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(737, x86::Membercall, CCCircleWave, updateTweenAction)
	}
};

template<class Derived>
struct Modify<Derived, CCContentLayer> : ModifyBase<Modify<Derived, CCContentLayer>> {
	using ModifyBase<Modify<Derived, CCContentLayer>>::ModifyBase;
	using Base = CCContentLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(739, x86::Optcall, CCContentLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(740, x86::Thiscall, CCContentLayer, setPosition)
	}
};

template<class Derived>
struct Modify<Derived, CCIndexPath> : ModifyBase<Modify<Derived, CCIndexPath>> {
	using ModifyBase<Modify<Derived, CCIndexPath>>::ModifyBase;
	using Base = CCIndexPath;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(741, x86::Optcall, CCIndexPath, create)
	}
};

template<class Derived>
struct Modify<Derived, CCLightFlash> : ModifyBase<Modify<Derived, CCLightFlash>> {
	using ModifyBase<Modify<Derived, CCLightFlash>>::ModifyBase;
	using Base = CCLightFlash;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(743, x86::Membercall, CCLightFlash, playEffect)
	}
};

template<class Derived>
struct Modify<Derived, TextArea> : ModifyBase<Modify<Derived, TextArea>> {
	using ModifyBase<Modify<Derived, TextArea>>::ModifyBase;
	using Base = TextArea;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2241, x86::Membercall, TextArea, destructor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2244, x86::Membercall, TextArea, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2245, x86::Optcall, TextArea, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2246, x86::Membercall, TextArea, colorAllCharactersTo)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2247, x86::Membercall, TextArea, setString)
	}
};

template<class Derived>
struct Modify<Derived, InheritanceNode> : ModifyBase<Modify<Derived, InheritanceNode>> {
	using ModifyBase<Modify<Derived, InheritanceNode>>::ModifyBase;
	using Base = InheritanceNode;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CCMoveCNode> : ModifyBase<Modify<Derived, CCMoveCNode>> {
	using ModifyBase<Modify<Derived, CCMoveCNode>>::ModifyBase;
	using Base = CCMoveCNode;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GameToolbox> : ModifyBase<Modify<Derived, GameToolbox>> {
	using ModifyBase<Modify<Derived, GameToolbox>>::ModifyBase;
	using Base = GameToolbox;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1573, x86::Optcall, GameToolbox, createToggleButton)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1574, x86::Optcall, GameToolbox, transformColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1575, x86::Optcall, GameToolbox, alignItemsHorisontally)
	}
};

template<class Derived>
struct Modify<Derived, CCNodeContainer> : ModifyBase<Modify<Derived, CCNodeContainer>> {
	using ModifyBase<Modify<Derived, CCNodeContainer>>::ModifyBase;
	using Base = CCNodeContainer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(774, x86::Optcall, CCNodeContainer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(775, x86::Thiscall, CCNodeContainer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(776, x86::Membercall, CCNodeContainer, visit)
	}
};

template<class Derived>
struct Modify<Derived, CCScrollLayerExt> : ModifyBase<Modify<Derived, CCScrollLayerExt>> {
	using ModifyBase<Modify<Derived, CCScrollLayerExt>>::ModifyBase;
	using Base = CCScrollLayerExt;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(780, x86::Thiscall, CCScrollLayerExt, visit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(781, x86::Thiscall, CCScrollLayerExt, ccTouchBegan)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(782, x86::Thiscall, CCScrollLayerExt, ccTouchMoved)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(783, x86::Thiscall, CCScrollLayerExt, ccTouchEnded)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(784, x86::Thiscall, CCScrollLayerExt, ccTouchCancelled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(785, x86::Thiscall, CCScrollLayerExt, registerWithTouchDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(786, x86::Thiscall, CCScrollLayerExt, preVisitWithClippingRect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(787, x86::Thiscall, CCScrollLayerExt, postVisit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(788, x86::Membercall, CCScrollLayerExt, moveToTop)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(789, x86::Membercall, CCScrollLayerExt, moveToTopWithOffset)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(790, x86::Membercall, CCScrollLayerExt, destructor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(791, x86::Membercall, CCScrollLayerExt, scrollLayer)
	}
};

template<class Derived>
struct Modify<Derived, SongInfoLayer> : ModifyBase<Modify<Derived, SongInfoLayer>> {
	using ModifyBase<Modify<Derived, SongInfoLayer>>::ModifyBase;
	using Base = SongInfoLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2219, x86::Optcall, SongInfoLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2220, x86::Optcall, SongInfoLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, CCScrollLayerExtDelegate> : ModifyBase<Modify<Derived, CCScrollLayerExtDelegate>> {
	using ModifyBase<Modify<Derived, CCScrollLayerExtDelegate>>::ModifyBase;
	using Base = CCScrollLayerExtDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJSpecialColorSelect> : ModifyBase<Modify<Derived, GJSpecialColorSelect>> {
	using ModifyBase<Modify<Derived, GJSpecialColorSelect>>::ModifyBase;
	using Base = GJSpecialColorSelect;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1308, x86::Optcall, GJSpecialColorSelect, textForColorIdx)
	}
};

template<class Derived>
struct Modify<Derived, CCSpritePlus> : ModifyBase<Modify<Derived, CCSpritePlus>> {
	using ModifyBase<Modify<Derived, CCSpritePlus>>::ModifyBase;
	using Base = CCSpritePlus;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(798, x86::Membercall, CCSpritePlus, initWithSpriteFrameName)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(799, x86::Membercall, CCSpritePlus, setScaleX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(800, x86::Membercall, CCSpritePlus, setScaleY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(801, x86::Membercall, CCSpritePlus, setScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(802, x86::Membercall, CCSpritePlus, setPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(803, x86::Membercall, CCSpritePlus, setRotation)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(804, x86::Membercall, CCSpritePlus, initWithTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(805, x86::Membercall, CCSpritePlus, setFlipX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(806, x86::Membercall, CCSpritePlus, setFlipY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(807, x86::Optcall, CCSpritePlus, createWithSpriteFrame)
	}
};

template<class Derived>
struct Modify<Derived, CCTextInputNode> : ModifyBase<Modify<Derived, CCTextInputNode>> {
	using ModifyBase<Modify<Derived, CCTextInputNode>>::ModifyBase;
	using Base = CCTextInputNode;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(815, x86::Membercall, CCTextInputNode, setString)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(820, x86::Membercall, CCTextInputNode, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(821, x86::Membercall, CCTextInputNode, refreshLabel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(824, x86::Thiscall, CCTextInputNode, registerWithTouchDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(825, x86::Thiscall, CCTextInputNode, visit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(826, x86::Thiscall, CCTextInputNode, ccTouchBegan)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(830, x86::Thiscall, CCTextInputNode, textChanged)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(831, x86::Thiscall, CCTextInputNode, onClickTrackNode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(832, x86::Thiscall, CCTextInputNode, keyboardWillShow)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(833, x86::Thiscall, CCTextInputNode, keyboardWillHide)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(835, x86::Thiscall, CCTextInputNode, onTextFieldAttachWithIME)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(836, x86::Thiscall, CCTextInputNode, onTextFieldDetachWithIME)
	}
};

template<class Derived>
struct Modify<Derived, StartPosObject> : ModifyBase<Modify<Derived, StartPosObject>> {
	using ModifyBase<Modify<Derived, StartPosObject>>::ModifyBase;
	using Base = StartPosObject;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ChallengesPage> : ModifyBase<Modify<Derived, ChallengesPage>> {
	using ModifyBase<Modify<Derived, ChallengesPage>>::ModifyBase;
	using Base = ChallengesPage;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(837, x86::Optcall, ChallengesPage, create)
	}
};

template<class Derived>
struct Modify<Derived, OBB2D> : ModifyBase<Modify<Derived, OBB2D>> {
	using ModifyBase<Modify<Derived, OBB2D>>::ModifyBase;
	using Base = OBB2D;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CheckpointObject> : ModifyBase<Modify<Derived, CheckpointObject>> {
	using ModifyBase<Modify<Derived, CheckpointObject>>::ModifyBase;
	using Base = CheckpointObject;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CollisionBlockPopup> : ModifyBase<Modify<Derived, CollisionBlockPopup>> {
	using ModifyBase<Modify<Derived, CollisionBlockPopup>>::ModifyBase;
	using Base = CollisionBlockPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CollisionTriggerAction> : ModifyBase<Modify<Derived, CollisionTriggerAction>> {
	using ModifyBase<Modify<Derived, CollisionTriggerAction>>::ModifyBase;
	using Base = CollisionTriggerAction;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ColorAction> : ModifyBase<Modify<Derived, ColorAction>> {
	using ModifyBase<Modify<Derived, ColorAction>>::ModifyBase;
	using Base = ColorAction;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ColorActionSprite> : ModifyBase<Modify<Derived, ColorActionSprite>> {
	using ModifyBase<Modify<Derived, ColorActionSprite>>::ModifyBase;
	using Base = ColorActionSprite;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ColorSelectPopup> : ModifyBase<Modify<Derived, ColorSelectPopup>> {
	using ModifyBase<Modify<Derived, ColorSelectPopup>>::ModifyBase;
	using Base = ColorSelectPopup;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(852, x86::Thiscall, ColorSelectPopup, colorValueChanged)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(853, x86::Membercall, ColorSelectPopup, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(854, x86::Membercall, ColorSelectPopup, updateColorValue)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(855, x86::Membercall, ColorSelectPopup, updateCopyColorTextInputLabel)
	}
};

template<class Derived>
struct Modify<Derived, ColorSetupDelegate> : ModifyBase<Modify<Derived, ColorSetupDelegate>> {
	using ModifyBase<Modify<Derived, ColorSetupDelegate>>::ModifyBase;
	using Base = ColorSetupDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CommentUploadDelegate> : ModifyBase<Modify<Derived, CommentUploadDelegate>> {
	using ModifyBase<Modify<Derived, CommentUploadDelegate>>::ModifyBase;
	using Base = CommentUploadDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ConfigureHSVWidget> : ModifyBase<Modify<Derived, ConfigureHSVWidget>> {
	using ModifyBase<Modify<Derived, ConfigureHSVWidget>>::ModifyBase;
	using Base = ConfigureHSVWidget;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MultilineBitmapFont> : ModifyBase<Modify<Derived, MultilineBitmapFont>> {
	using ModifyBase<Modify<Derived, MultilineBitmapFont>>::ModifyBase;
	using Base = MultilineBitmapFont;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CountTriggerAction> : ModifyBase<Modify<Derived, CountTriggerAction>> {
	using ModifyBase<Modify<Derived, CountTriggerAction>>::ModifyBase;
	using Base = CountTriggerAction;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CreateGuidelinesLayer> : ModifyBase<Modify<Derived, CreateGuidelinesLayer>> {
	using ModifyBase<Modify<Derived, CreateGuidelinesLayer>>::ModifyBase;
	using Base = CreateGuidelinesLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(861, x86::Membercall, CreateGuidelinesLayer, onStop)
	}
};

template<class Derived>
struct Modify<Derived, CreateMenuItem> : ModifyBase<Modify<Derived, CreateMenuItem>> {
	using ModifyBase<Modify<Derived, CreateMenuItem>>::ModifyBase;
	using Base = CreateMenuItem;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GameRateDelegate> : ModifyBase<Modify<Derived, GameRateDelegate>> {
	using ModifyBase<Modify<Derived, GameRateDelegate>>::ModifyBase;
	using Base = GameRateDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, DialogLayer> : ModifyBase<Modify<Derived, DialogLayer>> {
	using ModifyBase<Modify<Derived, DialogLayer>>::ModifyBase;
	using Base = DialogLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(894, x86::Optcall, DialogLayer, createDialogLayer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(895, x86::Membercall, DialogLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(896, x86::Membercall, DialogLayer, animateIn)
	}
};

template<class Derived>
struct Modify<Derived, CurrencyRewardLayer> : ModifyBase<Modify<Derived, CurrencyRewardLayer>> {
	using ModifyBase<Modify<Derived, CurrencyRewardLayer>>::ModifyBase;
	using Base = CurrencyRewardLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, DialogDelegate> : ModifyBase<Modify<Derived, DialogDelegate>> {
	using ModifyBase<Modify<Derived, DialogDelegate>>::ModifyBase;
	using Base = DialogDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CurrencyRewardDelegate> : ModifyBase<Modify<Derived, CurrencyRewardDelegate>> {
	using ModifyBase<Modify<Derived, CurrencyRewardDelegate>>::ModifyBase;
	using Base = CurrencyRewardDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CustomListView> : ModifyBase<Modify<Derived, CustomListView>> {
	using ModifyBase<Modify<Derived, CustomListView>>::ModifyBase;
	using Base = CustomListView;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(874, x86::Optcall, CustomListView, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(875, x86::Thiscall, CustomListView, getListCell)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(876, x86::Thiscall, CustomListView, loadCell)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(877, x86::Thiscall, CustomListView, setupList)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(878, x86::Membercall, CustomListView, destructor)
	}
};

template<class Derived>
struct Modify<Derived, CustomSongWidget> : ModifyBase<Modify<Derived, CustomSongWidget>> {
	using ModifyBase<Modify<Derived, CustomSongWidget>>::ModifyBase;
	using Base = CustomSongWidget;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(885, x86::Membercall, CustomSongWidget, updateSongObject)
	}
};

template<class Derived>
struct Modify<Derived, CustomizeObjectLayer> : ModifyBase<Modify<Derived, CustomizeObjectLayer>> {
	using ModifyBase<Modify<Derived, CustomizeObjectLayer>>::ModifyBase;
	using Base = CustomizeObjectLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(886, x86::Membercall, CustomizeObjectLayer, onNextColorChannel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(887, x86::Membercall, CustomizeObjectLayer, onSelectColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(888, x86::Membercall, CustomizeObjectLayer, getActiveMode)
	}
};

template<class Derived>
struct Modify<Derived, DailyLevelPage> : ModifyBase<Modify<Derived, DailyLevelPage>> {
	using ModifyBase<Modify<Derived, DailyLevelPage>>::ModifyBase;
	using Base = DailyLevelPage;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(889, x86::Optcall, DailyLevelPage, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(890, x86::Membercall, DailyLevelPage, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(891, x86::Membercall, DailyLevelPage, updateTimers)
	}
};

template<class Derived>
struct Modify<Derived, DialogObject> : ModifyBase<Modify<Derived, DialogObject>> {
	using ModifyBase<Modify<Derived, DialogObject>>::ModifyBase;
	using Base = DialogObject;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(908, x86::Optcall, DialogObject, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(909, x86::Membercall, DialogObject, init)
	}
};

template<class Derived>
struct Modify<Derived, DownloadMessageDelegate> : ModifyBase<Modify<Derived, DownloadMessageDelegate>> {
	using ModifyBase<Modify<Derived, DownloadMessageDelegate>>::ModifyBase;
	using Base = DownloadMessageDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, EditButtonBar> : ModifyBase<Modify<Derived, EditButtonBar>> {
	using ModifyBase<Modify<Derived, EditButtonBar>>::ModifyBase;
	using Base = EditButtonBar;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(915, x86::Membercall, EditButtonBar, loadFromItems)
	}
};

template<class Derived>
struct Modify<Derived, EditLevelLayer> : ModifyBase<Modify<Derived, EditLevelLayer>> {
	using ModifyBase<Modify<Derived, EditLevelLayer>>::ModifyBase;
	using Base = EditLevelLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(917, x86::Optcall, EditLevelLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(918, x86::Membercall, EditLevelLayer, onLevelInfo)
	}
};

template<class Derived>
struct Modify<Derived, EditorPauseLayer> : ModifyBase<Modify<Derived, EditorPauseLayer>> {
	using ModifyBase<Modify<Derived, EditorPauseLayer>>::ModifyBase;
	using Base = EditorPauseLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(922, x86::Thiscall, EditorPauseLayer, keyBackClicked)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(925, x86::Thiscall, EditorPauseLayer, FLAlert_Clicked)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(926, x86::Membercall, EditorPauseLayer, saveLevel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(927, x86::Membercall, EditorPauseLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(928, x86::Membercall, EditorPauseLayer, onExitEditor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(929, x86::Membercall, EditorPauseLayer, playStep2)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(930, x86::Membercall, EditorPauseLayer, onResume)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(931, x86::Membercall, EditorPauseLayer, onSaveAndPlay)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(932, x86::Membercall, EditorPauseLayer, onSaveAndExit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(933, x86::Membercall, EditorPauseLayer, onSave)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(934, x86::Membercall, EditorPauseLayer, onExitNoSave)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(935, x86::Membercall, EditorPauseLayer, uncheckAllPortals)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(936, x86::Membercall, EditorPauseLayer, destructor)
	}
};

template<class Derived>
struct Modify<Derived, GJDailyLevelDelegate> : ModifyBase<Modify<Derived, GJDailyLevelDelegate>> {
	using ModifyBase<Modify<Derived, GJDailyLevelDelegate>>::ModifyBase;
	using Base = GJDailyLevelDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, EditorUI> : ModifyBase<Modify<Derived, EditorUI>> {
	using ModifyBase<Modify<Derived, EditorUI>>::ModifyBase;
	using Base = EditorUI;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(940, x86::Membercall, EditorUI, deselectAll)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(942, x86::Membercall, EditorUI, disableButton)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(944, x86::Membercall, EditorUI, editObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(945, x86::Membercall, EditorUI, enableButton)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(946, x86::Membercall, EditorUI, getCreateBtn)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(947, x86::Membercall, EditorUI, getGroupCenter)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(948, x86::Membercall, EditorUI, getSelectedObjects)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(953, x86::Thiscall, EditorUI, keyDown)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(954, x86::Membercall, EditorUI, moveObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(955, x86::Membercall, EditorUI, onDuplicate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(956, x86::Membercall, EditorUI, pasteObjects)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(959, x86::Membercall, EditorUI, redoLastAction)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(962, x86::Membercall, EditorUI, scaleObjects)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(963, x86::Membercall, EditorUI, selectObjects)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(965, x86::Membercall, EditorUI, undoLastAction)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(966, x86::Membercall, EditorUI, updateButtons)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(967, x86::Membercall, EditorUI, updateObjectInfoLabel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(968, x86::Membercall, EditorUI, updateSlider)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(969, x86::Membercall, EditorUI, updateZoom)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(970, x86::Membercall, EditorUI, selectObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(971, x86::Membercall, EditorUI, selectAll)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(972, x86::Membercall, EditorUI, selectAllWithDirection)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(973, x86::Membercall, EditorUI, getTouchPoint)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(974, x86::Membercall, EditorUI, onSelectBuildTab)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(975, x86::Membercall, EditorUI, onCreateButton)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(976, x86::Membercall, EditorUI, getSpriteButton)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(977, x86::Membercall, EditorUI, offsetForKey)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(978, x86::Membercall, EditorUI, updateDeleteMenu)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(979, x86::Membercall, EditorUI, updateCreateMenu)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(980, x86::Membercall, EditorUI, toggleMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(981, x86::Membercall, EditorUI, zoomIn)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(982, x86::Membercall, EditorUI, zoomOut)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(983, x86::Membercall, EditorUI, rotateObjects)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(984, x86::Membercall, EditorUI, updateGridNodeSize)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(985, x86::Membercall, EditorUI, updateSpecialUIElements)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(986, x86::Membercall, EditorUI, constrainGameLayerPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(987, x86::Membercall, EditorUI, moveGameLayer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(988, x86::Membercall, EditorUI, showUI)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(989, x86::Membercall, EditorUI, editObject2)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(990, x86::Membercall, EditorUI, editGroup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(991, x86::Membercall, EditorUI, moveObjectCall)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(992, x86::Membercall, EditorUI, transformObjectCall)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(993, x86::Membercall, EditorUI, onDeleteSelected)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(994, x86::Membercall, EditorUI, onCopy)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(995, x86::Membercall, EditorUI, onPaste)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(996, x86::Membercall, EditorUI, toggleEnableRotate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(997, x86::Membercall, EditorUI, toggleFreeMove)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(998, x86::Membercall, EditorUI, toggleSwipe)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(999, x86::Membercall, EditorUI, toggleSnap)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1000, x86::Membercall, EditorUI, onPlayback)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1001, x86::Membercall, EditorUI, onPlaytest)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1002, x86::Membercall, EditorUI, onStopPlaytest)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1003, x86::Membercall, EditorUI, onGroupUp)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1004, x86::Membercall, EditorUI, onGroupDown)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1005, x86::Membercall, EditorUI, selectBuildTab)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1006, x86::Membercall, EditorUI, onPause)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1007, x86::Membercall, EditorUI, onSettings)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1008, x86::Membercall, EditorUI, activateRotationControl)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1009, x86::Membercall, EditorUI, activateScaleControl)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1010, x86::Membercall, EditorUI, dynamicGroupUpdate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1011, x86::Membercall, EditorUI, createRockOutline)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1012, x86::Membercall, EditorUI, createRockEdges)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1013, x86::Membercall, EditorUI, createRockBase)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1014, x86::Membercall, EditorUI, onCopyState)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1015, x86::Membercall, EditorUI, onPasteColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1016, x86::Membercall, EditorUI, onPasteState)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1017, x86::Membercall, EditorUI, onGroupSticky)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1018, x86::Membercall, EditorUI, onUngroupSticky)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1019, x86::Membercall, EditorUI, onGoToLayer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1020, x86::Membercall, EditorUI, onGoToBaseLayer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1021, x86::Membercall, EditorUI, editColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1022, x86::Membercall, EditorUI, alignObjects)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1023, x86::Thiscall, EditorUI, keyUp)
	}
};

template<class Derived>
struct Modify<Derived, EffectGameObject> : ModifyBase<Modify<Derived, EffectGameObject>> {
	using ModifyBase<Modify<Derived, EffectGameObject>>::ModifyBase;
	using Base = EffectGameObject;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1025, x86::Optcall, EffectGameObject, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1027, x86::Thiscall, EffectGameObject, triggerObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1028, x86::Membercall, EffectGameObject, getSaveString)
	}
};

template<class Derived>
struct Modify<Derived, GJRotationControl> : ModifyBase<Modify<Derived, GJRotationControl>> {
	using ModifyBase<Modify<Derived, GJRotationControl>>::ModifyBase;
	using Base = GJRotationControl;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1292, x86::Membercall, GJRotationControl, updateSliderPosition)
	}
};

template<class Derived>
struct Modify<Derived, EndPortalObject> : ModifyBase<Modify<Derived, EndPortalObject>> {
	using ModifyBase<Modify<Derived, EndPortalObject>>::ModifyBase;
	using Base = EndPortalObject;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelDeleteDelegate> : ModifyBase<Modify<Derived, LevelDeleteDelegate>> {
	using ModifyBase<Modify<Derived, LevelDeleteDelegate>>::ModifyBase;
	using Base = LevelDeleteDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GManager> : ModifyBase<Modify<Derived, GManager>> {
	using ModifyBase<Modify<Derived, GManager>>::ModifyBase;
	using Base = GManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1334, x86::Membercall, GManager, save)
	}
};

template<class Derived>
struct Modify<Derived, ExtendedLayer> : ModifyBase<Modify<Derived, ExtendedLayer>> {
	using ModifyBase<Modify<Derived, ExtendedLayer>>::ModifyBase;
	using Base = ExtendedLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, FLAlertLayer> : ModifyBase<Modify<Derived, FLAlertLayer>> {
	using ModifyBase<Modify<Derived, FLAlertLayer>>::ModifyBase;
	using Base = FLAlertLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1033, x86::Thiscall, FLAlertLayer, onEnter)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1034, x86::Thiscall, FLAlertLayer, ccTouchBegan)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1035, x86::Thiscall, FLAlertLayer, ccTouchMoved)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1036, x86::Thiscall, FLAlertLayer, ccTouchEnded)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1037, x86::Thiscall, FLAlertLayer, ccTouchCancelled)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1038, x86::Thiscall, FLAlertLayer, registerWithTouchDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1039, x86::Thiscall, FLAlertLayer, keyBackClicked)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1040, x86::Thiscall, FLAlertLayer, keyDown)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1041, x86::Thiscall, FLAlertLayer, show)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1043, x86::Optcall, FLAlertLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1044, x86::Optcall, FLAlertLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1045, x86::Optcall, FLAlertLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1046, x86::Membercall, FLAlertLayer, onBtn1)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1047, x86::Membercall, FLAlertLayer, onBtn2)
	}
};

template<class Derived>
struct Modify<Derived, FLAlertLayerProtocol> : ModifyBase<Modify<Derived, FLAlertLayerProtocol>> {
	using ModifyBase<Modify<Derived, FLAlertLayerProtocol>>::ModifyBase;
	using Base = FLAlertLayerProtocol;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, FMODAudioEngine> : ModifyBase<Modify<Derived, FMODAudioEngine>> {
	using ModifyBase<Modify<Derived, FMODAudioEngine>>::ModifyBase;
	using Base = FMODAudioEngine;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1049, x86::Optcall, FMODAudioEngine, sharedEngine)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1050, x86::Membercall, FMODAudioEngine, preloadEffect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1051, x86::Membercall, FMODAudioEngine, isBackgroundMusicPlaying)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1052, x86::Membercall, FMODAudioEngine, isBackgroundMusicPlaying)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1053, x86::Membercall, FMODAudioEngine, playBackgroundMusic)
	}
};

template<class Derived>
struct Modify<Derived, LeaderboardsLayer> : ModifyBase<Modify<Derived, LeaderboardsLayer>> {
	using ModifyBase<Modify<Derived, LeaderboardsLayer>>::ModifyBase;
	using Base = LeaderboardsLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1609, x86::Optcall, LeaderboardsLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1610, x86::Membercall, LeaderboardsLayer, init)
	}
};

template<class Derived>
struct Modify<Derived, FMODSound> : ModifyBase<Modify<Derived, FMODSound>> {
	using ModifyBase<Modify<Derived, FMODSound>>::ModifyBase;
	using Base = FMODSound;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1054, x86::Optcall, FMODSound, create)
	}
};

template<class Derived>
struct Modify<Derived, LevelCell> : ModifyBase<Modify<Derived, LevelCell>> {
	using ModifyBase<Modify<Derived, LevelCell>>::ModifyBase;
	using Base = LevelCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1617, x86::Membercall, LevelCell, onViewProfile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1618, x86::Membercall, LevelCell, loadCustomLevelCell)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1619, x86::Membercall, LevelCell, updateBGColor)
	}
};

template<class Derived>
struct Modify<Derived, FriendRequestDelegate> : ModifyBase<Modify<Derived, FriendRequestDelegate>> {
	using ModifyBase<Modify<Derived, FriendRequestDelegate>>::ModifyBase;
	using Base = FriendRequestDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJAccountBackupDelegate> : ModifyBase<Modify<Derived, GJAccountBackupDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountBackupDelegate>>::ModifyBase;
	using Base = GJAccountBackupDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJAccountDelegate> : ModifyBase<Modify<Derived, GJAccountDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountDelegate>>::ModifyBase;
	using Base = GJAccountDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJAccountLoginDelegate> : ModifyBase<Modify<Derived, GJAccountLoginDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountLoginDelegate>>::ModifyBase;
	using Base = GJAccountLoginDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJAccountManager> : ModifyBase<Modify<Derived, GJAccountManager>> {
	using ModifyBase<Modify<Derived, GJAccountManager>>::ModifyBase;
	using Base = GJAccountManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1060, x86::Optcall, GJAccountManager, sharedState)
	}
};

template<class Derived>
struct Modify<Derived, GJAccountSyncDelegate> : ModifyBase<Modify<Derived, GJAccountSyncDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountSyncDelegate>>::ModifyBase;
	using Base = GJAccountSyncDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelLeaderboard> : ModifyBase<Modify<Derived, LevelLeaderboard>> {
	using ModifyBase<Modify<Derived, LevelLeaderboard>>::ModifyBase;
	using Base = LevelLeaderboard;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1706, x86::Membercall, LevelLeaderboard, onChangeType)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1707, x86::Membercall, LevelLeaderboard, onGarage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1708, x86::Membercall, LevelLeaderboard, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1709, x86::Optcall, LevelLeaderboard, create)
	}
};

template<class Derived>
struct Modify<Derived, GJBaseGameLayer> : ModifyBase<Modify<Derived, GJBaseGameLayer>> {
	using ModifyBase<Modify<Derived, GJBaseGameLayer>>::ModifyBase;
	using Base = GJBaseGameLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1071, x86::Thiscall, GJBaseGameLayer, toggleGroupTriggered)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1072, x86::Thiscall, GJBaseGameLayer, spawnGroup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1088, x86::Membercall, GJBaseGameLayer, getCapacityString)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1109, x86::Membercall, GJBaseGameLayer, pushButton)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1112, x86::Membercall, GJBaseGameLayer, releaseButton)
	}
};

template<class Derived>
struct Modify<Derived, GJChallengeDelegate> : ModifyBase<Modify<Derived, GJChallengeDelegate>> {
	using ModifyBase<Modify<Derived, GJChallengeDelegate>>::ModifyBase;
	using Base = GJChallengeDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJColorSetupLayer> : ModifyBase<Modify<Derived, GJColorSetupLayer>> {
	using ModifyBase<Modify<Derived, GJColorSetupLayer>>::ModifyBase;
	using Base = GJColorSetupLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJComment> : ModifyBase<Modify<Derived, GJComment>> {
	using ModifyBase<Modify<Derived, GJComment>>::ModifyBase;
	using Base = GJComment;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1137, x86::Optcall, GJComment, create)
	}
};

template<class Derived>
struct Modify<Derived, GJCommentListLayer> : ModifyBase<Modify<Derived, GJCommentListLayer>> {
	using ModifyBase<Modify<Derived, GJCommentListLayer>>::ModifyBase;
	using Base = GJCommentListLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LikeItemDelegate> : ModifyBase<Modify<Derived, LikeItemDelegate>> {
	using ModifyBase<Modify<Derived, LikeItemDelegate>>::ModifyBase;
	using Base = LikeItemDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJDropDownLayer> : ModifyBase<Modify<Derived, GJDropDownLayer>> {
	using ModifyBase<Modify<Derived, GJDropDownLayer>>::ModifyBase;
	using Base = GJDropDownLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1141, x86::Thiscall, GJDropDownLayer, enterLayer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1142, x86::Thiscall, GJDropDownLayer, exitLayer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1143, x86::Thiscall, GJDropDownLayer, showLayer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1144, x86::Thiscall, GJDropDownLayer, hideLayer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1145, x86::Thiscall, GJDropDownLayer, layerVisible)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1146, x86::Thiscall, GJDropDownLayer, layerHidden)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1148, x86::Thiscall, GJDropDownLayer, disableUI)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1149, x86::Thiscall, GJDropDownLayer, enableUI)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1155, x86::Thiscall, GJDropDownLayer, draw)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1156, x86::Membercall, GJDropDownLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1157, x86::Thiscall, GJDropDownLayer, registerWithTouchDispatcher)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1158, x86::Thiscall, GJDropDownLayer, keyBackClicked)
	}
};

template<class Derived>
struct Modify<Derived, GJDropDownLayerDelegate> : ModifyBase<Modify<Derived, GJDropDownLayerDelegate>> {
	using ModifyBase<Modify<Derived, GJDropDownLayerDelegate>>::ModifyBase;
	using Base = GJDropDownLayerDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJEffectManager> : ModifyBase<Modify<Derived, GJEffectManager>> {
	using ModifyBase<Modify<Derived, GJEffectManager>>::ModifyBase;
	using Base = GJEffectManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1183, x86::Membercall, GJEffectManager, getColorAction)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1239, x86::Membercall, GJEffectManager, updateOpacityEffects)
	}
};

template<class Derived>
struct Modify<Derived, GJLevelScoreCell> : ModifyBase<Modify<Derived, GJLevelScoreCell>> {
	using ModifyBase<Modify<Derived, GJLevelScoreCell>>::ModifyBase;
	using Base = GJLevelScoreCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1278, x86::Membercall, GJLevelScoreCell, updateBGColor)
	}
};

template<class Derived>
struct Modify<Derived, GJGameLevel> : ModifyBase<Modify<Derived, GJGameLevel>> {
	using ModifyBase<Modify<Derived, GJGameLevel>>::ModifyBase;
	using Base = GJGameLevel;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1250, x86::Optcall, GJGameLevel, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1251, x86::Membercall, GJGameLevel, getAudioFileName)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1252, x86::Membercall, GJGameLevel, getCoinKey)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1255, x86::Membercall, GJGameLevel, levelWasAltered)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1257, x86::Membercall, GJGameLevel, dataLoaded)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1258, x86::Membercall, GJGameLevel, getAverageDifficulty)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1259, x86::Membercall, GJGameLevel, getUnpackedLevelDescription)
	}
};

template<class Derived>
struct Modify<Derived, GJGarageLayer> : ModifyBase<Modify<Derived, GJGarageLayer>> {
	using ModifyBase<Modify<Derived, GJGarageLayer>>::ModifyBase;
	using Base = GJGarageLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1260, x86::Membercall, GJGarageLayer, onPlayerColor1)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1261, x86::Membercall, GJGarageLayer, onPlayerColor2)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1262, x86::Optcall, GJGarageLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1263, x86::Thiscall, GJGarageLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1264, x86::Membercall, GJGarageLayer, onSelectTab)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1265, x86::Membercall, GJGarageLayer, onPlayerIcon)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1266, x86::Membercall, GJGarageLayer, onShipIcon)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1267, x86::Membercall, GJGarageLayer, onBallIcon)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1268, x86::Membercall, GJGarageLayer, onBirdIcon)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1269, x86::Membercall, GJGarageLayer, onDartIcon)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1270, x86::Membercall, GJGarageLayer, onRobotIcon)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1271, x86::Membercall, GJGarageLayer, onSpiderIcon)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1272, x86::Membercall, GJGarageLayer, onShards)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1273, x86::Membercall, GJGarageLayer, onBack)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1274, x86::Membercall, GJGarageLayer, onShop)
	}
};

template<class Derived>
struct Modify<Derived, GJGroundLayer> : ModifyBase<Modify<Derived, GJGroundLayer>> {
	using ModifyBase<Modify<Derived, GJGroundLayer>>::ModifyBase;
	using Base = GJGroundLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1275, x86::Membercall, GJGroundLayer, updateGroundWidth)
	}
};

template<class Derived>
struct Modify<Derived, GJItemIcon> : ModifyBase<Modify<Derived, GJItemIcon>> {
	using ModifyBase<Modify<Derived, GJItemIcon>>::ModifyBase;
	using Base = GJItemIcon;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1277, x86::Optcall, GJItemIcon, create)
	}
};

template<class Derived>
struct Modify<Derived, GJListLayer> : ModifyBase<Modify<Derived, GJListLayer>> {
	using ModifyBase<Modify<Derived, GJListLayer>>::ModifyBase;
	using Base = GJListLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1280, x86::Optcall, GJListLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, GJMapPack> : ModifyBase<Modify<Derived, GJMapPack>> {
	using ModifyBase<Modify<Derived, GJMapPack>>::ModifyBase;
	using Base = GJMapPack;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetupSpawnPopup> : ModifyBase<Modify<Derived, SetupSpawnPopup>> {
	using ModifyBase<Modify<Derived, SetupSpawnPopup>>::ModifyBase;
	using Base = SetupSpawnPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LocalLevelManager> : ModifyBase<Modify<Derived, LocalLevelManager>> {
	using ModifyBase<Modify<Derived, LocalLevelManager>>::ModifyBase;
	using Base = LocalLevelManager;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJRequestCell> : ModifyBase<Modify<Derived, GJRequestCell>> {
	using ModifyBase<Modify<Derived, GJRequestCell>>::ModifyBase;
	using Base = GJRequestCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1282, x86::Membercall, GJRequestCell, updateBGColor)
	}
};

template<class Derived>
struct Modify<Derived, GJRewardDelegate> : ModifyBase<Modify<Derived, GJRewardDelegate>> {
	using ModifyBase<Modify<Derived, GJRewardDelegate>>::ModifyBase;
	using Base = GJRewardDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetIDPopup> : ModifyBase<Modify<Derived, SetIDPopup>> {
	using ModifyBase<Modify<Derived, SetIDPopup>>::ModifyBase;
	using Base = SetIDPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelBrowserLayer> : ModifyBase<Modify<Derived, LevelBrowserLayer>> {
	using ModifyBase<Modify<Derived, LevelBrowserLayer>>::ModifyBase;
	using Base = LevelBrowserLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1612, x86::Membercall, LevelBrowserLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1613, x86::Membercall, LevelBrowserLayer, loadPage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1614, x86::Membercall, LevelBrowserLayer, setupLevelBrowser)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1615, x86::Membercall, LevelBrowserLayer, updateLevelsLabel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1616, x86::Optcall, LevelBrowserLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, GJRewardObject> : ModifyBase<Modify<Derived, GJRewardObject>> {
	using ModifyBase<Modify<Derived, GJRewardObject>>::ModifyBase;
	using Base = GJRewardObject;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJRobotSprite> : ModifyBase<Modify<Derived, GJRobotSprite>> {
	using ModifyBase<Modify<Derived, GJRobotSprite>>::ModifyBase;
	using Base = GJRobotSprite;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, RateLevelDelegate> : ModifyBase<Modify<Derived, RateLevelDelegate>> {
	using ModifyBase<Modify<Derived, RateLevelDelegate>>::ModifyBase;
	using Base = RateLevelDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJRotationControlDelegate> : ModifyBase<Modify<Derived, GJRotationControlDelegate>> {
	using ModifyBase<Modify<Derived, GJRotationControlDelegate>>::ModifyBase;
	using Base = GJRotationControlDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJScaleControl> : ModifyBase<Modify<Derived, GJScaleControl>> {
	using ModifyBase<Modify<Derived, GJScaleControl>>::ModifyBase;
	using Base = GJScaleControl;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1296, x86::Membercall, GJScaleControl, updateLabel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1297, x86::Membercall, GJScaleControl, loadValues)
	}
};

template<class Derived>
struct Modify<Derived, GJScaleControlDelegate> : ModifyBase<Modify<Derived, GJScaleControlDelegate>> {
	using ModifyBase<Modify<Derived, GJScaleControlDelegate>>::ModifyBase;
	using Base = GJScaleControlDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJScoreCell> : ModifyBase<Modify<Derived, GJScoreCell>> {
	using ModifyBase<Modify<Derived, GJScoreCell>>::ModifyBase;
	using Base = GJScoreCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1301, x86::Thiscall, GJScoreCell, FLAlert_Clicked)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1302, x86::Membercall, GJScoreCell, loadFromScore)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1303, x86::Membercall, GJScoreCell, onViewProfile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1304, x86::Membercall, GJScoreCell, updateBGColor)
	}
};

template<class Derived>
struct Modify<Derived, SetIDPopupDelegate> : ModifyBase<Modify<Derived, SetIDPopupDelegate>> {
	using ModifyBase<Modify<Derived, SetIDPopupDelegate>>::ModifyBase;
	using Base = SetIDPopupDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJSearchObject> : ModifyBase<Modify<Derived, GJSearchObject>> {
	using ModifyBase<Modify<Derived, GJSearchObject>>::ModifyBase;
	using Base = GJSearchObject;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1306, x86::Optcall, GJSearchObject, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1307, x86::Optcall, GJSearchObject, create)
	}
};

template<class Derived>
struct Modify<Derived, GJSpecialColorSelectDelegate> : ModifyBase<Modify<Derived, GJSpecialColorSelectDelegate>> {
	using ModifyBase<Modify<Derived, GJSpecialColorSelectDelegate>>::ModifyBase;
	using Base = GJSpecialColorSelectDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJSpiderSprite> : ModifyBase<Modify<Derived, GJSpiderSprite>> {
	using ModifyBase<Modify<Derived, GJSpiderSprite>>::ModifyBase;
	using Base = GJSpiderSprite;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJSpriteColor> : ModifyBase<Modify<Derived, GJSpriteColor>> {
	using ModifyBase<Modify<Derived, GJSpriteColor>>::ModifyBase;
	using Base = GJSpriteColor;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJUserCell> : ModifyBase<Modify<Derived, GJUserCell>> {
	using ModifyBase<Modify<Derived, GJUserCell>>::ModifyBase;
	using Base = GJUserCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1313, x86::Membercall, GJUserCell, updateBGColor)
	}
};

template<class Derived>
struct Modify<Derived, GooglePlayDelegate> : ModifyBase<Modify<Derived, GooglePlayDelegate>> {
	using ModifyBase<Modify<Derived, GooglePlayDelegate>>::ModifyBase;
	using Base = GooglePlayDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GameManager> : ModifyBase<Modify<Derived, GameManager>> {
	using ModifyBase<Modify<Derived, GameManager>>::ModifyBase;
	using Base = GameManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1388, x86::Membercall, GameManager, colorForIdx)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1391, x86::Membercall, GameManager, fadeInMusic)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1394, x86::Membercall, GameManager, getGameVariable)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1395, x86::Membercall, GameManager, getIntGameVariable)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1396, x86::Membercall, GameManager, getUGV)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1399, x86::Membercall, GameManager, reloadAll)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1400, x86::Membercall, GameManager, reloadAllStep2)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1403, x86::Membercall, GameManager, setGameVariable)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1404, x86::Membercall, GameManager, setIntGameVariable)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1406, x86::Optcall, GameManager, sharedState)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1411, x86::Membercall, GameManager, resolutionForKey)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1413, x86::Membercall, GameManager, isColorUnlocked)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1414, x86::Membercall, GameManager, isIconUnlocked)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1415, x86::Membercall, GameManager, toggleGameVariable)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1416, x86::Optcall, GameManager, returnToLastScene)
	}
};

template<class Derived>
struct Modify<Derived, GameObject> : ModifyBase<Modify<Derived, GameObject>> {
	using ModifyBase<Modify<Derived, GameObject>>::ModifyBase;
	using Base = GameObject;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1430, x86::Thiscall, GameObject, setScaleX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1431, x86::Thiscall, GameObject, setScaleY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1432, x86::Thiscall, GameObject, setScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1433, x86::Thiscall, GameObject, setPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1434, x86::Thiscall, GameObject, setVisible)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1435, x86::Thiscall, GameObject, setRotation)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1436, x86::Thiscall, GameObject, setOpacity)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1437, x86::Thiscall, GameObject, initWithTexture)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1438, x86::Thiscall, GameObject, setChildColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1442, x86::Thiscall, GameObject, setupCustomSprites)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1443, x86::Thiscall, GameObject, addMainSpriteToParent)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1444, x86::Thiscall, GameObject, resetObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1446, x86::Thiscall, GameObject, activateObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1447, x86::Thiscall, GameObject, deactivateObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1448, x86::Thiscall, GameObject, getObjectRect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1449, x86::Thiscall, GameObject, getObjectRect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1450, x86::Thiscall, GameObject, getObjectRect2)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1451, x86::Thiscall, GameObject, getObjectTextureRect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1452, x86::Thiscall, GameObject, getRealPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1453, x86::Thiscall, GameObject, setStartPos)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1454, x86::Thiscall, GameObject, updateStartValues)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1456, x86::Thiscall, GameObject, getSaveString)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1457, x86::Thiscall, GameObject, isFlipX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1458, x86::Thiscall, GameObject, isFlipY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1459, x86::Thiscall, GameObject, setRScaleX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1460, x86::Thiscall, GameObject, setRScaleY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1461, x86::Thiscall, GameObject, setRScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1463, x86::Thiscall, GameObject, getRScaleY)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1464, x86::Thiscall, GameObject, calculateSpawnXPos)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1466, x86::Thiscall, GameObject, powerOnObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1467, x86::Thiscall, GameObject, powerOffObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1468, x86::Thiscall, GameObject, setObjectColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1469, x86::Thiscall, GameObject, setGlowColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1470, x86::Thiscall, GameObject, getOrientedBox)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1471, x86::Thiscall, GameObject, addToGroup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1472, x86::Thiscall, GameObject, removeFromGroup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1478, x86::Thiscall, GameObject, getType)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1479, x86::Thiscall, GameObject, setType)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1480, x86::Thiscall, GameObject, getStartPos)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1488, x86::Membercall, GameObject, commonSetup)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1490, x86::Optcall, GameObject, createWithFrame)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1491, x86::Optcall, GameObject, createWithKey)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1496, x86::Membercall, GameObject, getBoxOffset)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1516, x86::Optcall, GameObject, objectFromString)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1522, x86::Membercall, GameObject, selectObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1532, x86::Membercall, GameObject, updateCustomScale)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1539, x86::Membercall, GameObject, deselectObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1540, x86::Membercall, GameObject, createRotateAction)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1541, x86::Membercall, GameObject, setMyAction)
	}
};

template<class Derived>
struct Modify<Derived, GameObjectCopy> : ModifyBase<Modify<Derived, GameObjectCopy>> {
	using ModifyBase<Modify<Derived, GameObjectCopy>>::ModifyBase;
	using Base = GameObjectCopy;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GameStatsManager> : ModifyBase<Modify<Derived, GameStatsManager>> {
	using ModifyBase<Modify<Derived, GameStatsManager>>::ModifyBase;
	using Base = GameStatsManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1556, x86::Membercall, GameStatsManager, getAwardedCurrencyForLevel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1557, x86::Membercall, GameStatsManager, getBaseCurrencyForLevel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1558, x86::Membercall, GameStatsManager, getCoinKey)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1559, x86::Membercall, GameStatsManager, getChallenge)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1565, x86::Membercall, GameStatsManager, incrementChallenge)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1568, x86::Optcall, GameStatsManager, sharedState)
	}
};

template<class Derived>
struct Modify<Derived, GauntletSelectLayer> : ModifyBase<Modify<Derived, GauntletSelectLayer>> {
	using ModifyBase<Modify<Derived, GauntletSelectLayer>>::ModifyBase;
	using Base = GauntletSelectLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1580, x86::Optcall, GauntletSelectLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, HSVWidgetPopup> : ModifyBase<Modify<Derived, HSVWidgetPopup>> {
	using ModifyBase<Modify<Derived, HSVWidgetPopup>>::ModifyBase;
	using Base = HSVWidgetPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, HSVWidgetPopupDelegate> : ModifyBase<Modify<Derived, HSVWidgetPopupDelegate>> {
	using ModifyBase<Modify<Derived, HSVWidgetPopupDelegate>>::ModifyBase;
	using Base = HSVWidgetPopupDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, HardStreak> : ModifyBase<Modify<Derived, HardStreak>> {
	using ModifyBase<Modify<Derived, HardStreak>>::ModifyBase;
	using Base = HardStreak;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, InfoAlertButton> : ModifyBase<Modify<Derived, InfoAlertButton>> {
	using ModifyBase<Modify<Derived, InfoAlertButton>>::ModifyBase;
	using Base = InfoAlertButton;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1593, x86::Membercall, InfoAlertButton, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1594, x86::Membercall, InfoAlertButton, activate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1595, x86::Membercall, InfoAlertButton, destructor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1596, x86::Optcall, InfoAlertButton, create)
	}
};

template<class Derived>
struct Modify<Derived, KeybindingsLayer> : ModifyBase<Modify<Derived, KeybindingsLayer>> {
	using ModifyBase<Modify<Derived, KeybindingsLayer>>::ModifyBase;
	using Base = KeybindingsLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1603, x86::Membercall, KeybindingsLayer, onClose)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1604, x86::Membercall, KeybindingsLayer, onPrevPage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1605, x86::Membercall, KeybindingsLayer, onNextPage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1606, x86::Membercall, KeybindingsLayer, goToPage)
	}
};

template<class Derived>
struct Modify<Derived, LeaderboardManagerDelegate> : ModifyBase<Modify<Derived, LeaderboardManagerDelegate>> {
	using ModifyBase<Modify<Derived, LeaderboardManagerDelegate>>::ModifyBase;
	using Base = LeaderboardManagerDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelCommentDelegate> : ModifyBase<Modify<Derived, LevelCommentDelegate>> {
	using ModifyBase<Modify<Derived, LevelCommentDelegate>>::ModifyBase;
	using Base = LevelCommentDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, PlayerCheckpoint> : ModifyBase<Modify<Derived, PlayerCheckpoint>> {
	using ModifyBase<Modify<Derived, PlayerCheckpoint>>::ModifyBase;
	using Base = PlayerCheckpoint;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelDownloadDelegate> : ModifyBase<Modify<Derived, LevelDownloadDelegate>> {
	using ModifyBase<Modify<Derived, LevelDownloadDelegate>>::ModifyBase;
	using Base = LevelDownloadDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, PlatformDownloadDelegate> : ModifyBase<Modify<Derived, PlatformDownloadDelegate>> {
	using ModifyBase<Modify<Derived, PlatformDownloadDelegate>>::ModifyBase;
	using Base = PlatformDownloadDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelEditorLayer> : ModifyBase<Modify<Derived, LevelEditorLayer>> {
	using ModifyBase<Modify<Derived, LevelEditorLayer>>::ModifyBase;
	using Base = LevelEditorLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1631, x86::Thiscall, LevelEditorLayer, update)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1641, x86::Optcall, LevelEditorLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1643, x86::Membercall, LevelEditorLayer, addObjectFromString)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1644, x86::Membercall, LevelEditorLayer, addSpecial)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1651, x86::Membercall, LevelEditorLayer, createObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1654, x86::Membercall, LevelEditorLayer, getLastObjectX)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1655, x86::Membercall, LevelEditorLayer, getLevelString)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1658, x86::Membercall, LevelEditorLayer, getNextFreeGroupID)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1660, x86::Membercall, LevelEditorLayer, getObjectRect)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1664, x86::Membercall, LevelEditorLayer, objectAtPosition)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1669, x86::Membercall, LevelEditorLayer, pasteAttributeState)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1673, x86::Membercall, LevelEditorLayer, removeAllObjects)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1675, x86::Membercall, LevelEditorLayer, removeObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1694, x86::Membercall, LevelEditorLayer, updateEditorMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1698, x86::Membercall, LevelEditorLayer, updateOptions)
	}
};

template<class Derived>
struct Modify<Derived, LevelInfoLayer> : ModifyBase<Modify<Derived, LevelInfoLayer>> {
	using ModifyBase<Modify<Derived, LevelInfoLayer>>::ModifyBase;
	using Base = LevelInfoLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1701, x86::Optcall, LevelInfoLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1702, x86::Membercall, LevelInfoLayer, onGarage)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1703, x86::Membercall, LevelInfoLayer, onViewProfile)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1704, x86::Membercall, LevelInfoLayer, onLevelInfo)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1705, x86::Membercall, LevelInfoLayer, setupProgressBars)
	}
};

template<class Derived>
struct Modify<Derived, LevelManagerDelegate> : ModifyBase<Modify<Derived, LevelManagerDelegate>> {
	using ModifyBase<Modify<Derived, LevelManagerDelegate>>::ModifyBase;
	using Base = LevelManagerDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelPage> : ModifyBase<Modify<Derived, LevelPage>> {
	using ModifyBase<Modify<Derived, LevelPage>>::ModifyBase;
	using Base = LevelPage;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelSelectLayer> : ModifyBase<Modify<Derived, LevelSelectLayer>> {
	using ModifyBase<Modify<Derived, LevelSelectLayer>>::ModifyBase;
	using Base = LevelSelectLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1714, x86::Optcall, LevelSelectLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, LevelSettingsDelegate> : ModifyBase<Modify<Derived, LevelSettingsDelegate>> {
	using ModifyBase<Modify<Derived, LevelSettingsDelegate>>::ModifyBase;
	using Base = LevelSettingsDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelSettingsLayer> : ModifyBase<Modify<Derived, LevelSettingsLayer>> {
	using ModifyBase<Modify<Derived, LevelSettingsLayer>>::ModifyBase;
	using Base = LevelSettingsLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1715, x86::Optcall, LevelSettingsLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, LevelSettingsObject> : ModifyBase<Modify<Derived, LevelSettingsObject>> {
	using ModifyBase<Modify<Derived, LevelSettingsObject>>::ModifyBase;
	using Base = LevelSettingsObject;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelUploadDelegate> : ModifyBase<Modify<Derived, LevelUploadDelegate>> {
	using ModifyBase<Modify<Derived, LevelUploadDelegate>>::ModifyBase;
	using Base = LevelUploadDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TeleportPortalObject> : ModifyBase<Modify<Derived, TeleportPortalObject>> {
	using ModifyBase<Modify<Derived, TeleportPortalObject>>::ModifyBase;
	using Base = TeleportPortalObject;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelUpdateDelegate> : ModifyBase<Modify<Derived, LevelUpdateDelegate>> {
	using ModifyBase<Modify<Derived, LevelUpdateDelegate>>::ModifyBase;
	using Base = LevelUpdateDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TableViewDelegate> : ModifyBase<Modify<Derived, TableViewDelegate>> {
	using ModifyBase<Modify<Derived, TableViewDelegate>>::ModifyBase;
	using Base = TableViewDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ListButtonBarDelegate> : ModifyBase<Modify<Derived, ListButtonBarDelegate>> {
	using ModifyBase<Modify<Derived, ListButtonBarDelegate>>::ModifyBase;
	using Base = ListButtonBarDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LoadingLayer> : ModifyBase<Modify<Derived, LoadingLayer>> {
	using ModifyBase<Modify<Derived, LoadingLayer>>::ModifyBase;
	using Base = LoadingLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1731, x86::Optcall, LoadingLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1732, x86::Membercall, LoadingLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1733, x86::Membercall, LoadingLayer, getLoadingString)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1734, x86::Membercall, LoadingLayer, loadAssets)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1735, x86::Membercall, LoadingLayer, loadingFinished)
	}
};

template<class Derived>
struct Modify<Derived, SetupObjectTogglePopup> : ModifyBase<Modify<Derived, SetupObjectTogglePopup>> {
	using ModifyBase<Modify<Derived, SetupObjectTogglePopup>>::ModifyBase;
	using Base = SetupObjectTogglePopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MenuGameLayer> : ModifyBase<Modify<Derived, MenuGameLayer>> {
	using ModifyBase<Modify<Derived, MenuGameLayer>>::ModifyBase;
	using Base = MenuGameLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MessageListDelegate> : ModifyBase<Modify<Derived, MessageListDelegate>> {
	using ModifyBase<Modify<Derived, MessageListDelegate>>::ModifyBase;
	using Base = MessageListDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MoreSearchLayer> : ModifyBase<Modify<Derived, MoreSearchLayer>> {
	using ModifyBase<Modify<Derived, MoreSearchLayer>>::ModifyBase;
	using Base = MoreSearchLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1764, x86::Optcall, MoreSearchLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1765, x86::Membercall, MoreSearchLayer, init)
	}
};

template<class Derived>
struct Modify<Derived, MusicDownloadDelegate> : ModifyBase<Modify<Derived, MusicDownloadDelegate>> {
	using ModifyBase<Modify<Derived, MusicDownloadDelegate>>::ModifyBase;
	using Base = MusicDownloadDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, NumberInputLayer> : ModifyBase<Modify<Derived, NumberInputLayer>> {
	using ModifyBase<Modify<Derived, NumberInputLayer>>::ModifyBase;
	using Base = NumberInputLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, PulseEffectAction> : ModifyBase<Modify<Derived, PulseEffectAction>> {
	using ModifyBase<Modify<Derived, PulseEffectAction>>::ModifyBase;
	using Base = PulseEffectAction;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ObjectManager> : ModifyBase<Modify<Derived, ObjectManager>> {
	using ModifyBase<Modify<Derived, ObjectManager>>::ModifyBase;
	using Base = ObjectManager;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1788, x86::Optcall, ObjectManager, instance)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1789, x86::Membercall, ObjectManager, setup)
	}
};

template<class Derived>
struct Modify<Derived, ObjectToolbox> : ModifyBase<Modify<Derived, ObjectToolbox>> {
	using ModifyBase<Modify<Derived, ObjectToolbox>>::ModifyBase;
	using Base = ObjectToolbox;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1796, x86::Optcall, ObjectToolbox, sharedState)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1797, x86::Membercall, ObjectToolbox, gridNodeSizeForKey)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1798, x86::Membercall, ObjectToolbox, perspectiveBlockFrame)
	}
};

template<class Derived>
struct Modify<Derived, OpacityEffectAction> : ModifyBase<Modify<Derived, OpacityEffectAction>> {
	using ModifyBase<Modify<Derived, OpacityEffectAction>>::ModifyBase;
	using Base = OpacityEffectAction;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, OptionsLayer> : ModifyBase<Modify<Derived, OptionsLayer>> {
	using ModifyBase<Modify<Derived, OptionsLayer>>::ModifyBase;
	using Base = OptionsLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1807, x86::Optcall, OptionsLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, PlayLayer> : ModifyBase<Modify<Derived, PlayLayer>> {
	using ModifyBase<Modify<Derived, PlayLayer>>::ModifyBase;
	using Base = PlayLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(1818, x86::Membercall, PlayLayer, addObject)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1835, x86::Optcall, PlayLayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1836, x86::Membercall, PlayLayer, createCheckpoint)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1841, x86::Membercall, PlayLayer, destroyPlayer)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1843, x86::Thiscall, PlayLayer, draw)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1869, x86::Membercall, PlayLayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1871, x86::Membercall, PlayLayer, levelComplete)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1878, x86::Membercall, PlayLayer, markCheckpoint)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1880, x86::Thiscall, PlayLayer, onEnterTransitionDidFinish)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1881, x86::Thiscall, PlayLayer, onExit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1882, x86::Membercall, PlayLayer, onQuit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1903, x86::Membercall, PlayLayer, removeLastCheckpoint)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1905, x86::Membercall, PlayLayer, resetLevel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1909, x86::Optcall, PlayLayer, scene)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1910, x86::Membercall, PlayLayer, setupLevelStart)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1912, x86::Membercall, PlayLayer, shakeCamera)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1938, x86::Membercall, PlayLayer, timeForXPos2)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1944, x86::Membercall, PlayLayer, togglePracticeMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1950, x86::Thiscall, PlayLayer, update)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1951, x86::Membercall, PlayLayer, updateAttempts)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1959, x86::Membercall, PlayLayer, updateReplay)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1961, x86::Thiscall, PlayLayer, updateTweenAction)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1962, x86::Membercall, PlayLayer, updateVisibility)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1964, x86::Thiscall, PlayLayer, visit)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(1968, x86::Membercall, PlayLayer, destructor)
	}
};

template<class Derived>
struct Modify<Derived, PointNode> : ModifyBase<Modify<Derived, PointNode>> {
	using ModifyBase<Modify<Derived, PointNode>>::ModifyBase;
	using Base = PointNode;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2123, x86::Optcall, PointNode, create)
	}
};

template<class Derived>
struct Modify<Derived, ProfilePage> : ModifyBase<Modify<Derived, ProfilePage>> {
	using ModifyBase<Modify<Derived, ProfilePage>>::ModifyBase;
	using Base = ProfilePage;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2124, x86::Optcall, ProfilePage, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2125, x86::Membercall, ProfilePage, getUserInfoFailed)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2126, x86::Membercall, ProfilePage, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2127, x86::Membercall, ProfilePage, onMyLevels)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2128, x86::Membercall, ProfilePage, onUpdate)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2129, x86::Membercall, ProfilePage, loadPageFromUserInfo)
	}
};

template<class Derived>
struct Modify<Derived, RetryLevelLayer> : ModifyBase<Modify<Derived, RetryLevelLayer>> {
	using ModifyBase<Modify<Derived, RetryLevelLayer>>::ModifyBase;
	using Base = RetryLevelLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, UploadActionDelegate> : ModifyBase<Modify<Derived, UploadActionDelegate>> {
	using ModifyBase<Modify<Derived, UploadActionDelegate>>::ModifyBase;
	using Base = UploadActionDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ScrollingLayer> : ModifyBase<Modify<Derived, ScrollingLayer>> {
	using ModifyBase<Modify<Derived, ScrollingLayer>>::ModifyBase;
	using Base = ScrollingLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SelectArtLayer> : ModifyBase<Modify<Derived, SelectArtLayer>> {
	using ModifyBase<Modify<Derived, SelectArtLayer>>::ModifyBase;
	using Base = SelectArtLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2135, x86::Optcall, SelectArtLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, SetGroupIDLayer> : ModifyBase<Modify<Derived, SetGroupIDLayer>> {
	using ModifyBase<Modify<Derived, SetGroupIDLayer>>::ModifyBase;
	using Base = SetGroupIDLayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2138, x86::Membercall, SetGroupIDLayer, updateGroupIDLabel)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2140, x86::Membercall, SetGroupIDLayer, updateEditorLayerID)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2141, x86::Membercall, SetGroupIDLayer, updateEditorLayerID2)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2142, x86::Membercall, SetGroupIDLayer, updateZOrder)
	}
};

template<class Derived>
struct Modify<Derived, SetItemIDLayer> : ModifyBase<Modify<Derived, SetItemIDLayer>> {
	using ModifyBase<Modify<Derived, SetItemIDLayer>>::ModifyBase;
	using Base = SetItemIDLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetTargetIDLayer> : ModifyBase<Modify<Derived, SetTargetIDLayer>> {
	using ModifyBase<Modify<Derived, SetTargetIDLayer>>::ModifyBase;
	using Base = SetTargetIDLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetupAnimationPopup> : ModifyBase<Modify<Derived, SetupAnimationPopup>> {
	using ModifyBase<Modify<Derived, SetupAnimationPopup>>::ModifyBase;
	using Base = SetupAnimationPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetupCollisionTriggerPopup> : ModifyBase<Modify<Derived, SetupCollisionTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupCollisionTriggerPopup>>::ModifyBase;
	using Base = SetupCollisionTriggerPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetupOpacityPopup> : ModifyBase<Modify<Derived, SetupOpacityPopup>> {
	using ModifyBase<Modify<Derived, SetupOpacityPopup>>::ModifyBase;
	using Base = SetupOpacityPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetupPickupTriggerPopup> : ModifyBase<Modify<Derived, SetupPickupTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupPickupTriggerPopup>>::ModifyBase;
	using Base = SetupPickupTriggerPopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TableViewDataSource> : ModifyBase<Modify<Derived, TableViewDataSource>> {
	using ModifyBase<Modify<Derived, TableViewDataSource>>::ModifyBase;
	using Base = TableViewDataSource;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetupPulsePopup> : ModifyBase<Modify<Derived, SetupPulsePopup>> {
	using ModifyBase<Modify<Derived, SetupPulsePopup>>::ModifyBase;
	using Base = SetupPulsePopup;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2184, x86::Thiscall, SetupPulsePopup, colorValueChanged)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2185, x86::Membercall, SetupPulsePopup, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2186, x86::Membercall, SetupPulsePopup, updateColorValue)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2187, x86::Membercall, SetupPulsePopup, onSelectPulseMode)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2188, x86::Membercall, SetupPulsePopup, updatePulseMode)
	}
};

template<class Derived>
struct Modify<Derived, SetupShakePopup> : ModifyBase<Modify<Derived, SetupShakePopup>> {
	using ModifyBase<Modify<Derived, SetupShakePopup>>::ModifyBase;
	using Base = SetupShakePopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetupTouchTogglePopup> : ModifyBase<Modify<Derived, SetupTouchTogglePopup>> {
	using ModifyBase<Modify<Derived, SetupTouchTogglePopup>>::ModifyBase;
	using Base = SetupTouchTogglePopup;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SimplePlayer> : ModifyBase<Modify<Derived, SimplePlayer>> {
	using ModifyBase<Modify<Derived, SimplePlayer>>::ModifyBase;
	using Base = SimplePlayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2202, x86::Membercall, SimplePlayer, init)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2203, x86::Optcall, SimplePlayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2204, x86::Membercall, SimplePlayer, updatePlayerFrame)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2205, x86::Membercall, SimplePlayer, updateColors)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2206, x86::Membercall, SimplePlayer, setFrames)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2207, x86::Membercall, SimplePlayer, setColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2208, x86::Membercall, SimplePlayer, setOpacity)
	}
};

template<class Derived>
struct Modify<Derived, Slider> : ModifyBase<Modify<Derived, Slider>> {
	using ModifyBase<Modify<Derived, Slider>>::ModifyBase;
	using Base = Slider;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2212, x86::Membercall, Slider, getValue)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2213, x86::Membercall, Slider, updateBar)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2214, x86::Optcall, Slider, create)
	}
};

template<class Derived>
struct Modify<Derived, SliderThumb> : ModifyBase<Modify<Derived, SliderThumb>> {
	using ModifyBase<Modify<Derived, SliderThumb>>::ModifyBase;
	using Base = SliderThumb;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2215, x86::Membercall, SliderThumb, setValue)
	}
};

template<class Derived>
struct Modify<Derived, SliderTouchLogic> : ModifyBase<Modify<Derived, SliderTouchLogic>> {
	using ModifyBase<Modify<Derived, SliderTouchLogic>>::ModifyBase;
	using Base = SliderTouchLogic;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, StatsCell> : ModifyBase<Modify<Derived, StatsCell>> {
	using ModifyBase<Modify<Derived, StatsCell>>::ModifyBase;
	using Base = StatsCell;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2225, x86::Membercall, StatsCell, updateBGColor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2226, x86::Membercall, StatsCell, draw)
	}
};

template<class Derived>
struct Modify<Derived, TextAlertPopup> : ModifyBase<Modify<Derived, TextAlertPopup>> {
	using ModifyBase<Modify<Derived, TextAlertPopup>>::ModifyBase;
	using Base = TextAlertPopup;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2240, x86::Optcall, TextAlertPopup, create)
	}
};

template<class Derived>
struct Modify<Derived, TextInputDelegate> : ModifyBase<Modify<Derived, TextInputDelegate>> {
	using ModifyBase<Modify<Derived, TextInputDelegate>>::ModifyBase;
	using Base = TextInputDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, UploadPopupDelegate> : ModifyBase<Modify<Derived, UploadPopupDelegate>> {
	using ModifyBase<Modify<Derived, UploadPopupDelegate>>::ModifyBase;
	using Base = UploadPopupDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ToggleTriggerAction> : ModifyBase<Modify<Derived, ToggleTriggerAction>> {
	using ModifyBase<Modify<Derived, ToggleTriggerAction>>::ModifyBase;
	using Base = ToggleTriggerAction;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TriggerEffectDelegate> : ModifyBase<Modify<Derived, TriggerEffectDelegate>> {
	using ModifyBase<Modify<Derived, TriggerEffectDelegate>>::ModifyBase;
	using Base = TriggerEffectDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TopArtistsLayer> : ModifyBase<Modify<Derived, TopArtistsLayer>> {
	using ModifyBase<Modify<Derived, TopArtistsLayer>>::ModifyBase;
	using Base = TopArtistsLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TouchToggleAction> : ModifyBase<Modify<Derived, TouchToggleAction>> {
	using ModifyBase<Modify<Derived, TouchToggleAction>>::ModifyBase;
	using Base = TouchToggleAction;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, UILayer> : ModifyBase<Modify<Derived, UILayer>> {
	using ModifyBase<Modify<Derived, UILayer>>::ModifyBase;
	using Base = UILayer;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2263, x86::Optcall, UILayer, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2268, x86::Membercall, UILayer, onCheck)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2269, x86::Membercall, UILayer, onDeleteCheck)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2270, x86::Membercall, UILayer, onPause)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2271, x86::Thiscall, UILayer, keyDown)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2272, x86::Thiscall, UILayer, keyUp)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2273, x86::Membercall, UILayer, destructor)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2274, x86::Membercall, UILayer, destructor)
	}
};

template<class Derived>
struct Modify<Derived, UndoObject> : ModifyBase<Modify<Derived, UndoObject>> {
	using ModifyBase<Modify<Derived, UndoObject>>::ModifyBase;
	using Base = UndoObject;
	static void apply() {
		using namespace geode::core::meta;

		GEODE_APPLY_MODIFY_FOR_FUNCTION(2276, x86::Optcall, UndoObject, create)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2277, x86::Optcall, UndoObject, createWithArray)
		GEODE_APPLY_MODIFY_FOR_FUNCTION(2278, x86::Optcall, UndoObject, createWithTransformObjects)
	}
};

template<class Derived>
struct Modify<Derived, UploadMessageDelegate> : ModifyBase<Modify<Derived, UploadMessageDelegate>> {
	using ModifyBase<Modify<Derived, UploadMessageDelegate>>::ModifyBase;
	using Base = UploadMessageDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, UserInfoDelegate> : ModifyBase<Modify<Derived, UserInfoDelegate>> {
	using ModifyBase<Modify<Derived, UserInfoDelegate>>::ModifyBase;
	using Base = UserInfoDelegate;
	static void apply() {
		using namespace geode::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, VideoOptionsLayer> : ModifyBase<Modify<Derived, VideoOptionsLayer>> {
	using ModifyBase<Modify<Derived, VideoOptionsLayer>>::ModifyBase;
	using Base = VideoOptionsLayer;
	static void apply() {
		using namespace geode::core::meta;

	}
};
