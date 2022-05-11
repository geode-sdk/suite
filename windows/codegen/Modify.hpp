
template<class Derived>
struct Modify<Derived, cocos2d::CCPoolManager> : ModifyBase<Modify<Derived, cocos2d::CCPoolManager>> {
	using ModifyBase<Modify<Derived, cocos2d::CCPoolManager>>::ModifyBase;
	using Base = cocos2d::CCPoolManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::pop<Derived, Base, types::pure407>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCPoolManager::pop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pop<DefaultConv, Derived, Base, types::pure407>::value, Thiscall>(
				"cocos2d::CCPoolManager::pop", 
				(void*)addresses::address407()
			);
		}

		if constexpr (compare::sharedPoolManager<Derived, Base, types::pure408>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCPoolManager::sharedPoolManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedPoolManager<DefaultConv, Derived, Base, types::pure408>::value, Cdecl>(
				"cocos2d::CCPoolManager::sharedPoolManager", 
				(void*)addresses::address408()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, PlayerObject> : ModifyBase<Modify<Derived, PlayerObject>> {
	using ModifyBase<Modify<Derived, PlayerObject>>::ModifyBase;
	using Base = PlayerObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::setVisible<Derived, Base, types::pure1889>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVisible<DefaultConv, Derived, Base, types::pure1889>::value, Thiscall>(
				"PlayerObject::setVisible", 
				(void*)addresses::address1889()
			);
		}

		if constexpr (compare::setFlipX<Derived, Base, types::pure1893>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipX<DefaultConv, Derived, Base, types::pure1893>::value, Thiscall>(
				"PlayerObject::setFlipX", 
				(void*)addresses::address1893()
			);
		}

		if constexpr (compare::setFlipY<Derived, Base, types::pure1894>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipY<DefaultConv, Derived, Base, types::pure1894>::value, Thiscall>(
				"PlayerObject::setFlipY", 
				(void*)addresses::address1894()
			);
		}

		if constexpr (compare::resetObject<Derived, Base, types::pure1895>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetObject<DefaultConv, Derived, Base, types::pure1895>::value, Thiscall>(
				"PlayerObject::resetObject", 
				(void*)addresses::address1895()
			);
		}

		if constexpr (compare::getRealPosition<Derived, Base, types::pure1896>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getRealPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRealPosition<DefaultConv, Derived, Base, types::pure1896>::value, Thiscall>(
				"PlayerObject::getRealPosition", 
				(void*)addresses::address1896()
			);
		}

		if constexpr (compare::getOrientedBox<Derived, Base, types::pure1897>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getOrientedBox", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOrientedBox<DefaultConv, Derived, Base, types::pure1897>::value, Thiscall>(
				"PlayerObject::getOrientedBox", 
				(void*)addresses::address1897()
			);
		}

		if constexpr (compare::activateStreak<Derived, Base, types::pure1899>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::activateStreak", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activateStreak<DefaultConv, Derived, Base, types::pure1899>::value, Thiscall>(
				"PlayerObject::activateStreak", 
				(void*)addresses::address1899()
			);
		}

		if constexpr (compare::fadeOutStreak2<Derived, Base, types::pure1914>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::fadeOutStreak2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fadeOutStreak2<DefaultConv, Derived, Base, types::pure1914>::value, Membercall>(
				"PlayerObject::fadeOutStreak2", 
				(void*)addresses::address1914()
			);
		}

		if constexpr (compare::flipGravity<Derived, Base, types::pure1916>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::flipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::flipGravity<DefaultConv, Derived, Base, types::pure1916>::value, Membercall>(
				"PlayerObject::flipGravity", 
				(void*)addresses::address1916()
			);
		}

		if constexpr (compare::incrementJumps<Derived, Base, types::pure1926>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::incrementJumps", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::incrementJumps<DefaultConv, Derived, Base, types::pure1926>::value, Thiscall>(
				"PlayerObject::incrementJumps", 
				(void*)addresses::address1926()
			);
		}

		if constexpr (compare::playBurstEffect<Derived, Base, types::pure1941>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playBurstEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playBurstEffect<DefaultConv, Derived, Base, types::pure1941>::value, Thiscall>(
				"PlayerObject::playBurstEffect", 
				(void*)addresses::address1941()
			);
		}

		if constexpr (compare::playDeathEffect<Derived, Base, types::pure1942>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playDeathEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playDeathEffect<DefaultConv, Derived, Base, types::pure1942>::value, Thiscall>(
				"PlayerObject::playDeathEffect", 
				(void*)addresses::address1942()
			);
		}

		if constexpr (compare::playerDestroyed<Derived, Base, types::pure1944>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playerDestroyed", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playerDestroyed<DefaultConv, Derived, Base, types::pure1944>::value, Membercall>(
				"PlayerObject::playerDestroyed", 
				(void*)addresses::address1944()
			);
		}

		if constexpr (compare::playerIsFalling<Derived, Base, types::pure1945>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playerIsFalling", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playerIsFalling<DefaultConv, Derived, Base, types::pure1945>::value, Thiscall>(
				"PlayerObject::playerIsFalling", 
				(void*)addresses::address1945()
			);
		}

		if constexpr (compare::pushButton<Derived, Base, types::pure1952>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::pushButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pushButton<DefaultConv, Derived, Base, types::pure1952>::value, Membercall>(
				"PlayerObject::pushButton", 
				(void*)addresses::address1952()
			);
		}

		if constexpr (compare::releaseButton<Derived, Base, types::pure1955>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::releaseButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::releaseButton<DefaultConv, Derived, Base, types::pure1955>::value, Membercall>(
				"PlayerObject::releaseButton", 
				(void*)addresses::address1955()
			);
		}

		if constexpr (compare::ringJump<Derived, Base, types::pure1963>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::ringJump", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ringJump<DefaultConv, Derived, Base, types::pure1963>::value, Membercall>(
				"PlayerObject::ringJump", 
				(void*)addresses::address1963()
			);
		}

		if constexpr (compare::runNormalRotation<Derived, Base, types::pure1966>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runNormalRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runNormalRotation<DefaultConv, Derived, Base, types::pure1966>::value, Thiscall>(
				"PlayerObject::runNormalRotation", 
				(void*)addresses::address1966()
			);
		}

		if constexpr (compare::spiderTestJump<Derived, Base, types::pure1980>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spiderTestJump", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spiderTestJump<DefaultConv, Derived, Base, types::pure1980>::value, Membercall>(
				"PlayerObject::spiderTestJump", 
				(void*)addresses::address1980()
			);
		}

		if constexpr (compare::toggleBirdMode<Derived, Base, types::pure1988>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleBirdMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleBirdMode<DefaultConv, Derived, Base, types::pure1988>::value, Membercall>(
				"PlayerObject::toggleBirdMode", 
				(void*)addresses::address1988()
			);
		}

		if constexpr (compare::toggleDartMode<Derived, Base, types::pure1989>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleDartMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleDartMode<DefaultConv, Derived, Base, types::pure1989>::value, Membercall>(
				"PlayerObject::toggleDartMode", 
				(void*)addresses::address1989()
			);
		}

		if constexpr (compare::toggleFlyMode<Derived, Base, types::pure1990>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleFlyMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleFlyMode<DefaultConv, Derived, Base, types::pure1990>::value, Membercall>(
				"PlayerObject::toggleFlyMode", 
				(void*)addresses::address1990()
			);
		}

		if constexpr (compare::toggleGhostEffect<Derived, Base, types::pure1991>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleGhostEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleGhostEffect<DefaultConv, Derived, Base, types::pure1991>::value, Membercall>(
				"PlayerObject::toggleGhostEffect", 
				(void*)addresses::address1991()
			);
		}

		if constexpr (compare::togglePlayerScale<Derived, Base, types::pure1992>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::togglePlayerScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::togglePlayerScale<DefaultConv, Derived, Base, types::pure1992>::value, Membercall>(
				"PlayerObject::togglePlayerScale", 
				(void*)addresses::address1992()
			);
		}

		if constexpr (compare::toggleRobotMode<Derived, Base, types::pure1993>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleRobotMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleRobotMode<DefaultConv, Derived, Base, types::pure1993>::value, Membercall>(
				"PlayerObject::toggleRobotMode", 
				(void*)addresses::address1993()
			);
		}

		if constexpr (compare::toggleRollMode<Derived, Base, types::pure1994>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleRollMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleRollMode<DefaultConv, Derived, Base, types::pure1994>::value, Membercall>(
				"PlayerObject::toggleRollMode", 
				(void*)addresses::address1994()
			);
		}

		if constexpr (compare::toggleSpiderMode<Derived, Base, types::pure1995>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleSpiderMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleSpiderMode<DefaultConv, Derived, Base, types::pure1995>::value, Membercall>(
				"PlayerObject::toggleSpiderMode", 
				(void*)addresses::address1995()
			);
		}

		if constexpr (compare::updateTimeMod<Derived, Base, types::pure2028>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateTimeMod", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTimeMod<DefaultConv, Derived, Base, types::pure2028>::value, Membercall>(
				"PlayerObject::updateTimeMod", 
				(void*)addresses::address2028()
			);
		}

		if constexpr (compare::runRotateAction<Derived, Base, types::pure2032>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runRotateAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runRotateAction<DefaultConv, Derived, Base, types::pure2032>::value, Thiscall>(
				"PlayerObject::runRotateAction", 
				(void*)addresses::address2032()
			);
		}

		if constexpr (compare::runBallRotation<Derived, Base, types::pure2033>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runBallRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runBallRotation<DefaultConv, Derived, Base, types::pure2033>::value, Thiscall>(
				"PlayerObject::runBallRotation", 
				(void*)addresses::address2033()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCActionTween> : ModifyBase<Modify<Derived, cocos2d::CCActionTween>> {
	using ModifyBase<Modify<Derived, cocos2d::CCActionTween>>::ModifyBase;
	using Base = cocos2d::CCActionTween;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCActionTween::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1>::value, Cdecl>(
				"cocos2d::CCActionTween::create", 
				(void*)addresses::address1()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEGLView> : ModifyBase<Modify<Derived, cocos2d::CCEGLView>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEGLView>>::ModifyBase;
	using Base = cocos2d::CCEGLView;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::onGLFWMouseCallBack<Derived, Base, types::pure99>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEGLView::onGLFWMouseCallBack", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onGLFWMouseCallBack<DefaultConv, Derived, Base, types::pure99>::value, Thiscall>(
				"cocos2d::CCEGLView::onGLFWMouseCallBack", 
				(void*)addresses::address99()
			);
		}

		if constexpr (compare::swapBuffers<Derived, Base, types::pure100>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEGLView::swapBuffers", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::swapBuffers<DefaultConv, Derived, Base, types::pure100>::value, Thiscall>(
				"cocos2d::CCEGLView::swapBuffers", 
				(void*)addresses::address100()
			);
		}

		if constexpr (compare::updateWindow<Derived, Base, types::pure101>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEGLView::updateWindow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateWindow<DefaultConv, Derived, Base, types::pure101>::value, Thiscall>(
				"cocos2d::CCEGLView::updateWindow", 
				(void*)addresses::address101()
			);
		}

		if constexpr (compare::toggleFullScreen<Derived, Base, types::pure102>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEGLView::toggleFullScreen", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleFullScreen<DefaultConv, Derived, Base, types::pure102>::value, Thiscall>(
				"cocos2d::CCEGLView::toggleFullScreen", 
				(void*)addresses::address102()
			);
		}

		if constexpr (compare::pollEvents<Derived, Base, types::pure103>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEGLView::pollEvents", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pollEvents<DefaultConv, Derived, Base, types::pure103>::value, Thiscall>(
				"cocos2d::CCEGLView::pollEvents", 
				(void*)addresses::address103()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCFileUtils> : ModifyBase<Modify<Derived, cocos2d::CCFileUtils>> {
	using ModifyBase<Modify<Derived, cocos2d::CCFileUtils>>::ModifyBase;
	using Base = cocos2d::CCFileUtils;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::sharedFileUtils<Derived, Base, types::pure106>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCFileUtils::sharedFileUtils", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedFileUtils<DefaultConv, Derived, Base, types::pure106>::value, Cdecl>(
				"cocos2d::CCFileUtils::sharedFileUtils", 
				(void*)addresses::address106()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCBlockLayer> : ModifyBase<Modify<Derived, CCBlockLayer>> {
	using ModifyBase<Modify<Derived, CCBlockLayer>>::ModifyBase;
	using Base = CCBlockLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCAnimate> : ModifyBase<Modify<Derived, cocos2d::CCAnimate>> {
	using ModifyBase<Modify<Derived, cocos2d::CCAnimate>>::ModifyBase;
	using Base = cocos2d::CCAnimate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCAnimate::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2>::value, Cdecl>(
				"cocos2d::CCAnimate::create", 
				(void*)addresses::address2()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetupInstantCountPopup> : ModifyBase<Modify<Derived, SetupInstantCountPopup>> {
	using ModifyBase<Modify<Derived, SetupInstantCountPopup>>::ModifyBase;
	using Base = SetupInstantCountPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCNodeRGBA> : ModifyBase<Modify<Derived, cocos2d::CCNodeRGBA>> {
	using ModifyBase<Modify<Derived, cocos2d::CCNodeRGBA>>::ModifyBase;
	using Base = cocos2d::CCNodeRGBA;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure379>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure379>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::init", 
				(void*)addresses::address379()
			);
		}

		if constexpr (compare::getOpacity<Derived, Base, types::pure380>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOpacity<DefaultConv, Derived, Base, types::pure380>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::getOpacity", 
				(void*)addresses::address380()
			);
		}

		if constexpr (compare::getDisplayedOpacity<Derived, Base, types::pure381>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisplayedOpacity<DefaultConv, Derived, Base, types::pure381>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::getDisplayedOpacity", 
				(void*)addresses::address381()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure382>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure382>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::setOpacity", 
				(void*)addresses::address382()
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure383>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure383>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::updateDisplayedOpacity", 
				(void*)addresses::address383()
			);
		}

		if constexpr (compare::isCascadeOpacityEnabled<Derived, Base, types::pure384>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::isCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure384>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::isCascadeOpacityEnabled", 
				(void*)addresses::address384()
			);
		}

		if constexpr (compare::setCascadeOpacityEnabled<Derived, Base, types::pure385>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure385>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::setCascadeOpacityEnabled", 
				(void*)addresses::address385()
			);
		}

		if constexpr (compare::getColor<Derived, Base, types::pure386>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getColor<DefaultConv, Derived, Base, types::pure386>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::getColor", 
				(void*)addresses::address386()
			);
		}

		if constexpr (compare::getDisplayedColor<Derived, Base, types::pure387>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisplayedColor<DefaultConv, Derived, Base, types::pure387>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::getDisplayedColor", 
				(void*)addresses::address387()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure388>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure388>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::setColor", 
				(void*)addresses::address388()
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure389>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure389>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::updateDisplayedColor", 
				(void*)addresses::address389()
			);
		}

		if constexpr (compare::isCascadeColorEnabled<Derived, Base, types::pure390>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::isCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isCascadeColorEnabled<DefaultConv, Derived, Base, types::pure390>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::isCascadeColorEnabled", 
				(void*)addresses::address390()
			);
		}

		if constexpr (compare::setCascadeColorEnabled<Derived, Base, types::pure391>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setCascadeColorEnabled<DefaultConv, Derived, Base, types::pure391>::value, Thiscall>(
				"cocos2d::CCNodeRGBA::setCascadeColorEnabled", 
				(void*)addresses::address391()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCCallFunc> : ModifyBase<Modify<Derived, cocos2d::CCCallFunc>> {
	using ModifyBase<Modify<Derived, cocos2d::CCCallFunc>>::ModifyBase;
	using Base = cocos2d::CCCallFunc;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure28>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCCallFunc::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure28>::value, Cdecl>(
				"cocos2d::CCCallFunc::create", 
				(void*)addresses::address28()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CreatorLayer> : ModifyBase<Modify<Derived, CreatorLayer>> {
	using ModifyBase<Modify<Derived, CreatorLayer>>::ModifyBase;
	using Base = CreatorLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure861>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CreatorLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure861>::value, Cdecl>(
				"CreatorLayer::create", 
				(void*)addresses::address861()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCRotateBy> : ModifyBase<Modify<Derived, cocos2d::CCRotateBy>> {
	using ModifyBase<Modify<Derived, cocos2d::CCRotateBy>>::ModifyBase;
	using Base = cocos2d::CCRotateBy;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure414>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRotateBy::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure414>::value, Cdecl>(
				"cocos2d::CCRotateBy::create", 
				(void*)addresses::address414()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, MoreVideoOptionsLayer> : ModifyBase<Modify<Derived, MoreVideoOptionsLayer>> {
	using ModifyBase<Modify<Derived, MoreVideoOptionsLayer>>::ModifyBase;
	using Base = MoreVideoOptionsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCApplication> : ModifyBase<Modify<Derived, cocos2d::CCApplication>> {
	using ModifyBase<Modify<Derived, cocos2d::CCApplication>>::ModifyBase;
	using Base = cocos2d::CCApplication;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::getCurrentLanguage<Derived, Base, types::pure4>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::getCurrentLanguage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCurrentLanguage<DefaultConv, Derived, Base, types::pure4>::value, Thiscall>(
				"cocos2d::CCApplication::getCurrentLanguage", 
				(void*)addresses::address4()
			);
		}

		if constexpr (compare::getTargetPlatform<Derived, Base, types::pure5>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::getTargetPlatform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTargetPlatform<DefaultConv, Derived, Base, types::pure5>::value, Thiscall>(
				"cocos2d::CCApplication::getTargetPlatform", 
				(void*)addresses::address5()
			);
		}

		if constexpr (compare::openURL<Derived, Base, types::pure6>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::openURL", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::openURL<DefaultConv, Derived, Base, types::pure6>::value, Thiscall>(
				"cocos2d::CCApplication::openURL", 
				(void*)addresses::address6()
			);
		}

		if constexpr (compare::setAnimationInterval<Derived, Base, types::pure7>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::setAnimationInterval", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAnimationInterval<DefaultConv, Derived, Base, types::pure7>::value, Thiscall>(
				"cocos2d::CCApplication::setAnimationInterval", 
				(void*)addresses::address7()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCRepeatForever> : ModifyBase<Modify<Derived, cocos2d::CCRepeatForever>> {
	using ModifyBase<Modify<Derived, cocos2d::CCRepeatForever>>::ModifyBase;
	using Base = cocos2d::CCRepeatForever;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure413>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRepeatForever::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure413>::value, Cdecl>(
				"cocos2d::CCRepeatForever::create", 
				(void*)addresses::address413()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, DrawGridLayer> : ModifyBase<Modify<Derived, DrawGridLayer>> {
	using ModifyBase<Modify<Derived, DrawGridLayer>>::ModifyBase;
	using Base = DrawGridLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::draw<Derived, Base, types::pure899>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DrawGridLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure899>::value, Thiscall>(
				"DrawGridLayer::draw", 
				(void*)addresses::address899()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCAnimation> : ModifyBase<Modify<Derived, cocos2d::CCAnimation>> {
	using ModifyBase<Modify<Derived, cocos2d::CCAnimation>>::ModifyBase;
	using Base = cocos2d::CCAnimation;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::createWithSpriteFrames<Derived, Base, types::pure3>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCAnimation::createWithSpriteFrames", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithSpriteFrames<DefaultConv, Derived, Base, types::pure3>::value, Cdecl>(
				"cocos2d::CCAnimation::createWithSpriteFrames", 
				(void*)addresses::address3()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, EditorOptionsLayer> : ModifyBase<Modify<Derived, EditorOptionsLayer>> {
	using ModifyBase<Modify<Derived, EditorOptionsLayer>>::ModifyBase;
	using Base = EditorOptionsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCArray> : ModifyBase<Modify<Derived, cocos2d::CCArray>> {
	using ModifyBase<Modify<Derived, cocos2d::CCArray>>::ModifyBase;
	using Base = cocos2d::CCArray;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::addObject<Derived, Base, types::pure9>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::addObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addObject<DefaultConv, Derived, Base, types::pure9>::value, Thiscall>(
				"cocos2d::CCArray::addObject", 
				(void*)addresses::address9()
			);
		}

		if constexpr (compare::addObjectNew<Derived, Base, types::pure10>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::addObjectNew", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addObjectNew<DefaultConv, Derived, Base, types::pure10>::value, Thiscall>(
				"cocos2d::CCArray::addObjectNew", 
				(void*)addresses::address10()
			);
		}

		if constexpr (compare::addObjectsFromArray<Derived, Base, types::pure11>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::addObjectsFromArray", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addObjectsFromArray<DefaultConv, Derived, Base, types::pure11>::value, Thiscall>(
				"cocos2d::CCArray::addObjectsFromArray", 
				(void*)addresses::address11()
			);
		}

		if constexpr (compare::containsObject<Derived, Base, types::pure12>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::containsObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::containsObject<DefaultConv, Derived, Base, types::pure12>::value, Thiscall>(
				"cocos2d::CCArray::containsObject", 
				(void*)addresses::address12()
			);
		}

		if constexpr (compare::count<Derived, Base, types::pure13>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::count", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::count<DefaultConv, Derived, Base, types::pure13>::value, Thiscall>(
				"cocos2d::CCArray::count", 
				(void*)addresses::address13()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure14>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure14>::value, Cdecl>(
				"cocos2d::CCArray::create", 
				(void*)addresses::address14()
			);
		}

		if constexpr (compare::createWithObject<Derived, Base, types::pure15>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::createWithObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithObject<DefaultConv, Derived, Base, types::pure15>::value, Cdecl>(
				"cocos2d::CCArray::createWithObject", 
				(void*)addresses::address15()
			);
		}

		if constexpr (compare::fastRemoveObject<Derived, Base, types::pure16>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::fastRemoveObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fastRemoveObject<DefaultConv, Derived, Base, types::pure16>::value, Thiscall>(
				"cocos2d::CCArray::fastRemoveObject", 
				(void*)addresses::address16()
			);
		}

		if constexpr (compare::fastRemoveObjectAtIndex<Derived, Base, types::pure17>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::fastRemoveObjectAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fastRemoveObjectAtIndex<DefaultConv, Derived, Base, types::pure17>::value, Thiscall>(
				"cocos2d::CCArray::fastRemoveObjectAtIndex", 
				(void*)addresses::address17()
			);
		}

		if constexpr (compare::fastRemoveObjectAtIndexNew<Derived, Base, types::pure18>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::fastRemoveObjectAtIndexNew", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fastRemoveObjectAtIndexNew<DefaultConv, Derived, Base, types::pure18>::value, Thiscall>(
				"cocos2d::CCArray::fastRemoveObjectAtIndexNew", 
				(void*)addresses::address18()
			);
		}

		if constexpr (compare::lastObject<Derived, Base, types::pure19>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::lastObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::lastObject<DefaultConv, Derived, Base, types::pure19>::value, Thiscall>(
				"cocos2d::CCArray::lastObject", 
				(void*)addresses::address19()
			);
		}

		if constexpr (compare::objectAtIndex<Derived, Base, types::pure20>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::objectAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectAtIndex<DefaultConv, Derived, Base, types::pure20>::value, Thiscall>(
				"cocos2d::CCArray::objectAtIndex", 
				(void*)addresses::address20()
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure21>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure21>::value, Thiscall>(
				"cocos2d::CCArray::removeAllObjects", 
				(void*)addresses::address21()
			);
		}

		if constexpr (compare::removeLastObject<Derived, Base, types::pure22>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeLastObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeLastObject<DefaultConv, Derived, Base, types::pure22>::value, Thiscall>(
				"cocos2d::CCArray::removeLastObject", 
				(void*)addresses::address22()
			);
		}

		if constexpr (compare::removeObject<Derived, Base, types::pure23>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeObject<DefaultConv, Derived, Base, types::pure23>::value, Thiscall>(
				"cocos2d::CCArray::removeObject", 
				(void*)addresses::address23()
			);
		}

		if constexpr (compare::removeObjectAtIndex<Derived, Base, types::pure24>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeObjectAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeObjectAtIndex<DefaultConv, Derived, Base, types::pure24>::value, Thiscall>(
				"cocos2d::CCArray::removeObjectAtIndex", 
				(void*)addresses::address24()
			);
		}

		if constexpr (compare::stringAtIndex<Derived, Base, types::pure25>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::stringAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stringAtIndex<DefaultConv, Derived, Base, types::pure25>::value, Thiscall>(
				"cocos2d::CCArray::stringAtIndex", 
				(void*)addresses::address25()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCBMFontConfiguration> : ModifyBase<Modify<Derived, cocos2d::CCBMFontConfiguration>> {
	using ModifyBase<Modify<Derived, cocos2d::CCBMFontConfiguration>>::ModifyBase;
	using Base = cocos2d::CCBMFontConfiguration;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure27>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCBMFontConfiguration::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure27>::value, Cdecl>(
				"cocos2d::CCBMFontConfiguration::create", 
				(void*)addresses::address27()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLabelBMFont> : ModifyBase<Modify<Derived, cocos2d::CCLabelBMFont>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLabelBMFont>>::ModifyBase;
	using Base = cocos2d::CCLabelBMFont;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure125>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure125>::value, Cdecl>(
				"cocos2d::CCLabelBMFont::create", 
				(void*)addresses::address125()
			);
		}

		if constexpr (compare::limitLabelWidth<Derived, Base, types::pure126>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::limitLabelWidth", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::limitLabelWidth<DefaultConv, Derived, Base, types::pure126>::value, Thiscall>(
				"cocos2d::CCLabelBMFont::limitLabelWidth", 
				(void*)addresses::address126()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure127>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure127>::value, Thiscall>(
				"cocos2d::CCLabelBMFont::setScale", 
				(void*)addresses::address127()
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure128>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::setString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setString<DefaultConv, Derived, Base, types::pure128>::value, Thiscall>(
				"cocos2d::CCLabelBMFont::setString", 
				(void*)addresses::address128()
			);
		}

		if constexpr (compare::setAnchorPoint<Derived, Base, types::pure129>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::setAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAnchorPoint<DefaultConv, Derived, Base, types::pure129>::value, Thiscall>(
				"cocos2d::CCLabelBMFont::setAnchorPoint", 
				(void*)addresses::address129()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LabelGameObject> : ModifyBase<Modify<Derived, LabelGameObject>> {
	using ModifyBase<Modify<Derived, LabelGameObject>>::ModifyBase;
	using Base = LabelGameObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCBezierTo> : ModifyBase<Modify<Derived, cocos2d::CCBezierTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCBezierTo>>::ModifyBase;
	using Base = cocos2d::CCBezierTo;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure26>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCBezierTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure26>::value, Cdecl>(
				"cocos2d::CCBezierTo::create", 
				(void*)addresses::address26()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CustomSongLayer> : ModifyBase<Modify<Derived, CustomSongLayer>> {
	using ModifyBase<Modify<Derived, CustomSongLayer>>::ModifyBase;
	using Base = CustomSongLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSpriteFrame> : ModifyBase<Modify<Derived, cocos2d::CCSpriteFrame>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSpriteFrame>>::ModifyBase;
	using Base = cocos2d::CCSpriteFrame;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::createWithTexture<Derived, Base, types::pure494>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrame::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithTexture<DefaultConv, Derived, Base, types::pure494>::value, Cdecl>(
				"cocos2d::CCSpriteFrame::createWithTexture", 
				(void*)addresses::address494()
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure495>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrame::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithTexture<DefaultConv, Derived, Base, types::pure495>::value, Cdecl>(
				"cocos2d::CCSpriteFrame::createWithTexture", 
				(void*)addresses::address495()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCControl> : ModifyBase<Modify<Derived, cocos2d::extension::CCControl>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCControl>>::ModifyBase;
	using Base = cocos2d::extension::CCControl;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure546>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure546>::value, Thiscall>(
				"cocos2d::extension::CCControl::init", 
				(void*)addresses::address546()
			);
		}

		if constexpr (compare::sendActionsForControlEvents<Derived, Base, types::pure548>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::sendActionsForControlEvents", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sendActionsForControlEvents<DefaultConv, Derived, Base, types::pure548>::value, Thiscall>(
				"cocos2d::extension::CCControl::sendActionsForControlEvents", 
				(void*)addresses::address548()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure549>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure549>::value, Thiscall>(
				"cocos2d::extension::CCControl::registerWithTouchDispatcher", 
				(void*)addresses::address549()
			);
		}

		if constexpr (compare::setOpacityModifyRGB<Derived, Base, types::pure550>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::setOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacityModifyRGB<DefaultConv, Derived, Base, types::pure550>::value, Thiscall>(
				"cocos2d::extension::CCControl::setOpacityModifyRGB", 
				(void*)addresses::address550()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure551>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure551>::value, Thiscall>(
				"cocos2d::extension::CCControl::onExit", 
				(void*)addresses::address551()
			);
		}

		if constexpr (compare::isTouchInside<Derived, Base, types::pure552>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::isTouchInside", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isTouchInside<DefaultConv, Derived, Base, types::pure552>::value, Thiscall>(
				"cocos2d::extension::CCControl::isTouchInside", 
				(void*)addresses::address552()
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure553>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setEnabled<DefaultConv, Derived, Base, types::pure553>::value, Thiscall>(
				"cocos2d::extension::CCControl::setEnabled", 
				(void*)addresses::address553()
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure554>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure554>::value, Thiscall>(
				"cocos2d::extension::CCControl::onEnter", 
				(void*)addresses::address554()
			);
		}

		if constexpr (compare::isEnabled<Derived, Base, types::pure555>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::isEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isEnabled<DefaultConv, Derived, Base, types::pure555>::value, Thiscall>(
				"cocos2d::extension::CCControl::isEnabled", 
				(void*)addresses::address555()
			);
		}

		if constexpr (compare::setSelected<Derived, Base, types::pure556>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::setSelected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSelected<DefaultConv, Derived, Base, types::pure556>::value, Thiscall>(
				"cocos2d::extension::CCControl::setSelected", 
				(void*)addresses::address556()
			);
		}

		if constexpr (compare::isOpacityModifyRGB<Derived, Base, types::pure557>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::isOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isOpacityModifyRGB<DefaultConv, Derived, Base, types::pure557>::value, Thiscall>(
				"cocos2d::extension::CCControl::isOpacityModifyRGB", 
				(void*)addresses::address557()
			);
		}

		if constexpr (compare::setHighlighted<Derived, Base, types::pure558>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::setHighlighted", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setHighlighted<DefaultConv, Derived, Base, types::pure558>::value, Thiscall>(
				"cocos2d::extension::CCControl::setHighlighted", 
				(void*)addresses::address558()
			);
		}

		if constexpr (compare::needsLayout<Derived, Base, types::pure559>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::needsLayout", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::needsLayout<DefaultConv, Derived, Base, types::pure559>::value, Thiscall>(
				"cocos2d::extension::CCControl::needsLayout", 
				(void*)addresses::address559()
			);
		}

		if constexpr (compare::getTouchLocation<Derived, Base, types::pure560>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::getTouchLocation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTouchLocation<DefaultConv, Derived, Base, types::pure560>::value, Thiscall>(
				"cocos2d::extension::CCControl::getTouchLocation", 
				(void*)addresses::address560()
			);
		}

		if constexpr (compare::isHighlighted<Derived, Base, types::pure561>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::isHighlighted", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isHighlighted<DefaultConv, Derived, Base, types::pure561>::value, Thiscall>(
				"cocos2d::extension::CCControl::isHighlighted", 
				(void*)addresses::address561()
			);
		}

		if constexpr (compare::addTargetWithActionForControlEvents<Derived, Base, types::pure562>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::addTargetWithActionForControlEvents", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addTargetWithActionForControlEvents<DefaultConv, Derived, Base, types::pure562>::value, Thiscall>(
				"cocos2d::extension::CCControl::addTargetWithActionForControlEvents", 
				(void*)addresses::address562()
			);
		}

		if constexpr (compare::removeTargetWithActionForControlEvents<Derived, Base, types::pure563>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::removeTargetWithActionForControlEvents", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeTargetWithActionForControlEvents<DefaultConv, Derived, Base, types::pure563>::value, Thiscall>(
				"cocos2d::extension::CCControl::removeTargetWithActionForControlEvents", 
				(void*)addresses::address563()
			);
		}

		if constexpr (compare::isSelected<Derived, Base, types::pure564>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::isSelected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isSelected<DefaultConv, Derived, Base, types::pure564>::value, Thiscall>(
				"cocos2d::extension::CCControl::isSelected", 
				(void*)addresses::address564()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDrawNode> : ModifyBase<Modify<Derived, cocos2d::CCDrawNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDrawNode>>::ModifyBase;
	using Base = cocos2d::CCDrawNode;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::clear<Derived, Base, types::pure86>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::clear", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::clear<DefaultConv, Derived, Base, types::pure86>::value, Thiscall>(
				"cocos2d::CCDrawNode::clear", 
				(void*)addresses::address86()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure87>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure87>::value, Cdecl>(
				"cocos2d::CCDrawNode::create", 
				(void*)addresses::address87()
			);
		}

		if constexpr (compare::drawPolygon<Derived, Base, types::pure88>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::drawPolygon", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::drawPolygon<DefaultConv, Derived, Base, types::pure88>::value, Thiscall>(
				"cocos2d::CCDrawNode::drawPolygon", 
				(void*)addresses::address88()
			);
		}

		if constexpr (compare::drawSegment<Derived, Base, types::pure89>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::drawSegment", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::drawSegment<DefaultConv, Derived, Base, types::pure89>::value, Thiscall>(
				"cocos2d::CCDrawNode::drawSegment", 
				(void*)addresses::address89()
			);
		}

		if constexpr (compare::getBlendFunc<Derived, Base, types::pure90>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::getBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBlendFunc<DefaultConv, Derived, Base, types::pure90>::value, Thiscall>(
				"cocos2d::CCDrawNode::getBlendFunc", 
				(void*)addresses::address90()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure91>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure91>::value, Thiscall>(
				"cocos2d::CCDrawNode::init", 
				(void*)addresses::address91()
			);
		}

		if constexpr (compare::setBlendFunc<Derived, Base, types::pure92>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::setBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setBlendFunc<DefaultConv, Derived, Base, types::pure92>::value, Thiscall>(
				"cocos2d::CCDrawNode::setBlendFunc", 
				(void*)addresses::address92()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure93>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure93>::value, Thiscall>(
				"cocos2d::CCDrawNode::draw", 
				(void*)addresses::address93()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCClippingNode> : ModifyBase<Modify<Derived, cocos2d::CCClippingNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCClippingNode>>::ModifyBase;
	using Base = cocos2d::CCClippingNode;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure29>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure29>::value, Cdecl>(
				"cocos2d::CCClippingNode::create", 
				(void*)addresses::address29()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure30>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure30>::value, Cdecl>(
				"cocos2d::CCClippingNode::create", 
				(void*)addresses::address30()
			);
		}

		if constexpr (compare::getAlphaThreshold<Derived, Base, types::pure31>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::getAlphaThreshold", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAlphaThreshold<DefaultConv, Derived, Base, types::pure31>::value, Thiscall>(
				"cocos2d::CCClippingNode::getAlphaThreshold", 
				(void*)addresses::address31()
			);
		}

		if constexpr (compare::getStencil<Derived, Base, types::pure32>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::getStencil", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getStencil<DefaultConv, Derived, Base, types::pure32>::value, Thiscall>(
				"cocos2d::CCClippingNode::getStencil", 
				(void*)addresses::address32()
			);
		}

		if constexpr (compare::isInverted<Derived, Base, types::pure33>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::isInverted", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isInverted<DefaultConv, Derived, Base, types::pure33>::value, Thiscall>(
				"cocos2d::CCClippingNode::isInverted", 
				(void*)addresses::address33()
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure34>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure34>::value, Thiscall>(
				"cocos2d::CCClippingNode::onEnter", 
				(void*)addresses::address34()
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure35>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure35>::value, Thiscall>(
				"cocos2d::CCClippingNode::onEnterTransitionDidFinish", 
				(void*)addresses::address35()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure36>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure36>::value, Thiscall>(
				"cocos2d::CCClippingNode::onExit", 
				(void*)addresses::address36()
			);
		}

		if constexpr (compare::onExitTransitionDidStart<Derived, Base, types::pure37>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onExitTransitionDidStart", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExitTransitionDidStart<DefaultConv, Derived, Base, types::pure37>::value, Thiscall>(
				"cocos2d::CCClippingNode::onExitTransitionDidStart", 
				(void*)addresses::address37()
			);
		}

		if constexpr (compare::setAlphaThreshold<Derived, Base, types::pure38>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::setAlphaThreshold", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAlphaThreshold<DefaultConv, Derived, Base, types::pure38>::value, Thiscall>(
				"cocos2d::CCClippingNode::setAlphaThreshold", 
				(void*)addresses::address38()
			);
		}

		if constexpr (compare::setInverted<Derived, Base, types::pure39>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::setInverted", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setInverted<DefaultConv, Derived, Base, types::pure39>::value, Thiscall>(
				"cocos2d::CCClippingNode::setInverted", 
				(void*)addresses::address39()
			);
		}

		if constexpr (compare::setStencil<Derived, Base, types::pure40>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::setStencil", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setStencil<DefaultConv, Derived, Base, types::pure40>::value, Thiscall>(
				"cocos2d::CCClippingNode::setStencil", 
				(void*)addresses::address40()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure41>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure41>::value, Thiscall>(
				"cocos2d::CCClippingNode::visit", 
				(void*)addresses::address41()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCIMEDelegate> : ModifyBase<Modify<Derived, cocos2d::CCIMEDelegate>> {
	using ModifyBase<Modify<Derived, cocos2d::CCIMEDelegate>>::ModifyBase;
	using Base = cocos2d::CCIMEDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::attachWithIME<Derived, Base, types::pure108>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDelegate::attachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::attachWithIME<DefaultConv, Derived, Base, types::pure108>::value, Thiscall>(
				"cocos2d::CCIMEDelegate::attachWithIME", 
				(void*)addresses::address108()
			);
		}

		if constexpr (compare::detachWithIME<Derived, Base, types::pure109>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDelegate::detachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::detachWithIME<DefaultConv, Derived, Base, types::pure109>::value, Thiscall>(
				"cocos2d::CCIMEDelegate::detachWithIME", 
				(void*)addresses::address109()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDelayTime> : ModifyBase<Modify<Derived, cocos2d::CCDelayTime>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDelayTime>>::ModifyBase;
	using Base = cocos2d::CCDelayTime;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure42>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDelayTime::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure42>::value, Cdecl>(
				"cocos2d::CCDelayTime::create", 
				(void*)addresses::address42()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDictionary> : ModifyBase<Modify<Derived, cocos2d::CCDictionary>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDictionary>>::ModifyBase;
	using Base = cocos2d::CCDictionary;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::allKeys<Derived, Base, types::pure43>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::allKeys", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::allKeys<DefaultConv, Derived, Base, types::pure43>::value, Thiscall>(
				"cocos2d::CCDictionary::allKeys", 
				(void*)addresses::address43()
			);
		}

		if constexpr (compare::count<Derived, Base, types::pure44>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::count", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::count<DefaultConv, Derived, Base, types::pure44>::value, Thiscall>(
				"cocos2d::CCDictionary::count", 
				(void*)addresses::address44()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure45>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure45>::value, Cdecl>(
				"cocos2d::CCDictionary::create", 
				(void*)addresses::address45()
			);
		}

		if constexpr (compare::objectForKey<Derived, Base, types::pure46>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::objectForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectForKey<DefaultConv, Derived, Base, types::pure46>::value, Thiscall>(
				"cocos2d::CCDictionary::objectForKey", 
				(void*)addresses::address46()
			);
		}

		if constexpr (compare::objectForKey<Derived, Base, types::pure47>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::objectForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectForKey<DefaultConv, Derived, Base, types::pure47>::value, Thiscall>(
				"cocos2d::CCDictionary::objectForKey", 
				(void*)addresses::address47()
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure48>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure48>::value, Thiscall>(
				"cocos2d::CCDictionary::removeAllObjects", 
				(void*)addresses::address48()
			);
		}

		if constexpr (compare::removeObjectForKey<Derived, Base, types::pure49>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::removeObjectForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeObjectForKey<DefaultConv, Derived, Base, types::pure49>::value, Thiscall>(
				"cocos2d::CCDictionary::removeObjectForKey", 
				(void*)addresses::address49()
			);
		}

		if constexpr (compare::setObject<Derived, Base, types::pure50>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::setObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setObject<DefaultConv, Derived, Base, types::pure50>::value, Thiscall>(
				"cocos2d::CCDictionary::setObject", 
				(void*)addresses::address50()
			);
		}

		if constexpr (compare::setObject<Derived, Base, types::pure51>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::setObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setObject<DefaultConv, Derived, Base, types::pure51>::value, Thiscall>(
				"cocos2d::CCDictionary::setObject", 
				(void*)addresses::address51()
			);
		}

		if constexpr (compare::valueForKey<Derived, Base, types::pure52>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::valueForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::valueForKey<DefaultConv, Derived, Base, types::pure52>::value, Thiscall>(
				"cocos2d::CCDictionary::valueForKey", 
				(void*)addresses::address52()
			);
		}

		if constexpr (compare::valueForKey<Derived, Base, types::pure53>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::valueForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::valueForKey<DefaultConv, Derived, Base, types::pure53>::value, Thiscall>(
				"cocos2d::CCDictionary::valueForKey", 
				(void*)addresses::address53()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LevelSearchLayer> : ModifyBase<Modify<Derived, LevelSearchLayer>> {
	using ModifyBase<Modify<Derived, LevelSearchLayer>>::ModifyBase;
	using Base = LevelSearchLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1641>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSearchLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1641>::value, Cdecl>(
				"LevelSearchLayer::create", 
				(void*)addresses::address1641()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCStandardTouchHandler> : ModifyBase<Modify<Derived, cocos2d::CCStandardTouchHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCStandardTouchHandler>>::ModifyBase;
	using Base = cocos2d::CCStandardTouchHandler;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure499>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCStandardTouchHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure499>::value, Cdecl>(
				"cocos2d::CCStandardTouchHandler::handlerWithDelegate", 
				(void*)addresses::address499()
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure500>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCStandardTouchHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure500>::value, Thiscall>(
				"cocos2d::CCStandardTouchHandler::initWithDelegate", 
				(void*)addresses::address500()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLabelTTF> : ModifyBase<Modify<Derived, cocos2d::CCLabelTTF>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLabelTTF>>::ModifyBase;
	using Base = cocos2d::CCLabelTTF;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure130>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelTTF::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure130>::value, Cdecl>(
				"cocos2d::CCLabelTTF::create", 
				(void*)addresses::address130()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure131>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelTTF::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure131>::value, Cdecl>(
				"cocos2d::CCLabelTTF::create", 
				(void*)addresses::address131()
			);
		}

		if constexpr (compare::updateTexture<Derived, Base, types::pure132>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelTTF::updateTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTexture<DefaultConv, Derived, Base, types::pure132>::value, Thiscall>(
				"cocos2d::CCLabelTTF::updateTexture", 
				(void*)addresses::address132()
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure133>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelTTF::setString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setString<DefaultConv, Derived, Base, types::pure133>::value, Thiscall>(
				"cocos2d::CCLabelTTF::setString", 
				(void*)addresses::address133()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSpriteFrameCache> : ModifyBase<Modify<Derived, cocos2d::CCSpriteFrameCache>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSpriteFrameCache>>::ModifyBase;
	using Base = cocos2d::CCSpriteFrameCache;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::addSpriteFramesWithFile<Derived, Base, types::pure496>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addSpriteFramesWithFile<DefaultConv, Derived, Base, types::pure496>::value, Thiscall>(
				"cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile", 
				(void*)addresses::address496()
			);
		}

		if constexpr (compare::sharedSpriteFrameCache<Derived, Base, types::pure497>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedSpriteFrameCache<DefaultConv, Derived, Base, types::pure497>::value, Cdecl>(
				"cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache", 
				(void*)addresses::address497()
			);
		}

		if constexpr (compare::spriteFrameByName<Derived, Base, types::pure498>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrameCache::spriteFrameByName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spriteFrameByName<DefaultConv, Derived, Base, types::pure498>::value, Thiscall>(
				"cocos2d::CCSpriteFrameCache::spriteFrameByName", 
				(void*)addresses::address498()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDirector> : ModifyBase<Modify<Derived, cocos2d::CCDirector>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDirector>>::ModifyBase;
	using Base = cocos2d::CCDirector;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure55>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure55>::value, Thiscall>(
				"cocos2d::CCDirector::init", 
				(void*)addresses::address55()
			);
		}

		if constexpr (compare::getScheduler<Derived, Base, types::pure56>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScheduler<DefaultConv, Derived, Base, types::pure56>::value, Thiscall>(
				"cocos2d::CCDirector::getScheduler", 
				(void*)addresses::address56()
			);
		}

		if constexpr (compare::setScheduler<Derived, Base, types::pure57>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScheduler<DefaultConv, Derived, Base, types::pure57>::value, Thiscall>(
				"cocos2d::CCDirector::setScheduler", 
				(void*)addresses::address57()
			);
		}

		if constexpr (compare::getActionManager<Derived, Base, types::pure58>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getActionManager<DefaultConv, Derived, Base, types::pure58>::value, Thiscall>(
				"cocos2d::CCDirector::getActionManager", 
				(void*)addresses::address58()
			);
		}

		if constexpr (compare::setActionManager<Derived, Base, types::pure59>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setActionManager<DefaultConv, Derived, Base, types::pure59>::value, Thiscall>(
				"cocos2d::CCDirector::setActionManager", 
				(void*)addresses::address59()
			);
		}

		if constexpr (compare::getTouchDispatcher<Derived, Base, types::pure60>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTouchDispatcher<DefaultConv, Derived, Base, types::pure60>::value, Thiscall>(
				"cocos2d::CCDirector::getTouchDispatcher", 
				(void*)addresses::address60()
			);
		}

		if constexpr (compare::setTouchDispatcher<Derived, Base, types::pure61>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTouchDispatcher<DefaultConv, Derived, Base, types::pure61>::value, Thiscall>(
				"cocos2d::CCDirector::setTouchDispatcher", 
				(void*)addresses::address61()
			);
		}

		if constexpr (compare::getKeypadDispatcher<Derived, Base, types::pure62>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getKeypadDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getKeypadDispatcher<DefaultConv, Derived, Base, types::pure62>::value, Thiscall>(
				"cocos2d::CCDirector::getKeypadDispatcher", 
				(void*)addresses::address62()
			);
		}

		if constexpr (compare::setKeypadDispatcher<Derived, Base, types::pure63>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setKeypadDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setKeypadDispatcher<DefaultConv, Derived, Base, types::pure63>::value, Thiscall>(
				"cocos2d::CCDirector::setKeypadDispatcher", 
				(void*)addresses::address63()
			);
		}

		if constexpr (compare::getKeyboardDispatcher<Derived, Base, types::pure64>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getKeyboardDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getKeyboardDispatcher<DefaultConv, Derived, Base, types::pure64>::value, Thiscall>(
				"cocos2d::CCDirector::getKeyboardDispatcher", 
				(void*)addresses::address64()
			);
		}

		if constexpr (compare::setKeyboardDispatcher<Derived, Base, types::pure65>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setKeyboardDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setKeyboardDispatcher<DefaultConv, Derived, Base, types::pure65>::value, Thiscall>(
				"cocos2d::CCDirector::setKeyboardDispatcher", 
				(void*)addresses::address65()
			);
		}

		if constexpr (compare::getMouseDispatcher<Derived, Base, types::pure66>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getMouseDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMouseDispatcher<DefaultConv, Derived, Base, types::pure66>::value, Thiscall>(
				"cocos2d::CCDirector::getMouseDispatcher", 
				(void*)addresses::address66()
			);
		}

		if constexpr (compare::setMouseDispatcher<Derived, Base, types::pure67>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setMouseDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setMouseDispatcher<DefaultConv, Derived, Base, types::pure67>::value, Thiscall>(
				"cocos2d::CCDirector::setMouseDispatcher", 
				(void*)addresses::address67()
			);
		}

		if constexpr (compare::getAccelerometer<Derived, Base, types::pure68>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getAccelerometer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAccelerometer<DefaultConv, Derived, Base, types::pure68>::value, Thiscall>(
				"cocos2d::CCDirector::getAccelerometer", 
				(void*)addresses::address68()
			);
		}

		if constexpr (compare::setAccelerometer<Derived, Base, types::pure69>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setAccelerometer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAccelerometer<DefaultConv, Derived, Base, types::pure69>::value, Thiscall>(
				"cocos2d::CCDirector::setAccelerometer", 
				(void*)addresses::address69()
			);
		}

		if constexpr (compare::getDeltaTime<Derived, Base, types::pure70>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getDeltaTime", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDeltaTime<DefaultConv, Derived, Base, types::pure70>::value, Thiscall>(
				"cocos2d::CCDirector::getDeltaTime", 
				(void*)addresses::address70()
			);
		}

		if constexpr (compare::getSceneDelegate<Derived, Base, types::pure71>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getSceneDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSceneDelegate<DefaultConv, Derived, Base, types::pure71>::value, Thiscall>(
				"cocos2d::CCDirector::getSceneDelegate", 
				(void*)addresses::address71()
			);
		}

		if constexpr (compare::setSceneDelegate<Derived, Base, types::pure72>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setSceneDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSceneDelegate<DefaultConv, Derived, Base, types::pure72>::value, Thiscall>(
				"cocos2d::CCDirector::setSceneDelegate", 
				(void*)addresses::address72()
			);
		}

		if constexpr (compare::getWinSize<Derived, Base, types::pure73>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getWinSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getWinSize<DefaultConv, Derived, Base, types::pure73>::value, Thiscall>(
				"cocos2d::CCDirector::getWinSize", 
				(void*)addresses::address73()
			);
		}

		if constexpr (compare::pushScene<Derived, Base, types::pure74>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::pushScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pushScene<DefaultConv, Derived, Base, types::pure74>::value, Thiscall>(
				"cocos2d::CCDirector::pushScene", 
				(void*)addresses::address74()
			);
		}

		if constexpr (compare::replaceScene<Derived, Base, types::pure75>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::replaceScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::replaceScene<DefaultConv, Derived, Base, types::pure75>::value, Thiscall>(
				"cocos2d::CCDirector::replaceScene", 
				(void*)addresses::address75()
			);
		}

		if constexpr (compare::resetSmoothFixCounter<Derived, Base, types::pure76>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::resetSmoothFixCounter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetSmoothFixCounter<DefaultConv, Derived, Base, types::pure76>::value, Thiscall>(
				"cocos2d::CCDirector::resetSmoothFixCounter", 
				(void*)addresses::address76()
			);
		}

		if constexpr (compare::sharedDirector<Derived, Base, types::pure77>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::sharedDirector", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedDirector<DefaultConv, Derived, Base, types::pure77>::value, Cdecl>(
				"cocos2d::CCDirector::sharedDirector", 
				(void*)addresses::address77()
			);
		}

		if constexpr (compare::calculateDeltaTime<Derived, Base, types::pure78>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::calculateDeltaTime", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateDeltaTime<DefaultConv, Derived, Base, types::pure78>::value, Thiscall>(
				"cocos2d::CCDirector::calculateDeltaTime", 
				(void*)addresses::address78()
			);
		}

		if constexpr (compare::calculateMPF<Derived, Base, types::pure79>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::calculateMPF", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateMPF<DefaultConv, Derived, Base, types::pure79>::value, Thiscall>(
				"cocos2d::CCDirector::calculateMPF", 
				(void*)addresses::address79()
			);
		}

		if constexpr (compare::convertToGL<Derived, Base, types::pure80>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::convertToGL", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::convertToGL<DefaultConv, Derived, Base, types::pure80>::value, Thiscall>(
				"cocos2d::CCDirector::convertToGL", 
				(void*)addresses::address80()
			);
		}

		if constexpr (compare::drawScene<Derived, Base, types::pure81>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::drawScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::drawScene<DefaultConv, Derived, Base, types::pure81>::value, Thiscall>(
				"cocos2d::CCDirector::drawScene", 
				(void*)addresses::address81()
			);
		}

		if constexpr (compare::setNextScene<Derived, Base, types::pure82>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setNextScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setNextScene<DefaultConv, Derived, Base, types::pure82>::value, Thiscall>(
				"cocos2d::CCDirector::setNextScene", 
				(void*)addresses::address82()
			);
		}

		if constexpr (compare::showStats<Derived, Base, types::pure83>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::showStats", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showStats<DefaultConv, Derived, Base, types::pure83>::value, Thiscall>(
				"cocos2d::CCDirector::showStats", 
				(void*)addresses::address83()
			);
		}

		if constexpr (compare::updateContentScale<Derived, Base, types::pure84>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::updateContentScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateContentScale<DefaultConv, Derived, Base, types::pure84>::value, Thiscall>(
				"cocos2d::CCDirector::updateContentScale", 
				(void*)addresses::address84()
			);
		}

		if constexpr (compare::popSceneWithTransition<Derived, Base, types::pure85>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::popSceneWithTransition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::popSceneWithTransition<DefaultConv, Derived, Base, types::pure85>::value, Thiscall>(
				"cocos2d::CCDirector::popSceneWithTransition", 
				(void*)addresses::address85()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCFadeTo> : ModifyBase<Modify<Derived, cocos2d::CCFadeTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCFadeTo>>::ModifyBase;
	using Base = cocos2d::CCFadeTo;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure105>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCFadeTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure105>::value, Cdecl>(
				"cocos2d::CCFadeTo::create", 
				(void*)addresses::address105()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseElasticOut> : ModifyBase<Modify<Derived, cocos2d::CCEaseElasticOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseElasticOut>>::ModifyBase;
	using Base = cocos2d::CCEaseElasticOut;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure95>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEaseElasticOut::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure95>::value, Cdecl>(
				"cocos2d::CCEaseElasticOut::create", 
				(void*)addresses::address95()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMouseHandler> : ModifyBase<Modify<Derived, cocos2d::CCMouseHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMouseHandler>>::ModifyBase;
	using Base = cocos2d::CCMouseHandler;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure257>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMouseHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure257>::value, Cdecl>(
				"cocos2d::CCMouseHandler::handlerWithDelegate", 
				(void*)addresses::address257()
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure258>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMouseHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure258>::value, Thiscall>(
				"cocos2d::CCMouseHandler::initWithDelegate", 
				(void*)addresses::address258()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LoadingCircle> : ModifyBase<Modify<Derived, LoadingCircle>> {
	using ModifyBase<Modify<Derived, LoadingCircle>>::ModifyBase;
	using Base = LoadingCircle;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1652>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingCircle::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1652>::value, Cdecl>(
				"LoadingCircle::create", 
				(void*)addresses::address1652()
			);
		}

		if constexpr (compare::show<Derived, Base, types::pure1653>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingCircle::show", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::show<DefaultConv, Derived, Base, types::pure1653>::value, Thiscall>(
				"LoadingCircle::show", 
				(void*)addresses::address1653()
			);
		}

		if constexpr (compare::fadeAndRemove<Derived, Base, types::pure1654>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingCircle::fadeAndRemove", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fadeAndRemove<DefaultConv, Derived, Base, types::pure1654>::value, Thiscall>(
				"LoadingCircle::fadeAndRemove", 
				(void*)addresses::address1654()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCImage> : ModifyBase<Modify<Derived, cocos2d::CCImage>> {
	using ModifyBase<Modify<Derived, cocos2d::CCImage>>::ModifyBase;
	using Base = cocos2d::CCImage;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::initWithImageData<Derived, Base, types::pure115>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCImage::initWithImageData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithImageData<DefaultConv, Derived, Base, types::pure115>::value, Thiscall>(
				"cocos2d::CCImage::initWithImageData", 
				(void*)addresses::address115()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetupInteractObjectPopup> : ModifyBase<Modify<Derived, SetupInteractObjectPopup>> {
	using ModifyBase<Modify<Derived, SetupInteractObjectPopup>>::ModifyBase;
	using Base = SetupInteractObjectPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseIn> : ModifyBase<Modify<Derived, cocos2d::CCEaseIn>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseIn>>::ModifyBase;
	using Base = cocos2d::CCEaseIn;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure96>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEaseIn::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure96>::value, Cdecl>(
				"cocos2d::CCEaseIn::create", 
				(void*)addresses::address96()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseInOut> : ModifyBase<Modify<Derived, cocos2d::CCEaseInOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseInOut>>::ModifyBase;
	using Base = cocos2d::CCEaseInOut;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure97>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEaseInOut::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure97>::value, Cdecl>(
				"cocos2d::CCEaseInOut::create", 
				(void*)addresses::address97()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseOut> : ModifyBase<Modify<Derived, cocos2d::CCEaseOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseOut>>::ModifyBase;
	using Base = cocos2d::CCEaseOut;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure98>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEaseOut::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure98>::value, Cdecl>(
				"cocos2d::CCEaseOut::create", 
				(void*)addresses::address98()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItemLabel> : ModifyBase<Modify<Derived, cocos2d::CCMenuItemLabel>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItemLabel>>::ModifyBase;
	using Base = cocos2d::CCMenuItemLabel;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::activate<Derived, Base, types::pure231>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::activate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activate<DefaultConv, Derived, Base, types::pure231>::value, Thiscall>(
				"cocos2d::CCMenuItemLabel::activate", 
				(void*)addresses::address231()
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure232>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::selected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selected<DefaultConv, Derived, Base, types::pure232>::value, Thiscall>(
				"cocos2d::CCMenuItemLabel::selected", 
				(void*)addresses::address232()
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure233>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unselected<DefaultConv, Derived, Base, types::pure233>::value, Thiscall>(
				"cocos2d::CCMenuItemLabel::unselected", 
				(void*)addresses::address233()
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure234>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setEnabled<DefaultConv, Derived, Base, types::pure234>::value, Thiscall>(
				"cocos2d::CCMenuItemLabel::setEnabled", 
				(void*)addresses::address234()
			);
		}

		if constexpr (compare::getDisabledColor<Derived, Base, types::pure235>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::getDisabledColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisabledColor<DefaultConv, Derived, Base, types::pure235>::value, Thiscall>(
				"cocos2d::CCMenuItemLabel::getDisabledColor", 
				(void*)addresses::address235()
			);
		}

		if constexpr (compare::setDisabledColor<Derived, Base, types::pure236>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::setDisabledColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDisabledColor<DefaultConv, Derived, Base, types::pure236>::value, Thiscall>(
				"cocos2d::CCMenuItemLabel::setDisabledColor", 
				(void*)addresses::address236()
			);
		}

		if constexpr (compare::getLabel<Derived, Base, types::pure237>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::getLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLabel<DefaultConv, Derived, Base, types::pure237>::value, Thiscall>(
				"cocos2d::CCMenuItemLabel::getLabel", 
				(void*)addresses::address237()
			);
		}

		if constexpr (compare::setLabel<Derived, Base, types::pure238>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::setLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setLabel<DefaultConv, Derived, Base, types::pure238>::value, Thiscall>(
				"cocos2d::CCMenuItemLabel::setLabel", 
				(void*)addresses::address238()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCMenuItemSpriteExtra> : ModifyBase<Modify<Derived, CCMenuItemSpriteExtra>> {
	using ModifyBase<Modify<Derived, CCMenuItemSpriteExtra>>::ModifyBase;
	using Base = CCMenuItemSpriteExtra;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure752>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure752>::value, Optcall>(
				"CCMenuItemSpriteExtra::create", 
				(void*)addresses::address752()
			);
		}

		if constexpr (compare::setSizeMult<Derived, Base, types::pure753>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::setSizeMult", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSizeMult<DefaultConv, Derived, Base, types::pure753>::value, Membercall>(
				"CCMenuItemSpriteExtra::setSizeMult", 
				(void*)addresses::address753()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure754>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure754>::value, Thiscall>(
				"CCMenuItemSpriteExtra::constructor", 
				(void*)addresses::address754()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure755>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure755>::value, Thiscall>(
				"CCMenuItemSpriteExtra::destructor", 
				(void*)addresses::address755()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure756>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure756>::value, Membercall>(
				"CCMenuItemSpriteExtra::init", 
				(void*)addresses::address756()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure757>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure757>::value, Membercall>(
				"CCMenuItemSpriteExtra::init", 
				(void*)addresses::address757()
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure758>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::activate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activate<DefaultConv, Derived, Base, types::pure758>::value, Thiscall>(
				"CCMenuItemSpriteExtra::activate", 
				(void*)addresses::address758()
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure759>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::selected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selected<DefaultConv, Derived, Base, types::pure759>::value, Thiscall>(
				"CCMenuItemSpriteExtra::selected", 
				(void*)addresses::address759()
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure760>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unselected<DefaultConv, Derived, Base, types::pure760>::value, Thiscall>(
				"CCMenuItemSpriteExtra::unselected", 
				(void*)addresses::address760()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCFadeOut> : ModifyBase<Modify<Derived, cocos2d::CCFadeOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCFadeOut>>::ModifyBase;
	using Base = cocos2d::CCFadeOut;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure104>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCFadeOut::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure104>::value, Cdecl>(
				"cocos2d::CCFadeOut::create", 
				(void*)addresses::address104()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, TableViewCell> : ModifyBase<Modify<Derived, TableViewCell>> {
	using ModifyBase<Modify<Derived, TableViewCell>>::ModifyBase;
	using Base = TableViewCell;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCHide> : ModifyBase<Modify<Derived, cocos2d::CCHide>> {
	using ModifyBase<Modify<Derived, cocos2d::CCHide>>::ModifyBase;
	using Base = cocos2d::CCHide;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure107>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCHide::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure107>::value, Cdecl>(
				"cocos2d::CCHide::create", 
				(void*)addresses::address107()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ColorChannelSprite> : ModifyBase<Modify<Derived, ColorChannelSprite>> {
	using ModifyBase<Modify<Derived, ColorChannelSprite>>::ModifyBase;
	using Base = ColorChannelSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::updateBlending<Derived, Base, types::pure849>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateBlending", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateBlending<DefaultConv, Derived, Base, types::pure849>::value, Membercall>(
				"ColorChannelSprite::updateBlending", 
				(void*)addresses::address849()
			);
		}

		if constexpr (compare::updateCopyLabel<Derived, Base, types::pure850>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateCopyLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCopyLabel<DefaultConv, Derived, Base, types::pure850>::value, Membercall>(
				"ColorChannelSprite::updateCopyLabel", 
				(void*)addresses::address850()
			);
		}

		if constexpr (compare::updateOpacity<Derived, Base, types::pure851>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateOpacity<DefaultConv, Derived, Base, types::pure851>::value, Membercall>(
				"ColorChannelSprite::updateOpacity", 
				(void*)addresses::address851()
			);
		}

		if constexpr (compare::updateValues<Derived, Base, types::pure852>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateValues<DefaultConv, Derived, Base, types::pure852>::value, Membercall>(
				"ColorChannelSprite::updateValues", 
				(void*)addresses::address852()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure853>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure853>::value, Cdecl>(
				"ColorChannelSprite::create", 
				(void*)addresses::address853()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSet> : ModifyBase<Modify<Derived, cocos2d::CCSet>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSet>>::ModifyBase;
	using Base = cocos2d::CCSet;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure425>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSet::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::acceptVisitor<DefaultConv, Derived, Base, types::pure425>::value, Thiscall>(
				"cocos2d::CCSet::acceptVisitor", 
				(void*)addresses::address425()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, TableView> : ModifyBase<Modify<Derived, TableView>> {
	using ModifyBase<Modify<Derived, TableView>>::ModifyBase;
	using Base = TableView;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2126>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TableView::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2126>::value, Optcall>(
				"TableView::create", 
				(void*)addresses::address2126()
			);
		}

		if constexpr (compare::reloadData<Derived, Base, types::pure2127>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TableView::reloadData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reloadData<DefaultConv, Derived, Base, types::pure2127>::value, Thiscall>(
				"TableView::reloadData", 
				(void*)addresses::address2127()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ListButtonBar> : ModifyBase<Modify<Derived, ListButtonBar>> {
	using ModifyBase<Modify<Derived, ListButtonBar>>::ModifyBase;
	using Base = ListButtonBar;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, AchievementsLayer> : ModifyBase<Modify<Derived, AchievementsLayer>> {
	using ModifyBase<Modify<Derived, AchievementsLayer>>::ModifyBase;
	using Base = AchievementsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::loadPage<Derived, Base, types::pure671>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementsLayer::loadPage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadPage<DefaultConv, Derived, Base, types::pure671>::value, Membercall>(
				"AchievementsLayer::loadPage", 
				(void*)addresses::address671()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCIMEDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCIMEDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCIMEDispatcher>>::ModifyBase;
	using Base = cocos2d::CCIMEDispatcher;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::sharedDispatcher<Derived, Base, types::pure110>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDispatcher::sharedDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedDispatcher<DefaultConv, Derived, Base, types::pure110>::value, Cdecl>(
				"cocos2d::CCIMEDispatcher::sharedDispatcher", 
				(void*)addresses::address110()
			);
		}

		if constexpr (compare::addDelegate<Derived, Base, types::pure111>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDispatcher::addDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addDelegate<DefaultConv, Derived, Base, types::pure111>::value, Thiscall>(
				"cocos2d::CCIMEDispatcher::addDelegate", 
				(void*)addresses::address111()
			);
		}

		if constexpr (compare::removeDelegate<Derived, Base, types::pure112>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDispatcher::removeDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeDelegate<DefaultConv, Derived, Base, types::pure112>::value, Thiscall>(
				"cocos2d::CCIMEDispatcher::removeDelegate", 
				(void*)addresses::address112()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, InfoLayer> : ModifyBase<Modify<Derived, InfoLayer>> {
	using ModifyBase<Modify<Derived, InfoLayer>>::ModifyBase;
	using Base = InfoLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure1549>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1549>::value, Membercall>(
				"InfoLayer::init", 
				(void*)addresses::address1549()
			);
		}

		if constexpr (compare::setupCommentsBrowser<Derived, Base, types::pure1550>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoLayer::setupCommentsBrowser", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupCommentsBrowser<DefaultConv, Derived, Base, types::pure1550>::value, Membercall>(
				"InfoLayer::setupCommentsBrowser", 
				(void*)addresses::address1550()
			);
		}

		if constexpr (compare::onMore<Derived, Base, types::pure1551>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoLayer::onMore", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onMore<DefaultConv, Derived, Base, types::pure1551>::value, Membercall>(
				"InfoLayer::onMore", 
				(void*)addresses::address1551()
			);
		}

		if constexpr (compare::onLevelInfo<Derived, Base, types::pure1552>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoLayer::onLevelInfo", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onLevelInfo<DefaultConv, Derived, Base, types::pure1552>::value, Membercall>(
				"InfoLayer::onLevelInfo", 
				(void*)addresses::address1552()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLayerColor> : ModifyBase<Modify<Derived, cocos2d::CCLayerColor>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLayerColor>>::ModifyBase;
	using Base = cocos2d::CCLayerColor;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure172>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure172>::value, Cdecl>(
				"cocos2d::CCLayerColor::create", 
				(void*)addresses::address172()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure173>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure173>::value, Thiscall>(
				"cocos2d::CCLayerColor::draw", 
				(void*)addresses::address173()
			);
		}

		if constexpr (compare::getBlendFunc<Derived, Base, types::pure174>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::getBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBlendFunc<DefaultConv, Derived, Base, types::pure174>::value, Thiscall>(
				"cocos2d::CCLayerColor::getBlendFunc", 
				(void*)addresses::address174()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure175>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure175>::value, Thiscall>(
				"cocos2d::CCLayerColor::init", 
				(void*)addresses::address175()
			);
		}

		if constexpr (compare::initWithColor<Derived, Base, types::pure176>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::initWithColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithColor<DefaultConv, Derived, Base, types::pure176>::value, Thiscall>(
				"cocos2d::CCLayerColor::initWithColor", 
				(void*)addresses::address176()
			);
		}

		if constexpr (compare::initWithColor<Derived, Base, types::pure177>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::initWithColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithColor<DefaultConv, Derived, Base, types::pure177>::value, Thiscall>(
				"cocos2d::CCLayerColor::initWithColor", 
				(void*)addresses::address177()
			);
		}

		if constexpr (compare::setBlendFunc<Derived, Base, types::pure178>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setBlendFunc<DefaultConv, Derived, Base, types::pure178>::value, Thiscall>(
				"cocos2d::CCLayerColor::setBlendFunc", 
				(void*)addresses::address178()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure179>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure179>::value, Thiscall>(
				"cocos2d::CCLayerColor::setColor", 
				(void*)addresses::address179()
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure180>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setContentSize<DefaultConv, Derived, Base, types::pure180>::value, Thiscall>(
				"cocos2d::CCLayerColor::setContentSize", 
				(void*)addresses::address180()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure181>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure181>::value, Thiscall>(
				"cocos2d::CCLayerColor::setOpacity", 
				(void*)addresses::address181()
			);
		}

		if constexpr (compare::updateColor<Derived, Base, types::pure182>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::updateColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColor<DefaultConv, Derived, Base, types::pure182>::value, Thiscall>(
				"cocos2d::CCLayerColor::updateColor", 
				(void*)addresses::address182()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CommentCell> : ModifyBase<Modify<Derived, CommentCell>> {
	using ModifyBase<Modify<Derived, CommentCell>>::ModifyBase;
	using Base = CommentCell;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ArtistCell> : ModifyBase<Modify<Derived, ArtistCell>> {
	using ModifyBase<Modify<Derived, ArtistCell>>::ModifyBase;
	using Base = ArtistCell;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCKeypadHandler> : ModifyBase<Modify<Derived, cocos2d::CCKeypadHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCKeypadHandler>>::ModifyBase;
	using Base = cocos2d::CCKeypadHandler;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure121>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure121>::value, Cdecl>(
				"cocos2d::CCKeypadHandler::handlerWithDelegate", 
				(void*)addresses::address121()
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure122>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure122>::value, Thiscall>(
				"cocos2d::CCKeypadHandler::initWithDelegate", 
				(void*)addresses::address122()
			);
		}

		if constexpr (compare::getDelegate<Derived, Base, types::pure124>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::getDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDelegate<DefaultConv, Derived, Base, types::pure124>::value, Thiscall>(
				"cocos2d::CCKeypadHandler::getDelegate", 
				(void*)addresses::address124()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SpawnTriggerAction> : ModifyBase<Modify<Derived, SpawnTriggerAction>> {
	using ModifyBase<Modify<Derived, SpawnTriggerAction>>::ModifyBase;
	using Base = SpawnTriggerAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCKeyboardDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCKeyboardDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCKeyboardDispatcher>>::ModifyBase;
	using Base = cocos2d::CCKeyboardDispatcher;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::dispatchKeyboardMSG<Derived, Base, types::pure116>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::dispatchKeyboardMSG<DefaultConv, Derived, Base, types::pure116>::value, Thiscall>(
				"cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG", 
				(void*)addresses::address116()
			);
		}

		if constexpr (compare::keyToString<Derived, Base, types::pure117>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardDispatcher::keyToString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyToString<DefaultConv, Derived, Base, types::pure117>::value, Thiscall>(
				"cocos2d::CCKeyboardDispatcher::keyToString", 
				(void*)addresses::address117()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCKeyboardHandler> : ModifyBase<Modify<Derived, cocos2d::CCKeyboardHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCKeyboardHandler>>::ModifyBase;
	using Base = cocos2d::CCKeyboardHandler;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure118>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure118>::value, Cdecl>(
				"cocos2d::CCKeyboardHandler::handlerWithDelegate", 
				(void*)addresses::address118()
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure119>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure119>::value, Thiscall>(
				"cocos2d::CCKeyboardHandler::initWithDelegate", 
				(void*)addresses::address119()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GaragePage> : ModifyBase<Modify<Derived, GaragePage>> {
	using ModifyBase<Modify<Derived, GaragePage>>::ModifyBase;
	using Base = GaragePage;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::listButtonBarSwitchedPage<Derived, Base, types::pure1529>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GaragePage::listButtonBarSwitchedPage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::listButtonBarSwitchedPage<DefaultConv, Derived, Base, types::pure1529>::value, Membercall>(
				"GaragePage::listButtonBarSwitchedPage", 
				(void*)addresses::address1529()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure1530>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GaragePage::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure1530>::value, Thiscall>(
				"GaragePage::constructor", 
				(void*)addresses::address1530()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1531>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GaragePage::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1531>::value, Membercall>(
				"GaragePage::init", 
				(void*)addresses::address1531()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCMenuItemToggler> : ModifyBase<Modify<Derived, CCMenuItemToggler>> {
	using ModifyBase<Modify<Derived, CCMenuItemToggler>>::ModifyBase;
	using Base = CCMenuItemToggler;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure767>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure767>::value, Optcall>(
				"CCMenuItemToggler::create", 
				(void*)addresses::address767()
			);
		}

		if constexpr (compare::setSizeMult<Derived, Base, types::pure768>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::setSizeMult", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSizeMult<DefaultConv, Derived, Base, types::pure768>::value, Membercall>(
				"CCMenuItemToggler::setSizeMult", 
				(void*)addresses::address768()
			);
		}

		if constexpr (compare::toggle<Derived, Base, types::pure769>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::toggle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggle<DefaultConv, Derived, Base, types::pure769>::value, Membercall>(
				"CCMenuItemToggler::toggle", 
				(void*)addresses::address769()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure770>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure770>::value, Membercall>(
				"CCMenuItemToggler::init", 
				(void*)addresses::address770()
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure771>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::activate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activate<DefaultConv, Derived, Base, types::pure771>::value, Thiscall>(
				"CCMenuItemToggler::activate", 
				(void*)addresses::address771()
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure772>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::selected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selected<DefaultConv, Derived, Base, types::pure772>::value, Thiscall>(
				"CCMenuItemToggler::selected", 
				(void*)addresses::address772()
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure773>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unselected<DefaultConv, Derived, Base, types::pure773>::value, Thiscall>(
				"CCMenuItemToggler::unselected", 
				(void*)addresses::address773()
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure774>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setEnabled<DefaultConv, Derived, Base, types::pure774>::value, Membercall>(
				"CCMenuItemToggler::setEnabled", 
				(void*)addresses::address774()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLayer> : ModifyBase<Modify<Derived, cocos2d::CCLayer>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLayer>>::ModifyBase;
	using Base = cocos2d::CCLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure135>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure135>::value, Thiscall>(
				"cocos2d::CCLayer::ccTouchBegan", 
				(void*)addresses::address135()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure136>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure136>::value, Thiscall>(
				"cocos2d::CCLayer::ccTouchCancelled", 
				(void*)addresses::address136()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure137>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure137>::value, Thiscall>(
				"cocos2d::CCLayer::ccTouchEnded", 
				(void*)addresses::address137()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure138>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure138>::value, Thiscall>(
				"cocos2d::CCLayer::ccTouchMoved", 
				(void*)addresses::address138()
			);
		}

		if constexpr (compare::ccTouchesBegan<Derived, Base, types::pure139>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchesBegan<DefaultConv, Derived, Base, types::pure139>::value, Thiscall>(
				"cocos2d::CCLayer::ccTouchesBegan", 
				(void*)addresses::address139()
			);
		}

		if constexpr (compare::ccTouchesCancelled<Derived, Base, types::pure140>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchesCancelled<DefaultConv, Derived, Base, types::pure140>::value, Thiscall>(
				"cocos2d::CCLayer::ccTouchesCancelled", 
				(void*)addresses::address140()
			);
		}

		if constexpr (compare::ccTouchesEnded<Derived, Base, types::pure141>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchesEnded<DefaultConv, Derived, Base, types::pure141>::value, Thiscall>(
				"cocos2d::CCLayer::ccTouchesEnded", 
				(void*)addresses::address141()
			);
		}

		if constexpr (compare::ccTouchesMoved<Derived, Base, types::pure142>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchesMoved<DefaultConv, Derived, Base, types::pure142>::value, Thiscall>(
				"cocos2d::CCLayer::ccTouchesMoved", 
				(void*)addresses::address142()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure143>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure143>::value, Cdecl>(
				"cocos2d::CCLayer::create", 
				(void*)addresses::address143()
			);
		}

		if constexpr (compare::didAccelerate<Derived, Base, types::pure144>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::didAccelerate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::didAccelerate<DefaultConv, Derived, Base, types::pure144>::value, Thiscall>(
				"cocos2d::CCLayer::didAccelerate", 
				(void*)addresses::address144()
			);
		}

		if constexpr (compare::getTouchMode<Derived, Base, types::pure145>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::getTouchMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTouchMode<DefaultConv, Derived, Base, types::pure145>::value, Thiscall>(
				"cocos2d::CCLayer::getTouchMode", 
				(void*)addresses::address145()
			);
		}

		if constexpr (compare::getTouchPriority<Derived, Base, types::pure146>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::getTouchPriority", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTouchPriority<DefaultConv, Derived, Base, types::pure146>::value, Thiscall>(
				"cocos2d::CCLayer::getTouchPriority", 
				(void*)addresses::address146()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure147>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure147>::value, Thiscall>(
				"cocos2d::CCLayer::init", 
				(void*)addresses::address147()
			);
		}

		if constexpr (compare::isAccelerometerEnabled<Derived, Base, types::pure148>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isAccelerometerEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isAccelerometerEnabled<DefaultConv, Derived, Base, types::pure148>::value, Thiscall>(
				"cocos2d::CCLayer::isAccelerometerEnabled", 
				(void*)addresses::address148()
			);
		}

		if constexpr (compare::isKeyboardEnabled<Derived, Base, types::pure149>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isKeyboardEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isKeyboardEnabled<DefaultConv, Derived, Base, types::pure149>::value, Thiscall>(
				"cocos2d::CCLayer::isKeyboardEnabled", 
				(void*)addresses::address149()
			);
		}

		if constexpr (compare::isKeypadEnabled<Derived, Base, types::pure150>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isKeypadEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isKeypadEnabled<DefaultConv, Derived, Base, types::pure150>::value, Thiscall>(
				"cocos2d::CCLayer::isKeypadEnabled", 
				(void*)addresses::address150()
			);
		}

		if constexpr (compare::isMouseEnabled<Derived, Base, types::pure151>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isMouseEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isMouseEnabled<DefaultConv, Derived, Base, types::pure151>::value, Thiscall>(
				"cocos2d::CCLayer::isMouseEnabled", 
				(void*)addresses::address151()
			);
		}

		if constexpr (compare::isTouchEnabled<Derived, Base, types::pure152>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isTouchEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isTouchEnabled<DefaultConv, Derived, Base, types::pure152>::value, Thiscall>(
				"cocos2d::CCLayer::isTouchEnabled", 
				(void*)addresses::address152()
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure153>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure153>::value, Thiscall>(
				"cocos2d::CCLayer::keyBackClicked", 
				(void*)addresses::address153()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure154>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure154>::value, Thiscall>(
				"cocos2d::CCLayer::keyDown", 
				(void*)addresses::address154()
			);
		}

		if constexpr (compare::keyMenuClicked<Derived, Base, types::pure155>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::keyMenuClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyMenuClicked<DefaultConv, Derived, Base, types::pure155>::value, Thiscall>(
				"cocos2d::CCLayer::keyMenuClicked", 
				(void*)addresses::address155()
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure156>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure156>::value, Thiscall>(
				"cocos2d::CCLayer::onEnter", 
				(void*)addresses::address156()
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure157>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure157>::value, Thiscall>(
				"cocos2d::CCLayer::onEnterTransitionDidFinish", 
				(void*)addresses::address157()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure158>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure158>::value, Thiscall>(
				"cocos2d::CCLayer::onExit", 
				(void*)addresses::address158()
			);
		}

		if constexpr (compare::registerScriptTouchHandler<Derived, Base, types::pure159>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::registerScriptTouchHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerScriptTouchHandler<DefaultConv, Derived, Base, types::pure159>::value, Thiscall>(
				"cocos2d::CCLayer::registerScriptTouchHandler", 
				(void*)addresses::address159()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure160>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure160>::value, Thiscall>(
				"cocos2d::CCLayer::registerWithTouchDispatcher", 
				(void*)addresses::address160()
			);
		}

		if constexpr (compare::setAccelerometerEnabled<Derived, Base, types::pure161>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setAccelerometerEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAccelerometerEnabled<DefaultConv, Derived, Base, types::pure161>::value, Thiscall>(
				"cocos2d::CCLayer::setAccelerometerEnabled", 
				(void*)addresses::address161()
			);
		}

		if constexpr (compare::setAccelerometerInterval<Derived, Base, types::pure162>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setAccelerometerInterval", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAccelerometerInterval<DefaultConv, Derived, Base, types::pure162>::value, Thiscall>(
				"cocos2d::CCLayer::setAccelerometerInterval", 
				(void*)addresses::address162()
			);
		}

		if constexpr (compare::setKeyboardEnabled<Derived, Base, types::pure163>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setKeyboardEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setKeyboardEnabled<DefaultConv, Derived, Base, types::pure163>::value, Thiscall>(
				"cocos2d::CCLayer::setKeyboardEnabled", 
				(void*)addresses::address163()
			);
		}

		if constexpr (compare::setKeypadEnabled<Derived, Base, types::pure164>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setKeypadEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setKeypadEnabled<DefaultConv, Derived, Base, types::pure164>::value, Thiscall>(
				"cocos2d::CCLayer::setKeypadEnabled", 
				(void*)addresses::address164()
			);
		}

		if constexpr (compare::setMouseEnabled<Derived, Base, types::pure165>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setMouseEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setMouseEnabled<DefaultConv, Derived, Base, types::pure165>::value, Thiscall>(
				"cocos2d::CCLayer::setMouseEnabled", 
				(void*)addresses::address165()
			);
		}

		if constexpr (compare::setTouchEnabled<Derived, Base, types::pure166>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setTouchEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTouchEnabled<DefaultConv, Derived, Base, types::pure166>::value, Thiscall>(
				"cocos2d::CCLayer::setTouchEnabled", 
				(void*)addresses::address166()
			);
		}

		if constexpr (compare::setTouchMode<Derived, Base, types::pure167>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setTouchMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTouchMode<DefaultConv, Derived, Base, types::pure167>::value, Thiscall>(
				"cocos2d::CCLayer::setTouchMode", 
				(void*)addresses::address167()
			);
		}

		if constexpr (compare::setTouchPriority<Derived, Base, types::pure168>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setTouchPriority", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTouchPriority<DefaultConv, Derived, Base, types::pure168>::value, Thiscall>(
				"cocos2d::CCLayer::setTouchPriority", 
				(void*)addresses::address168()
			);
		}

		if constexpr (compare::unregisterScriptTouchHandler<Derived, Base, types::pure169>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::unregisterScriptTouchHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unregisterScriptTouchHandler<DefaultConv, Derived, Base, types::pure169>::value, Thiscall>(
				"cocos2d::CCLayer::unregisterScriptTouchHandler", 
				(void*)addresses::address169()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLayerRGBA> : ModifyBase<Modify<Derived, cocos2d::CCLayerRGBA>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLayerRGBA>>::ModifyBase;
	using Base = cocos2d::CCLayerRGBA;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure185>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure185>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::init", 
				(void*)addresses::address185()
			);
		}

		if constexpr (compare::getOpacity<Derived, Base, types::pure186>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOpacity<DefaultConv, Derived, Base, types::pure186>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::getOpacity", 
				(void*)addresses::address186()
			);
		}

		if constexpr (compare::getDisplayedOpacity<Derived, Base, types::pure187>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisplayedOpacity<DefaultConv, Derived, Base, types::pure187>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::getDisplayedOpacity", 
				(void*)addresses::address187()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure188>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure188>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::setOpacity", 
				(void*)addresses::address188()
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure189>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure189>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::updateDisplayedOpacity", 
				(void*)addresses::address189()
			);
		}

		if constexpr (compare::isCascadeOpacityEnabled<Derived, Base, types::pure190>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::isCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure190>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::isCascadeOpacityEnabled", 
				(void*)addresses::address190()
			);
		}

		if constexpr (compare::setCascadeOpacityEnabled<Derived, Base, types::pure191>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure191>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::setCascadeOpacityEnabled", 
				(void*)addresses::address191()
			);
		}

		if constexpr (compare::getColor<Derived, Base, types::pure192>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getColor<DefaultConv, Derived, Base, types::pure192>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::getColor", 
				(void*)addresses::address192()
			);
		}

		if constexpr (compare::getDisplayedColor<Derived, Base, types::pure193>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisplayedColor<DefaultConv, Derived, Base, types::pure193>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::getDisplayedColor", 
				(void*)addresses::address193()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure194>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure194>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::setColor", 
				(void*)addresses::address194()
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure195>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure195>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::updateDisplayedColor", 
				(void*)addresses::address195()
			);
		}

		if constexpr (compare::isCascadeColorEnabled<Derived, Base, types::pure196>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::isCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isCascadeColorEnabled<DefaultConv, Derived, Base, types::pure196>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::isCascadeColorEnabled", 
				(void*)addresses::address196()
			);
		}

		if constexpr (compare::setCascadeColorEnabled<Derived, Base, types::pure197>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setCascadeColorEnabled<DefaultConv, Derived, Base, types::pure197>::value, Thiscall>(
				"cocos2d::CCLayerRGBA::setCascadeColorEnabled", 
				(void*)addresses::address197()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCParticleSystem> : ModifyBase<Modify<Derived, cocos2d::CCParticleSystem>> {
	using ModifyBase<Modify<Derived, cocos2d::CCParticleSystem>>::ModifyBase;
	using Base = cocos2d::CCParticleSystem;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::resetSystem<Derived, Base, types::pure403>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCParticleSystem::resetSystem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetSystem<DefaultConv, Derived, Base, types::pure403>::value, Thiscall>(
				"cocos2d::CCParticleSystem::resetSystem", 
				(void*)addresses::address403()
			);
		}

		if constexpr (compare::resumeSystem<Derived, Base, types::pure404>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCParticleSystem::resumeSystem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resumeSystem<DefaultConv, Derived, Base, types::pure404>::value, Thiscall>(
				"cocos2d::CCParticleSystem::resumeSystem", 
				(void*)addresses::address404()
			);
		}

		if constexpr (compare::stopSystem<Derived, Base, types::pure405>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCParticleSystem::stopSystem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopSystem<DefaultConv, Derived, Base, types::pure405>::value, Thiscall>(
				"cocos2d::CCParticleSystem::stopSystem", 
				(void*)addresses::address405()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenu> : ModifyBase<Modify<Derived, cocos2d::CCMenu>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenu>>::ModifyBase;
	using Base = cocos2d::CCMenu;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::alignItemsHorizontallyWithPadding<Derived, Base, types::pure199>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::alignItemsHorizontallyWithPadding", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::alignItemsHorizontallyWithPadding<DefaultConv, Derived, Base, types::pure199>::value, Thiscall>(
				"cocos2d::CCMenu::alignItemsHorizontallyWithPadding", 
				(void*)addresses::address199()
			);
		}

		if constexpr (compare::alignItemsVerticallyWithPadding<Derived, Base, types::pure200>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::alignItemsVerticallyWithPadding", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::alignItemsVerticallyWithPadding<DefaultConv, Derived, Base, types::pure200>::value, Thiscall>(
				"cocos2d::CCMenu::alignItemsVerticallyWithPadding", 
				(void*)addresses::address200()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure201>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure201>::value, Cdecl>(
				"cocos2d::CCMenu::create", 
				(void*)addresses::address201()
			);
		}

		if constexpr (compare::createWithArray<Derived, Base, types::pure202>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::createWithArray", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithArray<DefaultConv, Derived, Base, types::pure202>::value, Cdecl>(
				"cocos2d::CCMenu::createWithArray", 
				(void*)addresses::address202()
			);
		}

		if constexpr (compare::createWithItem<Derived, Base, types::pure203>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::createWithItem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithItem<DefaultConv, Derived, Base, types::pure203>::value, Cdecl>(
				"cocos2d::CCMenu::createWithItem", 
				(void*)addresses::address203()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure204>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure204>::value, Thiscall>(
				"cocos2d::CCMenu::addChild", 
				(void*)addresses::address204()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure205>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure205>::value, Thiscall>(
				"cocos2d::CCMenu::addChild", 
				(void*)addresses::address205()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure206>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure206>::value, Thiscall>(
				"cocos2d::CCMenu::addChild", 
				(void*)addresses::address206()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure207>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure207>::value, Thiscall>(
				"cocos2d::CCMenu::ccTouchBegan", 
				(void*)addresses::address207()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure208>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure208>::value, Thiscall>(
				"cocos2d::CCMenu::ccTouchMoved", 
				(void*)addresses::address208()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure209>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure209>::value, Thiscall>(
				"cocos2d::CCMenu::ccTouchEnded", 
				(void*)addresses::address209()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure210>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure210>::value, Thiscall>(
				"cocos2d::CCMenu::ccTouchCancelled", 
				(void*)addresses::address210()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure211>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure211>::value, Thiscall>(
				"cocos2d::CCMenu::init", 
				(void*)addresses::address211()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure212>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure212>::value, Thiscall>(
				"cocos2d::CCMenu::registerWithTouchDispatcher", 
				(void*)addresses::address212()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure213>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure213>::value, Thiscall>(
				"cocos2d::CCMenu::onExit", 
				(void*)addresses::address213()
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure214>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChild<DefaultConv, Derived, Base, types::pure214>::value, Thiscall>(
				"cocos2d::CCMenu::removeChild", 
				(void*)addresses::address214()
			);
		}

		if constexpr (compare::initWithArray<Derived, Base, types::pure215>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::initWithArray", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithArray<DefaultConv, Derived, Base, types::pure215>::value, Thiscall>(
				"cocos2d::CCMenu::initWithArray", 
				(void*)addresses::address215()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItem> : ModifyBase<Modify<Derived, cocos2d::CCMenuItem>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItem>>::ModifyBase;
	using Base = cocos2d::CCMenuItem;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::activate<Derived, Base, types::pure220>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::activate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activate<DefaultConv, Derived, Base, types::pure220>::value, Thiscall>(
				"cocos2d::CCMenuItem::activate", 
				(void*)addresses::address220()
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure221>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::selected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selected<DefaultConv, Derived, Base, types::pure221>::value, Thiscall>(
				"cocos2d::CCMenuItem::selected", 
				(void*)addresses::address221()
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure222>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unselected<DefaultConv, Derived, Base, types::pure222>::value, Thiscall>(
				"cocos2d::CCMenuItem::unselected", 
				(void*)addresses::address222()
			);
		}

		if constexpr (compare::registerScriptTapHandler<Derived, Base, types::pure223>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::registerScriptTapHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerScriptTapHandler<DefaultConv, Derived, Base, types::pure223>::value, Thiscall>(
				"cocos2d::CCMenuItem::registerScriptTapHandler", 
				(void*)addresses::address223()
			);
		}

		if constexpr (compare::unregisterScriptTapHandler<Derived, Base, types::pure224>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::unregisterScriptTapHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unregisterScriptTapHandler<DefaultConv, Derived, Base, types::pure224>::value, Thiscall>(
				"cocos2d::CCMenuItem::unregisterScriptTapHandler", 
				(void*)addresses::address224()
			);
		}

		if constexpr (compare::isEnabled<Derived, Base, types::pure225>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::isEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isEnabled<DefaultConv, Derived, Base, types::pure225>::value, Thiscall>(
				"cocos2d::CCMenuItem::isEnabled", 
				(void*)addresses::address225()
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure226>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setEnabled<DefaultConv, Derived, Base, types::pure226>::value, Thiscall>(
				"cocos2d::CCMenuItem::setEnabled", 
				(void*)addresses::address226()
			);
		}

		if constexpr (compare::isSelected<Derived, Base, types::pure227>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::isSelected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isSelected<DefaultConv, Derived, Base, types::pure227>::value, Thiscall>(
				"cocos2d::CCMenuItem::isSelected", 
				(void*)addresses::address227()
			);
		}

		if constexpr (compare::rect<Derived, Base, types::pure228>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::rect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::rect<DefaultConv, Derived, Base, types::pure228>::value, Thiscall>(
				"cocos2d::CCMenuItem::rect", 
				(void*)addresses::address228()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, NumberInputDelegate> : ModifyBase<Modify<Derived, NumberInputDelegate>> {
	using ModifyBase<Modify<Derived, NumberInputDelegate>>::ModifyBase;
	using Base = NumberInputDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, MusicDownloadManager> : ModifyBase<Modify<Derived, MusicDownloadManager>> {
	using ModifyBase<Modify<Derived, MusicDownloadManager>>::ModifyBase;
	using Base = MusicDownloadManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::sharedState<Derived, Base, types::pure1695>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1695>::value, Cdecl>(
				"MusicDownloadManager::sharedState", 
				(void*)addresses::address1695()
			);
		}

		if constexpr (compare::pathForSong<Derived, Base, types::pure1696>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::pathForSong", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pathForSong<DefaultConv, Derived, Base, types::pure1696>::value, Membercall>(
				"MusicDownloadManager::pathForSong", 
				(void*)addresses::address1696()
			);
		}

		if constexpr (compare::getDownloadedSongs<Derived, Base, types::pure1697>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::getDownloadedSongs", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDownloadedSongs<DefaultConv, Derived, Base, types::pure1697>::value, Thiscall>(
				"MusicDownloadManager::getDownloadedSongs", 
				(void*)addresses::address1697()
			);
		}

		if constexpr (compare::songStateChanged<Derived, Base, types::pure1698>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::songStateChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::songStateChanged<DefaultConv, Derived, Base, types::pure1698>::value, Thiscall>(
				"MusicDownloadManager::songStateChanged", 
				(void*)addresses::address1698()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCString> : ModifyBase<Modify<Derived, cocos2d::CCString>> {
	using ModifyBase<Modify<Derived, cocos2d::CCString>>::ModifyBase;
	using Base = cocos2d::CCString;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::isEqual<Derived, Base, types::pure502>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::isEqual", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isEqual<DefaultConv, Derived, Base, types::pure502>::value, Thiscall>(
				"cocos2d::CCString::isEqual", 
				(void*)addresses::address502()
			);
		}

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure503>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::acceptVisitor<DefaultConv, Derived, Base, types::pure503>::value, Thiscall>(
				"cocos2d::CCString::acceptVisitor", 
				(void*)addresses::address503()
			);
		}

		if constexpr (compare::copyWithZone<Derived, Base, types::pure504>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::copyWithZone", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::copyWithZone<DefaultConv, Derived, Base, types::pure504>::value, Thiscall>(
				"cocos2d::CCString::copyWithZone", 
				(void*)addresses::address504()
			);
		}

		if constexpr (compare::boolValue<Derived, Base, types::pure505>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::boolValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::boolValue<DefaultConv, Derived, Base, types::pure505>::value, Thiscall>(
				"cocos2d::CCString::boolValue", 
				(void*)addresses::address505()
			);
		}

		if constexpr (compare::doubleValue<Derived, Base, types::pure506>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::doubleValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::doubleValue<DefaultConv, Derived, Base, types::pure506>::value, Thiscall>(
				"cocos2d::CCString::doubleValue", 
				(void*)addresses::address506()
			);
		}

		if constexpr (compare::floatValue<Derived, Base, types::pure507>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::floatValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::floatValue<DefaultConv, Derived, Base, types::pure507>::value, Thiscall>(
				"cocos2d::CCString::floatValue", 
				(void*)addresses::address507()
			);
		}

		if constexpr (compare::getCString<Derived, Base, types::pure508>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::getCString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCString<DefaultConv, Derived, Base, types::pure508>::value, Thiscall>(
				"cocos2d::CCString::getCString", 
				(void*)addresses::address508()
			);
		}

		if constexpr (compare::intValue<Derived, Base, types::pure509>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::intValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::intValue<DefaultConv, Derived, Base, types::pure509>::value, Thiscall>(
				"cocos2d::CCString::intValue", 
				(void*)addresses::address509()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItemImage> : ModifyBase<Modify<Derived, cocos2d::CCMenuItemImage>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItemImage>>::ModifyBase;
	using Base = cocos2d::CCMenuItemImage;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure229>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemImage::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure229>::value, Thiscall>(
				"cocos2d::CCMenuItemImage::init", 
				(void*)addresses::address229()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItemSprite> : ModifyBase<Modify<Derived, cocos2d::CCMenuItemSprite>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItemSprite>>::ModifyBase;
	using Base = cocos2d::CCMenuItemSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::selected<Derived, Base, types::pure239>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::selected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selected<DefaultConv, Derived, Base, types::pure239>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::selected", 
				(void*)addresses::address239()
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure240>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unselected<DefaultConv, Derived, Base, types::pure240>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::unselected", 
				(void*)addresses::address240()
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure241>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setEnabled<DefaultConv, Derived, Base, types::pure241>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::setEnabled", 
				(void*)addresses::address241()
			);
		}

		if constexpr (compare::getNormalImage<Derived, Base, types::pure242>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::getNormalImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getNormalImage<DefaultConv, Derived, Base, types::pure242>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::getNormalImage", 
				(void*)addresses::address242()
			);
		}

		if constexpr (compare::setNormalImage<Derived, Base, types::pure243>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setNormalImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setNormalImage<DefaultConv, Derived, Base, types::pure243>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::setNormalImage", 
				(void*)addresses::address243()
			);
		}

		if constexpr (compare::getSelectedImage<Derived, Base, types::pure244>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::getSelectedImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSelectedImage<DefaultConv, Derived, Base, types::pure244>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::getSelectedImage", 
				(void*)addresses::address244()
			);
		}

		if constexpr (compare::setSelectedImage<Derived, Base, types::pure245>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setSelectedImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSelectedImage<DefaultConv, Derived, Base, types::pure245>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::setSelectedImage", 
				(void*)addresses::address245()
			);
		}

		if constexpr (compare::getDisabledImage<Derived, Base, types::pure246>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::getDisabledImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisabledImage<DefaultConv, Derived, Base, types::pure246>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::getDisabledImage", 
				(void*)addresses::address246()
			);
		}

		if constexpr (compare::setDisabledImage<Derived, Base, types::pure247>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setDisabledImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDisabledImage<DefaultConv, Derived, Base, types::pure247>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::setDisabledImage", 
				(void*)addresses::address247()
			);
		}

		if constexpr (compare::updateImagesVisibility<Derived, Base, types::pure248>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::updateImagesVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateImagesVisibility<DefaultConv, Derived, Base, types::pure248>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::updateImagesVisibility", 
				(void*)addresses::address248()
			);
		}

		if constexpr (compare::initWithNormalSprite<Derived, Base, types::pure249>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::initWithNormalSprite", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithNormalSprite<DefaultConv, Derived, Base, types::pure249>::value, Thiscall>(
				"cocos2d::CCMenuItemSprite::initWithNormalSprite", 
				(void*)addresses::address249()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure250>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure250>::value, Cdecl>(
				"cocos2d::CCMenuItemSprite::create", 
				(void*)addresses::address250()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure251>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure251>::value, Cdecl>(
				"cocos2d::CCMenuItemSprite::create", 
				(void*)addresses::address251()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure252>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure252>::value, Cdecl>(
				"cocos2d::CCMenuItemSprite::create", 
				(void*)addresses::address252()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMoveTo> : ModifyBase<Modify<Derived, cocos2d::CCMoveTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMoveTo>>::ModifyBase;
	using Base = cocos2d::CCMoveTo;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure261>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMoveTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure261>::value, Cdecl>(
				"cocos2d::CCMoveTo::create", 
				(void*)addresses::address261()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMotionStreak> : ModifyBase<Modify<Derived, cocos2d::CCMotionStreak>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMotionStreak>>::ModifyBase;
	using Base = cocos2d::CCMotionStreak;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::reset<Derived, Base, types::pure253>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::reset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reset<DefaultConv, Derived, Base, types::pure253>::value, Thiscall>(
				"cocos2d::CCMotionStreak::reset", 
				(void*)addresses::address253()
			);
		}

		if constexpr (compare::resumeStroke<Derived, Base, types::pure254>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::resumeStroke", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resumeStroke<DefaultConv, Derived, Base, types::pure254>::value, Thiscall>(
				"cocos2d::CCMotionStreak::resumeStroke", 
				(void*)addresses::address254()
			);
		}

		if constexpr (compare::stopStroke<Derived, Base, types::pure255>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::stopStroke", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopStroke<DefaultConv, Derived, Base, types::pure255>::value, Thiscall>(
				"cocos2d::CCMotionStreak::stopStroke", 
				(void*)addresses::address255()
			);
		}

		if constexpr (compare::initWithFade<Derived, Base, types::pure256>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::initWithFade", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFade<DefaultConv, Derived, Base, types::pure256>::value, Thiscall>(
				"cocos2d::CCMotionStreak::initWithFade", 
				(void*)addresses::address256()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMoveBy> : ModifyBase<Modify<Derived, cocos2d::CCMoveBy>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMoveBy>>::ModifyBase;
	using Base = cocos2d::CCMoveBy;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure260>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMoveBy::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure260>::value, Cdecl>(
				"cocos2d::CCMoveBy::create", 
				(void*)addresses::address260()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCNode> : ModifyBase<Modify<Derived, cocos2d::CCNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCNode>>::ModifyBase;
	using Base = cocos2d::CCNode;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::_setZOrder<Derived, Base, types::pure263>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::_setZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::_setZOrder<DefaultConv, Derived, Base, types::pure263>::value, Thiscall>(
				"cocos2d::CCNode::_setZOrder", 
				(void*)addresses::address263()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure264>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure264>::value, Thiscall>(
				"cocos2d::CCNode::addChild", 
				(void*)addresses::address264()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure265>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure265>::value, Thiscall>(
				"cocos2d::CCNode::addChild", 
				(void*)addresses::address265()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure266>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure266>::value, Thiscall>(
				"cocos2d::CCNode::addChild", 
				(void*)addresses::address266()
			);
		}

		if constexpr (compare::addComponent<Derived, Base, types::pure267>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addComponent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addComponent<DefaultConv, Derived, Base, types::pure267>::value, Thiscall>(
				"cocos2d::CCNode::addComponent", 
				(void*)addresses::address267()
			);
		}

		if constexpr (compare::cleanup<Derived, Base, types::pure268>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::cleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::cleanup<DefaultConv, Derived, Base, types::pure268>::value, Thiscall>(
				"cocos2d::CCNode::cleanup", 
				(void*)addresses::address268()
			);
		}

		if constexpr (compare::convertToNodeSpace<Derived, Base, types::pure269>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::convertToNodeSpace", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::convertToNodeSpace<DefaultConv, Derived, Base, types::pure269>::value, Thiscall>(
				"cocos2d::CCNode::convertToNodeSpace", 
				(void*)addresses::address269()
			);
		}

		if constexpr (compare::convertToWorldSpace<Derived, Base, types::pure270>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::convertToWorldSpace", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::convertToWorldSpace<DefaultConv, Derived, Base, types::pure270>::value, Thiscall>(
				"cocos2d::CCNode::convertToWorldSpace", 
				(void*)addresses::address270()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure271>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure271>::value, Cdecl>(
				"cocos2d::CCNode::create", 
				(void*)addresses::address271()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure272>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure272>::value, Thiscall>(
				"cocos2d::CCNode::draw", 
				(void*)addresses::address272()
			);
		}

		if constexpr (compare::getActionByTag<Derived, Base, types::pure273>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getActionByTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getActionByTag<DefaultConv, Derived, Base, types::pure273>::value, Thiscall>(
				"cocos2d::CCNode::getActionByTag", 
				(void*)addresses::address273()
			);
		}

		if constexpr (compare::getActionManager<Derived, Base, types::pure274>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getActionManager<DefaultConv, Derived, Base, types::pure274>::value, Thiscall>(
				"cocos2d::CCNode::getActionManager", 
				(void*)addresses::address274()
			);
		}

		if constexpr (compare::getAnchorPoint<Derived, Base, types::pure275>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAnchorPoint<DefaultConv, Derived, Base, types::pure275>::value, Thiscall>(
				"cocos2d::CCNode::getAnchorPoint", 
				(void*)addresses::address275()
			);
		}

		if constexpr (compare::getAnchorPointInPoints<Derived, Base, types::pure276>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getAnchorPointInPoints", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAnchorPointInPoints<DefaultConv, Derived, Base, types::pure276>::value, Thiscall>(
				"cocos2d::CCNode::getAnchorPointInPoints", 
				(void*)addresses::address276()
			);
		}

		if constexpr (compare::getCamera<Derived, Base, types::pure277>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getCamera", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCamera<DefaultConv, Derived, Base, types::pure277>::value, Thiscall>(
				"cocos2d::CCNode::getCamera", 
				(void*)addresses::address277()
			);
		}

		if constexpr (compare::getChildByTag<Derived, Base, types::pure278>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getChildByTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getChildByTag<DefaultConv, Derived, Base, types::pure278>::value, Thiscall>(
				"cocos2d::CCNode::getChildByTag", 
				(void*)addresses::address278()
			);
		}

		if constexpr (compare::getChildren<Derived, Base, types::pure279>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getChildren", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getChildren<DefaultConv, Derived, Base, types::pure279>::value, Thiscall>(
				"cocos2d::CCNode::getChildren", 
				(void*)addresses::address279()
			);
		}

		if constexpr (compare::getChildrenCount<Derived, Base, types::pure280>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getChildrenCount", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getChildrenCount<DefaultConv, Derived, Base, types::pure280>::value, Thiscall>(
				"cocos2d::CCNode::getChildrenCount", 
				(void*)addresses::address280()
			);
		}

		if constexpr (compare::getContentSize<Derived, Base, types::pure281>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getContentSize<DefaultConv, Derived, Base, types::pure281>::value, Thiscall>(
				"cocos2d::CCNode::getContentSize", 
				(void*)addresses::address281()
			);
		}

		if constexpr (compare::getGLServerState<Derived, Base, types::pure282>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getGLServerState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGLServerState<DefaultConv, Derived, Base, types::pure282>::value, Thiscall>(
				"cocos2d::CCNode::getGLServerState", 
				(void*)addresses::address282()
			);
		}

		if constexpr (compare::getGrid<Derived, Base, types::pure283>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getGrid", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGrid<DefaultConv, Derived, Base, types::pure283>::value, Thiscall>(
				"cocos2d::CCNode::getGrid", 
				(void*)addresses::address283()
			);
		}

		if constexpr (compare::getOrderOfArrival<Derived, Base, types::pure284>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getOrderOfArrival", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOrderOfArrival<DefaultConv, Derived, Base, types::pure284>::value, Thiscall>(
				"cocos2d::CCNode::getOrderOfArrival", 
				(void*)addresses::address284()
			);
		}

		if constexpr (compare::getParent<Derived, Base, types::pure285>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getParent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getParent<DefaultConv, Derived, Base, types::pure285>::value, Thiscall>(
				"cocos2d::CCNode::getParent", 
				(void*)addresses::address285()
			);
		}

		if constexpr (compare::getPosition<Derived, Base, types::pure286>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPosition<DefaultConv, Derived, Base, types::pure286>::value, Thiscall>(
				"cocos2d::CCNode::getPosition", 
				(void*)addresses::address286()
			);
		}

		if constexpr (compare::getPosition<Derived, Base, types::pure287>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPosition<DefaultConv, Derived, Base, types::pure287>::value, Thiscall>(
				"cocos2d::CCNode::getPosition", 
				(void*)addresses::address287()
			);
		}

		if constexpr (compare::getPositionX<Derived, Base, types::pure288>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPositionX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPositionX<DefaultConv, Derived, Base, types::pure288>::value, Thiscall>(
				"cocos2d::CCNode::getPositionX", 
				(void*)addresses::address288()
			);
		}

		if constexpr (compare::getPositionY<Derived, Base, types::pure289>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPositionY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPositionY<DefaultConv, Derived, Base, types::pure289>::value, Thiscall>(
				"cocos2d::CCNode::getPositionY", 
				(void*)addresses::address289()
			);
		}

		if constexpr (compare::getRotation<Derived, Base, types::pure290>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRotation<DefaultConv, Derived, Base, types::pure290>::value, Thiscall>(
				"cocos2d::CCNode::getRotation", 
				(void*)addresses::address290()
			);
		}

		if constexpr (compare::getRotationX<Derived, Base, types::pure291>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getRotationX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRotationX<DefaultConv, Derived, Base, types::pure291>::value, Thiscall>(
				"cocos2d::CCNode::getRotationX", 
				(void*)addresses::address291()
			);
		}

		if constexpr (compare::getRotationY<Derived, Base, types::pure292>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getRotationY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRotationY<DefaultConv, Derived, Base, types::pure292>::value, Thiscall>(
				"cocos2d::CCNode::getRotationY", 
				(void*)addresses::address292()
			);
		}

		if constexpr (compare::getScale<Derived, Base, types::pure293>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScale<DefaultConv, Derived, Base, types::pure293>::value, Thiscall>(
				"cocos2d::CCNode::getScale", 
				(void*)addresses::address293()
			);
		}

		if constexpr (compare::getScaleX<Derived, Base, types::pure294>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScaleX<DefaultConv, Derived, Base, types::pure294>::value, Thiscall>(
				"cocos2d::CCNode::getScaleX", 
				(void*)addresses::address294()
			);
		}

		if constexpr (compare::getScaleY<Derived, Base, types::pure295>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScaleY<DefaultConv, Derived, Base, types::pure295>::value, Thiscall>(
				"cocos2d::CCNode::getScaleY", 
				(void*)addresses::address295()
			);
		}

		if constexpr (compare::getScaledContentSize<Derived, Base, types::pure296>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScaledContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScaledContentSize<DefaultConv, Derived, Base, types::pure296>::value, Thiscall>(
				"cocos2d::CCNode::getScaledContentSize", 
				(void*)addresses::address296()
			);
		}

		if constexpr (compare::getScheduler<Derived, Base, types::pure297>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScheduler<DefaultConv, Derived, Base, types::pure297>::value, Thiscall>(
				"cocos2d::CCNode::getScheduler", 
				(void*)addresses::address297()
			);
		}

		if constexpr (compare::getShaderProgram<Derived, Base, types::pure298>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getShaderProgram<DefaultConv, Derived, Base, types::pure298>::value, Thiscall>(
				"cocos2d::CCNode::getShaderProgram", 
				(void*)addresses::address298()
			);
		}

		if constexpr (compare::getSkewX<Derived, Base, types::pure299>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getSkewX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSkewX<DefaultConv, Derived, Base, types::pure299>::value, Thiscall>(
				"cocos2d::CCNode::getSkewX", 
				(void*)addresses::address299()
			);
		}

		if constexpr (compare::getSkewY<Derived, Base, types::pure300>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getSkewY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSkewY<DefaultConv, Derived, Base, types::pure300>::value, Thiscall>(
				"cocos2d::CCNode::getSkewY", 
				(void*)addresses::address300()
			);
		}

		if constexpr (compare::getUserData<Derived, Base, types::pure301>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getUserData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getUserData<DefaultConv, Derived, Base, types::pure301>::value, Thiscall>(
				"cocos2d::CCNode::getUserData", 
				(void*)addresses::address301()
			);
		}

		if constexpr (compare::getUserObject<Derived, Base, types::pure302>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getUserObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getUserObject<DefaultConv, Derived, Base, types::pure302>::value, Thiscall>(
				"cocos2d::CCNode::getUserObject", 
				(void*)addresses::address302()
			);
		}

		if constexpr (compare::getVertexZ<Derived, Base, types::pure303>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getVertexZ", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getVertexZ<DefaultConv, Derived, Base, types::pure303>::value, Thiscall>(
				"cocos2d::CCNode::getVertexZ", 
				(void*)addresses::address303()
			);
		}

		if constexpr (compare::getZOrder<Derived, Base, types::pure304>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getZOrder<DefaultConv, Derived, Base, types::pure304>::value, Thiscall>(
				"cocos2d::CCNode::getZOrder", 
				(void*)addresses::address304()
			);
		}

		if constexpr (compare::ignoreAnchorPointForPosition<Derived, Base, types::pure305>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::ignoreAnchorPointForPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ignoreAnchorPointForPosition<DefaultConv, Derived, Base, types::pure305>::value, Thiscall>(
				"cocos2d::CCNode::ignoreAnchorPointForPosition", 
				(void*)addresses::address305()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure306>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure306>::value, Thiscall>(
				"cocos2d::CCNode::init", 
				(void*)addresses::address306()
			);
		}

		if constexpr (compare::isIgnoreAnchorPointForPosition<Derived, Base, types::pure307>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::isIgnoreAnchorPointForPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isIgnoreAnchorPointForPosition<DefaultConv, Derived, Base, types::pure307>::value, Thiscall>(
				"cocos2d::CCNode::isIgnoreAnchorPointForPosition", 
				(void*)addresses::address307()
			);
		}

		if constexpr (compare::isRunning<Derived, Base, types::pure308>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::isRunning", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isRunning<DefaultConv, Derived, Base, types::pure308>::value, Thiscall>(
				"cocos2d::CCNode::isRunning", 
				(void*)addresses::address308()
			);
		}

		if constexpr (compare::isVisible<Derived, Base, types::pure309>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::isVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isVisible<DefaultConv, Derived, Base, types::pure309>::value, Thiscall>(
				"cocos2d::CCNode::isVisible", 
				(void*)addresses::address309()
			);
		}

		if constexpr (compare::nodeToParentTransform<Derived, Base, types::pure310>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::nodeToParentTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::nodeToParentTransform<DefaultConv, Derived, Base, types::pure310>::value, Thiscall>(
				"cocos2d::CCNode::nodeToParentTransform", 
				(void*)addresses::address310()
			);
		}

		if constexpr (compare::nodeToWorldTransform<Derived, Base, types::pure311>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::nodeToWorldTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::nodeToWorldTransform<DefaultConv, Derived, Base, types::pure311>::value, Thiscall>(
				"cocos2d::CCNode::nodeToWorldTransform", 
				(void*)addresses::address311()
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure312>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure312>::value, Thiscall>(
				"cocos2d::CCNode::onEnter", 
				(void*)addresses::address312()
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure313>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure313>::value, Thiscall>(
				"cocos2d::CCNode::onEnterTransitionDidFinish", 
				(void*)addresses::address313()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure314>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure314>::value, Thiscall>(
				"cocos2d::CCNode::onExit", 
				(void*)addresses::address314()
			);
		}

		if constexpr (compare::onExitTransitionDidStart<Derived, Base, types::pure315>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onExitTransitionDidStart", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExitTransitionDidStart<DefaultConv, Derived, Base, types::pure315>::value, Thiscall>(
				"cocos2d::CCNode::onExitTransitionDidStart", 
				(void*)addresses::address315()
			);
		}

		if constexpr (compare::parentToNodeTransform<Derived, Base, types::pure316>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::parentToNodeTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::parentToNodeTransform<DefaultConv, Derived, Base, types::pure316>::value, Thiscall>(
				"cocos2d::CCNode::parentToNodeTransform", 
				(void*)addresses::address316()
			);
		}

		if constexpr (compare::pauseSchedulerAndActions<Derived, Base, types::pure317>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::pauseSchedulerAndActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pauseSchedulerAndActions<DefaultConv, Derived, Base, types::pure317>::value, Thiscall>(
				"cocos2d::CCNode::pauseSchedulerAndActions", 
				(void*)addresses::address317()
			);
		}

		if constexpr (compare::registerScriptHandler<Derived, Base, types::pure318>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::registerScriptHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerScriptHandler<DefaultConv, Derived, Base, types::pure318>::value, Thiscall>(
				"cocos2d::CCNode::registerScriptHandler", 
				(void*)addresses::address318()
			);
		}

		if constexpr (compare::removeAllChildren<Derived, Base, types::pure319>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeAllChildren", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllChildren<DefaultConv, Derived, Base, types::pure319>::value, Thiscall>(
				"cocos2d::CCNode::removeAllChildren", 
				(void*)addresses::address319()
			);
		}

		if constexpr (compare::removeAllChildrenWithCleanup<Derived, Base, types::pure320>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeAllChildrenWithCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllChildrenWithCleanup<DefaultConv, Derived, Base, types::pure320>::value, Thiscall>(
				"cocos2d::CCNode::removeAllChildrenWithCleanup", 
				(void*)addresses::address320()
			);
		}

		if constexpr (compare::removeAllComponents<Derived, Base, types::pure321>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeAllComponents", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllComponents<DefaultConv, Derived, Base, types::pure321>::value, Thiscall>(
				"cocos2d::CCNode::removeAllComponents", 
				(void*)addresses::address321()
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure322>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChild<DefaultConv, Derived, Base, types::pure322>::value, Thiscall>(
				"cocos2d::CCNode::removeChild", 
				(void*)addresses::address322()
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure323>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChild<DefaultConv, Derived, Base, types::pure323>::value, Thiscall>(
				"cocos2d::CCNode::removeChild", 
				(void*)addresses::address323()
			);
		}

		if constexpr (compare::removeChildByTag<Derived, Base, types::pure324>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChildByTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChildByTag<DefaultConv, Derived, Base, types::pure324>::value, Thiscall>(
				"cocos2d::CCNode::removeChildByTag", 
				(void*)addresses::address324()
			);
		}

		if constexpr (compare::removeChildByTag<Derived, Base, types::pure325>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChildByTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChildByTag<DefaultConv, Derived, Base, types::pure325>::value, Thiscall>(
				"cocos2d::CCNode::removeChildByTag", 
				(void*)addresses::address325()
			);
		}

		if constexpr (compare::removeComponent<Derived, Base, types::pure326>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeComponent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeComponent<DefaultConv, Derived, Base, types::pure326>::value, Thiscall>(
				"cocos2d::CCNode::removeComponent", 
				(void*)addresses::address326()
			);
		}

		if constexpr (compare::removeComponent<Derived, Base, types::pure327>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeComponent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeComponent<DefaultConv, Derived, Base, types::pure327>::value, Thiscall>(
				"cocos2d::CCNode::removeComponent", 
				(void*)addresses::address327()
			);
		}

		if constexpr (compare::removeFromParent<Derived, Base, types::pure328>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeFromParent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeFromParent<DefaultConv, Derived, Base, types::pure328>::value, Thiscall>(
				"cocos2d::CCNode::removeFromParent", 
				(void*)addresses::address328()
			);
		}

		if constexpr (compare::removeFromParentAndCleanup<Derived, Base, types::pure329>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeFromParentAndCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeFromParentAndCleanup<DefaultConv, Derived, Base, types::pure329>::value, Thiscall>(
				"cocos2d::CCNode::removeFromParentAndCleanup", 
				(void*)addresses::address329()
			);
		}

		if constexpr (compare::removeMeAndCleanup<Derived, Base, types::pure330>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeMeAndCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeMeAndCleanup<DefaultConv, Derived, Base, types::pure330>::value, Thiscall>(
				"cocos2d::CCNode::removeMeAndCleanup", 
				(void*)addresses::address330()
			);
		}

		if constexpr (compare::reorderChild<Derived, Base, types::pure331>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::reorderChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reorderChild<DefaultConv, Derived, Base, types::pure331>::value, Thiscall>(
				"cocos2d::CCNode::reorderChild", 
				(void*)addresses::address331()
			);
		}

		if constexpr (compare::resumeSchedulerAndActions<Derived, Base, types::pure332>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::resumeSchedulerAndActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resumeSchedulerAndActions<DefaultConv, Derived, Base, types::pure332>::value, Thiscall>(
				"cocos2d::CCNode::resumeSchedulerAndActions", 
				(void*)addresses::address332()
			);
		}

		if constexpr (compare::runAction<Derived, Base, types::pure333>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::runAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runAction<DefaultConv, Derived, Base, types::pure333>::value, Thiscall>(
				"cocos2d::CCNode::runAction", 
				(void*)addresses::address333()
			);
		}

		if constexpr (compare::schedule<Derived, Base, types::pure334>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::schedule", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::schedule<DefaultConv, Derived, Base, types::pure334>::value, Thiscall>(
				"cocos2d::CCNode::schedule", 
				(void*)addresses::address334()
			);
		}

		if constexpr (compare::schedule<Derived, Base, types::pure335>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::schedule", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::schedule<DefaultConv, Derived, Base, types::pure335>::value, Thiscall>(
				"cocos2d::CCNode::schedule", 
				(void*)addresses::address335()
			);
		}

		if constexpr (compare::scheduleUpdate<Derived, Base, types::pure336>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::scheduleUpdate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scheduleUpdate<DefaultConv, Derived, Base, types::pure336>::value, Thiscall>(
				"cocos2d::CCNode::scheduleUpdate", 
				(void*)addresses::address336()
			);
		}

		if constexpr (compare::setActionManager<Derived, Base, types::pure337>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setActionManager<DefaultConv, Derived, Base, types::pure337>::value, Thiscall>(
				"cocos2d::CCNode::setActionManager", 
				(void*)addresses::address337()
			);
		}

		if constexpr (compare::setAnchorPoint<Derived, Base, types::pure338>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAnchorPoint<DefaultConv, Derived, Base, types::pure338>::value, Thiscall>(
				"cocos2d::CCNode::setAnchorPoint", 
				(void*)addresses::address338()
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure339>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setContentSize<DefaultConv, Derived, Base, types::pure339>::value, Thiscall>(
				"cocos2d::CCNode::setContentSize", 
				(void*)addresses::address339()
			);
		}

		if constexpr (compare::setGLServerState<Derived, Base, types::pure340>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setGLServerState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setGLServerState<DefaultConv, Derived, Base, types::pure340>::value, Thiscall>(
				"cocos2d::CCNode::setGLServerState", 
				(void*)addresses::address340()
			);
		}

		if constexpr (compare::setGrid<Derived, Base, types::pure341>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setGrid", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setGrid<DefaultConv, Derived, Base, types::pure341>::value, Thiscall>(
				"cocos2d::CCNode::setGrid", 
				(void*)addresses::address341()
			);
		}

		if constexpr (compare::setOrderOfArrival<Derived, Base, types::pure342>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setOrderOfArrival", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOrderOfArrival<DefaultConv, Derived, Base, types::pure342>::value, Thiscall>(
				"cocos2d::CCNode::setOrderOfArrival", 
				(void*)addresses::address342()
			);
		}

		if constexpr (compare::setParent<Derived, Base, types::pure343>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setParent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setParent<DefaultConv, Derived, Base, types::pure343>::value, Thiscall>(
				"cocos2d::CCNode::setParent", 
				(void*)addresses::address343()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure344>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure344>::value, Thiscall>(
				"cocos2d::CCNode::setPosition", 
				(void*)addresses::address344()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure345>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure345>::value, Thiscall>(
				"cocos2d::CCNode::setPosition", 
				(void*)addresses::address345()
			);
		}

		if constexpr (compare::setPositionX<Derived, Base, types::pure346>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPositionX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPositionX<DefaultConv, Derived, Base, types::pure346>::value, Thiscall>(
				"cocos2d::CCNode::setPositionX", 
				(void*)addresses::address346()
			);
		}

		if constexpr (compare::setPositionY<Derived, Base, types::pure347>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPositionY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPositionY<DefaultConv, Derived, Base, types::pure347>::value, Thiscall>(
				"cocos2d::CCNode::setPositionY", 
				(void*)addresses::address347()
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure348>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotation<DefaultConv, Derived, Base, types::pure348>::value, Thiscall>(
				"cocos2d::CCNode::setRotation", 
				(void*)addresses::address348()
			);
		}

		if constexpr (compare::setRotationX<Derived, Base, types::pure349>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setRotationX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotationX<DefaultConv, Derived, Base, types::pure349>::value, Thiscall>(
				"cocos2d::CCNode::setRotationX", 
				(void*)addresses::address349()
			);
		}

		if constexpr (compare::setRotationY<Derived, Base, types::pure350>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setRotationY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotationY<DefaultConv, Derived, Base, types::pure350>::value, Thiscall>(
				"cocos2d::CCNode::setRotationY", 
				(void*)addresses::address350()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure351>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure351>::value, Thiscall>(
				"cocos2d::CCNode::setScale", 
				(void*)addresses::address351()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure352>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure352>::value, Thiscall>(
				"cocos2d::CCNode::setScale", 
				(void*)addresses::address352()
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure353>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleX<DefaultConv, Derived, Base, types::pure353>::value, Thiscall>(
				"cocos2d::CCNode::setScaleX", 
				(void*)addresses::address353()
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure354>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleY<DefaultConv, Derived, Base, types::pure354>::value, Thiscall>(
				"cocos2d::CCNode::setScaleY", 
				(void*)addresses::address354()
			);
		}

		if constexpr (compare::setScheduler<Derived, Base, types::pure355>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScheduler<DefaultConv, Derived, Base, types::pure355>::value, Thiscall>(
				"cocos2d::CCNode::setScheduler", 
				(void*)addresses::address355()
			);
		}

		if constexpr (compare::setShaderProgram<Derived, Base, types::pure356>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setShaderProgram<DefaultConv, Derived, Base, types::pure356>::value, Thiscall>(
				"cocos2d::CCNode::setShaderProgram", 
				(void*)addresses::address356()
			);
		}

		if constexpr (compare::setSkewX<Derived, Base, types::pure357>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setSkewX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSkewX<DefaultConv, Derived, Base, types::pure357>::value, Thiscall>(
				"cocos2d::CCNode::setSkewX", 
				(void*)addresses::address357()
			);
		}

		if constexpr (compare::setSkewY<Derived, Base, types::pure358>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setSkewY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSkewY<DefaultConv, Derived, Base, types::pure358>::value, Thiscall>(
				"cocos2d::CCNode::setSkewY", 
				(void*)addresses::address358()
			);
		}

		if constexpr (compare::setUserData<Derived, Base, types::pure359>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setUserData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setUserData<DefaultConv, Derived, Base, types::pure359>::value, Thiscall>(
				"cocos2d::CCNode::setUserData", 
				(void*)addresses::address359()
			);
		}

		if constexpr (compare::setUserObject<Derived, Base, types::pure360>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setUserObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setUserObject<DefaultConv, Derived, Base, types::pure360>::value, Thiscall>(
				"cocos2d::CCNode::setUserObject", 
				(void*)addresses::address360()
			);
		}

		if constexpr (compare::setVertexZ<Derived, Base, types::pure361>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setVertexZ", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVertexZ<DefaultConv, Derived, Base, types::pure361>::value, Thiscall>(
				"cocos2d::CCNode::setVertexZ", 
				(void*)addresses::address361()
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure362>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVisible<DefaultConv, Derived, Base, types::pure362>::value, Thiscall>(
				"cocos2d::CCNode::setVisible", 
				(void*)addresses::address362()
			);
		}

		if constexpr (compare::setZOrder<Derived, Base, types::pure363>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setZOrder<DefaultConv, Derived, Base, types::pure363>::value, Thiscall>(
				"cocos2d::CCNode::setZOrder", 
				(void*)addresses::address363()
			);
		}

		if constexpr (compare::sortAllChildren<Derived, Base, types::pure364>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::sortAllChildren", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sortAllChildren<DefaultConv, Derived, Base, types::pure364>::value, Thiscall>(
				"cocos2d::CCNode::sortAllChildren", 
				(void*)addresses::address364()
			);
		}

		if constexpr (compare::stopActionByTag<Derived, Base, types::pure365>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::stopActionByTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopActionByTag<DefaultConv, Derived, Base, types::pure365>::value, Thiscall>(
				"cocos2d::CCNode::stopActionByTag", 
				(void*)addresses::address365()
			);
		}

		if constexpr (compare::stopAllActions<Derived, Base, types::pure366>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::stopAllActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopAllActions<DefaultConv, Derived, Base, types::pure366>::value, Thiscall>(
				"cocos2d::CCNode::stopAllActions", 
				(void*)addresses::address366()
			);
		}

		if constexpr (compare::unregisterScriptHandler<Derived, Base, types::pure367>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unregisterScriptHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unregisterScriptHandler<DefaultConv, Derived, Base, types::pure367>::value, Thiscall>(
				"cocos2d::CCNode::unregisterScriptHandler", 
				(void*)addresses::address367()
			);
		}

		if constexpr (compare::unschedule<Derived, Base, types::pure368>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unschedule", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unschedule<DefaultConv, Derived, Base, types::pure368>::value, Thiscall>(
				"cocos2d::CCNode::unschedule", 
				(void*)addresses::address368()
			);
		}

		if constexpr (compare::unscheduleAllSelectors<Derived, Base, types::pure369>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unscheduleAllSelectors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unscheduleAllSelectors<DefaultConv, Derived, Base, types::pure369>::value, Thiscall>(
				"cocos2d::CCNode::unscheduleAllSelectors", 
				(void*)addresses::address369()
			);
		}

		if constexpr (compare::unscheduleUpdate<Derived, Base, types::pure370>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unscheduleUpdate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unscheduleUpdate<DefaultConv, Derived, Base, types::pure370>::value, Thiscall>(
				"cocos2d::CCNode::unscheduleUpdate", 
				(void*)addresses::address370()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure371>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure371>::value, Thiscall>(
				"cocos2d::CCNode::update", 
				(void*)addresses::address371()
			);
		}

		if constexpr (compare::updateTransform<Derived, Base, types::pure372>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::updateTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTransform<DefaultConv, Derived, Base, types::pure372>::value, Thiscall>(
				"cocos2d::CCNode::updateTransform", 
				(void*)addresses::address372()
			);
		}

		if constexpr (compare::updateTweenAction<Derived, Base, types::pure373>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::updateTweenAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTweenAction<DefaultConv, Derived, Base, types::pure373>::value, Thiscall>(
				"cocos2d::CCNode::updateTweenAction", 
				(void*)addresses::address373()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure374>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure374>::value, Thiscall>(
				"cocos2d::CCNode::visit", 
				(void*)addresses::address374()
			);
		}

		if constexpr (compare::worldToNodeTransform<Derived, Base, types::pure375>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::worldToNodeTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::worldToNodeTransform<DefaultConv, Derived, Base, types::pure375>::value, Thiscall>(
				"cocos2d::CCNode::worldToNodeTransform", 
				(void*)addresses::address375()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCRenderTexture> : ModifyBase<Modify<Derived, cocos2d::CCRenderTexture>> {
	using ModifyBase<Modify<Derived, cocos2d::CCRenderTexture>>::ModifyBase;
	using Base = cocos2d::CCRenderTexture;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::begin<Derived, Base, types::pure409>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::begin", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::begin<DefaultConv, Derived, Base, types::pure409>::value, Thiscall>(
				"cocos2d::CCRenderTexture::begin", 
				(void*)addresses::address409()
			);
		}

		if constexpr (compare::end<Derived, Base, types::pure410>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::end", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::end<DefaultConv, Derived, Base, types::pure410>::value, Thiscall>(
				"cocos2d::CCRenderTexture::end", 
				(void*)addresses::address410()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure411>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure411>::value, Cdecl>(
				"cocos2d::CCRenderTexture::create", 
				(void*)addresses::address411()
			);
		}

		if constexpr (compare::newCCImage<Derived, Base, types::pure412>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::newCCImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::newCCImage<DefaultConv, Derived, Base, types::pure412>::value, Thiscall>(
				"cocos2d::CCRenderTexture::newCCImage", 
				(void*)addresses::address412()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCObject> : ModifyBase<Modify<Derived, cocos2d::CCObject>> {
	using ModifyBase<Modify<Derived, cocos2d::CCObject>>::ModifyBase;
	using Base = cocos2d::CCObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure393>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::acceptVisitor<DefaultConv, Derived, Base, types::pure393>::value, Thiscall>(
				"cocos2d::CCObject::acceptVisitor", 
				(void*)addresses::address393()
			);
		}

		if constexpr (compare::autorelease<Derived, Base, types::pure394>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::autorelease", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::autorelease<DefaultConv, Derived, Base, types::pure394>::value, Thiscall>(
				"cocos2d::CCObject::autorelease", 
				(void*)addresses::address394()
			);
		}

		if constexpr (compare::canEncode<Derived, Base, types::pure395>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::canEncode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::canEncode<DefaultConv, Derived, Base, types::pure395>::value, Thiscall>(
				"cocos2d::CCObject::canEncode", 
				(void*)addresses::address395()
			);
		}

		if constexpr (compare::encodeWithCoder<Derived, Base, types::pure396>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::encodeWithCoder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::encodeWithCoder<DefaultConv, Derived, Base, types::pure396>::value, Thiscall>(
				"cocos2d::CCObject::encodeWithCoder", 
				(void*)addresses::address396()
			);
		}

		if constexpr (compare::getTag<Derived, Base, types::pure397>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::getTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTag<DefaultConv, Derived, Base, types::pure397>::value, Thiscall>(
				"cocos2d::CCObject::getTag", 
				(void*)addresses::address397()
			);
		}

		if constexpr (compare::isEqual<Derived, Base, types::pure398>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::isEqual", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isEqual<DefaultConv, Derived, Base, types::pure398>::value, Thiscall>(
				"cocos2d::CCObject::isEqual", 
				(void*)addresses::address398()
			);
		}

		if constexpr (compare::release<Derived, Base, types::pure399>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::release", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::release<DefaultConv, Derived, Base, types::pure399>::value, Thiscall>(
				"cocos2d::CCObject::release", 
				(void*)addresses::address399()
			);
		}

		if constexpr (compare::retain<Derived, Base, types::pure400>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::retain", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::retain<DefaultConv, Derived, Base, types::pure400>::value, Thiscall>(
				"cocos2d::CCObject::retain", 
				(void*)addresses::address400()
			);
		}

		if constexpr (compare::setTag<Derived, Base, types::pure401>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::setTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTag<DefaultConv, Derived, Base, types::pure401>::value, Thiscall>(
				"cocos2d::CCObject::setTag", 
				(void*)addresses::address401()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCParticleSystemQuad> : ModifyBase<Modify<Derived, cocos2d::CCParticleSystemQuad>> {
	using ModifyBase<Modify<Derived, cocos2d::CCParticleSystemQuad>>::ModifyBase;
	using Base = cocos2d::CCParticleSystemQuad;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure406>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCParticleSystemQuad::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure406>::value, Cdecl>(
				"cocos2d::CCParticleSystemQuad::create", 
				(void*)addresses::address406()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCScaleTo> : ModifyBase<Modify<Derived, cocos2d::CCScaleTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCScaleTo>>::ModifyBase;
	using Base = cocos2d::CCScaleTo;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure415>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScaleTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure415>::value, Cdecl>(
				"cocos2d::CCScaleTo::create", 
				(void*)addresses::address415()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure416>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScaleTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure416>::value, Cdecl>(
				"cocos2d::CCScaleTo::create", 
				(void*)addresses::address416()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCScene> : ModifyBase<Modify<Derived, cocos2d::CCScene>> {
	using ModifyBase<Modify<Derived, cocos2d::CCScene>>::ModifyBase;
	using Base = cocos2d::CCScene;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure417>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScene::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure417>::value, Cdecl>(
				"cocos2d::CCScene::create", 
				(void*)addresses::address417()
			);
		}

		if constexpr (compare::getHighestChildZ<Derived, Base, types::pure418>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScene::getHighestChildZ", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getHighestChildZ<DefaultConv, Derived, Base, types::pure418>::value, Thiscall>(
				"cocos2d::CCScene::getHighestChildZ", 
				(void*)addresses::address418()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCScheduler> : ModifyBase<Modify<Derived, cocos2d::CCScheduler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCScheduler>>::ModifyBase;
	using Base = cocos2d::CCScheduler;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::scheduleSelector<Derived, Base, types::pure419>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::scheduleSelector", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scheduleSelector<DefaultConv, Derived, Base, types::pure419>::value, Thiscall>(
				"cocos2d::CCScheduler::scheduleSelector", 
				(void*)addresses::address419()
			);
		}

		if constexpr (compare::scheduleUpdateForTarget<Derived, Base, types::pure420>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::scheduleUpdateForTarget", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scheduleUpdateForTarget<DefaultConv, Derived, Base, types::pure420>::value, Thiscall>(
				"cocos2d::CCScheduler::scheduleUpdateForTarget", 
				(void*)addresses::address420()
			);
		}

		if constexpr (compare::unscheduleAllForTarget<Derived, Base, types::pure421>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::unscheduleAllForTarget", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unscheduleAllForTarget<DefaultConv, Derived, Base, types::pure421>::value, Thiscall>(
				"cocos2d::CCScheduler::unscheduleAllForTarget", 
				(void*)addresses::address421()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure422>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure422>::value, Thiscall>(
				"cocos2d::CCScheduler::update", 
				(void*)addresses::address422()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSequence> : ModifyBase<Modify<Derived, cocos2d::CCSequence>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSequence>>::ModifyBase;
	using Base = cocos2d::CCSequence;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSprite> : ModifyBase<Modify<Derived, cocos2d::CCSprite>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSprite>>::ModifyBase;
	using Base = cocos2d::CCSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure427>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure427>::value, Thiscall>(
				"cocos2d::CCSprite::init", 
				(void*)addresses::address427()
			);
		}

		if constexpr (compare::setVertexZ<Derived, Base, types::pure428>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setVertexZ", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVertexZ<DefaultConv, Derived, Base, types::pure428>::value, Thiscall>(
				"cocos2d::CCSprite::setVertexZ", 
				(void*)addresses::address428()
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure429>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleX<DefaultConv, Derived, Base, types::pure429>::value, Thiscall>(
				"cocos2d::CCSprite::setScaleX", 
				(void*)addresses::address429()
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure430>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleY<DefaultConv, Derived, Base, types::pure430>::value, Thiscall>(
				"cocos2d::CCSprite::setScaleY", 
				(void*)addresses::address430()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure431>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure431>::value, Thiscall>(
				"cocos2d::CCSprite::setScale", 
				(void*)addresses::address431()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure432>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure432>::value, Thiscall>(
				"cocos2d::CCSprite::setPosition", 
				(void*)addresses::address432()
			);
		}

		if constexpr (compare::setSkewX<Derived, Base, types::pure433>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setSkewX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSkewX<DefaultConv, Derived, Base, types::pure433>::value, Thiscall>(
				"cocos2d::CCSprite::setSkewX", 
				(void*)addresses::address433()
			);
		}

		if constexpr (compare::setSkewY<Derived, Base, types::pure434>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setSkewY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSkewY<DefaultConv, Derived, Base, types::pure434>::value, Thiscall>(
				"cocos2d::CCSprite::setSkewY", 
				(void*)addresses::address434()
			);
		}

		if constexpr (compare::setAnchorPoint<Derived, Base, types::pure435>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAnchorPoint<DefaultConv, Derived, Base, types::pure435>::value, Thiscall>(
				"cocos2d::CCSprite::setAnchorPoint", 
				(void*)addresses::address435()
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure436>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVisible<DefaultConv, Derived, Base, types::pure436>::value, Thiscall>(
				"cocos2d::CCSprite::setVisible", 
				(void*)addresses::address436()
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure437>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotation<DefaultConv, Derived, Base, types::pure437>::value, Thiscall>(
				"cocos2d::CCSprite::setRotation", 
				(void*)addresses::address437()
			);
		}

		if constexpr (compare::setRotationX<Derived, Base, types::pure438>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setRotationX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotationX<DefaultConv, Derived, Base, types::pure438>::value, Thiscall>(
				"cocos2d::CCSprite::setRotationX", 
				(void*)addresses::address438()
			);
		}

		if constexpr (compare::setRotationY<Derived, Base, types::pure439>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setRotationY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotationY<DefaultConv, Derived, Base, types::pure439>::value, Thiscall>(
				"cocos2d::CCSprite::setRotationY", 
				(void*)addresses::address439()
			);
		}

		if constexpr (compare::ignoreAnchorPointForPosition<Derived, Base, types::pure440>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::ignoreAnchorPointForPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ignoreAnchorPointForPosition<DefaultConv, Derived, Base, types::pure440>::value, Thiscall>(
				"cocos2d::CCSprite::ignoreAnchorPointForPosition", 
				(void*)addresses::address440()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure441>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure441>::value, Thiscall>(
				"cocos2d::CCSprite::addChild", 
				(void*)addresses::address441()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure442>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure442>::value, Thiscall>(
				"cocos2d::CCSprite::addChild", 
				(void*)addresses::address442()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure443>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure443>::value, Thiscall>(
				"cocos2d::CCSprite::addChild", 
				(void*)addresses::address443()
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure444>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChild<DefaultConv, Derived, Base, types::pure444>::value, Thiscall>(
				"cocos2d::CCSprite::removeChild", 
				(void*)addresses::address444()
			);
		}

		if constexpr (compare::removeAllChildrenWithCleanup<Derived, Base, types::pure445>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::removeAllChildrenWithCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllChildrenWithCleanup<DefaultConv, Derived, Base, types::pure445>::value, Thiscall>(
				"cocos2d::CCSprite::removeAllChildrenWithCleanup", 
				(void*)addresses::address445()
			);
		}

		if constexpr (compare::reorderChild<Derived, Base, types::pure446>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::reorderChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reorderChild<DefaultConv, Derived, Base, types::pure446>::value, Thiscall>(
				"cocos2d::CCSprite::reorderChild", 
				(void*)addresses::address446()
			);
		}

		if constexpr (compare::sortAllChildren<Derived, Base, types::pure447>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::sortAllChildren", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sortAllChildren<DefaultConv, Derived, Base, types::pure447>::value, Thiscall>(
				"cocos2d::CCSprite::sortAllChildren", 
				(void*)addresses::address447()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure448>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure448>::value, Thiscall>(
				"cocos2d::CCSprite::draw", 
				(void*)addresses::address448()
			);
		}

		if constexpr (compare::updateTransform<Derived, Base, types::pure449>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTransform<DefaultConv, Derived, Base, types::pure449>::value, Thiscall>(
				"cocos2d::CCSprite::updateTransform", 
				(void*)addresses::address449()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure450>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure450>::value, Thiscall>(
				"cocos2d::CCSprite::setOpacity", 
				(void*)addresses::address450()
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure451>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure451>::value, Thiscall>(
				"cocos2d::CCSprite::updateDisplayedOpacity", 
				(void*)addresses::address451()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure452>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure452>::value, Thiscall>(
				"cocos2d::CCSprite::setColor", 
				(void*)addresses::address452()
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure453>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure453>::value, Thiscall>(
				"cocos2d::CCSprite::updateDisplayedColor", 
				(void*)addresses::address453()
			);
		}

		if constexpr (compare::setOpacityModifyRGB<Derived, Base, types::pure454>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacityModifyRGB<DefaultConv, Derived, Base, types::pure454>::value, Thiscall>(
				"cocos2d::CCSprite::setOpacityModifyRGB", 
				(void*)addresses::address454()
			);
		}

		if constexpr (compare::isOpacityModifyRGB<Derived, Base, types::pure455>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::isOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isOpacityModifyRGB<DefaultConv, Derived, Base, types::pure455>::value, Thiscall>(
				"cocos2d::CCSprite::isOpacityModifyRGB", 
				(void*)addresses::address455()
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure456>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithTexture<DefaultConv, Derived, Base, types::pure456>::value, Thiscall>(
				"cocos2d::CCSprite::initWithTexture", 
				(void*)addresses::address456()
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure457>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithTexture<DefaultConv, Derived, Base, types::pure457>::value, Thiscall>(
				"cocos2d::CCSprite::initWithTexture", 
				(void*)addresses::address457()
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure458>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithTexture<DefaultConv, Derived, Base, types::pure458>::value, Thiscall>(
				"cocos2d::CCSprite::initWithTexture", 
				(void*)addresses::address458()
			);
		}

		if constexpr (compare::initWithSpriteFrame<Derived, Base, types::pure459>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrame<DefaultConv, Derived, Base, types::pure459>::value, Thiscall>(
				"cocos2d::CCSprite::initWithSpriteFrame", 
				(void*)addresses::address459()
			);
		}

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure460>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure460>::value, Thiscall>(
				"cocos2d::CCSprite::initWithSpriteFrameName", 
				(void*)addresses::address460()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure461>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure461>::value, Thiscall>(
				"cocos2d::CCSprite::initWithFile", 
				(void*)addresses::address461()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure462>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure462>::value, Thiscall>(
				"cocos2d::CCSprite::initWithFile", 
				(void*)addresses::address462()
			);
		}

		if constexpr (compare::setTexture<Derived, Base, types::pure463>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTexture<DefaultConv, Derived, Base, types::pure463>::value, Thiscall>(
				"cocos2d::CCSprite::setTexture", 
				(void*)addresses::address463()
			);
		}

		if constexpr (compare::getTexture<Derived, Base, types::pure464>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::getTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTexture<DefaultConv, Derived, Base, types::pure464>::value, Thiscall>(
				"cocos2d::CCSprite::getTexture", 
				(void*)addresses::address464()
			);
		}

		if constexpr (compare::setChildColor<Derived, Base, types::pure465>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setChildColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setChildColor<DefaultConv, Derived, Base, types::pure465>::value, Thiscall>(
				"cocos2d::CCSprite::setChildColor", 
				(void*)addresses::address465()
			);
		}

		if constexpr (compare::setChildOpacity<Derived, Base, types::pure466>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setChildOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setChildOpacity<DefaultConv, Derived, Base, types::pure466>::value, Thiscall>(
				"cocos2d::CCSprite::setChildOpacity", 
				(void*)addresses::address466()
			);
		}

		if constexpr (compare::getBatchNode<Derived, Base, types::pure467>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::getBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBatchNode<DefaultConv, Derived, Base, types::pure467>::value, Thiscall>(
				"cocos2d::CCSprite::getBatchNode", 
				(void*)addresses::address467()
			);
		}

		if constexpr (compare::setBatchNode<Derived, Base, types::pure468>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setBatchNode<DefaultConv, Derived, Base, types::pure468>::value, Thiscall>(
				"cocos2d::CCSprite::setBatchNode", 
				(void*)addresses::address468()
			);
		}

		if constexpr (compare::refreshTextureRect<Derived, Base, types::pure469>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::refreshTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::refreshTextureRect<DefaultConv, Derived, Base, types::pure469>::value, Thiscall>(
				"cocos2d::CCSprite::refreshTextureRect", 
				(void*)addresses::address469()
			);
		}

		if constexpr (compare::setTextureRect<Derived, Base, types::pure470>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTextureRect<DefaultConv, Derived, Base, types::pure470>::value, Thiscall>(
				"cocos2d::CCSprite::setTextureRect", 
				(void*)addresses::address470()
			);
		}

		if constexpr (compare::setTextureRect<Derived, Base, types::pure471>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTextureRect<DefaultConv, Derived, Base, types::pure471>::value, Thiscall>(
				"cocos2d::CCSprite::setTextureRect", 
				(void*)addresses::address471()
			);
		}

		if constexpr (compare::setVertexRect<Derived, Base, types::pure472>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setVertexRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVertexRect<DefaultConv, Derived, Base, types::pure472>::value, Thiscall>(
				"cocos2d::CCSprite::setVertexRect", 
				(void*)addresses::address472()
			);
		}

		if constexpr (compare::setDisplayFrame<Derived, Base, types::pure473>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setDisplayFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDisplayFrame<DefaultConv, Derived, Base, types::pure473>::value, Thiscall>(
				"cocos2d::CCSprite::setDisplayFrame", 
				(void*)addresses::address473()
			);
		}

		if constexpr (compare::isFrameDisplayed<Derived, Base, types::pure474>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::isFrameDisplayed", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isFrameDisplayed<DefaultConv, Derived, Base, types::pure474>::value, Thiscall>(
				"cocos2d::CCSprite::isFrameDisplayed", 
				(void*)addresses::address474()
			);
		}

		if constexpr (compare::displayFrame<Derived, Base, types::pure475>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::displayFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::displayFrame<DefaultConv, Derived, Base, types::pure475>::value, Thiscall>(
				"cocos2d::CCSprite::displayFrame", 
				(void*)addresses::address475()
			);
		}

		if constexpr (compare::setDisplayFrameWithAnimationName<Derived, Base, types::pure476>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setDisplayFrameWithAnimationName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDisplayFrameWithAnimationName<DefaultConv, Derived, Base, types::pure476>::value, Thiscall>(
				"cocos2d::CCSprite::setDisplayFrameWithAnimationName", 
				(void*)addresses::address476()
			);
		}

		if constexpr (compare::setTextureCoords<Derived, Base, types::pure477>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTextureCoords", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTextureCoords<DefaultConv, Derived, Base, types::pure477>::value, Thiscall>(
				"cocos2d::CCSprite::setTextureCoords", 
				(void*)addresses::address477()
			);
		}

		if constexpr (compare::updateBlendFunc<Derived, Base, types::pure478>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateBlendFunc<DefaultConv, Derived, Base, types::pure478>::value, Thiscall>(
				"cocos2d::CCSprite::updateBlendFunc", 
				(void*)addresses::address478()
			);
		}

		if constexpr (compare::setReorderChildDirtyRecursively<Derived, Base, types::pure479>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setReorderChildDirtyRecursively", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setReorderChildDirtyRecursively<DefaultConv, Derived, Base, types::pure479>::value, Thiscall>(
				"cocos2d::CCSprite::setReorderChildDirtyRecursively", 
				(void*)addresses::address479()
			);
		}

		if constexpr (compare::setDirtyRecursively<Derived, Base, types::pure480>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setDirtyRecursively", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDirtyRecursively<DefaultConv, Derived, Base, types::pure480>::value, Thiscall>(
				"cocos2d::CCSprite::setDirtyRecursively", 
				(void*)addresses::address480()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure482>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure482>::value, Cdecl>(
				"cocos2d::CCSprite::create", 
				(void*)addresses::address482()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure483>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure483>::value, Cdecl>(
				"cocos2d::CCSprite::create", 
				(void*)addresses::address483()
			);
		}

		if constexpr (compare::createWithSpriteFrame<Derived, Base, types::pure484>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithSpriteFrame<DefaultConv, Derived, Base, types::pure484>::value, Cdecl>(
				"cocos2d::CCSprite::createWithSpriteFrame", 
				(void*)addresses::address484()
			);
		}

		if constexpr (compare::createWithSpriteFrameName<Derived, Base, types::pure485>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithSpriteFrameName<DefaultConv, Derived, Base, types::pure485>::value, Cdecl>(
				"cocos2d::CCSprite::createWithSpriteFrameName", 
				(void*)addresses::address485()
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure486>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithTexture<DefaultConv, Derived, Base, types::pure486>::value, Cdecl>(
				"cocos2d::CCSprite::createWithTexture", 
				(void*)addresses::address486()
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure487>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithTexture<DefaultConv, Derived, Base, types::pure487>::value, Cdecl>(
				"cocos2d::CCSprite::createWithTexture", 
				(void*)addresses::address487()
			);
		}

		if constexpr (compare::setFlipX<Derived, Base, types::pure488>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipX<DefaultConv, Derived, Base, types::pure488>::value, Thiscall>(
				"cocos2d::CCSprite::setFlipX", 
				(void*)addresses::address488()
			);
		}

		if constexpr (compare::setFlipY<Derived, Base, types::pure489>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipY<DefaultConv, Derived, Base, types::pure489>::value, Thiscall>(
				"cocos2d::CCSprite::setFlipY", 
				(void*)addresses::address489()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSpriteBatchNode> : ModifyBase<Modify<Derived, cocos2d::CCSpriteBatchNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSpriteBatchNode>>::ModifyBase;
	using Base = cocos2d::CCSpriteBatchNode;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure490>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure490>::value, Cdecl>(
				"cocos2d::CCSpriteBatchNode::create", 
				(void*)addresses::address490()
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure491>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithTexture<DefaultConv, Derived, Base, types::pure491>::value, Cdecl>(
				"cocos2d::CCSpriteBatchNode::createWithTexture", 
				(void*)addresses::address491()
			);
		}

		if constexpr (compare::getUsedAtlasCapacity<Derived, Base, types::pure492>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::getUsedAtlasCapacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getUsedAtlasCapacity<DefaultConv, Derived, Base, types::pure492>::value, Thiscall>(
				"cocos2d::CCSpriteBatchNode::getUsedAtlasCapacity", 
				(void*)addresses::address492()
			);
		}

		if constexpr (compare::increaseAtlasCapacity<Derived, Base, types::pure493>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::increaseAtlasCapacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::increaseAtlasCapacity<DefaultConv, Derived, Base, types::pure493>::value, Thiscall>(
				"cocos2d::CCSpriteBatchNode::increaseAtlasCapacity", 
				(void*)addresses::address493()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJUserScore> : ModifyBase<Modify<Derived, GJUserScore>> {
	using ModifyBase<Modify<Derived, GJUserScore>>::ModifyBase;
	using Base = GJUserScore;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTargetedTouchHandler> : ModifyBase<Modify<Derived, cocos2d::CCTargetedTouchHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTargetedTouchHandler>>::ModifyBase;
	using Base = cocos2d::CCTargetedTouchHandler;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure510>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTargetedTouchHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure510>::value, Cdecl>(
				"cocos2d::CCTargetedTouchHandler::handlerWithDelegate", 
				(void*)addresses::address510()
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure511>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTargetedTouchHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure511>::value, Thiscall>(
				"cocos2d::CCTargetedTouchHandler::initWithDelegate", 
				(void*)addresses::address511()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetupCountTriggerPopup> : ModifyBase<Modify<Derived, SetupCountTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupCountTriggerPopup>>::ModifyBase;
	using Base = SetupCountTriggerPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTexture2D> : ModifyBase<Modify<Derived, cocos2d::CCTexture2D>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTexture2D>>::ModifyBase;
	using Base = cocos2d::CCTexture2D;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::getContentSize<Derived, Base, types::pure515>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getContentSize<DefaultConv, Derived, Base, types::pure515>::value, Thiscall>(
				"cocos2d::CCTexture2D::getContentSize", 
				(void*)addresses::address515()
			);
		}

		if constexpr (compare::getMaxS<Derived, Base, types::pure516>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getMaxS", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMaxS<DefaultConv, Derived, Base, types::pure516>::value, Thiscall>(
				"cocos2d::CCTexture2D::getMaxS", 
				(void*)addresses::address516()
			);
		}

		if constexpr (compare::getMaxT<Derived, Base, types::pure517>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getMaxT", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMaxT<DefaultConv, Derived, Base, types::pure517>::value, Thiscall>(
				"cocos2d::CCTexture2D::getMaxT", 
				(void*)addresses::address517()
			);
		}

		if constexpr (compare::getName<Derived, Base, types::pure518>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getName<DefaultConv, Derived, Base, types::pure518>::value, Thiscall>(
				"cocos2d::CCTexture2D::getName", 
				(void*)addresses::address518()
			);
		}

		if constexpr (compare::getPixelFormat<Derived, Base, types::pure519>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getPixelFormat", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPixelFormat<DefaultConv, Derived, Base, types::pure519>::value, Thiscall>(
				"cocos2d::CCTexture2D::getPixelFormat", 
				(void*)addresses::address519()
			);
		}

		if constexpr (compare::getPixelsHigh<Derived, Base, types::pure520>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getPixelsHigh", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPixelsHigh<DefaultConv, Derived, Base, types::pure520>::value, Thiscall>(
				"cocos2d::CCTexture2D::getPixelsHigh", 
				(void*)addresses::address520()
			);
		}

		if constexpr (compare::getPixelsWide<Derived, Base, types::pure521>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getPixelsWide", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPixelsWide<DefaultConv, Derived, Base, types::pure521>::value, Thiscall>(
				"cocos2d::CCTexture2D::getPixelsWide", 
				(void*)addresses::address521()
			);
		}

		if constexpr (compare::getShaderProgram<Derived, Base, types::pure522>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getShaderProgram<DefaultConv, Derived, Base, types::pure522>::value, Thiscall>(
				"cocos2d::CCTexture2D::getShaderProgram", 
				(void*)addresses::address522()
			);
		}

		if constexpr (compare::initPremultipliedATextureWithImage<Derived, Base, types::pure523>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::initPremultipliedATextureWithImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initPremultipliedATextureWithImage<DefaultConv, Derived, Base, types::pure523>::value, Thiscall>(
				"cocos2d::CCTexture2D::initPremultipliedATextureWithImage", 
				(void*)addresses::address523()
			);
		}

		if constexpr (compare::initWithData<Derived, Base, types::pure524>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::initWithData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithData<DefaultConv, Derived, Base, types::pure524>::value, Thiscall>(
				"cocos2d::CCTexture2D::initWithData", 
				(void*)addresses::address524()
			);
		}

		if constexpr (compare::setAliasTexParameters<Derived, Base, types::pure525>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setAliasTexParameters", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAliasTexParameters<DefaultConv, Derived, Base, types::pure525>::value, Thiscall>(
				"cocos2d::CCTexture2D::setAliasTexParameters", 
				(void*)addresses::address525()
			);
		}

		if constexpr (compare::setAntiAliasTexParameters<Derived, Base, types::pure526>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setAntiAliasTexParameters", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAntiAliasTexParameters<DefaultConv, Derived, Base, types::pure526>::value, Thiscall>(
				"cocos2d::CCTexture2D::setAntiAliasTexParameters", 
				(void*)addresses::address526()
			);
		}

		if constexpr (compare::setMaxS<Derived, Base, types::pure527>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setMaxS", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setMaxS<DefaultConv, Derived, Base, types::pure527>::value, Thiscall>(
				"cocos2d::CCTexture2D::setMaxS", 
				(void*)addresses::address527()
			);
		}

		if constexpr (compare::setMaxT<Derived, Base, types::pure528>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setMaxT", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setMaxT<DefaultConv, Derived, Base, types::pure528>::value, Thiscall>(
				"cocos2d::CCTexture2D::setMaxT", 
				(void*)addresses::address528()
			);
		}

		if constexpr (compare::setShaderProgram<Derived, Base, types::pure529>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setShaderProgram<DefaultConv, Derived, Base, types::pure529>::value, Thiscall>(
				"cocos2d::CCTexture2D::setShaderProgram", 
				(void*)addresses::address529()
			);
		}

		if constexpr (compare::initWithImage<Derived, Base, types::pure530>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::initWithImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithImage<DefaultConv, Derived, Base, types::pure530>::value, Thiscall>(
				"cocos2d::CCTexture2D::initWithImage", 
				(void*)addresses::address530()
			);
		}

		if constexpr (compare::setTexParameters<Derived, Base, types::pure531>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setTexParameters", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTexParameters<DefaultConv, Derived, Base, types::pure531>::value, Thiscall>(
				"cocos2d::CCTexture2D::setTexParameters", 
				(void*)addresses::address531()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTextFieldDelegate> : ModifyBase<Modify<Derived, cocos2d::CCTextFieldDelegate>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTextFieldDelegate>>::ModifyBase;
	using Base = cocos2d::CCTextFieldDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CCCircleWaveDelegate> : ModifyBase<Modify<Derived, CCCircleWaveDelegate>> {
	using ModifyBase<Modify<Derived, CCCircleWaveDelegate>>::ModifyBase;
	using Base = CCCircleWaveDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTextureCache> : ModifyBase<Modify<Derived, cocos2d::CCTextureCache>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTextureCache>>::ModifyBase;
	using Base = cocos2d::CCTextureCache;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::addImage<Derived, Base, types::pure532>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTextureCache::addImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addImage<DefaultConv, Derived, Base, types::pure532>::value, Thiscall>(
				"cocos2d::CCTextureCache::addImage", 
				(void*)addresses::address532()
			);
		}

		if constexpr (compare::sharedTextureCache<Derived, Base, types::pure533>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTextureCache::sharedTextureCache", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedTextureCache<DefaultConv, Derived, Base, types::pure533>::value, Cdecl>(
				"cocos2d::CCTextureCache::sharedTextureCache", 
				(void*)addresses::address533()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTime> : ModifyBase<Modify<Derived, cocos2d::CCTime>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTime>>::ModifyBase;
	using Base = cocos2d::CCTime;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::gettimeofdayCocos2d<Derived, Base, types::pure534>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTime::gettimeofdayCocos2d", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::gettimeofdayCocos2d<DefaultConv, Derived, Base, types::pure534>::value, Cdecl>(
				"cocos2d::CCTime::gettimeofdayCocos2d", 
				(void*)addresses::address534()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, PauseLayer> : ModifyBase<Modify<Derived, PauseLayer>> {
	using ModifyBase<Modify<Derived, PauseLayer>>::ModifyBase;
	using Base = PauseLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::createToggleButton<Derived, Base, types::pure1721>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PauseLayer::createToggleButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createToggleButton<DefaultConv, Derived, Base, types::pure1721>::value, Membercall>(
				"PauseLayer::createToggleButton", 
				(void*)addresses::address1721()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTintTo> : ModifyBase<Modify<Derived, cocos2d::CCTintTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTintTo>>::ModifyBase;
	using Base = cocos2d::CCTintTo;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure535>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTintTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure535>::value, Cdecl>(
				"cocos2d::CCTintTo::create", 
				(void*)addresses::address535()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GameSoundManager> : ModifyBase<Modify<Derived, GameSoundManager>> {
	using ModifyBase<Modify<Derived, GameSoundManager>>::ModifyBase;
	using Base = GameSoundManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::playEffect<Derived, Base, types::pure1506>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::playEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playEffect<DefaultConv, Derived, Base, types::pure1506>::value, Membercall>(
				"GameSoundManager::playEffect", 
				(void*)addresses::address1506()
			);
		}

		if constexpr (compare::sharedManager<Derived, Base, types::pure1509>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::sharedManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedManager<DefaultConv, Derived, Base, types::pure1509>::value, Cdecl>(
				"GameSoundManager::sharedManager", 
				(void*)addresses::address1509()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTouch> : ModifyBase<Modify<Derived, cocos2d::CCTouch>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTouch>>::ModifyBase;
	using Base = cocos2d::CCTouch;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::getDelta<Derived, Base, types::pure536>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getDelta", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDelta<DefaultConv, Derived, Base, types::pure536>::value, Thiscall>(
				"cocos2d::CCTouch::getDelta", 
				(void*)addresses::address536()
			);
		}

		if constexpr (compare::getLocationInView<Derived, Base, types::pure537>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getLocationInView", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLocationInView<DefaultConv, Derived, Base, types::pure537>::value, Thiscall>(
				"cocos2d::CCTouch::getLocationInView", 
				(void*)addresses::address537()
			);
		}

		if constexpr (compare::getPreviousLocationInView<Derived, Base, types::pure538>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getPreviousLocationInView", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPreviousLocationInView<DefaultConv, Derived, Base, types::pure538>::value, Thiscall>(
				"cocos2d::CCTouch::getPreviousLocationInView", 
				(void*)addresses::address538()
			);
		}

		if constexpr (compare::getLocation<Derived, Base, types::pure539>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getLocation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLocation<DefaultConv, Derived, Base, types::pure539>::value, Thiscall>(
				"cocos2d::CCTouch::getLocation", 
				(void*)addresses::address539()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTouchDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCTouchDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTouchDispatcher>>::ModifyBase;
	using Base = cocos2d::CCTouchDispatcher;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::decrementForcePrio<Derived, Base, types::pure540>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchDispatcher::decrementForcePrio", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::decrementForcePrio<DefaultConv, Derived, Base, types::pure540>::value, Thiscall>(
				"cocos2d::CCTouchDispatcher::decrementForcePrio", 
				(void*)addresses::address540()
			);
		}

		if constexpr (compare::incrementForcePrio<Derived, Base, types::pure541>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchDispatcher::incrementForcePrio", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::incrementForcePrio<DefaultConv, Derived, Base, types::pure541>::value, Thiscall>(
				"cocos2d::CCTouchDispatcher::incrementForcePrio", 
				(void*)addresses::address541()
			);
		}

		if constexpr (compare::touches<Derived, Base, types::pure542>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchDispatcher::touches", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::touches<DefaultConv, Derived, Base, types::pure542>::value, Thiscall>(
				"cocos2d::CCTouchDispatcher::touches", 
				(void*)addresses::address542()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTouchHandler> : ModifyBase<Modify<Derived, cocos2d::CCTouchHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTouchHandler>>::ModifyBase;
	using Base = cocos2d::CCTouchHandler;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure543>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure543>::value, Thiscall>(
				"cocos2d::CCTouchHandler::initWithDelegate", 
				(void*)addresses::address543()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTransitionFade> : ModifyBase<Modify<Derived, cocos2d::CCTransitionFade>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTransitionFade>>::ModifyBase;
	using Base = cocos2d::CCTransitionFade;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure545>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTransitionFade::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure545>::value, Cdecl>(
				"cocos2d::CCTransitionFade::create", 
				(void*)addresses::address545()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GameLevelManager> : ModifyBase<Modify<Derived, GameLevelManager>> {
	using ModifyBase<Modify<Derived, GameLevelManager>>::ModifyBase;
	using Base = GameLevelManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::createNewLevel<Derived, Base, types::pure1304>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::createNewLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createNewLevel<DefaultConv, Derived, Base, types::pure1304>::value, Thiscall>(
				"GameLevelManager::createNewLevel", 
				(void*)addresses::address1304()
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1305>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1305>::value, Cdecl>(
				"GameLevelManager::sharedState", 
				(void*)addresses::address1305()
			);
		}

		if constexpr (compare::getMainLevel<Derived, Base, types::pure1311>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::getMainLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMainLevel<DefaultConv, Derived, Base, types::pure1311>::value, Membercall>(
				"GameLevelManager::getMainLevel", 
				(void*)addresses::address1311()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCControlColourPicker> : ModifyBase<Modify<Derived, cocos2d::extension::CCControlColourPicker>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCControlColourPicker>>::ModifyBase;
	using Base = cocos2d::extension::CCControlColourPicker;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::setColorValue<Derived, Base, types::pure566>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlColourPicker::setColorValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColorValue<DefaultConv, Derived, Base, types::pure566>::value, Thiscall>(
				"cocos2d::extension::CCControlColourPicker::setColorValue", 
				(void*)addresses::address566()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure567>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlColourPicker::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure567>::value, Thiscall>(
				"cocos2d::extension::CCControlColourPicker::ccTouchBegan", 
				(void*)addresses::address567()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure568>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlColourPicker::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure568>::value, Thiscall>(
				"cocos2d::extension::CCControlColourPicker::init", 
				(void*)addresses::address568()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCControlUtils> : ModifyBase<Modify<Derived, cocos2d::extension::CCControlUtils>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCControlUtils>>::ModifyBase;
	using Base = cocos2d::extension::CCControlUtils;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::HSVfromRGB<Derived, Base, types::pure569>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlUtils::HSVfromRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::HSVfromRGB<DefaultConv, Derived, Base, types::pure569>::value, Cdecl>(
				"cocos2d::extension::CCControlUtils::HSVfromRGB", 
				(void*)addresses::address569()
			);
		}

		if constexpr (compare::RGBfromHSV<Derived, Base, types::pure570>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlUtils::RGBfromHSV", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::RGBfromHSV<DefaultConv, Derived, Base, types::pure570>::value, Cdecl>(
				"cocos2d::extension::CCControlUtils::RGBfromHSV", 
				(void*)addresses::address570()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetIDLayer> : ModifyBase<Modify<Derived, SetIDLayer>> {
	using ModifyBase<Modify<Derived, SetIDLayer>>::ModifyBase;
	using Base = SetIDLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CustomSongCell> : ModifyBase<Modify<Derived, CustomSongCell>> {
	using ModifyBase<Modify<Derived, CustomSongCell>>::ModifyBase;
	using Base = CustomSongCell;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCScale9Sprite> : ModifyBase<Modify<Derived, cocos2d::extension::CCScale9Sprite>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCScale9Sprite>>::ModifyBase;
	using Base = cocos2d::extension::CCScale9Sprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure572>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure572>::value, Cdecl>(
				"cocos2d::extension::CCScale9Sprite::create", 
				(void*)addresses::address572()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure573>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure573>::value, Cdecl>(
				"cocos2d::extension::CCScale9Sprite::create", 
				(void*)addresses::address573()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure575>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure575>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::init", 
				(void*)addresses::address575()
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure576>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setContentSize<DefaultConv, Derived, Base, types::pure576>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setContentSize", 
				(void*)addresses::address576()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure577>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure577>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::visit", 
				(void*)addresses::address577()
			);
		}

		if constexpr (compare::getOpacity<Derived, Base, types::pure578>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOpacity<DefaultConv, Derived, Base, types::pure578>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::getOpacity", 
				(void*)addresses::address578()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure579>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure579>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setOpacity", 
				(void*)addresses::address579()
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure580>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure580>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::updateDisplayedOpacity", 
				(void*)addresses::address580()
			);
		}

		if constexpr (compare::getColor<Derived, Base, types::pure581>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getColor<DefaultConv, Derived, Base, types::pure581>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::getColor", 
				(void*)addresses::address581()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure582>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure582>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setColor", 
				(void*)addresses::address582()
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure583>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure583>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::updateDisplayedColor", 
				(void*)addresses::address583()
			);
		}

		if constexpr (compare::setOpacityModifyRGB<Derived, Base, types::pure584>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacityModifyRGB<DefaultConv, Derived, Base, types::pure584>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setOpacityModifyRGB", 
				(void*)addresses::address584()
			);
		}

		if constexpr (compare::isOpacityModifyRGB<Derived, Base, types::pure585>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::isOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isOpacityModifyRGB<DefaultConv, Derived, Base, types::pure585>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::isOpacityModifyRGB", 
				(void*)addresses::address585()
			);
		}

		if constexpr (compare::getPreferredSize<Derived, Base, types::pure586>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getPreferredSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPreferredSize<DefaultConv, Derived, Base, types::pure586>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::getPreferredSize", 
				(void*)addresses::address586()
			);
		}

		if constexpr (compare::setPreferredSize<Derived, Base, types::pure587>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setPreferredSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPreferredSize<DefaultConv, Derived, Base, types::pure587>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setPreferredSize", 
				(void*)addresses::address587()
			);
		}

		if constexpr (compare::getCapInsets<Derived, Base, types::pure588>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getCapInsets", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCapInsets<DefaultConv, Derived, Base, types::pure588>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::getCapInsets", 
				(void*)addresses::address588()
			);
		}

		if constexpr (compare::setCapInsets<Derived, Base, types::pure589>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setCapInsets", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setCapInsets<DefaultConv, Derived, Base, types::pure589>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setCapInsets", 
				(void*)addresses::address589()
			);
		}

		if constexpr (compare::getInsetLeft<Derived, Base, types::pure590>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetLeft", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getInsetLeft<DefaultConv, Derived, Base, types::pure590>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::getInsetLeft", 
				(void*)addresses::address590()
			);
		}

		if constexpr (compare::setInsetLeft<Derived, Base, types::pure591>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetLeft", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setInsetLeft<DefaultConv, Derived, Base, types::pure591>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setInsetLeft", 
				(void*)addresses::address591()
			);
		}

		if constexpr (compare::getInsetTop<Derived, Base, types::pure592>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetTop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getInsetTop<DefaultConv, Derived, Base, types::pure592>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::getInsetTop", 
				(void*)addresses::address592()
			);
		}

		if constexpr (compare::setInsetTop<Derived, Base, types::pure593>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetTop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setInsetTop<DefaultConv, Derived, Base, types::pure593>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setInsetTop", 
				(void*)addresses::address593()
			);
		}

		if constexpr (compare::getInsetRight<Derived, Base, types::pure594>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetRight", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getInsetRight<DefaultConv, Derived, Base, types::pure594>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::getInsetRight", 
				(void*)addresses::address594()
			);
		}

		if constexpr (compare::setInsetRight<Derived, Base, types::pure595>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetRight", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setInsetRight<DefaultConv, Derived, Base, types::pure595>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setInsetRight", 
				(void*)addresses::address595()
			);
		}

		if constexpr (compare::getInsetBottom<Derived, Base, types::pure596>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetBottom", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getInsetBottom<DefaultConv, Derived, Base, types::pure596>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::getInsetBottom", 
				(void*)addresses::address596()
			);
		}

		if constexpr (compare::setInsetBottom<Derived, Base, types::pure597>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetBottom", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setInsetBottom<DefaultConv, Derived, Base, types::pure597>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setInsetBottom", 
				(void*)addresses::address597()
			);
		}

		if constexpr (compare::initWithBatchNode<Derived, Base, types::pure598>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithBatchNode<DefaultConv, Derived, Base, types::pure598>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				(void*)addresses::address598()
			);
		}

		if constexpr (compare::initWithBatchNode<Derived, Base, types::pure599>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithBatchNode<DefaultConv, Derived, Base, types::pure599>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				(void*)addresses::address599()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure600>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure600>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address600()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure601>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure601>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address601()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure602>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure602>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address602()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure603>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure603>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address603()
			);
		}

		if constexpr (compare::initWithSpriteFrame<Derived, Base, types::pure604>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrame<DefaultConv, Derived, Base, types::pure604>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				(void*)addresses::address604()
			);
		}

		if constexpr (compare::initWithSpriteFrame<Derived, Base, types::pure605>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrame<DefaultConv, Derived, Base, types::pure605>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				(void*)addresses::address605()
			);
		}

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure606>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure606>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				(void*)addresses::address606()
			);
		}

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure607>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure607>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				(void*)addresses::address607()
			);
		}

		if constexpr (compare::updateWithBatchNode<Derived, Base, types::pure608>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::updateWithBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateWithBatchNode<DefaultConv, Derived, Base, types::pure608>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::updateWithBatchNode", 
				(void*)addresses::address608()
			);
		}

		if constexpr (compare::setSpriteFrame<Derived, Base, types::pure609>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSpriteFrame<DefaultConv, Derived, Base, types::pure609>::value, Thiscall>(
				"cocos2d::extension::CCScale9Sprite::setSpriteFrame", 
				(void*)addresses::address609()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCScrollView> : ModifyBase<Modify<Derived, cocos2d::extension::CCScrollView>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCScrollView>>::ModifyBase;
	using Base = cocos2d::extension::CCScrollView;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure612>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure612>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::init", 
				(void*)addresses::address612()
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure613>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setContentSize<DefaultConv, Derived, Base, types::pure613>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::setContentSize", 
				(void*)addresses::address613()
			);
		}

		if constexpr (compare::getContentSize<Derived, Base, types::pure614>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::getContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getContentSize<DefaultConv, Derived, Base, types::pure614>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::getContentSize", 
				(void*)addresses::address614()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure615>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure615>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::addChild", 
				(void*)addresses::address615()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure616>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure616>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::addChild", 
				(void*)addresses::address616()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure617>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure617>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::addChild", 
				(void*)addresses::address617()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure618>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure618>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::visit", 
				(void*)addresses::address618()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure619>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure619>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::ccTouchBegan", 
				(void*)addresses::address619()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure620>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure620>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::ccTouchMoved", 
				(void*)addresses::address620()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure621>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure621>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::ccTouchEnded", 
				(void*)addresses::address621()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure622>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure622>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::ccTouchCancelled", 
				(void*)addresses::address622()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure623>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure623>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::registerWithTouchDispatcher", 
				(void*)addresses::address623()
			);
		}

		if constexpr (compare::setTouchEnabled<Derived, Base, types::pure624>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::setTouchEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTouchEnabled<DefaultConv, Derived, Base, types::pure624>::value, Thiscall>(
				"cocos2d::extension::CCScrollView::setTouchEnabled", 
				(void*)addresses::address624()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, AccountHelpLayer> : ModifyBase<Modify<Derived, AccountHelpLayer>> {
	using ModifyBase<Modify<Derived, AccountHelpLayer>>::ModifyBase;
	using Base = AccountHelpLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, AccountLayer> : ModifyBase<Modify<Derived, AccountLayer>> {
	using ModifyBase<Modify<Derived, AccountLayer>>::ModifyBase;
	using Base = AccountLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, EndLevelLayer> : ModifyBase<Modify<Derived, EndLevelLayer>> {
	using ModifyBase<Modify<Derived, EndLevelLayer>>::ModifyBase;
	using Base = EndLevelLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, AchievementBar> : ModifyBase<Modify<Derived, AchievementBar>> {
	using ModifyBase<Modify<Derived, AchievementBar>>::ModifyBase;
	using Base = AchievementBar;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure662>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementBar::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure662>::value, Optcall>(
				"AchievementBar::create", 
				(void*)addresses::address662()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, AchievementCell> : ModifyBase<Modify<Derived, AchievementCell>> {
	using ModifyBase<Modify<Derived, AchievementCell>>::ModifyBase;
	using Base = AchievementCell;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, AchievementManager> : ModifyBase<Modify<Derived, AchievementManager>> {
	using ModifyBase<Modify<Derived, AchievementManager>>::ModifyBase;
	using Base = AchievementManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::sharedState<Derived, Base, types::pure665>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure665>::value, Cdecl>(
				"AchievementManager::sharedState", 
				(void*)addresses::address665()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, AnimatedSpriteDelegate> : ModifyBase<Modify<Derived, AnimatedSpriteDelegate>> {
	using ModifyBase<Modify<Derived, AnimatedSpriteDelegate>>::ModifyBase;
	using Base = AnimatedSpriteDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, AchievementNotifier> : ModifyBase<Modify<Derived, AchievementNotifier>> {
	using ModifyBase<Modify<Derived, AchievementNotifier>>::ModifyBase;
	using Base = AchievementNotifier;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::sharedState<Derived, Base, types::pure667>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementNotifier::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure667>::value, Cdecl>(
				"AchievementNotifier::sharedState", 
				(void*)addresses::address667()
			);
		}

		if constexpr (compare::showNextAchievement<Derived, Base, types::pure669>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementNotifier::showNextAchievement", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showNextAchievement<DefaultConv, Derived, Base, types::pure669>::value, Thiscall>(
				"AchievementNotifier::showNextAchievement", 
				(void*)addresses::address669()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, PlatformToolbox> : ModifyBase<Modify<Derived, PlatformToolbox>> {
	using ModifyBase<Modify<Derived, PlatformToolbox>>::ModifyBase;
	using Base = PlatformToolbox;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, AnimatedGameObject> : ModifyBase<Modify<Derived, AnimatedGameObject>> {
	using ModifyBase<Modify<Derived, AnimatedGameObject>>::ModifyBase;
	using Base = AnimatedGameObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, AnimatedShopKeeper> : ModifyBase<Modify<Derived, AnimatedShopKeeper>> {
	using ModifyBase<Modify<Derived, AnimatedShopKeeper>>::ModifyBase;
	using Base = AnimatedShopKeeper;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure675>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AnimatedShopKeeper::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure675>::value, Optcall>(
				"AnimatedShopKeeper::create", 
				(void*)addresses::address675()
			);
		}

		if constexpr (compare::startAnimating<Derived, Base, types::pure676>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AnimatedShopKeeper::startAnimating", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::startAnimating<DefaultConv, Derived, Base, types::pure676>::value, Thiscall>(
				"AnimatedShopKeeper::startAnimating", 
				(void*)addresses::address676()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, AppDelegate> : ModifyBase<Modify<Derived, AppDelegate>> {
	using ModifyBase<Modify<Derived, AppDelegate>>::ModifyBase;
	using Base = AppDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::applicationDidFinishLaunching<Derived, Base, types::pure678>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationDidFinishLaunching", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applicationDidFinishLaunching<DefaultConv, Derived, Base, types::pure678>::value, Thiscall>(
				"AppDelegate::applicationDidFinishLaunching", 
				(void*)addresses::address678()
			);
		}

		if constexpr (compare::applicationDidEnterBackground<Derived, Base, types::pure679>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationDidEnterBackground", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applicationDidEnterBackground<DefaultConv, Derived, Base, types::pure679>::value, Thiscall>(
				"AppDelegate::applicationDidEnterBackground", 
				(void*)addresses::address679()
			);
		}

		if constexpr (compare::applicationWillEnterForeground<Derived, Base, types::pure680>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationWillEnterForeground", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applicationWillEnterForeground<DefaultConv, Derived, Base, types::pure680>::value, Thiscall>(
				"AppDelegate::applicationWillEnterForeground", 
				(void*)addresses::address680()
			);
		}

		if constexpr (compare::applicationWillBecomeActive<Derived, Base, types::pure681>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationWillBecomeActive", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applicationWillBecomeActive<DefaultConv, Derived, Base, types::pure681>::value, Thiscall>(
				"AppDelegate::applicationWillBecomeActive", 
				(void*)addresses::address681()
			);
		}

		if constexpr (compare::applicationWillResignActive<Derived, Base, types::pure682>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationWillResignActive", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applicationWillResignActive<DefaultConv, Derived, Base, types::pure682>::value, Thiscall>(
				"AppDelegate::applicationWillResignActive", 
				(void*)addresses::address682()
			);
		}

		if constexpr (compare::trySaveGame<Derived, Base, types::pure683>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::trySaveGame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::trySaveGame<DefaultConv, Derived, Base, types::pure683>::value, Thiscall>(
				"AppDelegate::trySaveGame", 
				(void*)addresses::address683()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, AudioEffectsLayer> : ModifyBase<Modify<Derived, AudioEffectsLayer>> {
	using ModifyBase<Modify<Derived, AudioEffectsLayer>>::ModifyBase;
	using Base = AudioEffectsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, MenuLayer> : ModifyBase<Modify<Derived, MenuLayer>> {
	using ModifyBase<Modify<Derived, MenuLayer>>::ModifyBase;
	using Base = MenuLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure1666>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1666>::value, Thiscall>(
				"MenuLayer::init", 
				(void*)addresses::address1666()
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure1667>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure1667>::value, Thiscall>(
				"MenuLayer::keyBackClicked", 
				(void*)addresses::address1667()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure1668>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure1668>::value, Thiscall>(
				"MenuLayer::keyDown", 
				(void*)addresses::address1668()
			);
		}

		if constexpr (compare::onMoreGames<Derived, Base, types::pure1671>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onMoreGames", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onMoreGames<DefaultConv, Derived, Base, types::pure1671>::value, Membercall>(
				"MenuLayer::onMoreGames", 
				(void*)addresses::address1671()
			);
		}

		if constexpr (compare::onGarage<Derived, Base, types::pure1672>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onGarage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onGarage<DefaultConv, Derived, Base, types::pure1672>::value, Membercall>(
				"MenuLayer::onGarage", 
				(void*)addresses::address1672()
			);
		}

		if constexpr (compare::onQuit<Derived, Base, types::pure1673>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onQuit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onQuit<DefaultConv, Derived, Base, types::pure1673>::value, Membercall>(
				"MenuLayer::onQuit", 
				(void*)addresses::address1673()
			);
		}

		if constexpr (compare::onMyProfile<Derived, Base, types::pure1674>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onMyProfile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onMyProfile<DefaultConv, Derived, Base, types::pure1674>::value, Membercall>(
				"MenuLayer::onMyProfile", 
				(void*)addresses::address1674()
			);
		}

		if constexpr (compare::onPlay<Derived, Base, types::pure1675>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onPlay", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPlay<DefaultConv, Derived, Base, types::pure1675>::value, Membercall>(
				"MenuLayer::onPlay", 
				(void*)addresses::address1675()
			);
		}

		if constexpr (compare::onCreator<Derived, Base, types::pure1676>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onCreator", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onCreator<DefaultConv, Derived, Base, types::pure1676>::value, Membercall>(
				"MenuLayer::onCreator", 
				(void*)addresses::address1676()
			);
		}

		if constexpr (compare::onRobTop<Derived, Base, types::pure1677>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onRobTop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onRobTop<DefaultConv, Derived, Base, types::pure1677>::value, Membercall>(
				"MenuLayer::onRobTop", 
				(void*)addresses::address1677()
			);
		}

		if constexpr (compare::onNewgrounds<Derived, Base, types::pure1678>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onNewgrounds", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onNewgrounds<DefaultConv, Derived, Base, types::pure1678>::value, Membercall>(
				"MenuLayer::onNewgrounds", 
				(void*)addresses::address1678()
			);
		}

		if constexpr (compare::onDaily<Derived, Base, types::pure1679>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onDaily", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onDaily<DefaultConv, Derived, Base, types::pure1679>::value, Membercall>(
				"MenuLayer::onDaily", 
				(void*)addresses::address1679()
			);
		}

		if constexpr (compare::onOptions<Derived, Base, types::pure1680>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onOptions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onOptions<DefaultConv, Derived, Base, types::pure1680>::value, Membercall>(
				"MenuLayer::onOptions", 
				(void*)addresses::address1680()
			);
		}

		if constexpr (compare::onAchievements<Derived, Base, types::pure1681>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onAchievements", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onAchievements<DefaultConv, Derived, Base, types::pure1681>::value, Membercall>(
				"MenuLayer::onAchievements", 
				(void*)addresses::address1681()
			);
		}

		if constexpr (compare::onStats<Derived, Base, types::pure1682>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onStats", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onStats<DefaultConv, Derived, Base, types::pure1682>::value, Membercall>(
				"MenuLayer::onStats", 
				(void*)addresses::address1682()
			);
		}

		if constexpr (compare::onFacebook<Derived, Base, types::pure1683>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onFacebook", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onFacebook<DefaultConv, Derived, Base, types::pure1683>::value, Membercall>(
				"MenuLayer::onFacebook", 
				(void*)addresses::address1683()
			);
		}

		if constexpr (compare::onTwitter<Derived, Base, types::pure1684>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onTwitter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTwitter<DefaultConv, Derived, Base, types::pure1684>::value, Membercall>(
				"MenuLayer::onTwitter", 
				(void*)addresses::address1684()
			);
		}

		if constexpr (compare::onYouTube<Derived, Base, types::pure1685>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onYouTube", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onYouTube<DefaultConv, Derived, Base, types::pure1685>::value, Membercall>(
				"MenuLayer::onYouTube", 
				(void*)addresses::address1685()
			);
		}

		if constexpr (compare::scene<Derived, Base, types::pure1686>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::scene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scene<DefaultConv, Derived, Base, types::pure1686>::value, Optcall>(
				"MenuLayer::scene", 
				(void*)addresses::address1686()
			);
		}

		if constexpr (compare::node<Derived, Base, types::pure1687>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::node", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::node<DefaultConv, Derived, Base, types::pure1687>::value, Thiscall>(
				"MenuLayer::node", 
				(void*)addresses::address1687()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, BoomListView> : ModifyBase<Modify<Derived, BoomListView>> {
	using ModifyBase<Modify<Derived, BoomListView>>::ModifyBase;
	using Base = BoomListView;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure695>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure695>::value, Membercall>(
				"BoomListView::init", 
				(void*)addresses::address695()
			);
		}

		if constexpr (compare::setupList<Derived, Base, types::pure697>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::setupList", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupList<DefaultConv, Derived, Base, types::pure697>::value, Thiscall>(
				"BoomListView::setupList", 
				(void*)addresses::address697()
			);
		}

		if constexpr (compare::cellHeightForRowAtIndexPath<Derived, Base, types::pure699>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::cellHeightForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::cellHeightForRowAtIndexPath<DefaultConv, Derived, Base, types::pure699>::value, Thiscall>(
				"BoomListView::cellHeightForRowAtIndexPath", 
				(void*)addresses::address699()
			);
		}

		if constexpr (compare::numberOfRowsInSection<Derived, Base, types::pure701>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::numberOfRowsInSection", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::numberOfRowsInSection<DefaultConv, Derived, Base, types::pure701>::value, Thiscall>(
				"BoomListView::numberOfRowsInSection", 
				(void*)addresses::address701()
			);
		}

		if constexpr (compare::numberOfSectionsInTableView<Derived, Base, types::pure702>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::numberOfSectionsInTableView", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::numberOfSectionsInTableView<DefaultConv, Derived, Base, types::pure702>::value, Thiscall>(
				"BoomListView::numberOfSectionsInTableView", 
				(void*)addresses::address702()
			);
		}

		if constexpr (compare::cellForRowAtIndexPath<Derived, Base, types::pure703>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::cellForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::cellForRowAtIndexPath<DefaultConv, Derived, Base, types::pure703>::value, Thiscall>(
				"BoomListView::cellForRowAtIndexPath", 
				(void*)addresses::address703()
			);
		}

		if constexpr (compare::getListCell<Derived, Base, types::pure706>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::getListCell", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getListCell<DefaultConv, Derived, Base, types::pure706>::value, Thiscall>(
				"BoomListView::getListCell", 
				(void*)addresses::address706()
			);
		}

		if constexpr (compare::loadCell<Derived, Base, types::pure707>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::loadCell", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadCell<DefaultConv, Derived, Base, types::pure707>::value, Thiscall>(
				"BoomListView::loadCell", 
				(void*)addresses::address707()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, BoomScrollLayer> : ModifyBase<Modify<Derived, BoomScrollLayer>> {
	using ModifyBase<Modify<Derived, BoomScrollLayer>>::ModifyBase;
	using Base = BoomScrollLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::instantMoveToPage<Derived, Base, types::pure709>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomScrollLayer::instantMoveToPage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::instantMoveToPage<DefaultConv, Derived, Base, types::pure709>::value, Membercall>(
				"BoomScrollLayer::instantMoveToPage", 
				(void*)addresses::address709()
			);
		}

		if constexpr (compare::moveToPage<Derived, Base, types::pure710>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomScrollLayer::moveToPage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveToPage<DefaultConv, Derived, Base, types::pure710>::value, Membercall>(
				"BoomScrollLayer::moveToPage", 
				(void*)addresses::address710()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ButtonSprite> : ModifyBase<Modify<Derived, ButtonSprite>> {
	using ModifyBase<Modify<Derived, ButtonSprite>>::ModifyBase;
	using Base = ButtonSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure711>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure711>::value, Optcall>(
				"ButtonSprite::create", 
				(void*)addresses::address711()
			);
		}

		if constexpr (compare::updateBGImage<Derived, Base, types::pure714>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::updateBGImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateBGImage<DefaultConv, Derived, Base, types::pure714>::value, Membercall>(
				"ButtonSprite::updateBGImage", 
				(void*)addresses::address714()
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure716>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::setString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setString<DefaultConv, Derived, Base, types::pure716>::value, Membercall>(
				"ButtonSprite::setString", 
				(void*)addresses::address716()
			);
		}

		if constexpr (compare::updateSpriteBGSize<Derived, Base, types::pure717>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::updateSpriteBGSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSpriteBGSize<DefaultConv, Derived, Base, types::pure717>::value, Membercall>(
				"ButtonSprite::updateSpriteBGSize", 
				(void*)addresses::address717()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SongInfoObject> : ModifyBase<Modify<Derived, SongInfoObject>> {
	using ModifyBase<Modify<Derived, SongInfoObject>>::ModifyBase;
	using Base = SongInfoObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CCAnimatedSprite> : ModifyBase<Modify<Derived, CCAnimatedSprite>> {
	using ModifyBase<Modify<Derived, CCAnimatedSprite>>::ModifyBase;
	using Base = CCAnimatedSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::runAnimation<Derived, Base, types::pure718>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCAnimatedSprite::runAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runAnimation<DefaultConv, Derived, Base, types::pure718>::value, Membercall>(
				"CCAnimatedSprite::runAnimation", 
				(void*)addresses::address718()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure720>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCAnimatedSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure720>::value, Optcall>(
				"CCAnimatedSprite::create", 
				(void*)addresses::address720()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCCircleWave> : ModifyBase<Modify<Derived, CCCircleWave>> {
	using ModifyBase<Modify<Derived, CCCircleWave>>::ModifyBase;
	using Base = CCCircleWave;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure734>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure734>::value, Optcall>(
				"CCCircleWave::create", 
				(void*)addresses::address734()
			);
		}

		if constexpr (compare::followObject<Derived, Base, types::pure736>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::followObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::followObject<DefaultConv, Derived, Base, types::pure736>::value, Membercall>(
				"CCCircleWave::followObject", 
				(void*)addresses::address736()
			);
		}

		if constexpr (compare::updatePosition<Derived, Base, types::pure737>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::updatePosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePosition<DefaultConv, Derived, Base, types::pure737>::value, Membercall>(
				"CCCircleWave::updatePosition", 
				(void*)addresses::address737()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure738>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure738>::value, Membercall>(
				"CCCircleWave::setPosition", 
				(void*)addresses::address738()
			);
		}

		if constexpr (compare::removeMeAndCleanup<Derived, Base, types::pure739>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::removeMeAndCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeMeAndCleanup<DefaultConv, Derived, Base, types::pure739>::value, Thiscall>(
				"CCCircleWave::removeMeAndCleanup", 
				(void*)addresses::address739()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure740>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure740>::value, Thiscall>(
				"CCCircleWave::draw", 
				(void*)addresses::address740()
			);
		}

		if constexpr (compare::updateTweenAction<Derived, Base, types::pure741>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::updateTweenAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTweenAction<DefaultConv, Derived, Base, types::pure741>::value, Membercall>(
				"CCCircleWave::updateTweenAction", 
				(void*)addresses::address741()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCContentLayer> : ModifyBase<Modify<Derived, CCContentLayer>> {
	using ModifyBase<Modify<Derived, CCContentLayer>>::ModifyBase;
	using Base = CCContentLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure743>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCContentLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure743>::value, Optcall>(
				"CCContentLayer::create", 
				(void*)addresses::address743()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure744>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCContentLayer::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure744>::value, Thiscall>(
				"CCContentLayer::setPosition", 
				(void*)addresses::address744()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCIndexPath> : ModifyBase<Modify<Derived, CCIndexPath>> {
	using ModifyBase<Modify<Derived, CCIndexPath>>::ModifyBase;
	using Base = CCIndexPath;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure745>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCIndexPath::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure745>::value, Optcall>(
				"CCIndexPath::create", 
				(void*)addresses::address745()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCLightFlash> : ModifyBase<Modify<Derived, CCLightFlash>> {
	using ModifyBase<Modify<Derived, CCLightFlash>>::ModifyBase;
	using Base = CCLightFlash;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::playEffect<Derived, Base, types::pure747>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCLightFlash::playEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playEffect<DefaultConv, Derived, Base, types::pure747>::value, Membercall>(
				"CCLightFlash::playEffect", 
				(void*)addresses::address747()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, TextArea> : ModifyBase<Modify<Derived, TextArea>> {
	using ModifyBase<Modify<Derived, TextArea>>::ModifyBase;
	using Base = TextArea;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::constructor<Derived, Base, types::pure2140>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure2140>::value, Thiscall>(
				"TextArea::constructor", 
				(void*)addresses::address2140()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure2143>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure2143>::value, Membercall>(
				"TextArea::init", 
				(void*)addresses::address2143()
			);
		}

		if constexpr (compare::colorAllCharactersTo<Derived, Base, types::pure2145>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::colorAllCharactersTo", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorAllCharactersTo<DefaultConv, Derived, Base, types::pure2145>::value, Membercall>(
				"TextArea::colorAllCharactersTo", 
				(void*)addresses::address2145()
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure2146>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::setString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setString<DefaultConv, Derived, Base, types::pure2146>::value, Membercall>(
				"TextArea::setString", 
				(void*)addresses::address2146()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, InheritanceNode> : ModifyBase<Modify<Derived, InheritanceNode>> {
	using ModifyBase<Modify<Derived, InheritanceNode>>::ModifyBase;
	using Base = InheritanceNode;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CCMoveCNode> : ModifyBase<Modify<Derived, CCMoveCNode>> {
	using ModifyBase<Modify<Derived, CCMoveCNode>>::ModifyBase;
	using Base = CCMoveCNode;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GameToolbox> : ModifyBase<Modify<Derived, GameToolbox>> {
	using ModifyBase<Modify<Derived, GameToolbox>>::ModifyBase;
	using Base = GameToolbox;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::createToggleButton<Derived, Base, types::pure1525>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameToolbox::createToggleButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createToggleButton<DefaultConv, Derived, Base, types::pure1525>::value, Optcall>(
				"GameToolbox::createToggleButton", 
				(void*)addresses::address1525()
			);
		}

		if constexpr (compare::transformColor<Derived, Base, types::pure1526>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameToolbox::transformColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::transformColor<DefaultConv, Derived, Base, types::pure1526>::value, Optcall>(
				"GameToolbox::transformColor", 
				(void*)addresses::address1526()
			);
		}

		if constexpr (compare::alignItemsHorisontally<Derived, Base, types::pure1527>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameToolbox::alignItemsHorisontally", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::alignItemsHorisontally<DefaultConv, Derived, Base, types::pure1527>::value, Optcall>(
				"GameToolbox::alignItemsHorisontally", 
				(void*)addresses::address1527()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCNodeContainer> : ModifyBase<Modify<Derived, CCNodeContainer>> {
	using ModifyBase<Modify<Derived, CCNodeContainer>>::ModifyBase;
	using Base = CCNodeContainer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure778>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCNodeContainer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure778>::value, Cdecl>(
				"CCNodeContainer::create", 
				(void*)addresses::address778()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure779>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCNodeContainer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure779>::value, Thiscall>(
				"CCNodeContainer::init", 
				(void*)addresses::address779()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure780>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCNodeContainer::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure780>::value, Thiscall>(
				"CCNodeContainer::visit", 
				(void*)addresses::address780()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCScrollLayerExt> : ModifyBase<Modify<Derived, CCScrollLayerExt>> {
	using ModifyBase<Modify<Derived, CCScrollLayerExt>>::ModifyBase;
	using Base = CCScrollLayerExt;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::visit<Derived, Base, types::pure784>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure784>::value, Thiscall>(
				"CCScrollLayerExt::visit", 
				(void*)addresses::address784()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure785>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure785>::value, Thiscall>(
				"CCScrollLayerExt::ccTouchBegan", 
				(void*)addresses::address785()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure786>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure786>::value, Thiscall>(
				"CCScrollLayerExt::ccTouchMoved", 
				(void*)addresses::address786()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure787>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure787>::value, Thiscall>(
				"CCScrollLayerExt::ccTouchEnded", 
				(void*)addresses::address787()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure788>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure788>::value, Thiscall>(
				"CCScrollLayerExt::ccTouchCancelled", 
				(void*)addresses::address788()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure789>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure789>::value, Thiscall>(
				"CCScrollLayerExt::registerWithTouchDispatcher", 
				(void*)addresses::address789()
			);
		}

		if constexpr (compare::preVisitWithClippingRect<Derived, Base, types::pure790>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::preVisitWithClippingRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::preVisitWithClippingRect<DefaultConv, Derived, Base, types::pure790>::value, Thiscall>(
				"CCScrollLayerExt::preVisitWithClippingRect", 
				(void*)addresses::address790()
			);
		}

		if constexpr (compare::postVisit<Derived, Base, types::pure791>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::postVisit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::postVisit<DefaultConv, Derived, Base, types::pure791>::value, Thiscall>(
				"CCScrollLayerExt::postVisit", 
				(void*)addresses::address791()
			);
		}

		if constexpr (compare::moveToTop<Derived, Base, types::pure792>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::moveToTop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveToTop<DefaultConv, Derived, Base, types::pure792>::value, Thiscall>(
				"CCScrollLayerExt::moveToTop", 
				(void*)addresses::address792()
			);
		}

		if constexpr (compare::moveToTopWithOffset<Derived, Base, types::pure793>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::moveToTopWithOffset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveToTopWithOffset<DefaultConv, Derived, Base, types::pure793>::value, Membercall>(
				"CCScrollLayerExt::moveToTopWithOffset", 
				(void*)addresses::address793()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure794>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure794>::value, Membercall>(
				"CCScrollLayerExt::constructor", 
				(void*)addresses::address794()
			);
		}

		if constexpr (compare::scrollLayer<Derived, Base, types::pure795>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::scrollLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scrollLayer<DefaultConv, Derived, Base, types::pure795>::value, Membercall>(
				"CCScrollLayerExt::scrollLayer", 
				(void*)addresses::address795()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SongInfoLayer> : ModifyBase<Modify<Derived, SongInfoLayer>> {
	using ModifyBase<Modify<Derived, SongInfoLayer>>::ModifyBase;
	using Base = SongInfoLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2118>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SongInfoLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2118>::value, Optcall>(
				"SongInfoLayer::create", 
				(void*)addresses::address2118()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure2119>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SongInfoLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2119>::value, Optcall>(
				"SongInfoLayer::create", 
				(void*)addresses::address2119()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCScrollLayerExtDelegate> : ModifyBase<Modify<Derived, CCScrollLayerExtDelegate>> {
	using ModifyBase<Modify<Derived, CCScrollLayerExtDelegate>>::ModifyBase;
	using Base = CCScrollLayerExtDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJSpecialColorSelect> : ModifyBase<Modify<Derived, GJSpecialColorSelect>> {
	using ModifyBase<Modify<Derived, GJSpecialColorSelect>>::ModifyBase;
	using Base = GJSpecialColorSelect;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::textForColorIdx<Derived, Base, types::pure1279>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSpecialColorSelect::textForColorIdx", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textForColorIdx<DefaultConv, Derived, Base, types::pure1279>::value, Optcall>(
				"GJSpecialColorSelect::textForColorIdx", 
				(void*)addresses::address1279()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCSpritePlus> : ModifyBase<Modify<Derived, CCSpritePlus>> {
	using ModifyBase<Modify<Derived, CCSpritePlus>>::ModifyBase;
	using Base = CCSpritePlus;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure802>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure802>::value, Membercall>(
				"CCSpritePlus::initWithSpriteFrameName", 
				(void*)addresses::address802()
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure803>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleX<DefaultConv, Derived, Base, types::pure803>::value, Membercall>(
				"CCSpritePlus::setScaleX", 
				(void*)addresses::address803()
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure804>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleY<DefaultConv, Derived, Base, types::pure804>::value, Membercall>(
				"CCSpritePlus::setScaleY", 
				(void*)addresses::address804()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure805>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure805>::value, Membercall>(
				"CCSpritePlus::setScale", 
				(void*)addresses::address805()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure806>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure806>::value, Membercall>(
				"CCSpritePlus::setPosition", 
				(void*)addresses::address806()
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure807>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotation<DefaultConv, Derived, Base, types::pure807>::value, Membercall>(
				"CCSpritePlus::setRotation", 
				(void*)addresses::address807()
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure808>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithTexture<DefaultConv, Derived, Base, types::pure808>::value, Membercall>(
				"CCSpritePlus::initWithTexture", 
				(void*)addresses::address808()
			);
		}

		if constexpr (compare::setFlipX<Derived, Base, types::pure809>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipX<DefaultConv, Derived, Base, types::pure809>::value, Membercall>(
				"CCSpritePlus::setFlipX", 
				(void*)addresses::address809()
			);
		}

		if constexpr (compare::setFlipY<Derived, Base, types::pure810>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipY<DefaultConv, Derived, Base, types::pure810>::value, Membercall>(
				"CCSpritePlus::setFlipY", 
				(void*)addresses::address810()
			);
		}

		if constexpr (compare::createWithSpriteFrame<Derived, Base, types::pure811>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::createWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithSpriteFrame<DefaultConv, Derived, Base, types::pure811>::value, Optcall>(
				"CCSpritePlus::createWithSpriteFrame", 
				(void*)addresses::address811()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCTextInputNode> : ModifyBase<Modify<Derived, CCTextInputNode>> {
	using ModifyBase<Modify<Derived, CCTextInputNode>>::ModifyBase;
	using Base = CCTextInputNode;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::setString<Derived, Base, types::pure819>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::setString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setString<DefaultConv, Derived, Base, types::pure819>::value, Membercall>(
				"CCTextInputNode::setString", 
				(void*)addresses::address819()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure824>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure824>::value, Membercall>(
				"CCTextInputNode::init", 
				(void*)addresses::address824()
			);
		}

		if constexpr (compare::refreshLabel<Derived, Base, types::pure825>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::refreshLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::refreshLabel<DefaultConv, Derived, Base, types::pure825>::value, Thiscall>(
				"CCTextInputNode::refreshLabel", 
				(void*)addresses::address825()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure827>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure827>::value, Thiscall>(
				"CCTextInputNode::registerWithTouchDispatcher", 
				(void*)addresses::address827()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure828>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure828>::value, Thiscall>(
				"CCTextInputNode::visit", 
				(void*)addresses::address828()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure829>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure829>::value, Thiscall>(
				"CCTextInputNode::ccTouchBegan", 
				(void*)addresses::address829()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure833>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure833>::value, Thiscall>(
				"CCTextInputNode::textChanged", 
				(void*)addresses::address833()
			);
		}

		if constexpr (compare::onClickTrackNode<Derived, Base, types::pure834>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onClickTrackNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onClickTrackNode<DefaultConv, Derived, Base, types::pure834>::value, Thiscall>(
				"CCTextInputNode::onClickTrackNode", 
				(void*)addresses::address834()
			);
		}

		if constexpr (compare::keyboardWillShow<Derived, Base, types::pure835>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::keyboardWillShow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyboardWillShow<DefaultConv, Derived, Base, types::pure835>::value, Thiscall>(
				"CCTextInputNode::keyboardWillShow", 
				(void*)addresses::address835()
			);
		}

		if constexpr (compare::keyboardWillHide<Derived, Base, types::pure836>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::keyboardWillHide", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyboardWillHide<DefaultConv, Derived, Base, types::pure836>::value, Thiscall>(
				"CCTextInputNode::keyboardWillHide", 
				(void*)addresses::address836()
			);
		}

		if constexpr (compare::onTextFieldAttachWithIME<Derived, Base, types::pure838>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onTextFieldAttachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTextFieldAttachWithIME<DefaultConv, Derived, Base, types::pure838>::value, Thiscall>(
				"CCTextInputNode::onTextFieldAttachWithIME", 
				(void*)addresses::address838()
			);
		}

		if constexpr (compare::onTextFieldDetachWithIME<Derived, Base, types::pure839>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onTextFieldDetachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTextFieldDetachWithIME<DefaultConv, Derived, Base, types::pure839>::value, Thiscall>(
				"CCTextInputNode::onTextFieldDetachWithIME", 
				(void*)addresses::address839()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, StartPosObject> : ModifyBase<Modify<Derived, StartPosObject>> {
	using ModifyBase<Modify<Derived, StartPosObject>>::ModifyBase;
	using Base = StartPosObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ChallengesPage> : ModifyBase<Modify<Derived, ChallengesPage>> {
	using ModifyBase<Modify<Derived, ChallengesPage>>::ModifyBase;
	using Base = ChallengesPage;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure840>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ChallengesPage::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure840>::value, Cdecl>(
				"ChallengesPage::create", 
				(void*)addresses::address840()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, OBB2D> : ModifyBase<Modify<Derived, OBB2D>> {
	using ModifyBase<Modify<Derived, OBB2D>>::ModifyBase;
	using Base = OBB2D;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CheckpointObject> : ModifyBase<Modify<Derived, CheckpointObject>> {
	using ModifyBase<Modify<Derived, CheckpointObject>>::ModifyBase;
	using Base = CheckpointObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CollisionBlockPopup> : ModifyBase<Modify<Derived, CollisionBlockPopup>> {
	using ModifyBase<Modify<Derived, CollisionBlockPopup>>::ModifyBase;
	using Base = CollisionBlockPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CollisionTriggerAction> : ModifyBase<Modify<Derived, CollisionTriggerAction>> {
	using ModifyBase<Modify<Derived, CollisionTriggerAction>>::ModifyBase;
	using Base = CollisionTriggerAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ColorAction> : ModifyBase<Modify<Derived, ColorAction>> {
	using ModifyBase<Modify<Derived, ColorAction>>::ModifyBase;
	using Base = ColorAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ColorActionSprite> : ModifyBase<Modify<Derived, ColorActionSprite>> {
	using ModifyBase<Modify<Derived, ColorActionSprite>>::ModifyBase;
	using Base = ColorActionSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ColorSelectDelegate> : ModifyBase<Modify<Derived, ColorSelectDelegate>> {
	using ModifyBase<Modify<Derived, ColorSelectDelegate>>::ModifyBase;
	using Base = ColorSelectDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ColorSelectPopup> : ModifyBase<Modify<Derived, ColorSelectPopup>> {
	using ModifyBase<Modify<Derived, ColorSelectPopup>>::ModifyBase;
	using Base = ColorSelectPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::colorValueChanged<Derived, Base, types::pure854>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorSelectPopup::colorValueChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorValueChanged<DefaultConv, Derived, Base, types::pure854>::value, Thiscall>(
				"ColorSelectPopup::colorValueChanged", 
				(void*)addresses::address854()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ColorSetupDelegate> : ModifyBase<Modify<Derived, ColorSetupDelegate>> {
	using ModifyBase<Modify<Derived, ColorSetupDelegate>>::ModifyBase;
	using Base = ColorSetupDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CommentUploadDelegate> : ModifyBase<Modify<Derived, CommentUploadDelegate>> {
	using ModifyBase<Modify<Derived, CommentUploadDelegate>>::ModifyBase;
	using Base = CommentUploadDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ConfigureHSVWidget> : ModifyBase<Modify<Derived, ConfigureHSVWidget>> {
	using ModifyBase<Modify<Derived, ConfigureHSVWidget>>::ModifyBase;
	using Base = ConfigureHSVWidget;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, MultilineBitmapFont> : ModifyBase<Modify<Derived, MultilineBitmapFont>> {
	using ModifyBase<Modify<Derived, MultilineBitmapFont>>::ModifyBase;
	using Base = MultilineBitmapFont;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CountTriggerAction> : ModifyBase<Modify<Derived, CountTriggerAction>> {
	using ModifyBase<Modify<Derived, CountTriggerAction>>::ModifyBase;
	using Base = CountTriggerAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CreateGuidelinesLayer> : ModifyBase<Modify<Derived, CreateGuidelinesLayer>> {
	using ModifyBase<Modify<Derived, CreateGuidelinesLayer>>::ModifyBase;
	using Base = CreateGuidelinesLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::onStop<Derived, Base, types::pure857>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CreateGuidelinesLayer::onStop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onStop<DefaultConv, Derived, Base, types::pure857>::value, Membercall>(
				"CreateGuidelinesLayer::onStop", 
				(void*)addresses::address857()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CreateMenuItem> : ModifyBase<Modify<Derived, CreateMenuItem>> {
	using ModifyBase<Modify<Derived, CreateMenuItem>>::ModifyBase;
	using Base = CreateMenuItem;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GameRateDelegate> : ModifyBase<Modify<Derived, GameRateDelegate>> {
	using ModifyBase<Modify<Derived, GameRateDelegate>>::ModifyBase;
	using Base = GameRateDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, DialogLayer> : ModifyBase<Modify<Derived, DialogLayer>> {
	using ModifyBase<Modify<Derived, DialogLayer>>::ModifyBase;
	using Base = DialogLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::createDialogLayer<Derived, Base, types::pure883>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::createDialogLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createDialogLayer<DefaultConv, Derived, Base, types::pure883>::value, Optcall>(
				"DialogLayer::createDialogLayer", 
				(void*)addresses::address883()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure884>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure884>::value, Membercall>(
				"DialogLayer::init", 
				(void*)addresses::address884()
			);
		}

		if constexpr (compare::animateIn<Derived, Base, types::pure885>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::animateIn", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::animateIn<DefaultConv, Derived, Base, types::pure885>::value, Membercall>(
				"DialogLayer::animateIn", 
				(void*)addresses::address885()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CurrencyRewardLayer> : ModifyBase<Modify<Derived, CurrencyRewardLayer>> {
	using ModifyBase<Modify<Derived, CurrencyRewardLayer>>::ModifyBase;
	using Base = CurrencyRewardLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, DialogDelegate> : ModifyBase<Modify<Derived, DialogDelegate>> {
	using ModifyBase<Modify<Derived, DialogDelegate>>::ModifyBase;
	using Base = DialogDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CurrencyRewardDelegate> : ModifyBase<Modify<Derived, CurrencyRewardDelegate>> {
	using ModifyBase<Modify<Derived, CurrencyRewardDelegate>>::ModifyBase;
	using Base = CurrencyRewardDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CustomListView> : ModifyBase<Modify<Derived, CustomListView>> {
	using ModifyBase<Modify<Derived, CustomListView>>::ModifyBase;
	using Base = CustomListView;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure865>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure865>::value, Optcall>(
				"CustomListView::create", 
				(void*)addresses::address865()
			);
		}

		if constexpr (compare::getListCell<Derived, Base, types::pure866>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::getListCell", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getListCell<DefaultConv, Derived, Base, types::pure866>::value, Thiscall>(
				"CustomListView::getListCell", 
				(void*)addresses::address866()
			);
		}

		if constexpr (compare::loadCell<Derived, Base, types::pure867>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::loadCell", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadCell<DefaultConv, Derived, Base, types::pure867>::value, Thiscall>(
				"CustomListView::loadCell", 
				(void*)addresses::address867()
			);
		}

		if constexpr (compare::setupList<Derived, Base, types::pure868>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::setupList", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupList<DefaultConv, Derived, Base, types::pure868>::value, Thiscall>(
				"CustomListView::setupList", 
				(void*)addresses::address868()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure869>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure869>::value, Thiscall>(
				"CustomListView::constructor", 
				(void*)addresses::address869()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CustomSongWidget> : ModifyBase<Modify<Derived, CustomSongWidget>> {
	using ModifyBase<Modify<Derived, CustomSongWidget>>::ModifyBase;
	using Base = CustomSongWidget;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::updateSongObject<Derived, Base, types::pure876>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomSongWidget::updateSongObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSongObject<DefaultConv, Derived, Base, types::pure876>::value, Membercall>(
				"CustomSongWidget::updateSongObject", 
				(void*)addresses::address876()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CustomizeObjectLayer> : ModifyBase<Modify<Derived, CustomizeObjectLayer>> {
	using ModifyBase<Modify<Derived, CustomizeObjectLayer>>::ModifyBase;
	using Base = CustomizeObjectLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::onNextColorChannel<Derived, Base, types::pure877>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomizeObjectLayer::onNextColorChannel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onNextColorChannel<DefaultConv, Derived, Base, types::pure877>::value, Membercall>(
				"CustomizeObjectLayer::onNextColorChannel", 
				(void*)addresses::address877()
			);
		}

		if constexpr (compare::onSelectColor<Derived, Base, types::pure878>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomizeObjectLayer::onSelectColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onSelectColor<DefaultConv, Derived, Base, types::pure878>::value, Membercall>(
				"CustomizeObjectLayer::onSelectColor", 
				(void*)addresses::address878()
			);
		}

		if constexpr (compare::getActiveMode<Derived, Base, types::pure879>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomizeObjectLayer::getActiveMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getActiveMode<DefaultConv, Derived, Base, types::pure879>::value, Membercall>(
				"CustomizeObjectLayer::getActiveMode", 
				(void*)addresses::address879()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, DailyLevelPage> : ModifyBase<Modify<Derived, DailyLevelPage>> {
	using ModifyBase<Modify<Derived, DailyLevelPage>>::ModifyBase;
	using Base = DailyLevelPage;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure880>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DailyLevelPage::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure880>::value, Optcall>(
				"DailyLevelPage::create", 
				(void*)addresses::address880()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, DialogObject> : ModifyBase<Modify<Derived, DialogObject>> {
	using ModifyBase<Modify<Derived, DialogObject>>::ModifyBase;
	using Base = DialogObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure897>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure897>::value, Optcall>(
				"DialogObject::create", 
				(void*)addresses::address897()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure898>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogObject::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure898>::value, Membercall>(
				"DialogObject::init", 
				(void*)addresses::address898()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, EditButtonBar> : ModifyBase<Modify<Derived, EditButtonBar>> {
	using ModifyBase<Modify<Derived, EditButtonBar>>::ModifyBase;
	using Base = EditButtonBar;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::loadFromItems<Derived, Base, types::pure904>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditButtonBar::loadFromItems", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadFromItems<DefaultConv, Derived, Base, types::pure904>::value, Membercall>(
				"EditButtonBar::loadFromItems", 
				(void*)addresses::address904()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, EditLevelLayer> : ModifyBase<Modify<Derived, EditLevelLayer>> {
	using ModifyBase<Modify<Derived, EditLevelLayer>>::ModifyBase;
	using Base = EditLevelLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure906>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditLevelLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure906>::value, Optcall>(
				"EditLevelLayer::create", 
				(void*)addresses::address906()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, EditorPauseLayer> : ModifyBase<Modify<Derived, EditorPauseLayer>> {
	using ModifyBase<Modify<Derived, EditorPauseLayer>>::ModifyBase;
	using Base = EditorPauseLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure910>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure910>::value, Thiscall>(
				"EditorPauseLayer::keyBackClicked", 
				(void*)addresses::address910()
			);
		}

		if constexpr (compare::FLAlert_Clicked<Derived, Base, types::pure913>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::FLAlert_Clicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::FLAlert_Clicked<DefaultConv, Derived, Base, types::pure913>::value, Thiscall>(
				"EditorPauseLayer::FLAlert_Clicked", 
				(void*)addresses::address913()
			);
		}

		if constexpr (compare::saveLevel<Derived, Base, types::pure914>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::saveLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::saveLevel<DefaultConv, Derived, Base, types::pure914>::value, Thiscall>(
				"EditorPauseLayer::saveLevel", 
				(void*)addresses::address914()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure915>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure915>::value, Membercall>(
				"EditorPauseLayer::init", 
				(void*)addresses::address915()
			);
		}

		if constexpr (compare::onExitEditor<Derived, Base, types::pure916>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onExitEditor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExitEditor<DefaultConv, Derived, Base, types::pure916>::value, Membercall>(
				"EditorPauseLayer::onExitEditor", 
				(void*)addresses::address916()
			);
		}

		if constexpr (compare::playStep2<Derived, Base, types::pure917>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::playStep2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playStep2<DefaultConv, Derived, Base, types::pure917>::value, Thiscall>(
				"EditorPauseLayer::playStep2", 
				(void*)addresses::address917()
			);
		}

		if constexpr (compare::onResume<Derived, Base, types::pure918>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onResume", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onResume<DefaultConv, Derived, Base, types::pure918>::value, Membercall>(
				"EditorPauseLayer::onResume", 
				(void*)addresses::address918()
			);
		}

		if constexpr (compare::onSaveAndPlay<Derived, Base, types::pure919>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onSaveAndPlay", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onSaveAndPlay<DefaultConv, Derived, Base, types::pure919>::value, Membercall>(
				"EditorPauseLayer::onSaveAndPlay", 
				(void*)addresses::address919()
			);
		}

		if constexpr (compare::onSaveAndExit<Derived, Base, types::pure920>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onSaveAndExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onSaveAndExit<DefaultConv, Derived, Base, types::pure920>::value, Membercall>(
				"EditorPauseLayer::onSaveAndExit", 
				(void*)addresses::address920()
			);
		}

		if constexpr (compare::onSave<Derived, Base, types::pure921>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onSave", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onSave<DefaultConv, Derived, Base, types::pure921>::value, Membercall>(
				"EditorPauseLayer::onSave", 
				(void*)addresses::address921()
			);
		}

		if constexpr (compare::onExitNoSave<Derived, Base, types::pure922>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onExitNoSave", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExitNoSave<DefaultConv, Derived, Base, types::pure922>::value, Membercall>(
				"EditorPauseLayer::onExitNoSave", 
				(void*)addresses::address922()
			);
		}

		if constexpr (compare::uncheckAllPortals<Derived, Base, types::pure923>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::uncheckAllPortals", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::uncheckAllPortals<DefaultConv, Derived, Base, types::pure923>::value, Membercall>(
				"EditorPauseLayer::uncheckAllPortals", 
				(void*)addresses::address923()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure924>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure924>::value, Thiscall>(
				"EditorPauseLayer::constructor", 
				(void*)addresses::address924()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, EditorUI> : ModifyBase<Modify<Derived, EditorUI>> {
	using ModifyBase<Modify<Derived, EditorUI>>::ModifyBase;
	using Base = EditorUI;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::deselectAll<Derived, Base, types::pure928>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::deselectAll", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::deselectAll<DefaultConv, Derived, Base, types::pure928>::value, Thiscall>(
				"EditorUI::deselectAll", 
				(void*)addresses::address928()
			);
		}

		if constexpr (compare::disableButton<Derived, Base, types::pure930>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::disableButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::disableButton<DefaultConv, Derived, Base, types::pure930>::value, Membercall>(
				"EditorUI::disableButton", 
				(void*)addresses::address930()
			);
		}

		if constexpr (compare::editObject<Derived, Base, types::pure932>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::editObject<DefaultConv, Derived, Base, types::pure932>::value, Membercall>(
				"EditorUI::editObject", 
				(void*)addresses::address932()
			);
		}

		if constexpr (compare::enableButton<Derived, Base, types::pure933>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::enableButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enableButton<DefaultConv, Derived, Base, types::pure933>::value, Membercall>(
				"EditorUI::enableButton", 
				(void*)addresses::address933()
			);
		}

		if constexpr (compare::getCreateBtn<Derived, Base, types::pure934>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getCreateBtn", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCreateBtn<DefaultConv, Derived, Base, types::pure934>::value, Membercall>(
				"EditorUI::getCreateBtn", 
				(void*)addresses::address934()
			);
		}

		if constexpr (compare::getGroupCenter<Derived, Base, types::pure935>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getGroupCenter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGroupCenter<DefaultConv, Derived, Base, types::pure935>::value, Membercall>(
				"EditorUI::getGroupCenter", 
				(void*)addresses::address935()
			);
		}

		if constexpr (compare::getSelectedObjects<Derived, Base, types::pure936>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getSelectedObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSelectedObjects<DefaultConv, Derived, Base, types::pure936>::value, Thiscall>(
				"EditorUI::getSelectedObjects", 
				(void*)addresses::address936()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure941>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure941>::value, Thiscall>(
				"EditorUI::keyDown", 
				(void*)addresses::address941()
			);
		}

		if constexpr (compare::moveObject<Derived, Base, types::pure942>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::moveObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveObject<DefaultConv, Derived, Base, types::pure942>::value, Membercall>(
				"EditorUI::moveObject", 
				(void*)addresses::address942()
			);
		}

		if constexpr (compare::onDuplicate<Derived, Base, types::pure943>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onDuplicate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onDuplicate<DefaultConv, Derived, Base, types::pure943>::value, Membercall>(
				"EditorUI::onDuplicate", 
				(void*)addresses::address943()
			);
		}

		if constexpr (compare::pasteObjects<Derived, Base, types::pure944>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::pasteObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pasteObjects<DefaultConv, Derived, Base, types::pure944>::value, Membercall>(
				"EditorUI::pasteObjects", 
				(void*)addresses::address944()
			);
		}

		if constexpr (compare::redoLastAction<Derived, Base, types::pure947>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::redoLastAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::redoLastAction<DefaultConv, Derived, Base, types::pure947>::value, Membercall>(
				"EditorUI::redoLastAction", 
				(void*)addresses::address947()
			);
		}

		if constexpr (compare::scaleObjects<Derived, Base, types::pure950>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::scaleObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scaleObjects<DefaultConv, Derived, Base, types::pure950>::value, Membercall>(
				"EditorUI::scaleObjects", 
				(void*)addresses::address950()
			);
		}

		if constexpr (compare::selectObjects<Derived, Base, types::pure951>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selectObjects<DefaultConv, Derived, Base, types::pure951>::value, Membercall>(
				"EditorUI::selectObjects", 
				(void*)addresses::address951()
			);
		}

		if constexpr (compare::undoLastAction<Derived, Base, types::pure953>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::undoLastAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::undoLastAction<DefaultConv, Derived, Base, types::pure953>::value, Membercall>(
				"EditorUI::undoLastAction", 
				(void*)addresses::address953()
			);
		}

		if constexpr (compare::updateButtons<Derived, Base, types::pure954>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateButtons", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateButtons<DefaultConv, Derived, Base, types::pure954>::value, Thiscall>(
				"EditorUI::updateButtons", 
				(void*)addresses::address954()
			);
		}

		if constexpr (compare::updateObjectInfoLabel<Derived, Base, types::pure955>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateObjectInfoLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateObjectInfoLabel<DefaultConv, Derived, Base, types::pure955>::value, Thiscall>(
				"EditorUI::updateObjectInfoLabel", 
				(void*)addresses::address955()
			);
		}

		if constexpr (compare::updateSlider<Derived, Base, types::pure956>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateSlider", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSlider<DefaultConv, Derived, Base, types::pure956>::value, Thiscall>(
				"EditorUI::updateSlider", 
				(void*)addresses::address956()
			);
		}

		if constexpr (compare::updateZoom<Derived, Base, types::pure957>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateZoom", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateZoom<DefaultConv, Derived, Base, types::pure957>::value, Membercall>(
				"EditorUI::updateZoom", 
				(void*)addresses::address957()
			);
		}

		if constexpr (compare::selectObject<Derived, Base, types::pure958>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selectObject<DefaultConv, Derived, Base, types::pure958>::value, Membercall>(
				"EditorUI::selectObject", 
				(void*)addresses::address958()
			);
		}

		if constexpr (compare::selectAll<Derived, Base, types::pure959>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectAll", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selectAll<DefaultConv, Derived, Base, types::pure959>::value, Thiscall>(
				"EditorUI::selectAll", 
				(void*)addresses::address959()
			);
		}

		if constexpr (compare::selectAllWithDirection<Derived, Base, types::pure960>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectAllWithDirection", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selectAllWithDirection<DefaultConv, Derived, Base, types::pure960>::value, Membercall>(
				"EditorUI::selectAllWithDirection", 
				(void*)addresses::address960()
			);
		}

		if constexpr (compare::getTouchPoint<Derived, Base, types::pure961>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getTouchPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTouchPoint<DefaultConv, Derived, Base, types::pure961>::value, Membercall>(
				"EditorUI::getTouchPoint", 
				(void*)addresses::address961()
			);
		}

		if constexpr (compare::onSelectBuildTab<Derived, Base, types::pure962>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onSelectBuildTab", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onSelectBuildTab<DefaultConv, Derived, Base, types::pure962>::value, Membercall>(
				"EditorUI::onSelectBuildTab", 
				(void*)addresses::address962()
			);
		}

		if constexpr (compare::onCreateButton<Derived, Base, types::pure963>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onCreateButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onCreateButton<DefaultConv, Derived, Base, types::pure963>::value, Membercall>(
				"EditorUI::onCreateButton", 
				(void*)addresses::address963()
			);
		}

		if constexpr (compare::getSpriteButton<Derived, Base, types::pure964>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getSpriteButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSpriteButton<DefaultConv, Derived, Base, types::pure964>::value, Membercall>(
				"EditorUI::getSpriteButton", 
				(void*)addresses::address964()
			);
		}

		if constexpr (compare::offsetForKey<Derived, Base, types::pure965>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::offsetForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::offsetForKey<DefaultConv, Derived, Base, types::pure965>::value, Membercall>(
				"EditorUI::offsetForKey", 
				(void*)addresses::address965()
			);
		}

		if constexpr (compare::updateDeleteMenu<Derived, Base, types::pure966>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateDeleteMenu", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDeleteMenu<DefaultConv, Derived, Base, types::pure966>::value, Thiscall>(
				"EditorUI::updateDeleteMenu", 
				(void*)addresses::address966()
			);
		}

		if constexpr (compare::updateCreateMenu<Derived, Base, types::pure967>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateCreateMenu", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCreateMenu<DefaultConv, Derived, Base, types::pure967>::value, Membercall>(
				"EditorUI::updateCreateMenu", 
				(void*)addresses::address967()
			);
		}

		if constexpr (compare::toggleMode<Derived, Base, types::pure968>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleMode<DefaultConv, Derived, Base, types::pure968>::value, Membercall>(
				"EditorUI::toggleMode", 
				(void*)addresses::address968()
			);
		}

		if constexpr (compare::zoomIn<Derived, Base, types::pure969>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::zoomIn", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::zoomIn<DefaultConv, Derived, Base, types::pure969>::value, Membercall>(
				"EditorUI::zoomIn", 
				(void*)addresses::address969()
			);
		}

		if constexpr (compare::zoomOut<Derived, Base, types::pure970>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::zoomOut", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::zoomOut<DefaultConv, Derived, Base, types::pure970>::value, Membercall>(
				"EditorUI::zoomOut", 
				(void*)addresses::address970()
			);
		}

		if constexpr (compare::rotateObjects<Derived, Base, types::pure971>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::rotateObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::rotateObjects<DefaultConv, Derived, Base, types::pure971>::value, Membercall>(
				"EditorUI::rotateObjects", 
				(void*)addresses::address971()
			);
		}

		if constexpr (compare::updateGridNodeSize<Derived, Base, types::pure972>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateGridNodeSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateGridNodeSize<DefaultConv, Derived, Base, types::pure972>::value, Thiscall>(
				"EditorUI::updateGridNodeSize", 
				(void*)addresses::address972()
			);
		}

		if constexpr (compare::updateSpecialUIElements<Derived, Base, types::pure973>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateSpecialUIElements", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSpecialUIElements<DefaultConv, Derived, Base, types::pure973>::value, Thiscall>(
				"EditorUI::updateSpecialUIElements", 
				(void*)addresses::address973()
			);
		}

		if constexpr (compare::constrainGameLayerPosition<Derived, Base, types::pure974>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::constrainGameLayerPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constrainGameLayerPosition<DefaultConv, Derived, Base, types::pure974>::value, Membercall>(
				"EditorUI::constrainGameLayerPosition", 
				(void*)addresses::address974()
			);
		}

		if constexpr (compare::moveGameLayer<Derived, Base, types::pure975>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::moveGameLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveGameLayer<DefaultConv, Derived, Base, types::pure975>::value, Membercall>(
				"EditorUI::moveGameLayer", 
				(void*)addresses::address975()
			);
		}

		if constexpr (compare::showUI<Derived, Base, types::pure976>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::showUI", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showUI<DefaultConv, Derived, Base, types::pure976>::value, Membercall>(
				"EditorUI::showUI", 
				(void*)addresses::address976()
			);
		}

		if constexpr (compare::editObject2<Derived, Base, types::pure977>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editObject2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::editObject2<DefaultConv, Derived, Base, types::pure977>::value, Membercall>(
				"EditorUI::editObject2", 
				(void*)addresses::address977()
			);
		}

		if constexpr (compare::editGroup<Derived, Base, types::pure978>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::editGroup<DefaultConv, Derived, Base, types::pure978>::value, Membercall>(
				"EditorUI::editGroup", 
				(void*)addresses::address978()
			);
		}

		if constexpr (compare::moveObjectCall<Derived, Base, types::pure979>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::moveObjectCall", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveObjectCall<DefaultConv, Derived, Base, types::pure979>::value, Membercall>(
				"EditorUI::moveObjectCall", 
				(void*)addresses::address979()
			);
		}

		if constexpr (compare::transformObjectCall<Derived, Base, types::pure980>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::transformObjectCall", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::transformObjectCall<DefaultConv, Derived, Base, types::pure980>::value, Membercall>(
				"EditorUI::transformObjectCall", 
				(void*)addresses::address980()
			);
		}

		if constexpr (compare::onDeleteSelected<Derived, Base, types::pure981>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onDeleteSelected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onDeleteSelected<DefaultConv, Derived, Base, types::pure981>::value, Membercall>(
				"EditorUI::onDeleteSelected", 
				(void*)addresses::address981()
			);
		}

		if constexpr (compare::onCopy<Derived, Base, types::pure982>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onCopy", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onCopy<DefaultConv, Derived, Base, types::pure982>::value, Membercall>(
				"EditorUI::onCopy", 
				(void*)addresses::address982()
			);
		}

		if constexpr (compare::onPaste<Derived, Base, types::pure983>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPaste", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPaste<DefaultConv, Derived, Base, types::pure983>::value, Membercall>(
				"EditorUI::onPaste", 
				(void*)addresses::address983()
			);
		}

		if constexpr (compare::toggleEnableRotate<Derived, Base, types::pure984>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleEnableRotate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleEnableRotate<DefaultConv, Derived, Base, types::pure984>::value, Membercall>(
				"EditorUI::toggleEnableRotate", 
				(void*)addresses::address984()
			);
		}

		if constexpr (compare::toggleFreeMove<Derived, Base, types::pure985>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleFreeMove", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleFreeMove<DefaultConv, Derived, Base, types::pure985>::value, Membercall>(
				"EditorUI::toggleFreeMove", 
				(void*)addresses::address985()
			);
		}

		if constexpr (compare::toggleSwipe<Derived, Base, types::pure986>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleSwipe", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleSwipe<DefaultConv, Derived, Base, types::pure986>::value, Membercall>(
				"EditorUI::toggleSwipe", 
				(void*)addresses::address986()
			);
		}

		if constexpr (compare::toggleSnap<Derived, Base, types::pure987>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleSnap", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleSnap<DefaultConv, Derived, Base, types::pure987>::value, Membercall>(
				"EditorUI::toggleSnap", 
				(void*)addresses::address987()
			);
		}

		if constexpr (compare::onPlayback<Derived, Base, types::pure988>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPlayback", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPlayback<DefaultConv, Derived, Base, types::pure988>::value, Membercall>(
				"EditorUI::onPlayback", 
				(void*)addresses::address988()
			);
		}

		if constexpr (compare::onPlaytest<Derived, Base, types::pure989>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPlaytest", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPlaytest<DefaultConv, Derived, Base, types::pure989>::value, Membercall>(
				"EditorUI::onPlaytest", 
				(void*)addresses::address989()
			);
		}

		if constexpr (compare::onStopPlaytest<Derived, Base, types::pure990>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onStopPlaytest", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onStopPlaytest<DefaultConv, Derived, Base, types::pure990>::value, Membercall>(
				"EditorUI::onStopPlaytest", 
				(void*)addresses::address990()
			);
		}

		if constexpr (compare::onGroupUp<Derived, Base, types::pure991>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGroupUp", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onGroupUp<DefaultConv, Derived, Base, types::pure991>::value, Membercall>(
				"EditorUI::onGroupUp", 
				(void*)addresses::address991()
			);
		}

		if constexpr (compare::onGroupDown<Derived, Base, types::pure992>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGroupDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onGroupDown<DefaultConv, Derived, Base, types::pure992>::value, Membercall>(
				"EditorUI::onGroupDown", 
				(void*)addresses::address992()
			);
		}

		if constexpr (compare::selectBuildTab<Derived, Base, types::pure993>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectBuildTab", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selectBuildTab<DefaultConv, Derived, Base, types::pure993>::value, Membercall>(
				"EditorUI::selectBuildTab", 
				(void*)addresses::address993()
			);
		}

		if constexpr (compare::onPause<Derived, Base, types::pure994>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPause", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPause<DefaultConv, Derived, Base, types::pure994>::value, Membercall>(
				"EditorUI::onPause", 
				(void*)addresses::address994()
			);
		}

		if constexpr (compare::onSettings<Derived, Base, types::pure995>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onSettings", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onSettings<DefaultConv, Derived, Base, types::pure995>::value, Membercall>(
				"EditorUI::onSettings", 
				(void*)addresses::address995()
			);
		}

		if constexpr (compare::activateRotationControl<Derived, Base, types::pure996>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::activateRotationControl", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activateRotationControl<DefaultConv, Derived, Base, types::pure996>::value, Membercall>(
				"EditorUI::activateRotationControl", 
				(void*)addresses::address996()
			);
		}

		if constexpr (compare::activateScaleControl<Derived, Base, types::pure997>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::activateScaleControl", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activateScaleControl<DefaultConv, Derived, Base, types::pure997>::value, Membercall>(
				"EditorUI::activateScaleControl", 
				(void*)addresses::address997()
			);
		}

		if constexpr (compare::dynamicGroupUpdate<Derived, Base, types::pure998>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::dynamicGroupUpdate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::dynamicGroupUpdate<DefaultConv, Derived, Base, types::pure998>::value, Membercall>(
				"EditorUI::dynamicGroupUpdate", 
				(void*)addresses::address998()
			);
		}

		if constexpr (compare::createRockOutline<Derived, Base, types::pure999>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::createRockOutline", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createRockOutline<DefaultConv, Derived, Base, types::pure999>::value, Thiscall>(
				"EditorUI::createRockOutline", 
				(void*)addresses::address999()
			);
		}

		if constexpr (compare::createRockEdges<Derived, Base, types::pure1000>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::createRockEdges", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createRockEdges<DefaultConv, Derived, Base, types::pure1000>::value, Thiscall>(
				"EditorUI::createRockEdges", 
				(void*)addresses::address1000()
			);
		}

		if constexpr (compare::createRockBase<Derived, Base, types::pure1001>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::createRockBase", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createRockBase<DefaultConv, Derived, Base, types::pure1001>::value, Thiscall>(
				"EditorUI::createRockBase", 
				(void*)addresses::address1001()
			);
		}

		if constexpr (compare::onCopyState<Derived, Base, types::pure1002>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onCopyState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onCopyState<DefaultConv, Derived, Base, types::pure1002>::value, Membercall>(
				"EditorUI::onCopyState", 
				(void*)addresses::address1002()
			);
		}

		if constexpr (compare::onPasteColor<Derived, Base, types::pure1003>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPasteColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPasteColor<DefaultConv, Derived, Base, types::pure1003>::value, Membercall>(
				"EditorUI::onPasteColor", 
				(void*)addresses::address1003()
			);
		}

		if constexpr (compare::onPasteState<Derived, Base, types::pure1004>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPasteState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPasteState<DefaultConv, Derived, Base, types::pure1004>::value, Membercall>(
				"EditorUI::onPasteState", 
				(void*)addresses::address1004()
			);
		}

		if constexpr (compare::onGroupSticky<Derived, Base, types::pure1005>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGroupSticky", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onGroupSticky<DefaultConv, Derived, Base, types::pure1005>::value, Membercall>(
				"EditorUI::onGroupSticky", 
				(void*)addresses::address1005()
			);
		}

		if constexpr (compare::onUngroupSticky<Derived, Base, types::pure1006>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onUngroupSticky", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onUngroupSticky<DefaultConv, Derived, Base, types::pure1006>::value, Membercall>(
				"EditorUI::onUngroupSticky", 
				(void*)addresses::address1006()
			);
		}

		if constexpr (compare::onGoToLayer<Derived, Base, types::pure1007>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGoToLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onGoToLayer<DefaultConv, Derived, Base, types::pure1007>::value, Membercall>(
				"EditorUI::onGoToLayer", 
				(void*)addresses::address1007()
			);
		}

		if constexpr (compare::onGoToBaseLayer<Derived, Base, types::pure1008>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGoToBaseLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onGoToBaseLayer<DefaultConv, Derived, Base, types::pure1008>::value, Membercall>(
				"EditorUI::onGoToBaseLayer", 
				(void*)addresses::address1008()
			);
		}

		if constexpr (compare::editColor<Derived, Base, types::pure1009>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::editColor<DefaultConv, Derived, Base, types::pure1009>::value, Membercall>(
				"EditorUI::editColor", 
				(void*)addresses::address1009()
			);
		}

		if constexpr (compare::alignObjects<Derived, Base, types::pure1010>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::alignObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::alignObjects<DefaultConv, Derived, Base, types::pure1010>::value, Membercall>(
				"EditorUI::alignObjects", 
				(void*)addresses::address1010()
			);
		}

		if constexpr (compare::keyUp<Derived, Base, types::pure1011>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::keyUp", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyUp<DefaultConv, Derived, Base, types::pure1011>::value, Thiscall>(
				"EditorUI::keyUp", 
				(void*)addresses::address1011()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, EffectGameObject> : ModifyBase<Modify<Derived, EffectGameObject>> {
	using ModifyBase<Modify<Derived, EffectGameObject>>::ModifyBase;
	using Base = EffectGameObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1013>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EffectGameObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1013>::value, Optcall>(
				"EffectGameObject::create", 
				(void*)addresses::address1013()
			);
		}

		if constexpr (compare::triggerObject<Derived, Base, types::pure1015>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EffectGameObject::triggerObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::triggerObject<DefaultConv, Derived, Base, types::pure1015>::value, Thiscall>(
				"EffectGameObject::triggerObject", 
				(void*)addresses::address1015()
			);
		}

		if constexpr (compare::getSaveString<Derived, Base, types::pure1016>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EffectGameObject::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSaveString<DefaultConv, Derived, Base, types::pure1016>::value, Thiscall>(
				"EffectGameObject::getSaveString", 
				(void*)addresses::address1016()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJRotationControl> : ModifyBase<Modify<Derived, GJRotationControl>> {
	using ModifyBase<Modify<Derived, GJRotationControl>>::ModifyBase;
	using Base = GJRotationControl;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::updateSliderPosition<Derived, Base, types::pure1274>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRotationControl::updateSliderPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSliderPosition<DefaultConv, Derived, Base, types::pure1274>::value, Membercall>(
				"GJRotationControl::updateSliderPosition", 
				(void*)addresses::address1274()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, EndPortalObject> : ModifyBase<Modify<Derived, EndPortalObject>> {
	using ModifyBase<Modify<Derived, EndPortalObject>>::ModifyBase;
	using Base = EndPortalObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LevelDeleteDelegate> : ModifyBase<Modify<Derived, LevelDeleteDelegate>> {
	using ModifyBase<Modify<Derived, LevelDeleteDelegate>>::ModifyBase;
	using Base = LevelDeleteDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GManager> : ModifyBase<Modify<Derived, GManager>> {
	using ModifyBase<Modify<Derived, GManager>>::ModifyBase;
	using Base = GManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::save<Derived, Base, types::pure1301>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GManager::save", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::save<DefaultConv, Derived, Base, types::pure1301>::value, Thiscall>(
				"GManager::save", 
				(void*)addresses::address1301()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ExtendedLayer> : ModifyBase<Modify<Derived, ExtendedLayer>> {
	using ModifyBase<Modify<Derived, ExtendedLayer>>::ModifyBase;
	using Base = ExtendedLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, FLAlertLayer> : ModifyBase<Modify<Derived, FLAlertLayer>> {
	using ModifyBase<Modify<Derived, FLAlertLayer>>::ModifyBase;
	using Base = FLAlertLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::onEnter<Derived, Base, types::pure1021>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure1021>::value, Thiscall>(
				"FLAlertLayer::onEnter", 
				(void*)addresses::address1021()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure1022>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure1022>::value, Thiscall>(
				"FLAlertLayer::ccTouchBegan", 
				(void*)addresses::address1022()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure1023>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure1023>::value, Thiscall>(
				"FLAlertLayer::ccTouchMoved", 
				(void*)addresses::address1023()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure1024>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure1024>::value, Thiscall>(
				"FLAlertLayer::ccTouchEnded", 
				(void*)addresses::address1024()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure1025>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure1025>::value, Thiscall>(
				"FLAlertLayer::ccTouchCancelled", 
				(void*)addresses::address1025()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure1026>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure1026>::value, Thiscall>(
				"FLAlertLayer::registerWithTouchDispatcher", 
				(void*)addresses::address1026()
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure1027>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure1027>::value, Thiscall>(
				"FLAlertLayer::keyBackClicked", 
				(void*)addresses::address1027()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure1028>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure1028>::value, Thiscall>(
				"FLAlertLayer::keyDown", 
				(void*)addresses::address1028()
			);
		}

		if constexpr (compare::show<Derived, Base, types::pure1029>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::show", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::show<DefaultConv, Derived, Base, types::pure1029>::value, Thiscall>(
				"FLAlertLayer::show", 
				(void*)addresses::address1029()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1031>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1031>::value, Optcall>(
				"FLAlertLayer::create", 
				(void*)addresses::address1031()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1032>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1032>::value, Optcall>(
				"FLAlertLayer::create", 
				(void*)addresses::address1032()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1033>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1033>::value, Optcall>(
				"FLAlertLayer::create", 
				(void*)addresses::address1033()
			);
		}

		if constexpr (compare::onBtn1<Derived, Base, types::pure1034>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::onBtn1", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onBtn1<DefaultConv, Derived, Base, types::pure1034>::value, Membercall>(
				"FLAlertLayer::onBtn1", 
				(void*)addresses::address1034()
			);
		}

		if constexpr (compare::onBtn2<Derived, Base, types::pure1035>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::onBtn2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onBtn2<DefaultConv, Derived, Base, types::pure1035>::value, Membercall>(
				"FLAlertLayer::onBtn2", 
				(void*)addresses::address1035()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, FLAlertLayerProtocol> : ModifyBase<Modify<Derived, FLAlertLayerProtocol>> {
	using ModifyBase<Modify<Derived, FLAlertLayerProtocol>>::ModifyBase;
	using Base = FLAlertLayerProtocol;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, FMODAudioEngine> : ModifyBase<Modify<Derived, FMODAudioEngine>> {
	using ModifyBase<Modify<Derived, FMODAudioEngine>>::ModifyBase;
	using Base = FMODAudioEngine;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::sharedEngine<Derived, Base, types::pure1037>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::sharedEngine", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedEngine<DefaultConv, Derived, Base, types::pure1037>::value, Cdecl>(
				"FMODAudioEngine::sharedEngine", 
				(void*)addresses::address1037()
			);
		}

		if constexpr (compare::preloadEffect<Derived, Base, types::pure1038>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::preloadEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::preloadEffect<DefaultConv, Derived, Base, types::pure1038>::value, Membercall>(
				"FMODAudioEngine::preloadEffect", 
				(void*)addresses::address1038()
			);
		}

		if constexpr (compare::isBackgroundMusicPlaying<Derived, Base, types::pure1039>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::isBackgroundMusicPlaying", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isBackgroundMusicPlaying<DefaultConv, Derived, Base, types::pure1039>::value, Thiscall>(
				"FMODAudioEngine::isBackgroundMusicPlaying", 
				(void*)addresses::address1039()
			);
		}

		if constexpr (compare::isBackgroundMusicPlaying<Derived, Base, types::pure1040>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::isBackgroundMusicPlaying", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isBackgroundMusicPlaying<DefaultConv, Derived, Base, types::pure1040>::value, Membercall>(
				"FMODAudioEngine::isBackgroundMusicPlaying", 
				(void*)addresses::address1040()
			);
		}

		if constexpr (compare::playBackgroundMusic<Derived, Base, types::pure1041>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::playBackgroundMusic", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playBackgroundMusic<DefaultConv, Derived, Base, types::pure1041>::value, Membercall>(
				"FMODAudioEngine::playBackgroundMusic", 
				(void*)addresses::address1041()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LeaderboardsLayer> : ModifyBase<Modify<Derived, LeaderboardsLayer>> {
	using ModifyBase<Modify<Derived, LeaderboardsLayer>>::ModifyBase;
	using Base = LeaderboardsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1559>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LeaderboardsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1559>::value, Optcall>(
				"LeaderboardsLayer::create", 
				(void*)addresses::address1559()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, FMODSound> : ModifyBase<Modify<Derived, FMODSound>> {
	using ModifyBase<Modify<Derived, FMODSound>>::ModifyBase;
	using Base = FMODSound;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1042>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODSound::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1042>::value, Optcall>(
				"FMODSound::create", 
				(void*)addresses::address1042()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJAccountBackupDelegate> : ModifyBase<Modify<Derived, GJAccountBackupDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountBackupDelegate>>::ModifyBase;
	using Base = GJAccountBackupDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJAccountDelegate> : ModifyBase<Modify<Derived, GJAccountDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountDelegate>>::ModifyBase;
	using Base = GJAccountDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJAccountLoginDelegate> : ModifyBase<Modify<Derived, GJAccountLoginDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountLoginDelegate>>::ModifyBase;
	using Base = GJAccountLoginDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJAccountManager> : ModifyBase<Modify<Derived, GJAccountManager>> {
	using ModifyBase<Modify<Derived, GJAccountManager>>::ModifyBase;
	using Base = GJAccountManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::sharedState<Derived, Base, types::pure1048>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJAccountManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1048>::value, Cdecl>(
				"GJAccountManager::sharedState", 
				(void*)addresses::address1048()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJAccountSyncDelegate> : ModifyBase<Modify<Derived, GJAccountSyncDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountSyncDelegate>>::ModifyBase;
	using Base = GJAccountSyncDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJBaseGameLayer> : ModifyBase<Modify<Derived, GJBaseGameLayer>> {
	using ModifyBase<Modify<Derived, GJBaseGameLayer>>::ModifyBase;
	using Base = GJBaseGameLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::toggleGroupTriggered<Derived, Base, types::pure1059>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::toggleGroupTriggered", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleGroupTriggered<DefaultConv, Derived, Base, types::pure1059>::value, Thiscall>(
				"GJBaseGameLayer::toggleGroupTriggered", 
				(void*)addresses::address1059()
			);
		}

		if constexpr (compare::spawnGroup<Derived, Base, types::pure1060>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::spawnGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnGroup<DefaultConv, Derived, Base, types::pure1060>::value, Thiscall>(
				"GJBaseGameLayer::spawnGroup", 
				(void*)addresses::address1060()
			);
		}

		if constexpr (compare::getCapacityString<Derived, Base, types::pure1076>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getCapacityString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCapacityString<DefaultConv, Derived, Base, types::pure1076>::value, Thiscall>(
				"GJBaseGameLayer::getCapacityString", 
				(void*)addresses::address1076()
			);
		}

		if constexpr (compare::pushButton<Derived, Base, types::pure1097>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::pushButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pushButton<DefaultConv, Derived, Base, types::pure1097>::value, Membercall>(
				"GJBaseGameLayer::pushButton", 
				(void*)addresses::address1097()
			);
		}

		if constexpr (compare::releaseButton<Derived, Base, types::pure1100>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::releaseButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::releaseButton<DefaultConv, Derived, Base, types::pure1100>::value, Membercall>(
				"GJBaseGameLayer::releaseButton", 
				(void*)addresses::address1100()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJColorSetupLayer> : ModifyBase<Modify<Derived, GJColorSetupLayer>> {
	using ModifyBase<Modify<Derived, GJColorSetupLayer>>::ModifyBase;
	using Base = GJColorSetupLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJComment> : ModifyBase<Modify<Derived, GJComment>> {
	using ModifyBase<Modify<Derived, GJComment>>::ModifyBase;
	using Base = GJComment;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1125>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJComment::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1125>::value, Optcall>(
				"GJComment::create", 
				(void*)addresses::address1125()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJCommentListLayer> : ModifyBase<Modify<Derived, GJCommentListLayer>> {
	using ModifyBase<Modify<Derived, GJCommentListLayer>>::ModifyBase;
	using Base = GJCommentListLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LikeItemDelegate> : ModifyBase<Modify<Derived, LikeItemDelegate>> {
	using ModifyBase<Modify<Derived, LikeItemDelegate>>::ModifyBase;
	using Base = LikeItemDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJDropDownLayer> : ModifyBase<Modify<Derived, GJDropDownLayer>> {
	using ModifyBase<Modify<Derived, GJDropDownLayer>>::ModifyBase;
	using Base = GJDropDownLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::enterLayer<Derived, Base, types::pure1129>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::enterLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enterLayer<DefaultConv, Derived, Base, types::pure1129>::value, Thiscall>(
				"GJDropDownLayer::enterLayer", 
				(void*)addresses::address1129()
			);
		}

		if constexpr (compare::exitLayer<Derived, Base, types::pure1130>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::exitLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::exitLayer<DefaultConv, Derived, Base, types::pure1130>::value, Thiscall>(
				"GJDropDownLayer::exitLayer", 
				(void*)addresses::address1130()
			);
		}

		if constexpr (compare::showLayer<Derived, Base, types::pure1131>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::showLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showLayer<DefaultConv, Derived, Base, types::pure1131>::value, Thiscall>(
				"GJDropDownLayer::showLayer", 
				(void*)addresses::address1131()
			);
		}

		if constexpr (compare::hideLayer<Derived, Base, types::pure1132>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::hideLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hideLayer<DefaultConv, Derived, Base, types::pure1132>::value, Thiscall>(
				"GJDropDownLayer::hideLayer", 
				(void*)addresses::address1132()
			);
		}

		if constexpr (compare::layerVisible<Derived, Base, types::pure1133>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::layerVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::layerVisible<DefaultConv, Derived, Base, types::pure1133>::value, Thiscall>(
				"GJDropDownLayer::layerVisible", 
				(void*)addresses::address1133()
			);
		}

		if constexpr (compare::layerHidden<Derived, Base, types::pure1134>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::layerHidden", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::layerHidden<DefaultConv, Derived, Base, types::pure1134>::value, Thiscall>(
				"GJDropDownLayer::layerHidden", 
				(void*)addresses::address1134()
			);
		}

		if constexpr (compare::disableUI<Derived, Base, types::pure1136>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::disableUI", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::disableUI<DefaultConv, Derived, Base, types::pure1136>::value, Thiscall>(
				"GJDropDownLayer::disableUI", 
				(void*)addresses::address1136()
			);
		}

		if constexpr (compare::enableUI<Derived, Base, types::pure1137>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::enableUI", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enableUI<DefaultConv, Derived, Base, types::pure1137>::value, Thiscall>(
				"GJDropDownLayer::enableUI", 
				(void*)addresses::address1137()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure1143>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure1143>::value, Thiscall>(
				"GJDropDownLayer::draw", 
				(void*)addresses::address1143()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1144>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1144>::value, Membercall>(
				"GJDropDownLayer::init", 
				(void*)addresses::address1144()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure1145>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure1145>::value, Thiscall>(
				"GJDropDownLayer::registerWithTouchDispatcher", 
				(void*)addresses::address1145()
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure1146>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure1146>::value, Thiscall>(
				"GJDropDownLayer::keyBackClicked", 
				(void*)addresses::address1146()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJDropDownLayerDelegate> : ModifyBase<Modify<Derived, GJDropDownLayerDelegate>> {
	using ModifyBase<Modify<Derived, GJDropDownLayerDelegate>>::ModifyBase;
	using Base = GJDropDownLayerDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJEffectManager> : ModifyBase<Modify<Derived, GJEffectManager>> {
	using ModifyBase<Modify<Derived, GJEffectManager>>::ModifyBase;
	using Base = GJEffectManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::getColorAction<Derived, Base, types::pure1170>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getColorAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getColorAction<DefaultConv, Derived, Base, types::pure1170>::value, Membercall>(
				"GJEffectManager::getColorAction", 
				(void*)addresses::address1170()
			);
		}

		if constexpr (compare::updateOpacityEffects<Derived, Base, types::pure1226>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateOpacityEffects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateOpacityEffects<DefaultConv, Derived, Base, types::pure1226>::value, Membercall>(
				"GJEffectManager::updateOpacityEffects", 
				(void*)addresses::address1226()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJGameLevel> : ModifyBase<Modify<Derived, GJGameLevel>> {
	using ModifyBase<Modify<Derived, GJGameLevel>>::ModifyBase;
	using Base = GJGameLevel;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1237>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1237>::value, Cdecl>(
				"GJGameLevel::create", 
				(void*)addresses::address1237()
			);
		}

		if constexpr (compare::getAudioFileName<Derived, Base, types::pure1238>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getAudioFileName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAudioFileName<DefaultConv, Derived, Base, types::pure1238>::value, Thiscall>(
				"GJGameLevel::getAudioFileName", 
				(void*)addresses::address1238()
			);
		}

		if constexpr (compare::levelWasAltered<Derived, Base, types::pure1242>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::levelWasAltered", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::levelWasAltered<DefaultConv, Derived, Base, types::pure1242>::value, Thiscall>(
				"GJGameLevel::levelWasAltered", 
				(void*)addresses::address1242()
			);
		}

		if constexpr (compare::dataLoaded<Derived, Base, types::pure1244>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::dataLoaded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::dataLoaded<DefaultConv, Derived, Base, types::pure1244>::value, Membercall>(
				"GJGameLevel::dataLoaded", 
				(void*)addresses::address1244()
			);
		}

		if constexpr (compare::getAverageDifficulty<Derived, Base, types::pure1245>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getAverageDifficulty", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAverageDifficulty<DefaultConv, Derived, Base, types::pure1245>::value, Thiscall>(
				"GJGameLevel::getAverageDifficulty", 
				(void*)addresses::address1245()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJGarageLayer> : ModifyBase<Modify<Derived, GJGarageLayer>> {
	using ModifyBase<Modify<Derived, GJGarageLayer>>::ModifyBase;
	using Base = GJGarageLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::onPlayerColor1<Derived, Base, types::pure1246>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onPlayerColor1", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPlayerColor1<DefaultConv, Derived, Base, types::pure1246>::value, Membercall>(
				"GJGarageLayer::onPlayerColor1", 
				(void*)addresses::address1246()
			);
		}

		if constexpr (compare::onPlayerColor2<Derived, Base, types::pure1247>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onPlayerColor2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPlayerColor2<DefaultConv, Derived, Base, types::pure1247>::value, Membercall>(
				"GJGarageLayer::onPlayerColor2", 
				(void*)addresses::address1247()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1248>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1248>::value, Cdecl>(
				"GJGarageLayer::create", 
				(void*)addresses::address1248()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1249>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1249>::value, Thiscall>(
				"GJGarageLayer::init", 
				(void*)addresses::address1249()
			);
		}

		if constexpr (compare::onSelectTab<Derived, Base, types::pure1250>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onSelectTab", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onSelectTab<DefaultConv, Derived, Base, types::pure1250>::value, Membercall>(
				"GJGarageLayer::onSelectTab", 
				(void*)addresses::address1250()
			);
		}

		if constexpr (compare::onPlayerIcon<Derived, Base, types::pure1251>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onPlayerIcon", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPlayerIcon<DefaultConv, Derived, Base, types::pure1251>::value, Membercall>(
				"GJGarageLayer::onPlayerIcon", 
				(void*)addresses::address1251()
			);
		}

		if constexpr (compare::onShipIcon<Derived, Base, types::pure1252>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onShipIcon", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onShipIcon<DefaultConv, Derived, Base, types::pure1252>::value, Membercall>(
				"GJGarageLayer::onShipIcon", 
				(void*)addresses::address1252()
			);
		}

		if constexpr (compare::onBallIcon<Derived, Base, types::pure1253>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onBallIcon", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onBallIcon<DefaultConv, Derived, Base, types::pure1253>::value, Membercall>(
				"GJGarageLayer::onBallIcon", 
				(void*)addresses::address1253()
			);
		}

		if constexpr (compare::onBirdIcon<Derived, Base, types::pure1254>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onBirdIcon", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onBirdIcon<DefaultConv, Derived, Base, types::pure1254>::value, Membercall>(
				"GJGarageLayer::onBirdIcon", 
				(void*)addresses::address1254()
			);
		}

		if constexpr (compare::onDartIcon<Derived, Base, types::pure1255>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onDartIcon", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onDartIcon<DefaultConv, Derived, Base, types::pure1255>::value, Membercall>(
				"GJGarageLayer::onDartIcon", 
				(void*)addresses::address1255()
			);
		}

		if constexpr (compare::onRobotIcon<Derived, Base, types::pure1256>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onRobotIcon", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onRobotIcon<DefaultConv, Derived, Base, types::pure1256>::value, Membercall>(
				"GJGarageLayer::onRobotIcon", 
				(void*)addresses::address1256()
			);
		}

		if constexpr (compare::onSpiderIcon<Derived, Base, types::pure1257>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onSpiderIcon", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onSpiderIcon<DefaultConv, Derived, Base, types::pure1257>::value, Membercall>(
				"GJGarageLayer::onSpiderIcon", 
				(void*)addresses::address1257()
			);
		}

		if constexpr (compare::onShards<Derived, Base, types::pure1258>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onShards", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onShards<DefaultConv, Derived, Base, types::pure1258>::value, Membercall>(
				"GJGarageLayer::onShards", 
				(void*)addresses::address1258()
			);
		}

		if constexpr (compare::onBack<Derived, Base, types::pure1259>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onBack", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onBack<DefaultConv, Derived, Base, types::pure1259>::value, Membercall>(
				"GJGarageLayer::onBack", 
				(void*)addresses::address1259()
			);
		}

		if constexpr (compare::onShop<Derived, Base, types::pure1260>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onShop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onShop<DefaultConv, Derived, Base, types::pure1260>::value, Membercall>(
				"GJGarageLayer::onShop", 
				(void*)addresses::address1260()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJGroundLayer> : ModifyBase<Modify<Derived, GJGroundLayer>> {
	using ModifyBase<Modify<Derived, GJGroundLayer>>::ModifyBase;
	using Base = GJGroundLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::updateGroundWidth<Derived, Base, types::pure1261>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGroundLayer::updateGroundWidth", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateGroundWidth<DefaultConv, Derived, Base, types::pure1261>::value, Thiscall>(
				"GJGroundLayer::updateGroundWidth", 
				(void*)addresses::address1261()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJItemIcon> : ModifyBase<Modify<Derived, GJItemIcon>> {
	using ModifyBase<Modify<Derived, GJItemIcon>>::ModifyBase;
	using Base = GJItemIcon;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1263>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJItemIcon::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1263>::value, Optcall>(
				"GJItemIcon::create", 
				(void*)addresses::address1263()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJListLayer> : ModifyBase<Modify<Derived, GJListLayer>> {
	using ModifyBase<Modify<Derived, GJListLayer>>::ModifyBase;
	using Base = GJListLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1265>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJListLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1265>::value, Optcall>(
				"GJListLayer::create", 
				(void*)addresses::address1265()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJMapPack> : ModifyBase<Modify<Derived, GJMapPack>> {
	using ModifyBase<Modify<Derived, GJMapPack>>::ModifyBase;
	using Base = GJMapPack;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetIDPopup> : ModifyBase<Modify<Derived, SetIDPopup>> {
	using ModifyBase<Modify<Derived, SetIDPopup>>::ModifyBase;
	using Base = SetIDPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LevelBrowserLayer> : ModifyBase<Modify<Derived, LevelBrowserLayer>> {
	using ModifyBase<Modify<Derived, LevelBrowserLayer>>::ModifyBase;
	using Base = LevelBrowserLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure1561>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelBrowserLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1561>::value, Membercall>(
				"LevelBrowserLayer::init", 
				(void*)addresses::address1561()
			);
		}

		if constexpr (compare::setupLevelBrowser<Derived, Base, types::pure1562>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelBrowserLayer::setupLevelBrowser", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupLevelBrowser<DefaultConv, Derived, Base, types::pure1562>::value, Membercall>(
				"LevelBrowserLayer::setupLevelBrowser", 
				(void*)addresses::address1562()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1563>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelBrowserLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1563>::value, Optcall>(
				"LevelBrowserLayer::create", 
				(void*)addresses::address1563()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJRewardObject> : ModifyBase<Modify<Derived, GJRewardObject>> {
	using ModifyBase<Modify<Derived, GJRewardObject>>::ModifyBase;
	using Base = GJRewardObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJRobotSprite> : ModifyBase<Modify<Derived, GJRobotSprite>> {
	using ModifyBase<Modify<Derived, GJRobotSprite>>::ModifyBase;
	using Base = GJRobotSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, RateLevelDelegate> : ModifyBase<Modify<Derived, RateLevelDelegate>> {
	using ModifyBase<Modify<Derived, RateLevelDelegate>>::ModifyBase;
	using Base = RateLevelDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJRotationControlDelegate> : ModifyBase<Modify<Derived, GJRotationControlDelegate>> {
	using ModifyBase<Modify<Derived, GJRotationControlDelegate>>::ModifyBase;
	using Base = GJRotationControlDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJScaleControl> : ModifyBase<Modify<Derived, GJScaleControl>> {
	using ModifyBase<Modify<Derived, GJScaleControl>>::ModifyBase;
	using Base = GJScaleControl;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::updateLabel<Derived, Base, types::pure1275>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJScaleControl::updateLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateLabel<DefaultConv, Derived, Base, types::pure1275>::value, Membercall>(
				"GJScaleControl::updateLabel", 
				(void*)addresses::address1275()
			);
		}

		if constexpr (compare::loadValues<Derived, Base, types::pure1276>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJScaleControl::loadValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadValues<DefaultConv, Derived, Base, types::pure1276>::value, Membercall>(
				"GJScaleControl::loadValues", 
				(void*)addresses::address1276()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJScaleControlDelegate> : ModifyBase<Modify<Derived, GJScaleControlDelegate>> {
	using ModifyBase<Modify<Derived, GJScaleControlDelegate>>::ModifyBase;
	using Base = GJScaleControlDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetIDPopupDelegate> : ModifyBase<Modify<Derived, SetIDPopupDelegate>> {
	using ModifyBase<Modify<Derived, SetIDPopupDelegate>>::ModifyBase;
	using Base = SetIDPopupDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJSearchObject> : ModifyBase<Modify<Derived, GJSearchObject>> {
	using ModifyBase<Modify<Derived, GJSearchObject>>::ModifyBase;
	using Base = GJSearchObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1278>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSearchObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1278>::value, Optcall>(
				"GJSearchObject::create", 
				(void*)addresses::address1278()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJSpecialColorSelectDelegate> : ModifyBase<Modify<Derived, GJSpecialColorSelectDelegate>> {
	using ModifyBase<Modify<Derived, GJSpecialColorSelectDelegate>>::ModifyBase;
	using Base = GJSpecialColorSelectDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJSpiderSprite> : ModifyBase<Modify<Derived, GJSpiderSprite>> {
	using ModifyBase<Modify<Derived, GJSpiderSprite>>::ModifyBase;
	using Base = GJSpiderSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJSpriteColor> : ModifyBase<Modify<Derived, GJSpriteColor>> {
	using ModifyBase<Modify<Derived, GJSpriteColor>>::ModifyBase;
	using Base = GJSpriteColor;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GameManager> : ModifyBase<Modify<Derived, GameManager>> {
	using ModifyBase<Modify<Derived, GameManager>>::ModifyBase;
	using Base = GameManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::colorForIdx<Derived, Base, types::pure1345>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::colorForIdx", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorForIdx<DefaultConv, Derived, Base, types::pure1345>::value, Membercall>(
				"GameManager::colorForIdx", 
				(void*)addresses::address1345()
			);
		}

		if constexpr (compare::fadeInMusic<Derived, Base, types::pure1348>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::fadeInMusic", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fadeInMusic<DefaultConv, Derived, Base, types::pure1348>::value, Membercall>(
				"GameManager::fadeInMusic", 
				(void*)addresses::address1348()
			);
		}

		if constexpr (compare::getGameVariable<Derived, Base, types::pure1351>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGameVariable<DefaultConv, Derived, Base, types::pure1351>::value, Membercall>(
				"GameManager::getGameVariable", 
				(void*)addresses::address1351()
			);
		}

		if constexpr (compare::getIntGameVariable<Derived, Base, types::pure1352>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getIntGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getIntGameVariable<DefaultConv, Derived, Base, types::pure1352>::value, Membercall>(
				"GameManager::getIntGameVariable", 
				(void*)addresses::address1352()
			);
		}

		if constexpr (compare::getUGV<Derived, Base, types::pure1353>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getUGV", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getUGV<DefaultConv, Derived, Base, types::pure1353>::value, Membercall>(
				"GameManager::getUGV", 
				(void*)addresses::address1353()
			);
		}

		if constexpr (compare::reloadAll<Derived, Base, types::pure1356>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reloadAll", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reloadAll<DefaultConv, Derived, Base, types::pure1356>::value, Membercall>(
				"GameManager::reloadAll", 
				(void*)addresses::address1356()
			);
		}

		if constexpr (compare::reloadAllStep2<Derived, Base, types::pure1357>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reloadAllStep2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reloadAllStep2<DefaultConv, Derived, Base, types::pure1357>::value, Thiscall>(
				"GameManager::reloadAllStep2", 
				(void*)addresses::address1357()
			);
		}

		if constexpr (compare::setGameVariable<Derived, Base, types::pure1360>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::setGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setGameVariable<DefaultConv, Derived, Base, types::pure1360>::value, Membercall>(
				"GameManager::setGameVariable", 
				(void*)addresses::address1360()
			);
		}

		if constexpr (compare::setIntGameVariable<Derived, Base, types::pure1361>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::setIntGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setIntGameVariable<DefaultConv, Derived, Base, types::pure1361>::value, Membercall>(
				"GameManager::setIntGameVariable", 
				(void*)addresses::address1361()
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1363>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1363>::value, Cdecl>(
				"GameManager::sharedState", 
				(void*)addresses::address1363()
			);
		}

		if constexpr (compare::isColorUnlocked<Derived, Base, types::pure1370>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::isColorUnlocked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isColorUnlocked<DefaultConv, Derived, Base, types::pure1370>::value, Membercall>(
				"GameManager::isColorUnlocked", 
				(void*)addresses::address1370()
			);
		}

		if constexpr (compare::isIconUnlocked<Derived, Base, types::pure1371>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::isIconUnlocked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isIconUnlocked<DefaultConv, Derived, Base, types::pure1371>::value, Membercall>(
				"GameManager::isIconUnlocked", 
				(void*)addresses::address1371()
			);
		}

		if constexpr (compare::toggleGameVariable<Derived, Base, types::pure1372>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::toggleGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleGameVariable<DefaultConv, Derived, Base, types::pure1372>::value, Membercall>(
				"GameManager::toggleGameVariable", 
				(void*)addresses::address1372()
			);
		}

		if constexpr (compare::returnToLastScene<Derived, Base, types::pure1373>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::returnToLastScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::returnToLastScene<DefaultConv, Derived, Base, types::pure1373>::value, Optcall>(
				"GameManager::returnToLastScene", 
				(void*)addresses::address1373()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GameObject> : ModifyBase<Modify<Derived, GameObject>> {
	using ModifyBase<Modify<Derived, GameObject>>::ModifyBase;
	using Base = GameObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::setScaleX<Derived, Base, types::pure1387>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleX<DefaultConv, Derived, Base, types::pure1387>::value, Thiscall>(
				"GameObject::setScaleX", 
				(void*)addresses::address1387()
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure1388>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleY<DefaultConv, Derived, Base, types::pure1388>::value, Thiscall>(
				"GameObject::setScaleY", 
				(void*)addresses::address1388()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure1389>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure1389>::value, Thiscall>(
				"GameObject::setScale", 
				(void*)addresses::address1389()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure1390>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure1390>::value, Thiscall>(
				"GameObject::setPosition", 
				(void*)addresses::address1390()
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure1391>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVisible<DefaultConv, Derived, Base, types::pure1391>::value, Thiscall>(
				"GameObject::setVisible", 
				(void*)addresses::address1391()
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure1392>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotation<DefaultConv, Derived, Base, types::pure1392>::value, Thiscall>(
				"GameObject::setRotation", 
				(void*)addresses::address1392()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure1393>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure1393>::value, Thiscall>(
				"GameObject::setOpacity", 
				(void*)addresses::address1393()
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure1394>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithTexture<DefaultConv, Derived, Base, types::pure1394>::value, Thiscall>(
				"GameObject::initWithTexture", 
				(void*)addresses::address1394()
			);
		}

		if constexpr (compare::setChildColor<Derived, Base, types::pure1395>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setChildColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setChildColor<DefaultConv, Derived, Base, types::pure1395>::value, Thiscall>(
				"GameObject::setChildColor", 
				(void*)addresses::address1395()
			);
		}

		if constexpr (compare::setupCustomSprites<Derived, Base, types::pure1399>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setupCustomSprites", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupCustomSprites<DefaultConv, Derived, Base, types::pure1399>::value, Thiscall>(
				"GameObject::setupCustomSprites", 
				(void*)addresses::address1399()
			);
		}

		if constexpr (compare::addMainSpriteToParent<Derived, Base, types::pure1400>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addMainSpriteToParent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addMainSpriteToParent<DefaultConv, Derived, Base, types::pure1400>::value, Thiscall>(
				"GameObject::addMainSpriteToParent", 
				(void*)addresses::address1400()
			);
		}

		if constexpr (compare::resetObject<Derived, Base, types::pure1401>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::resetObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetObject<DefaultConv, Derived, Base, types::pure1401>::value, Thiscall>(
				"GameObject::resetObject", 
				(void*)addresses::address1401()
			);
		}

		if constexpr (compare::activateObject<Derived, Base, types::pure1403>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::activateObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activateObject<DefaultConv, Derived, Base, types::pure1403>::value, Thiscall>(
				"GameObject::activateObject", 
				(void*)addresses::address1403()
			);
		}

		if constexpr (compare::deactivateObject<Derived, Base, types::pure1404>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::deactivateObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::deactivateObject<DefaultConv, Derived, Base, types::pure1404>::value, Thiscall>(
				"GameObject::deactivateObject", 
				(void*)addresses::address1404()
			);
		}

		if constexpr (compare::getObjectRect<Derived, Base, types::pure1405>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectRect<DefaultConv, Derived, Base, types::pure1405>::value, Thiscall>(
				"GameObject::getObjectRect", 
				(void*)addresses::address1405()
			);
		}

		if constexpr (compare::getObjectRect<Derived, Base, types::pure1406>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectRect<DefaultConv, Derived, Base, types::pure1406>::value, Thiscall>(
				"GameObject::getObjectRect", 
				(void*)addresses::address1406()
			);
		}

		if constexpr (compare::getObjectRect2<Derived, Base, types::pure1407>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRect2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectRect2<DefaultConv, Derived, Base, types::pure1407>::value, Thiscall>(
				"GameObject::getObjectRect2", 
				(void*)addresses::address1407()
			);
		}

		if constexpr (compare::getObjectTextureRect<Derived, Base, types::pure1408>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectTextureRect<DefaultConv, Derived, Base, types::pure1408>::value, Thiscall>(
				"GameObject::getObjectTextureRect", 
				(void*)addresses::address1408()
			);
		}

		if constexpr (compare::getRealPosition<Derived, Base, types::pure1409>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getRealPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRealPosition<DefaultConv, Derived, Base, types::pure1409>::value, Thiscall>(
				"GameObject::getRealPosition", 
				(void*)addresses::address1409()
			);
		}

		if constexpr (compare::setStartPos<Derived, Base, types::pure1410>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setStartPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setStartPos<DefaultConv, Derived, Base, types::pure1410>::value, Thiscall>(
				"GameObject::setStartPos", 
				(void*)addresses::address1410()
			);
		}

		if constexpr (compare::updateStartValues<Derived, Base, types::pure1411>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateStartValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateStartValues<DefaultConv, Derived, Base, types::pure1411>::value, Thiscall>(
				"GameObject::updateStartValues", 
				(void*)addresses::address1411()
			);
		}

		if constexpr (compare::getSaveString<Derived, Base, types::pure1413>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSaveString<DefaultConv, Derived, Base, types::pure1413>::value, Thiscall>(
				"GameObject::getSaveString", 
				(void*)addresses::address1413()
			);
		}

		if constexpr (compare::isFlipX<Derived, Base, types::pure1414>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isFlipX<DefaultConv, Derived, Base, types::pure1414>::value, Thiscall>(
				"GameObject::isFlipX", 
				(void*)addresses::address1414()
			);
		}

		if constexpr (compare::isFlipY<Derived, Base, types::pure1415>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isFlipY<DefaultConv, Derived, Base, types::pure1415>::value, Thiscall>(
				"GameObject::isFlipY", 
				(void*)addresses::address1415()
			);
		}

		if constexpr (compare::setRScaleX<Derived, Base, types::pure1416>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRScaleX<DefaultConv, Derived, Base, types::pure1416>::value, Thiscall>(
				"GameObject::setRScaleX", 
				(void*)addresses::address1416()
			);
		}

		if constexpr (compare::setRScaleY<Derived, Base, types::pure1417>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRScaleY<DefaultConv, Derived, Base, types::pure1417>::value, Thiscall>(
				"GameObject::setRScaleY", 
				(void*)addresses::address1417()
			);
		}

		if constexpr (compare::setRScale<Derived, Base, types::pure1418>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRScale<DefaultConv, Derived, Base, types::pure1418>::value, Thiscall>(
				"GameObject::setRScale", 
				(void*)addresses::address1418()
			);
		}

		if constexpr (compare::getRScaleY<Derived, Base, types::pure1420>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getRScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRScaleY<DefaultConv, Derived, Base, types::pure1420>::value, Thiscall>(
				"GameObject::getRScaleY", 
				(void*)addresses::address1420()
			);
		}

		if constexpr (compare::calculateSpawnXPos<Derived, Base, types::pure1421>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::calculateSpawnXPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateSpawnXPos<DefaultConv, Derived, Base, types::pure1421>::value, Thiscall>(
				"GameObject::calculateSpawnXPos", 
				(void*)addresses::address1421()
			);
		}

		if constexpr (compare::powerOnObject<Derived, Base, types::pure1423>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::powerOnObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::powerOnObject<DefaultConv, Derived, Base, types::pure1423>::value, Thiscall>(
				"GameObject::powerOnObject", 
				(void*)addresses::address1423()
			);
		}

		if constexpr (compare::powerOffObject<Derived, Base, types::pure1424>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::powerOffObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::powerOffObject<DefaultConv, Derived, Base, types::pure1424>::value, Thiscall>(
				"GameObject::powerOffObject", 
				(void*)addresses::address1424()
			);
		}

		if constexpr (compare::setObjectColor<Derived, Base, types::pure1425>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setObjectColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setObjectColor<DefaultConv, Derived, Base, types::pure1425>::value, Thiscall>(
				"GameObject::setObjectColor", 
				(void*)addresses::address1425()
			);
		}

		if constexpr (compare::setGlowColor<Derived, Base, types::pure1426>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setGlowColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setGlowColor<DefaultConv, Derived, Base, types::pure1426>::value, Thiscall>(
				"GameObject::setGlowColor", 
				(void*)addresses::address1426()
			);
		}

		if constexpr (compare::getOrientedBox<Derived, Base, types::pure1427>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getOrientedBox", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOrientedBox<DefaultConv, Derived, Base, types::pure1427>::value, Thiscall>(
				"GameObject::getOrientedBox", 
				(void*)addresses::address1427()
			);
		}

		if constexpr (compare::addToGroup<Derived, Base, types::pure1428>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addToGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToGroup<DefaultConv, Derived, Base, types::pure1428>::value, Thiscall>(
				"GameObject::addToGroup", 
				(void*)addresses::address1428()
			);
		}

		if constexpr (compare::removeFromGroup<Derived, Base, types::pure1429>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::removeFromGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeFromGroup<DefaultConv, Derived, Base, types::pure1429>::value, Thiscall>(
				"GameObject::removeFromGroup", 
				(void*)addresses::address1429()
			);
		}

		if constexpr (compare::getType<Derived, Base, types::pure1435>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getType", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getType<DefaultConv, Derived, Base, types::pure1435>::value, Thiscall>(
				"GameObject::getType", 
				(void*)addresses::address1435()
			);
		}

		if constexpr (compare::setType<Derived, Base, types::pure1436>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setType", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setType<DefaultConv, Derived, Base, types::pure1436>::value, Thiscall>(
				"GameObject::setType", 
				(void*)addresses::address1436()
			);
		}

		if constexpr (compare::getStartPos<Derived, Base, types::pure1437>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getStartPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getStartPos<DefaultConv, Derived, Base, types::pure1437>::value, Thiscall>(
				"GameObject::getStartPos", 
				(void*)addresses::address1437()
			);
		}

		if constexpr (compare::commonSetup<Derived, Base, types::pure1445>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::commonSetup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::commonSetup<DefaultConv, Derived, Base, types::pure1445>::value, Thiscall>(
				"GameObject::commonSetup", 
				(void*)addresses::address1445()
			);
		}

		if constexpr (compare::createWithFrame<Derived, Base, types::pure1447>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::createWithFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithFrame<DefaultConv, Derived, Base, types::pure1447>::value, Optcall>(
				"GameObject::createWithFrame", 
				(void*)addresses::address1447()
			);
		}

		if constexpr (compare::createWithKey<Derived, Base, types::pure1448>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::createWithKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithKey<DefaultConv, Derived, Base, types::pure1448>::value, Optcall>(
				"GameObject::createWithKey", 
				(void*)addresses::address1448()
			);
		}

		if constexpr (compare::getBoxOffset<Derived, Base, types::pure1453>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getBoxOffset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBoxOffset<DefaultConv, Derived, Base, types::pure1453>::value, Thiscall>(
				"GameObject::getBoxOffset", 
				(void*)addresses::address1453()
			);
		}

		if constexpr (compare::objectFromString<Derived, Base, types::pure1473>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::objectFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectFromString<DefaultConv, Derived, Base, types::pure1473>::value, Optcall>(
				"GameObject::objectFromString", 
				(void*)addresses::address1473()
			);
		}

		if constexpr (compare::selectObject<Derived, Base, types::pure1479>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::selectObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selectObject<DefaultConv, Derived, Base, types::pure1479>::value, Membercall>(
				"GameObject::selectObject", 
				(void*)addresses::address1479()
			);
		}

		if constexpr (compare::updateCustomScale<Derived, Base, types::pure1489>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateCustomScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCustomScale<DefaultConv, Derived, Base, types::pure1489>::value, Membercall>(
				"GameObject::updateCustomScale", 
				(void*)addresses::address1489()
			);
		}

		if constexpr (compare::deselectObject<Derived, Base, types::pure1496>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::deselectObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::deselectObject<DefaultConv, Derived, Base, types::pure1496>::value, Thiscall>(
				"GameObject::deselectObject", 
				(void*)addresses::address1496()
			);
		}

		if constexpr (compare::createRotateAction<Derived, Base, types::pure1497>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::createRotateAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createRotateAction<DefaultConv, Derived, Base, types::pure1497>::value, Membercall>(
				"GameObject::createRotateAction", 
				(void*)addresses::address1497()
			);
		}

		if constexpr (compare::setMyAction<Derived, Base, types::pure1498>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setMyAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setMyAction<DefaultConv, Derived, Base, types::pure1498>::value, Membercall>(
				"GameObject::setMyAction", 
				(void*)addresses::address1498()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GameObjectCopy> : ModifyBase<Modify<Derived, GameObjectCopy>> {
	using ModifyBase<Modify<Derived, GameObjectCopy>>::ModifyBase;
	using Base = GameObjectCopy;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GameStatsManager> : ModifyBase<Modify<Derived, GameStatsManager>> {
	using ModifyBase<Modify<Derived, GameStatsManager>>::ModifyBase;
	using Base = GameStatsManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::sharedState<Derived, Base, types::pure1520>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1520>::value, Cdecl>(
				"GameStatsManager::sharedState", 
				(void*)addresses::address1520()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GauntletSelectLayer> : ModifyBase<Modify<Derived, GauntletSelectLayer>> {
	using ModifyBase<Modify<Derived, GauntletSelectLayer>>::ModifyBase;
	using Base = GauntletSelectLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1532>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GauntletSelectLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1532>::value, Cdecl>(
				"GauntletSelectLayer::create", 
				(void*)addresses::address1532()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GhostTrailEffect> : ModifyBase<Modify<Derived, GhostTrailEffect>> {
	using ModifyBase<Modify<Derived, GhostTrailEffect>>::ModifyBase;
	using Base = GhostTrailEffect;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, HSVWidgetPopup> : ModifyBase<Modify<Derived, HSVWidgetPopup>> {
	using ModifyBase<Modify<Derived, HSVWidgetPopup>>::ModifyBase;
	using Base = HSVWidgetPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, HSVWidgetPopupDelegate> : ModifyBase<Modify<Derived, HSVWidgetPopupDelegate>> {
	using ModifyBase<Modify<Derived, HSVWidgetPopupDelegate>>::ModifyBase;
	using Base = HSVWidgetPopupDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, HardStreak> : ModifyBase<Modify<Derived, HardStreak>> {
	using ModifyBase<Modify<Derived, HardStreak>>::ModifyBase;
	using Base = HardStreak;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, InfoAlertButton> : ModifyBase<Modify<Derived, InfoAlertButton>> {
	using ModifyBase<Modify<Derived, InfoAlertButton>>::ModifyBase;
	using Base = InfoAlertButton;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure1545>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoAlertButton::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1545>::value, Membercall>(
				"InfoAlertButton::init", 
				(void*)addresses::address1545()
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure1546>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoAlertButton::activate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activate<DefaultConv, Derived, Base, types::pure1546>::value, Thiscall>(
				"InfoAlertButton::activate", 
				(void*)addresses::address1546()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure1547>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoAlertButton::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure1547>::value, Thiscall>(
				"InfoAlertButton::constructor", 
				(void*)addresses::address1547()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1548>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoAlertButton::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1548>::value, Optcall>(
				"InfoAlertButton::create", 
				(void*)addresses::address1548()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, KeybindingsLayer> : ModifyBase<Modify<Derived, KeybindingsLayer>> {
	using ModifyBase<Modify<Derived, KeybindingsLayer>>::ModifyBase;
	using Base = KeybindingsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::onClose<Derived, Base, types::pure1553>::value) {
			Interface::get()->logInfo(
				"Adding hook at function KeybindingsLayer::onClose", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onClose<DefaultConv, Derived, Base, types::pure1553>::value, Membercall>(
				"KeybindingsLayer::onClose", 
				(void*)addresses::address1553()
			);
		}

		if constexpr (compare::onPrevPage<Derived, Base, types::pure1554>::value) {
			Interface::get()->logInfo(
				"Adding hook at function KeybindingsLayer::onPrevPage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPrevPage<DefaultConv, Derived, Base, types::pure1554>::value, Membercall>(
				"KeybindingsLayer::onPrevPage", 
				(void*)addresses::address1554()
			);
		}

		if constexpr (compare::onNextPage<Derived, Base, types::pure1555>::value) {
			Interface::get()->logInfo(
				"Adding hook at function KeybindingsLayer::onNextPage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onNextPage<DefaultConv, Derived, Base, types::pure1555>::value, Membercall>(
				"KeybindingsLayer::onNextPage", 
				(void*)addresses::address1555()
			);
		}

		if constexpr (compare::goToPage<Derived, Base, types::pure1556>::value) {
			Interface::get()->logInfo(
				"Adding hook at function KeybindingsLayer::goToPage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::goToPage<DefaultConv, Derived, Base, types::pure1556>::value, Membercall>(
				"KeybindingsLayer::goToPage", 
				(void*)addresses::address1556()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LeaderboardManagerDelegate> : ModifyBase<Modify<Derived, LeaderboardManagerDelegate>> {
	using ModifyBase<Modify<Derived, LeaderboardManagerDelegate>>::ModifyBase;
	using Base = LeaderboardManagerDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LevelCommentDelegate> : ModifyBase<Modify<Derived, LevelCommentDelegate>> {
	using ModifyBase<Modify<Derived, LevelCommentDelegate>>::ModifyBase;
	using Base = LevelCommentDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, PlayerCheckpoint> : ModifyBase<Modify<Derived, PlayerCheckpoint>> {
	using ModifyBase<Modify<Derived, PlayerCheckpoint>>::ModifyBase;
	using Base = PlayerCheckpoint;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LevelDownloadDelegate> : ModifyBase<Modify<Derived, LevelDownloadDelegate>> {
	using ModifyBase<Modify<Derived, LevelDownloadDelegate>>::ModifyBase;
	using Base = LevelDownloadDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, PlatformDownloadDelegate> : ModifyBase<Modify<Derived, PlatformDownloadDelegate>> {
	using ModifyBase<Modify<Derived, PlatformDownloadDelegate>>::ModifyBase;
	using Base = PlatformDownloadDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LevelEditorLayer> : ModifyBase<Modify<Derived, LevelEditorLayer>> {
	using ModifyBase<Modify<Derived, LevelEditorLayer>>::ModifyBase;
	using Base = LevelEditorLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::update<Derived, Base, types::pure1567>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure1567>::value, Thiscall>(
				"LevelEditorLayer::update", 
				(void*)addresses::address1567()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1577>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1577>::value, Optcall>(
				"LevelEditorLayer::create", 
				(void*)addresses::address1577()
			);
		}

		if constexpr (compare::addObjectFromString<Derived, Base, types::pure1579>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addObjectFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addObjectFromString<DefaultConv, Derived, Base, types::pure1579>::value, Membercall>(
				"LevelEditorLayer::addObjectFromString", 
				(void*)addresses::address1579()
			);
		}

		if constexpr (compare::addSpecial<Derived, Base, types::pure1580>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addSpecial", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addSpecial<DefaultConv, Derived, Base, types::pure1580>::value, Membercall>(
				"LevelEditorLayer::addSpecial", 
				(void*)addresses::address1580()
			);
		}

		if constexpr (compare::createObject<Derived, Base, types::pure1587>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createObject<DefaultConv, Derived, Base, types::pure1587>::value, Membercall>(
				"LevelEditorLayer::createObject", 
				(void*)addresses::address1587()
			);
		}

		if constexpr (compare::getLastObjectX<Derived, Base, types::pure1590>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getLastObjectX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLastObjectX<DefaultConv, Derived, Base, types::pure1590>::value, Thiscall>(
				"LevelEditorLayer::getLastObjectX", 
				(void*)addresses::address1590()
			);
		}

		if constexpr (compare::getLevelString<Derived, Base, types::pure1591>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getLevelString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLevelString<DefaultConv, Derived, Base, types::pure1591>::value, Thiscall>(
				"LevelEditorLayer::getLevelString", 
				(void*)addresses::address1591()
			);
		}

		if constexpr (compare::getNextFreeGroupID<Derived, Base, types::pure1594>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getNextFreeGroupID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getNextFreeGroupID<DefaultConv, Derived, Base, types::pure1594>::value, Membercall>(
				"LevelEditorLayer::getNextFreeGroupID", 
				(void*)addresses::address1594()
			);
		}

		if constexpr (compare::getObjectRect<Derived, Base, types::pure1596>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getObjectRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectRect<DefaultConv, Derived, Base, types::pure1596>::value, Membercall>(
				"LevelEditorLayer::getObjectRect", 
				(void*)addresses::address1596()
			);
		}

		if constexpr (compare::objectAtPosition<Derived, Base, types::pure1600>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::objectAtPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectAtPosition<DefaultConv, Derived, Base, types::pure1600>::value, Membercall>(
				"LevelEditorLayer::objectAtPosition", 
				(void*)addresses::address1600()
			);
		}

		if constexpr (compare::pasteAttributeState<Derived, Base, types::pure1605>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::pasteAttributeState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pasteAttributeState<DefaultConv, Derived, Base, types::pure1605>::value, Membercall>(
				"LevelEditorLayer::pasteAttributeState", 
				(void*)addresses::address1605()
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure1609>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure1609>::value, Thiscall>(
				"LevelEditorLayer::removeAllObjects", 
				(void*)addresses::address1609()
			);
		}

		if constexpr (compare::removeObject<Derived, Base, types::pure1611>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeObject<DefaultConv, Derived, Base, types::pure1611>::value, Membercall>(
				"LevelEditorLayer::removeObject", 
				(void*)addresses::address1611()
			);
		}

		if constexpr (compare::updateEditorMode<Derived, Base, types::pure1630>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateEditorMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateEditorMode<DefaultConv, Derived, Base, types::pure1630>::value, Thiscall>(
				"LevelEditorLayer::updateEditorMode", 
				(void*)addresses::address1630()
			);
		}

		if constexpr (compare::updateOptions<Derived, Base, types::pure1634>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateOptions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateOptions<DefaultConv, Derived, Base, types::pure1634>::value, Thiscall>(
				"LevelEditorLayer::updateOptions", 
				(void*)addresses::address1634()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LevelInfoLayer> : ModifyBase<Modify<Derived, LevelInfoLayer>> {
	using ModifyBase<Modify<Derived, LevelInfoLayer>>::ModifyBase;
	using Base = LevelInfoLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1637>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelInfoLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1637>::value, Optcall>(
				"LevelInfoLayer::create", 
				(void*)addresses::address1637()
			);
		}

		if constexpr (compare::onGarage<Derived, Base, types::pure1638>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelInfoLayer::onGarage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onGarage<DefaultConv, Derived, Base, types::pure1638>::value, Membercall>(
				"LevelInfoLayer::onGarage", 
				(void*)addresses::address1638()
			);
		}

		if constexpr (compare::onViewProfile<Derived, Base, types::pure1639>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelInfoLayer::onViewProfile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onViewProfile<DefaultConv, Derived, Base, types::pure1639>::value, Membercall>(
				"LevelInfoLayer::onViewProfile", 
				(void*)addresses::address1639()
			);
		}

		if constexpr (compare::onLevelInfo<Derived, Base, types::pure1640>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelInfoLayer::onLevelInfo", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onLevelInfo<DefaultConv, Derived, Base, types::pure1640>::value, Membercall>(
				"LevelInfoLayer::onLevelInfo", 
				(void*)addresses::address1640()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LevelSelectLayer> : ModifyBase<Modify<Derived, LevelSelectLayer>> {
	using ModifyBase<Modify<Derived, LevelSelectLayer>>::ModifyBase;
	using Base = LevelSelectLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1642>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSelectLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1642>::value, Optcall>(
				"LevelSelectLayer::create", 
				(void*)addresses::address1642()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LevelSettingsDelegate> : ModifyBase<Modify<Derived, LevelSettingsDelegate>> {
	using ModifyBase<Modify<Derived, LevelSettingsDelegate>>::ModifyBase;
	using Base = LevelSettingsDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LevelSettingsLayer> : ModifyBase<Modify<Derived, LevelSettingsLayer>> {
	using ModifyBase<Modify<Derived, LevelSettingsLayer>>::ModifyBase;
	using Base = LevelSettingsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1643>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1643>::value, Optcall>(
				"LevelSettingsLayer::create", 
				(void*)addresses::address1643()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LevelSettingsObject> : ModifyBase<Modify<Derived, LevelSettingsObject>> {
	using ModifyBase<Modify<Derived, LevelSettingsObject>>::ModifyBase;
	using Base = LevelSettingsObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, TeleportPortalObject> : ModifyBase<Modify<Derived, TeleportPortalObject>> {
	using ModifyBase<Modify<Derived, TeleportPortalObject>>::ModifyBase;
	using Base = TeleportPortalObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LevelUpdateDelegate> : ModifyBase<Modify<Derived, LevelUpdateDelegate>> {
	using ModifyBase<Modify<Derived, LevelUpdateDelegate>>::ModifyBase;
	using Base = LevelUpdateDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, TableViewDelegate> : ModifyBase<Modify<Derived, TableViewDelegate>> {
	using ModifyBase<Modify<Derived, TableViewDelegate>>::ModifyBase;
	using Base = TableViewDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ListButtonBarDelegate> : ModifyBase<Modify<Derived, ListButtonBarDelegate>> {
	using ModifyBase<Modify<Derived, ListButtonBarDelegate>>::ModifyBase;
	using Base = ListButtonBarDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LoadingLayer> : ModifyBase<Modify<Derived, LoadingLayer>> {
	using ModifyBase<Modify<Derived, LoadingLayer>>::ModifyBase;
	using Base = LoadingLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1656>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1656>::value, Optcall>(
				"LoadingLayer::create", 
				(void*)addresses::address1656()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1657>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1657>::value, Membercall>(
				"LoadingLayer::init", 
				(void*)addresses::address1657()
			);
		}

		if constexpr (compare::getLoadingString<Derived, Base, types::pure1658>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::getLoadingString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLoadingString<DefaultConv, Derived, Base, types::pure1658>::value, Thiscall>(
				"LoadingLayer::getLoadingString", 
				(void*)addresses::address1658()
			);
		}

		if constexpr (compare::loadAssets<Derived, Base, types::pure1659>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::loadAssets", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadAssets<DefaultConv, Derived, Base, types::pure1659>::value, Thiscall>(
				"LoadingLayer::loadAssets", 
				(void*)addresses::address1659()
			);
		}

		if constexpr (compare::loadingFinished<Derived, Base, types::pure1660>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::loadingFinished", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadingFinished<DefaultConv, Derived, Base, types::pure1660>::value, Thiscall>(
				"LoadingLayer::loadingFinished", 
				(void*)addresses::address1660()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetupSpawnPopup> : ModifyBase<Modify<Derived, SetupSpawnPopup>> {
	using ModifyBase<Modify<Derived, SetupSpawnPopup>>::ModifyBase;
	using Base = SetupSpawnPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LocalLevelManager> : ModifyBase<Modify<Derived, LocalLevelManager>> {
	using ModifyBase<Modify<Derived, LocalLevelManager>>::ModifyBase;
	using Base = LocalLevelManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetupObjectTogglePopup> : ModifyBase<Modify<Derived, SetupObjectTogglePopup>> {
	using ModifyBase<Modify<Derived, SetupObjectTogglePopup>>::ModifyBase;
	using Base = SetupObjectTogglePopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, MenuGameLayer> : ModifyBase<Modify<Derived, MenuGameLayer>> {
	using ModifyBase<Modify<Derived, MenuGameLayer>>::ModifyBase;
	using Base = MenuGameLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, MoreOptionsLayer> : ModifyBase<Modify<Derived, MoreOptionsLayer>> {
	using ModifyBase<Modify<Derived, MoreOptionsLayer>>::ModifyBase;
	using Base = MoreOptionsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1688>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MoreOptionsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1688>::value, Cdecl>(
				"MoreOptionsLayer::create", 
				(void*)addresses::address1688()
			);
		}

		if constexpr (compare::addToggle<Derived, Base, types::pure1689>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MoreOptionsLayer::addToggle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToggle<DefaultConv, Derived, Base, types::pure1689>::value, Membercall>(
				"MoreOptionsLayer::addToggle", 
				(void*)addresses::address1689()
			);
		}

		if constexpr (compare::onKeybindings<Derived, Base, types::pure1690>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MoreOptionsLayer::onKeybindings", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onKeybindings<DefaultConv, Derived, Base, types::pure1690>::value, Membercall>(
				"MoreOptionsLayer::onKeybindings", 
				(void*)addresses::address1690()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, MusicDownloadDelegate> : ModifyBase<Modify<Derived, MusicDownloadDelegate>> {
	using ModifyBase<Modify<Derived, MusicDownloadDelegate>>::ModifyBase;
	using Base = MusicDownloadDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ObjectToolbox> : ModifyBase<Modify<Derived, ObjectToolbox>> {
	using ModifyBase<Modify<Derived, ObjectToolbox>>::ModifyBase;
	using Base = ObjectToolbox;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::sharedState<Derived, Base, types::pure1710>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ObjectToolbox::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1710>::value, Cdecl>(
				"ObjectToolbox::sharedState", 
				(void*)addresses::address1710()
			);
		}

		if constexpr (compare::gridNodeSizeForKey<Derived, Base, types::pure1711>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ObjectToolbox::gridNodeSizeForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::gridNodeSizeForKey<DefaultConv, Derived, Base, types::pure1711>::value, Membercall>(
				"ObjectToolbox::gridNodeSizeForKey", 
				(void*)addresses::address1711()
			);
		}

		if constexpr (compare::perspectiveBlockFrame<Derived, Base, types::pure1712>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ObjectToolbox::perspectiveBlockFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::perspectiveBlockFrame<DefaultConv, Derived, Base, types::pure1712>::value, Membercall>(
				"ObjectToolbox::perspectiveBlockFrame", 
				(void*)addresses::address1712()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, OpacityEffectAction> : ModifyBase<Modify<Derived, OpacityEffectAction>> {
	using ModifyBase<Modify<Derived, OpacityEffectAction>>::ModifyBase;
	using Base = OpacityEffectAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, OptionsLayer> : ModifyBase<Modify<Derived, OptionsLayer>> {
	using ModifyBase<Modify<Derived, OptionsLayer>>::ModifyBase;
	using Base = OptionsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1718>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OptionsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1718>::value, Cdecl>(
				"OptionsLayer::create", 
				(void*)addresses::address1718()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, PlayLayer> : ModifyBase<Modify<Derived, PlayLayer>> {
	using ModifyBase<Modify<Derived, PlayLayer>>::ModifyBase;
	using Base = PlayLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::addObject<Derived, Base, types::pure1729>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::addObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addObject<DefaultConv, Derived, Base, types::pure1729>::value, Membercall>(
				"PlayLayer::addObject", 
				(void*)addresses::address1729()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1746>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1746>::value, Optcall>(
				"PlayLayer::create", 
				(void*)addresses::address1746()
			);
		}

		if constexpr (compare::createCheckpoint<Derived, Base, types::pure1747>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::createCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createCheckpoint<DefaultConv, Derived, Base, types::pure1747>::value, Thiscall>(
				"PlayLayer::createCheckpoint", 
				(void*)addresses::address1747()
			);
		}

		if constexpr (compare::destroyPlayer<Derived, Base, types::pure1752>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::destroyPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destroyPlayer<DefaultConv, Derived, Base, types::pure1752>::value, Membercall>(
				"PlayLayer::destroyPlayer", 
				(void*)addresses::address1752()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure1754>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure1754>::value, Thiscall>(
				"PlayLayer::draw", 
				(void*)addresses::address1754()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1780>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1780>::value, Membercall>(
				"PlayLayer::init", 
				(void*)addresses::address1780()
			);
		}

		if constexpr (compare::levelComplete<Derived, Base, types::pure1782>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::levelComplete", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::levelComplete<DefaultConv, Derived, Base, types::pure1782>::value, Thiscall>(
				"PlayLayer::levelComplete", 
				(void*)addresses::address1782()
			);
		}

		if constexpr (compare::markCheckpoint<Derived, Base, types::pure1789>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::markCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::markCheckpoint<DefaultConv, Derived, Base, types::pure1789>::value, Thiscall>(
				"PlayLayer::markCheckpoint", 
				(void*)addresses::address1789()
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure1791>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure1791>::value, Thiscall>(
				"PlayLayer::onEnterTransitionDidFinish", 
				(void*)addresses::address1791()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure1792>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure1792>::value, Thiscall>(
				"PlayLayer::onExit", 
				(void*)addresses::address1792()
			);
		}

		if constexpr (compare::onQuit<Derived, Base, types::pure1793>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::onQuit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onQuit<DefaultConv, Derived, Base, types::pure1793>::value, Thiscall>(
				"PlayLayer::onQuit", 
				(void*)addresses::address1793()
			);
		}

		if constexpr (compare::removeLastCheckpoint<Derived, Base, types::pure1814>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::removeLastCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeLastCheckpoint<DefaultConv, Derived, Base, types::pure1814>::value, Thiscall>(
				"PlayLayer::removeLastCheckpoint", 
				(void*)addresses::address1814()
			);
		}

		if constexpr (compare::resetLevel<Derived, Base, types::pure1816>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::resetLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetLevel<DefaultConv, Derived, Base, types::pure1816>::value, Thiscall>(
				"PlayLayer::resetLevel", 
				(void*)addresses::address1816()
			);
		}

		if constexpr (compare::scene<Derived, Base, types::pure1820>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::scene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scene<DefaultConv, Derived, Base, types::pure1820>::value, Membercall>(
				"PlayLayer::scene", 
				(void*)addresses::address1820()
			);
		}

		if constexpr (compare::setupLevelStart<Derived, Base, types::pure1821>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::setupLevelStart", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupLevelStart<DefaultConv, Derived, Base, types::pure1821>::value, Membercall>(
				"PlayLayer::setupLevelStart", 
				(void*)addresses::address1821()
			);
		}

		if constexpr (compare::timeForXPos2<Derived, Base, types::pure1849>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::timeForXPos2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::timeForXPos2<DefaultConv, Derived, Base, types::pure1849>::value, Membercall>(
				"PlayLayer::timeForXPos2", 
				(void*)addresses::address1849()
			);
		}

		if constexpr (compare::togglePracticeMode<Derived, Base, types::pure1855>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::togglePracticeMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::togglePracticeMode<DefaultConv, Derived, Base, types::pure1855>::value, Membercall>(
				"PlayLayer::togglePracticeMode", 
				(void*)addresses::address1855()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1861>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure1861>::value, Thiscall>(
				"PlayLayer::update", 
				(void*)addresses::address1861()
			);
		}

		if constexpr (compare::updateAttempts<Derived, Base, types::pure1862>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateAttempts", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateAttempts<DefaultConv, Derived, Base, types::pure1862>::value, Thiscall>(
				"PlayLayer::updateAttempts", 
				(void*)addresses::address1862()
			);
		}

		if constexpr (compare::updateReplay<Derived, Base, types::pure1870>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateReplay", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateReplay<DefaultConv, Derived, Base, types::pure1870>::value, Membercall>(
				"PlayLayer::updateReplay", 
				(void*)addresses::address1870()
			);
		}

		if constexpr (compare::updateTweenAction<Derived, Base, types::pure1872>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateTweenAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTweenAction<DefaultConv, Derived, Base, types::pure1872>::value, Thiscall>(
				"PlayLayer::updateTweenAction", 
				(void*)addresses::address1872()
			);
		}

		if constexpr (compare::updateVisibility<Derived, Base, types::pure1873>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateVisibility<DefaultConv, Derived, Base, types::pure1873>::value, Thiscall>(
				"PlayLayer::updateVisibility", 
				(void*)addresses::address1873()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure1875>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure1875>::value, Thiscall>(
				"PlayLayer::visit", 
				(void*)addresses::address1875()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1879>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1879>::value, Thiscall>(
				"PlayLayer::destructor", 
				(void*)addresses::address1879()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, PointNode> : ModifyBase<Modify<Derived, PointNode>> {
	using ModifyBase<Modify<Derived, PointNode>>::ModifyBase;
	using Base = PointNode;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2034>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PointNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2034>::value, Optcall>(
				"PointNode::create", 
				(void*)addresses::address2034()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ProfilePage> : ModifyBase<Modify<Derived, ProfilePage>> {
	using ModifyBase<Modify<Derived, ProfilePage>>::ModifyBase;
	using Base = ProfilePage;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2035>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ProfilePage::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2035>::value, Optcall>(
				"ProfilePage::create", 
				(void*)addresses::address2035()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, PulseEffectAction> : ModifyBase<Modify<Derived, PulseEffectAction>> {
	using ModifyBase<Modify<Derived, PulseEffectAction>>::ModifyBase;
	using Base = PulseEffectAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, RetryLevelLayer> : ModifyBase<Modify<Derived, RetryLevelLayer>> {
	using ModifyBase<Modify<Derived, RetryLevelLayer>>::ModifyBase;
	using Base = RetryLevelLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, UploadActionDelegate> : ModifyBase<Modify<Derived, UploadActionDelegate>> {
	using ModifyBase<Modify<Derived, UploadActionDelegate>>::ModifyBase;
	using Base = UploadActionDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ScrollingLayer> : ModifyBase<Modify<Derived, ScrollingLayer>> {
	using ModifyBase<Modify<Derived, ScrollingLayer>>::ModifyBase;
	using Base = ScrollingLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SelectArtLayer> : ModifyBase<Modify<Derived, SelectArtLayer>> {
	using ModifyBase<Modify<Derived, SelectArtLayer>>::ModifyBase;
	using Base = SelectArtLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2040>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SelectArtLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2040>::value, Optcall>(
				"SelectArtLayer::create", 
				(void*)addresses::address2040()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetGroupIDLayer> : ModifyBase<Modify<Derived, SetGroupIDLayer>> {
	using ModifyBase<Modify<Derived, SetGroupIDLayer>>::ModifyBase;
	using Base = SetGroupIDLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::updateGroupIDLabel<Derived, Base, types::pure2043>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::updateGroupIDLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateGroupIDLabel<DefaultConv, Derived, Base, types::pure2043>::value, Thiscall>(
				"SetGroupIDLayer::updateGroupIDLabel", 
				(void*)addresses::address2043()
			);
		}

		if constexpr (compare::updateEditorLayerID<Derived, Base, types::pure2045>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::updateEditorLayerID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateEditorLayerID<DefaultConv, Derived, Base, types::pure2045>::value, Thiscall>(
				"SetGroupIDLayer::updateEditorLayerID", 
				(void*)addresses::address2045()
			);
		}

		if constexpr (compare::updateEditorLayerID2<Derived, Base, types::pure2046>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::updateEditorLayerID2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateEditorLayerID2<DefaultConv, Derived, Base, types::pure2046>::value, Thiscall>(
				"SetGroupIDLayer::updateEditorLayerID2", 
				(void*)addresses::address2046()
			);
		}

		if constexpr (compare::updateZOrder<Derived, Base, types::pure2047>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::updateZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateZOrder<DefaultConv, Derived, Base, types::pure2047>::value, Thiscall>(
				"SetGroupIDLayer::updateZOrder", 
				(void*)addresses::address2047()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetItemIDLayer> : ModifyBase<Modify<Derived, SetItemIDLayer>> {
	using ModifyBase<Modify<Derived, SetItemIDLayer>>::ModifyBase;
	using Base = SetItemIDLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetTargetIDLayer> : ModifyBase<Modify<Derived, SetTargetIDLayer>> {
	using ModifyBase<Modify<Derived, SetTargetIDLayer>>::ModifyBase;
	using Base = SetTargetIDLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetupAnimationPopup> : ModifyBase<Modify<Derived, SetupAnimationPopup>> {
	using ModifyBase<Modify<Derived, SetupAnimationPopup>>::ModifyBase;
	using Base = SetupAnimationPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetupCollisionTriggerPopup> : ModifyBase<Modify<Derived, SetupCollisionTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupCollisionTriggerPopup>>::ModifyBase;
	using Base = SetupCollisionTriggerPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetupOpacityPopup> : ModifyBase<Modify<Derived, SetupOpacityPopup>> {
	using ModifyBase<Modify<Derived, SetupOpacityPopup>>::ModifyBase;
	using Base = SetupOpacityPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetupPickupTriggerPopup> : ModifyBase<Modify<Derived, SetupPickupTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupPickupTriggerPopup>>::ModifyBase;
	using Base = SetupPickupTriggerPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, TableViewDataSource> : ModifyBase<Modify<Derived, TableViewDataSource>> {
	using ModifyBase<Modify<Derived, TableViewDataSource>>::ModifyBase;
	using Base = TableViewDataSource;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetupPulsePopup> : ModifyBase<Modify<Derived, SetupPulsePopup>> {
	using ModifyBase<Modify<Derived, SetupPulsePopup>>::ModifyBase;
	using Base = SetupPulsePopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetupShakePopup> : ModifyBase<Modify<Derived, SetupShakePopup>> {
	using ModifyBase<Modify<Derived, SetupShakePopup>>::ModifyBase;
	using Base = SetupShakePopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetupTouchTogglePopup> : ModifyBase<Modify<Derived, SetupTouchTogglePopup>> {
	using ModifyBase<Modify<Derived, SetupTouchTogglePopup>>::ModifyBase;
	using Base = SetupTouchTogglePopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SimplePlayer> : ModifyBase<Modify<Derived, SimplePlayer>> {
	using ModifyBase<Modify<Derived, SimplePlayer>>::ModifyBase;
	using Base = SimplePlayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure2102>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure2102>::value, Membercall>(
				"SimplePlayer::init", 
				(void*)addresses::address2102()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure2103>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2103>::value, Optcall>(
				"SimplePlayer::create", 
				(void*)addresses::address2103()
			);
		}

		if constexpr (compare::updatePlayerFrame<Derived, Base, types::pure2104>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::updatePlayerFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerFrame<DefaultConv, Derived, Base, types::pure2104>::value, Membercall>(
				"SimplePlayer::updatePlayerFrame", 
				(void*)addresses::address2104()
			);
		}

		if constexpr (compare::updateColors<Derived, Base, types::pure2105>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::updateColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColors<DefaultConv, Derived, Base, types::pure2105>::value, Thiscall>(
				"SimplePlayer::updateColors", 
				(void*)addresses::address2105()
			);
		}

		if constexpr (compare::setFrames<Derived, Base, types::pure2106>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::setFrames", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFrames<DefaultConv, Derived, Base, types::pure2106>::value, Membercall>(
				"SimplePlayer::setFrames", 
				(void*)addresses::address2106()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure2107>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure2107>::value, Membercall>(
				"SimplePlayer::setColor", 
				(void*)addresses::address2107()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure2108>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure2108>::value, Membercall>(
				"SimplePlayer::setOpacity", 
				(void*)addresses::address2108()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, Slider> : ModifyBase<Modify<Derived, Slider>> {
	using ModifyBase<Modify<Derived, Slider>>::ModifyBase;
	using Base = Slider;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::getValue<Derived, Base, types::pure2112>::value) {
			Interface::get()->logInfo(
				"Adding hook at function Slider::getValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getValue<DefaultConv, Derived, Base, types::pure2112>::value, Thiscall>(
				"Slider::getValue", 
				(void*)addresses::address2112()
			);
		}

		if constexpr (compare::updateBar<Derived, Base, types::pure2113>::value) {
			Interface::get()->logInfo(
				"Adding hook at function Slider::updateBar", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateBar<DefaultConv, Derived, Base, types::pure2113>::value, Thiscall>(
				"Slider::updateBar", 
				(void*)addresses::address2113()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure2114>::value) {
			Interface::get()->logInfo(
				"Adding hook at function Slider::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2114>::value, Optcall>(
				"Slider::create", 
				(void*)addresses::address2114()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SliderThumb> : ModifyBase<Modify<Derived, SliderThumb>> {
	using ModifyBase<Modify<Derived, SliderThumb>>::ModifyBase;
	using Base = SliderThumb;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::setValue<Derived, Base, types::pure2115>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SliderThumb::setValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setValue<DefaultConv, Derived, Base, types::pure2115>::value, Membercall>(
				"SliderThumb::setValue", 
				(void*)addresses::address2115()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SliderTouchLogic> : ModifyBase<Modify<Derived, SliderTouchLogic>> {
	using ModifyBase<Modify<Derived, SliderTouchLogic>>::ModifyBase;
	using Base = SliderTouchLogic;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, StatsCell> : ModifyBase<Modify<Derived, StatsCell>> {
	using ModifyBase<Modify<Derived, StatsCell>>::ModifyBase;
	using Base = StatsCell;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::updateBGColor<Derived, Base, types::pure2124>::value) {
			Interface::get()->logInfo(
				"Adding hook at function StatsCell::updateBGColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateBGColor<DefaultConv, Derived, Base, types::pure2124>::value, Membercall>(
				"StatsCell::updateBGColor", 
				(void*)addresses::address2124()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure2125>::value) {
			Interface::get()->logInfo(
				"Adding hook at function StatsCell::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure2125>::value, Thiscall>(
				"StatsCell::draw", 
				(void*)addresses::address2125()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, TextAlertPopup> : ModifyBase<Modify<Derived, TextAlertPopup>> {
	using ModifyBase<Modify<Derived, TextAlertPopup>>::ModifyBase;
	using Base = TextAlertPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2139>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextAlertPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2139>::value, Optcall>(
				"TextAlertPopup::create", 
				(void*)addresses::address2139()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, TextInputDelegate> : ModifyBase<Modify<Derived, TextInputDelegate>> {
	using ModifyBase<Modify<Derived, TextInputDelegate>>::ModifyBase;
	using Base = TextInputDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, UploadPopupDelegate> : ModifyBase<Modify<Derived, UploadPopupDelegate>> {
	using ModifyBase<Modify<Derived, UploadPopupDelegate>>::ModifyBase;
	using Base = UploadPopupDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, ToggleTriggerAction> : ModifyBase<Modify<Derived, ToggleTriggerAction>> {
	using ModifyBase<Modify<Derived, ToggleTriggerAction>>::ModifyBase;
	using Base = ToggleTriggerAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, TriggerEffectDelegate> : ModifyBase<Modify<Derived, TriggerEffectDelegate>> {
	using ModifyBase<Modify<Derived, TriggerEffectDelegate>>::ModifyBase;
	using Base = TriggerEffectDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, TopArtistsLayer> : ModifyBase<Modify<Derived, TopArtistsLayer>> {
	using ModifyBase<Modify<Derived, TopArtistsLayer>>::ModifyBase;
	using Base = TopArtistsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, TouchToggleAction> : ModifyBase<Modify<Derived, TouchToggleAction>> {
	using ModifyBase<Modify<Derived, TouchToggleAction>>::ModifyBase;
	using Base = TouchToggleAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, UILayer> : ModifyBase<Modify<Derived, UILayer>> {
	using ModifyBase<Modify<Derived, UILayer>>::ModifyBase;
	using Base = UILayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2162>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2162>::value, Cdecl>(
				"UILayer::create", 
				(void*)addresses::address2162()
			);
		}

		if constexpr (compare::onCheck<Derived, Base, types::pure2167>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::onCheck", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onCheck<DefaultConv, Derived, Base, types::pure2167>::value, Membercall>(
				"UILayer::onCheck", 
				(void*)addresses::address2167()
			);
		}

		if constexpr (compare::onDeleteCheck<Derived, Base, types::pure2168>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::onDeleteCheck", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onDeleteCheck<DefaultConv, Derived, Base, types::pure2168>::value, Membercall>(
				"UILayer::onDeleteCheck", 
				(void*)addresses::address2168()
			);
		}

		if constexpr (compare::onPause<Derived, Base, types::pure2169>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::onPause", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPause<DefaultConv, Derived, Base, types::pure2169>::value, Membercall>(
				"UILayer::onPause", 
				(void*)addresses::address2169()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure2170>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure2170>::value, Thiscall>(
				"UILayer::keyDown", 
				(void*)addresses::address2170()
			);
		}

		if constexpr (compare::keyUp<Derived, Base, types::pure2171>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::keyUp", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyUp<DefaultConv, Derived, Base, types::pure2171>::value, Thiscall>(
				"UILayer::keyUp", 
				(void*)addresses::address2171()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure2172>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure2172>::value, Thiscall>(
				"UILayer::constructor", 
				(void*)addresses::address2172()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure2173>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure2173>::value, Thiscall>(
				"UILayer::destructor", 
				(void*)addresses::address2173()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, UndoObject> : ModifyBase<Modify<Derived, UndoObject>> {
	using ModifyBase<Modify<Derived, UndoObject>>::ModifyBase;
	using Base = UndoObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2175>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2175>::value, Optcall>(
				"UndoObject::create", 
				(void*)addresses::address2175()
			);
		}

		if constexpr (compare::createWithArray<Derived, Base, types::pure2176>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::createWithArray", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithArray<DefaultConv, Derived, Base, types::pure2176>::value, Optcall>(
				"UndoObject::createWithArray", 
				(void*)addresses::address2176()
			);
		}

		if constexpr (compare::createWithTransformObjects<Derived, Base, types::pure2177>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::createWithTransformObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithTransformObjects<DefaultConv, Derived, Base, types::pure2177>::value, Optcall>(
				"UndoObject::createWithTransformObjects", 
				(void*)addresses::address2177()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, UserInfoDelegate> : ModifyBase<Modify<Derived, UserInfoDelegate>> {
	using ModifyBase<Modify<Derived, UserInfoDelegate>>::ModifyBase;
	using Base = UserInfoDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, VideoOptionsLayer> : ModifyBase<Modify<Derived, VideoOptionsLayer>> {
	using ModifyBase<Modify<Derived, VideoOptionsLayer>>::ModifyBase;
	using Base = VideoOptionsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};
