
template<class Derived>
struct Modify<Derived, cocos2d::CCPoolManager> : ModifyBase<Modify<Derived, cocos2d::CCPoolManager>> {
	using ModifyBase<Modify<Derived, cocos2d::CCPoolManager>>::ModifyBase;
	using Base = cocos2d::CCPoolManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::pop<Derived, Base, types::pure402>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCPoolManager::pop", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCPoolManager::pop", 
				(void*)addresses::address402(), 
				(void*)wrap::pop<Thiscall, Derived, Base, types::pure402>::value
			);
		}

		if constexpr (compare::sharedPoolManager<Derived, Base, types::pure403>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCPoolManager::sharedPoolManager", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCPoolManager::sharedPoolManager", 
				(void*)addresses::address403(), 
				(void*)wrap::sharedPoolManager<Cdecl, Derived, Base, types::pure403>::value
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

		if constexpr (compare::setVisible<Derived, Base, types::pure1829>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setVisible", 
				(void*)addresses::address1829(), 
				(void*)wrap::setVisible<Thiscall, Derived, Base, types::pure1829>::value
			);
		}

		if constexpr (compare::setFlipX<Derived, Base, types::pure1833>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setFlipX", 
				(void*)addresses::address1833(), 
				(void*)wrap::setFlipX<Thiscall, Derived, Base, types::pure1833>::value
			);
		}

		if constexpr (compare::setFlipY<Derived, Base, types::pure1834>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setFlipY", 
				(void*)addresses::address1834(), 
				(void*)wrap::setFlipY<Thiscall, Derived, Base, types::pure1834>::value
			);
		}

		if constexpr (compare::resetObject<Derived, Base, types::pure1835>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::resetObject", 
				(void*)addresses::address1835(), 
				(void*)wrap::resetObject<Thiscall, Derived, Base, types::pure1835>::value
			);
		}

		if constexpr (compare::getRealPosition<Derived, Base, types::pure1836>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getRealPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::getRealPosition", 
				(void*)addresses::address1836(), 
				(void*)wrap::getRealPosition<Thiscall, Derived, Base, types::pure1836>::value
			);
		}

		if constexpr (compare::getOrientedBox<Derived, Base, types::pure1837>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getOrientedBox", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::getOrientedBox", 
				(void*)addresses::address1837(), 
				(void*)wrap::getOrientedBox<Thiscall, Derived, Base, types::pure1837>::value
			);
		}

		if constexpr (compare::activateStreak<Derived, Base, types::pure1839>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::activateStreak", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::activateStreak", 
				(void*)addresses::address1839(), 
				(void*)wrap::activateStreak<Thiscall, Derived, Base, types::pure1839>::value
			);
		}

		if constexpr (compare::fadeOutStreak2<Derived, Base, types::pure1854>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::fadeOutStreak2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::fadeOutStreak2", 
				(void*)addresses::address1854(), 
				(void*)wrap::fadeOutStreak2<Membercall, Derived, Base, types::pure1854>::value
			);
		}

		if constexpr (compare::flipGravity<Derived, Base, types::pure1856>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::flipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::flipGravity", 
				(void*)addresses::address1856(), 
				(void*)wrap::flipGravity<Membercall, Derived, Base, types::pure1856>::value
			);
		}

		if constexpr (compare::incrementJumps<Derived, Base, types::pure1866>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::incrementJumps", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::incrementJumps", 
				(void*)addresses::address1866(), 
				(void*)wrap::incrementJumps<Thiscall, Derived, Base, types::pure1866>::value
			);
		}

		if constexpr (compare::playBurstEffect<Derived, Base, types::pure1881>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playBurstEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::playBurstEffect", 
				(void*)addresses::address1881(), 
				(void*)wrap::playBurstEffect<Thiscall, Derived, Base, types::pure1881>::value
			);
		}

		if constexpr (compare::playDeathEffect<Derived, Base, types::pure1882>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playDeathEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::playDeathEffect", 
				(void*)addresses::address1882(), 
				(void*)wrap::playDeathEffect<Thiscall, Derived, Base, types::pure1882>::value
			);
		}

		if constexpr (compare::playerDestroyed<Derived, Base, types::pure1884>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playerDestroyed", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::playerDestroyed", 
				(void*)addresses::address1884(), 
				(void*)wrap::playerDestroyed<Membercall, Derived, Base, types::pure1884>::value
			);
		}

		if constexpr (compare::playerIsFalling<Derived, Base, types::pure1885>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playerIsFalling", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::playerIsFalling", 
				(void*)addresses::address1885(), 
				(void*)wrap::playerIsFalling<Thiscall, Derived, Base, types::pure1885>::value
			);
		}

		if constexpr (compare::pushButton<Derived, Base, types::pure1892>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::pushButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::pushButton", 
				(void*)addresses::address1892(), 
				(void*)wrap::pushButton<Membercall, Derived, Base, types::pure1892>::value
			);
		}

		if constexpr (compare::releaseButton<Derived, Base, types::pure1895>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::releaseButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::releaseButton", 
				(void*)addresses::address1895(), 
				(void*)wrap::releaseButton<Membercall, Derived, Base, types::pure1895>::value
			);
		}

		if constexpr (compare::ringJump<Derived, Base, types::pure1903>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::ringJump", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::ringJump", 
				(void*)addresses::address1903(), 
				(void*)wrap::ringJump<Membercall, Derived, Base, types::pure1903>::value
			);
		}

		if constexpr (compare::runNormalRotation<Derived, Base, types::pure1906>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runNormalRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::runNormalRotation", 
				(void*)addresses::address1906(), 
				(void*)wrap::runNormalRotation<Thiscall, Derived, Base, types::pure1906>::value
			);
		}

		if constexpr (compare::spiderTestJump<Derived, Base, types::pure1920>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spiderTestJump", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::spiderTestJump", 
				(void*)addresses::address1920(), 
				(void*)wrap::spiderTestJump<Membercall, Derived, Base, types::pure1920>::value
			);
		}

		if constexpr (compare::toggleBirdMode<Derived, Base, types::pure1928>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleBirdMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::toggleBirdMode", 
				(void*)addresses::address1928(), 
				(void*)wrap::toggleBirdMode<Membercall, Derived, Base, types::pure1928>::value
			);
		}

		if constexpr (compare::toggleDartMode<Derived, Base, types::pure1929>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleDartMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::toggleDartMode", 
				(void*)addresses::address1929(), 
				(void*)wrap::toggleDartMode<Membercall, Derived, Base, types::pure1929>::value
			);
		}

		if constexpr (compare::toggleFlyMode<Derived, Base, types::pure1930>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleFlyMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::toggleFlyMode", 
				(void*)addresses::address1930(), 
				(void*)wrap::toggleFlyMode<Membercall, Derived, Base, types::pure1930>::value
			);
		}

		if constexpr (compare::toggleGhostEffect<Derived, Base, types::pure1931>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleGhostEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::toggleGhostEffect", 
				(void*)addresses::address1931(), 
				(void*)wrap::toggleGhostEffect<Membercall, Derived, Base, types::pure1931>::value
			);
		}

		if constexpr (compare::togglePlayerScale<Derived, Base, types::pure1932>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::togglePlayerScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::togglePlayerScale", 
				(void*)addresses::address1932(), 
				(void*)wrap::togglePlayerScale<Membercall, Derived, Base, types::pure1932>::value
			);
		}

		if constexpr (compare::toggleRobotMode<Derived, Base, types::pure1933>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleRobotMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::toggleRobotMode", 
				(void*)addresses::address1933(), 
				(void*)wrap::toggleRobotMode<Membercall, Derived, Base, types::pure1933>::value
			);
		}

		if constexpr (compare::toggleRollMode<Derived, Base, types::pure1934>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleRollMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::toggleRollMode", 
				(void*)addresses::address1934(), 
				(void*)wrap::toggleRollMode<Membercall, Derived, Base, types::pure1934>::value
			);
		}

		if constexpr (compare::toggleSpiderMode<Derived, Base, types::pure1935>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleSpiderMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::toggleSpiderMode", 
				(void*)addresses::address1935(), 
				(void*)wrap::toggleSpiderMode<Membercall, Derived, Base, types::pure1935>::value
			);
		}

		if constexpr (compare::updateTimeMod<Derived, Base, types::pure1968>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateTimeMod", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateTimeMod", 
				(void*)addresses::address1968(), 
				(void*)wrap::updateTimeMod<Membercall, Derived, Base, types::pure1968>::value
			);
		}

		if constexpr (compare::runRotateAction<Derived, Base, types::pure1972>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runRotateAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::runRotateAction", 
				(void*)addresses::address1972(), 
				(void*)wrap::runRotateAction<Thiscall, Derived, Base, types::pure1972>::value
			);
		}

		if constexpr (compare::runBallRotation<Derived, Base, types::pure1973>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runBallRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::runBallRotation", 
				(void*)addresses::address1973(), 
				(void*)wrap::runBallRotation<Thiscall, Derived, Base, types::pure1973>::value
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
			Interface::get()->addHook(
				"cocos2d::CCActionTween::create", 
				(void*)addresses::address1(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1>::value
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

		if constexpr (compare::onGLFWMouseCallBack<Derived, Base, types::pure98>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEGLView::onGLFWMouseCallBack", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCEGLView::onGLFWMouseCallBack", 
				(void*)addresses::address98(), 
				(void*)wrap::onGLFWMouseCallBack<Membercall, Derived, Base, types::pure98>::value
			);
		}

		if constexpr (compare::swapBuffers<Derived, Base, types::pure99>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEGLView::swapBuffers", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCEGLView::swapBuffers", 
				(void*)addresses::address99(), 
				(void*)wrap::swapBuffers<Thiscall, Derived, Base, types::pure99>::value
			);
		}

		if constexpr (compare::updateWindow<Derived, Base, types::pure100>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEGLView::updateWindow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCEGLView::updateWindow", 
				(void*)addresses::address100(), 
				(void*)wrap::updateWindow<Membercall, Derived, Base, types::pure100>::value
			);
		}

		if constexpr (compare::toggleFullScreen<Derived, Base, types::pure101>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEGLView::toggleFullScreen", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCEGLView::toggleFullScreen", 
				(void*)addresses::address101(), 
				(void*)wrap::toggleFullScreen<Membercall, Derived, Base, types::pure101>::value
			);
		}

		if constexpr (compare::pollEvents<Derived, Base, types::pure102>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEGLView::pollEvents", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCEGLView::pollEvents", 
				(void*)addresses::address102(), 
				(void*)wrap::pollEvents<Thiscall, Derived, Base, types::pure102>::value
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

		if constexpr (compare::sharedFileUtils<Derived, Base, types::pure105>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCFileUtils::sharedFileUtils", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCFileUtils::sharedFileUtils", 
				(void*)addresses::address105(), 
				(void*)wrap::sharedFileUtils<Cdecl, Derived, Base, types::pure105>::value
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
			Interface::get()->addHook(
				"cocos2d::CCAnimate::create", 
				(void*)addresses::address2(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure2>::value
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

		if constexpr (compare::createWithTexture<Derived, Base, types::pure488>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrame::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSpriteFrame::createWithTexture", 
				(void*)addresses::address488(), 
				(void*)wrap::createWithTexture<Optcall, Derived, Base, types::pure488>::value
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure489>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrame::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSpriteFrame::createWithTexture", 
				(void*)addresses::address489(), 
				(void*)wrap::createWithTexture<Optcall, Derived, Base, types::pure489>::value
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

		if constexpr (compare::clear<Derived, Base, types::pure85>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::clear", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDrawNode::clear", 
				(void*)addresses::address85(), 
				(void*)wrap::clear<Thiscall, Derived, Base, types::pure85>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure86>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDrawNode::create", 
				(void*)addresses::address86(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure86>::value
			);
		}

		if constexpr (compare::drawPolygon<Derived, Base, types::pure87>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::drawPolygon", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDrawNode::drawPolygon", 
				(void*)addresses::address87(), 
				(void*)wrap::drawPolygon<Membercall, Derived, Base, types::pure87>::value
			);
		}

		if constexpr (compare::drawSegment<Derived, Base, types::pure88>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::drawSegment", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDrawNode::drawSegment", 
				(void*)addresses::address88(), 
				(void*)wrap::drawSegment<Membercall, Derived, Base, types::pure88>::value
			);
		}

		if constexpr (compare::getBlendFunc<Derived, Base, types::pure89>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::getBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDrawNode::getBlendFunc", 
				(void*)addresses::address89(), 
				(void*)wrap::getBlendFunc<Thiscall, Derived, Base, types::pure89>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure90>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDrawNode::init", 
				(void*)addresses::address90(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure90>::value
			);
		}

		if constexpr (compare::setBlendFunc<Derived, Base, types::pure91>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::setBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDrawNode::setBlendFunc", 
				(void*)addresses::address91(), 
				(void*)wrap::setBlendFunc<Membercall, Derived, Base, types::pure91>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure92>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDrawNode::draw", 
				(void*)addresses::address92(), 
				(void*)wrap::draw<Thiscall, Derived, Base, types::pure92>::value
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

		if constexpr (compare::create<Derived, Base, types::pure28>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::create", 
				(void*)addresses::address28(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure28>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure29>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::create", 
				(void*)addresses::address29(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure29>::value
			);
		}

		if constexpr (compare::getAlphaThreshold<Derived, Base, types::pure30>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::getAlphaThreshold", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::getAlphaThreshold", 
				(void*)addresses::address30(), 
				(void*)wrap::getAlphaThreshold<Thiscall, Derived, Base, types::pure30>::value
			);
		}

		if constexpr (compare::getStencil<Derived, Base, types::pure31>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::getStencil", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::getStencil", 
				(void*)addresses::address31(), 
				(void*)wrap::getStencil<Thiscall, Derived, Base, types::pure31>::value
			);
		}

		if constexpr (compare::isInverted<Derived, Base, types::pure32>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::isInverted", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::isInverted", 
				(void*)addresses::address32(), 
				(void*)wrap::isInverted<Thiscall, Derived, Base, types::pure32>::value
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure33>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::onEnter", 
				(void*)addresses::address33(), 
				(void*)wrap::onEnter<Thiscall, Derived, Base, types::pure33>::value
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure34>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::onEnterTransitionDidFinish", 
				(void*)addresses::address34(), 
				(void*)wrap::onEnterTransitionDidFinish<Thiscall, Derived, Base, types::pure34>::value
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure35>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::onExit", 
				(void*)addresses::address35(), 
				(void*)wrap::onExit<Thiscall, Derived, Base, types::pure35>::value
			);
		}

		if constexpr (compare::onExitTransitionDidStart<Derived, Base, types::pure36>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onExitTransitionDidStart", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::onExitTransitionDidStart", 
				(void*)addresses::address36(), 
				(void*)wrap::onExitTransitionDidStart<Thiscall, Derived, Base, types::pure36>::value
			);
		}

		if constexpr (compare::setAlphaThreshold<Derived, Base, types::pure37>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::setAlphaThreshold", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::setAlphaThreshold", 
				(void*)addresses::address37(), 
				(void*)wrap::setAlphaThreshold<Membercall, Derived, Base, types::pure37>::value
			);
		}

		if constexpr (compare::setInverted<Derived, Base, types::pure38>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::setInverted", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::setInverted", 
				(void*)addresses::address38(), 
				(void*)wrap::setInverted<Membercall, Derived, Base, types::pure38>::value
			);
		}

		if constexpr (compare::setStencil<Derived, Base, types::pure39>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::setStencil", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::setStencil", 
				(void*)addresses::address39(), 
				(void*)wrap::setStencil<Membercall, Derived, Base, types::pure39>::value
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure40>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::visit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCClippingNode::visit", 
				(void*)addresses::address40(), 
				(void*)wrap::visit<Thiscall, Derived, Base, types::pure40>::value
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

		if constexpr (compare::init<Derived, Base, types::pure374>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::init", 
				(void*)addresses::address374(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure374>::value
			);
		}

		if constexpr (compare::getOpacity<Derived, Base, types::pure375>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::getOpacity", 
				(void*)addresses::address375(), 
				(void*)wrap::getOpacity<Thiscall, Derived, Base, types::pure375>::value
			);
		}

		if constexpr (compare::getDisplayedOpacity<Derived, Base, types::pure376>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::getDisplayedOpacity", 
				(void*)addresses::address376(), 
				(void*)wrap::getDisplayedOpacity<Thiscall, Derived, Base, types::pure376>::value
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure377>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::setOpacity", 
				(void*)addresses::address377(), 
				(void*)wrap::setOpacity<Thiscall, Derived, Base, types::pure377>::value
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure378>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::updateDisplayedOpacity", 
				(void*)addresses::address378(), 
				(void*)wrap::updateDisplayedOpacity<Thiscall, Derived, Base, types::pure378>::value
			);
		}

		if constexpr (compare::isCascadeOpacityEnabled<Derived, Base, types::pure379>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::isCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::isCascadeOpacityEnabled", 
				(void*)addresses::address379(), 
				(void*)wrap::isCascadeOpacityEnabled<Thiscall, Derived, Base, types::pure379>::value
			);
		}

		if constexpr (compare::setCascadeOpacityEnabled<Derived, Base, types::pure380>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::setCascadeOpacityEnabled", 
				(void*)addresses::address380(), 
				(void*)wrap::setCascadeOpacityEnabled<Thiscall, Derived, Base, types::pure380>::value
			);
		}

		if constexpr (compare::getColor<Derived, Base, types::pure381>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::getColor", 
				(void*)addresses::address381(), 
				(void*)wrap::getColor<Thiscall, Derived, Base, types::pure381>::value
			);
		}

		if constexpr (compare::getDisplayedColor<Derived, Base, types::pure382>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::getDisplayedColor", 
				(void*)addresses::address382(), 
				(void*)wrap::getDisplayedColor<Thiscall, Derived, Base, types::pure382>::value
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure383>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::setColor", 
				(void*)addresses::address383(), 
				(void*)wrap::setColor<Thiscall, Derived, Base, types::pure383>::value
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure384>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::updateDisplayedColor", 
				(void*)addresses::address384(), 
				(void*)wrap::updateDisplayedColor<Thiscall, Derived, Base, types::pure384>::value
			);
		}

		if constexpr (compare::isCascadeColorEnabled<Derived, Base, types::pure385>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::isCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::isCascadeColorEnabled", 
				(void*)addresses::address385(), 
				(void*)wrap::isCascadeColorEnabled<Thiscall, Derived, Base, types::pure385>::value
			);
		}

		if constexpr (compare::setCascadeColorEnabled<Derived, Base, types::pure386>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::setCascadeColorEnabled", 
				(void*)addresses::address386(), 
				(void*)wrap::setCascadeColorEnabled<Thiscall, Derived, Base, types::pure386>::value
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

		if constexpr (compare::create<Derived, Base, types::pure27>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCCallFunc::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCCallFunc::create", 
				(void*)addresses::address27(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure27>::value
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

		if constexpr (compare::create<Derived, Base, types::pure830>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CreatorLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CreatorLayer::create", 
				(void*)addresses::address830(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure830>::value
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

		if constexpr (compare::create<Derived, Base, types::pure409>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRotateBy::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCRotateBy::create", 
				(void*)addresses::address409(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure409>::value
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
			Interface::get()->addHook(
				"cocos2d::CCApplication::getCurrentLanguage", 
				(void*)addresses::address4(), 
				(void*)wrap::getCurrentLanguage<Thiscall, Derived, Base, types::pure4>::value
			);
		}

		if constexpr (compare::getTargetPlatform<Derived, Base, types::pure5>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::getTargetPlatform", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCApplication::getTargetPlatform", 
				(void*)addresses::address5(), 
				(void*)wrap::getTargetPlatform<Thiscall, Derived, Base, types::pure5>::value
			);
		}

		if constexpr (compare::openURL<Derived, Base, types::pure6>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::openURL", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCApplication::openURL", 
				(void*)addresses::address6(), 
				(void*)wrap::openURL<Thiscall, Derived, Base, types::pure6>::value
			);
		}

		if constexpr (compare::setAnimationInterval<Derived, Base, types::pure7>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::setAnimationInterval", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCApplication::setAnimationInterval", 
				(void*)addresses::address7(), 
				(void*)wrap::setAnimationInterval<Thiscall, Derived, Base, types::pure7>::value
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

		if constexpr (compare::create<Derived, Base, types::pure408>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRepeatForever::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCRepeatForever::create", 
				(void*)addresses::address408(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure408>::value
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

		if constexpr (compare::draw<Derived, Base, types::pure866>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DrawGridLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DrawGridLayer::draw", 
				(void*)addresses::address866(), 
				(void*)wrap::draw<Thiscall, Derived, Base, types::pure866>::value
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
			Interface::get()->addHook(
				"cocos2d::CCAnimation::createWithSpriteFrames", 
				(void*)addresses::address3(), 
				(void*)wrap::createWithSpriteFrames<Optcall, Derived, Base, types::pure3>::value
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
			Interface::get()->addHook(
				"cocos2d::CCArray::addObject", 
				(void*)addresses::address9(), 
				(void*)wrap::addObject<Membercall, Derived, Base, types::pure9>::value
			);
		}

		if constexpr (compare::addObjectNew<Derived, Base, types::pure10>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::addObjectNew", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::addObjectNew", 
				(void*)addresses::address10(), 
				(void*)wrap::addObjectNew<Membercall, Derived, Base, types::pure10>::value
			);
		}

		if constexpr (compare::addObjectsFromArray<Derived, Base, types::pure11>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::addObjectsFromArray", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::addObjectsFromArray", 
				(void*)addresses::address11(), 
				(void*)wrap::addObjectsFromArray<Membercall, Derived, Base, types::pure11>::value
			);
		}

		if constexpr (compare::containsObject<Derived, Base, types::pure12>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::containsObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::containsObject", 
				(void*)addresses::address12(), 
				(void*)wrap::containsObject<Membercall, Derived, Base, types::pure12>::value
			);
		}

		if constexpr (compare::count<Derived, Base, types::pure13>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::count", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::count", 
				(void*)addresses::address13(), 
				(void*)wrap::count<Thiscall, Derived, Base, types::pure13>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure14>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::create", 
				(void*)addresses::address14(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure14>::value
			);
		}

		if constexpr (compare::createWithObject<Derived, Base, types::pure15>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::createWithObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::createWithObject", 
				(void*)addresses::address15(), 
				(void*)wrap::createWithObject<Optcall, Derived, Base, types::pure15>::value
			);
		}

		if constexpr (compare::fastRemoveObject<Derived, Base, types::pure16>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::fastRemoveObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::fastRemoveObject", 
				(void*)addresses::address16(), 
				(void*)wrap::fastRemoveObject<Membercall, Derived, Base, types::pure16>::value
			);
		}

		if constexpr (compare::fastRemoveObjectAtIndex<Derived, Base, types::pure17>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::fastRemoveObjectAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::fastRemoveObjectAtIndex", 
				(void*)addresses::address17(), 
				(void*)wrap::fastRemoveObjectAtIndex<Membercall, Derived, Base, types::pure17>::value
			);
		}

		if constexpr (compare::fastRemoveObjectAtIndexNew<Derived, Base, types::pure18>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::fastRemoveObjectAtIndexNew", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::fastRemoveObjectAtIndexNew", 
				(void*)addresses::address18(), 
				(void*)wrap::fastRemoveObjectAtIndexNew<Membercall, Derived, Base, types::pure18>::value
			);
		}

		if constexpr (compare::lastObject<Derived, Base, types::pure19>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::lastObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::lastObject", 
				(void*)addresses::address19(), 
				(void*)wrap::lastObject<Thiscall, Derived, Base, types::pure19>::value
			);
		}

		if constexpr (compare::objectAtIndex<Derived, Base, types::pure20>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::objectAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::objectAtIndex", 
				(void*)addresses::address20(), 
				(void*)wrap::objectAtIndex<Membercall, Derived, Base, types::pure20>::value
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure21>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::removeAllObjects", 
				(void*)addresses::address21(), 
				(void*)wrap::removeAllObjects<Thiscall, Derived, Base, types::pure21>::value
			);
		}

		if constexpr (compare::removeLastObject<Derived, Base, types::pure22>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeLastObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::removeLastObject", 
				(void*)addresses::address22(), 
				(void*)wrap::removeLastObject<Membercall, Derived, Base, types::pure22>::value
			);
		}

		if constexpr (compare::removeObject<Derived, Base, types::pure23>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::removeObject", 
				(void*)addresses::address23(), 
				(void*)wrap::removeObject<Membercall, Derived, Base, types::pure23>::value
			);
		}

		if constexpr (compare::removeObjectAtIndex<Derived, Base, types::pure24>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeObjectAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::removeObjectAtIndex", 
				(void*)addresses::address24(), 
				(void*)wrap::removeObjectAtIndex<Membercall, Derived, Base, types::pure24>::value
			);
		}

		if constexpr (compare::stringAtIndex<Derived, Base, types::pure25>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::stringAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCArray::stringAtIndex", 
				(void*)addresses::address25(), 
				(void*)wrap::stringAtIndex<Membercall, Derived, Base, types::pure25>::value
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

		if constexpr (compare::create<Derived, Base, types::pure124>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLabelBMFont::create", 
				(void*)addresses::address124(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure124>::value
			);
		}

		if constexpr (compare::limitLabelWidth<Derived, Base, types::pure125>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::limitLabelWidth", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLabelBMFont::limitLabelWidth", 
				(void*)addresses::address125(), 
				(void*)wrap::limitLabelWidth<Membercall, Derived, Base, types::pure125>::value
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure126>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLabelBMFont::setScale", 
				(void*)addresses::address126(), 
				(void*)wrap::setScale<Membercall, Derived, Base, types::pure126>::value
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure127>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::setString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLabelBMFont::setString", 
				(void*)addresses::address127(), 
				(void*)wrap::setString<Membercall, Derived, Base, types::pure127>::value
			);
		}

		if constexpr (compare::setAnchorPoint<Derived, Base, types::pure128>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::setAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLabelBMFont::setAnchorPoint", 
				(void*)addresses::address128(), 
				(void*)wrap::setAnchorPoint<Membercall, Derived, Base, types::pure128>::value
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
			Interface::get()->addHook(
				"cocos2d::CCBezierTo::create", 
				(void*)addresses::address26(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure26>::value
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

		if constexpr (compare::attachWithIME<Derived, Base, types::pure107>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDelegate::attachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCIMEDelegate::attachWithIME", 
				(void*)addresses::address107(), 
				(void*)wrap::attachWithIME<Thiscall, Derived, Base, types::pure107>::value
			);
		}

		if constexpr (compare::detachWithIME<Derived, Base, types::pure108>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDelegate::detachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCIMEDelegate::detachWithIME", 
				(void*)addresses::address108(), 
				(void*)wrap::detachWithIME<Thiscall, Derived, Base, types::pure108>::value
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

		if constexpr (compare::create<Derived, Base, types::pure41>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDelayTime::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDelayTime::create", 
				(void*)addresses::address41(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure41>::value
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

		if constexpr (compare::allKeys<Derived, Base, types::pure42>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::allKeys", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::allKeys", 
				(void*)addresses::address42(), 
				(void*)wrap::allKeys<Thiscall, Derived, Base, types::pure42>::value
			);
		}

		if constexpr (compare::count<Derived, Base, types::pure43>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::count", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::count", 
				(void*)addresses::address43(), 
				(void*)wrap::count<Thiscall, Derived, Base, types::pure43>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure44>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::create", 
				(void*)addresses::address44(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure44>::value
			);
		}

		if constexpr (compare::objectForKey<Derived, Base, types::pure45>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::objectForKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::objectForKey", 
				(void*)addresses::address45(), 
				(void*)wrap::objectForKey<Membercall, Derived, Base, types::pure45>::value
			);
		}

		if constexpr (compare::objectForKey<Derived, Base, types::pure46>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::objectForKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::objectForKey", 
				(void*)addresses::address46(), 
				(void*)wrap::objectForKey<Membercall, Derived, Base, types::pure46>::value
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure47>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::removeAllObjects", 
				(void*)addresses::address47(), 
				(void*)wrap::removeAllObjects<Thiscall, Derived, Base, types::pure47>::value
			);
		}

		if constexpr (compare::removeObjectForKey<Derived, Base, types::pure48>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::removeObjectForKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::removeObjectForKey", 
				(void*)addresses::address48(), 
				(void*)wrap::removeObjectForKey<Membercall, Derived, Base, types::pure48>::value
			);
		}

		if constexpr (compare::setObject<Derived, Base, types::pure49>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::setObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::setObject", 
				(void*)addresses::address49(), 
				(void*)wrap::setObject<Membercall, Derived, Base, types::pure49>::value
			);
		}

		if constexpr (compare::setObject<Derived, Base, types::pure50>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::setObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::setObject", 
				(void*)addresses::address50(), 
				(void*)wrap::setObject<Membercall, Derived, Base, types::pure50>::value
			);
		}

		if constexpr (compare::valueForKey<Derived, Base, types::pure51>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::valueForKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::valueForKey", 
				(void*)addresses::address51(), 
				(void*)wrap::valueForKey<Membercall, Derived, Base, types::pure51>::value
			);
		}

		if constexpr (compare::valueForKey<Derived, Base, types::pure52>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::valueForKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDictionary::valueForKey", 
				(void*)addresses::address52(), 
				(void*)wrap::valueForKey<Membercall, Derived, Base, types::pure52>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1597>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSearchLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelSearchLayer::create", 
				(void*)addresses::address1597(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure1597>::value
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

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure493>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCStandardTouchHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCStandardTouchHandler::handlerWithDelegate", 
				(void*)addresses::address493(), 
				(void*)wrap::handlerWithDelegate<Optcall, Derived, Base, types::pure493>::value
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure494>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCStandardTouchHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCStandardTouchHandler::initWithDelegate", 
				(void*)addresses::address494(), 
				(void*)wrap::initWithDelegate<Thiscall, Derived, Base, types::pure494>::value
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

		if constexpr (compare::updateTexture<Derived, Base, types::pure129>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelTTF::updateTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLabelTTF::updateTexture", 
				(void*)addresses::address129(), 
				(void*)wrap::updateTexture<Thiscall, Derived, Base, types::pure129>::value
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure130>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelTTF::setString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLabelTTF::setString", 
				(void*)addresses::address130(), 
				(void*)wrap::setString<Thiscall, Derived, Base, types::pure130>::value
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

		if constexpr (compare::addSpriteFramesWithFile<Derived, Base, types::pure490>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile", 
				(void*)addresses::address490(), 
				(void*)wrap::addSpriteFramesWithFile<Membercall, Derived, Base, types::pure490>::value
			);
		}

		if constexpr (compare::sharedSpriteFrameCache<Derived, Base, types::pure491>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache", 
				(void*)addresses::address491(), 
				(void*)wrap::sharedSpriteFrameCache<Cdecl, Derived, Base, types::pure491>::value
			);
		}

		if constexpr (compare::spriteFrameByName<Derived, Base, types::pure492>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrameCache::spriteFrameByName", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSpriteFrameCache::spriteFrameByName", 
				(void*)addresses::address492(), 
				(void*)wrap::spriteFrameByName<Membercall, Derived, Base, types::pure492>::value
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

		if constexpr (compare::init<Derived, Base, types::pure54>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::init", 
				(void*)addresses::address54(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure54>::value
			);
		}

		if constexpr (compare::getScheduler<Derived, Base, types::pure55>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::getScheduler", 
				(void*)addresses::address55(), 
				(void*)wrap::getScheduler<Thiscall, Derived, Base, types::pure55>::value
			);
		}

		if constexpr (compare::setScheduler<Derived, Base, types::pure56>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::setScheduler", 
				(void*)addresses::address56(), 
				(void*)wrap::setScheduler<Thiscall, Derived, Base, types::pure56>::value
			);
		}

		if constexpr (compare::getActionManager<Derived, Base, types::pure57>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::getActionManager", 
				(void*)addresses::address57(), 
				(void*)wrap::getActionManager<Thiscall, Derived, Base, types::pure57>::value
			);
		}

		if constexpr (compare::setActionManager<Derived, Base, types::pure58>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::setActionManager", 
				(void*)addresses::address58(), 
				(void*)wrap::setActionManager<Thiscall, Derived, Base, types::pure58>::value
			);
		}

		if constexpr (compare::getTouchDispatcher<Derived, Base, types::pure59>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::getTouchDispatcher", 
				(void*)addresses::address59(), 
				(void*)wrap::getTouchDispatcher<Thiscall, Derived, Base, types::pure59>::value
			);
		}

		if constexpr (compare::setTouchDispatcher<Derived, Base, types::pure60>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::setTouchDispatcher", 
				(void*)addresses::address60(), 
				(void*)wrap::setTouchDispatcher<Thiscall, Derived, Base, types::pure60>::value
			);
		}

		if constexpr (compare::getKeypadDispatcher<Derived, Base, types::pure61>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getKeypadDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::getKeypadDispatcher", 
				(void*)addresses::address61(), 
				(void*)wrap::getKeypadDispatcher<Thiscall, Derived, Base, types::pure61>::value
			);
		}

		if constexpr (compare::setKeypadDispatcher<Derived, Base, types::pure62>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setKeypadDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::setKeypadDispatcher", 
				(void*)addresses::address62(), 
				(void*)wrap::setKeypadDispatcher<Thiscall, Derived, Base, types::pure62>::value
			);
		}

		if constexpr (compare::getKeyboardDispatcher<Derived, Base, types::pure63>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getKeyboardDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::getKeyboardDispatcher", 
				(void*)addresses::address63(), 
				(void*)wrap::getKeyboardDispatcher<Thiscall, Derived, Base, types::pure63>::value
			);
		}

		if constexpr (compare::setKeyboardDispatcher<Derived, Base, types::pure64>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setKeyboardDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::setKeyboardDispatcher", 
				(void*)addresses::address64(), 
				(void*)wrap::setKeyboardDispatcher<Thiscall, Derived, Base, types::pure64>::value
			);
		}

		if constexpr (compare::getMouseDispatcher<Derived, Base, types::pure65>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getMouseDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::getMouseDispatcher", 
				(void*)addresses::address65(), 
				(void*)wrap::getMouseDispatcher<Thiscall, Derived, Base, types::pure65>::value
			);
		}

		if constexpr (compare::setMouseDispatcher<Derived, Base, types::pure66>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setMouseDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::setMouseDispatcher", 
				(void*)addresses::address66(), 
				(void*)wrap::setMouseDispatcher<Thiscall, Derived, Base, types::pure66>::value
			);
		}

		if constexpr (compare::getAccelerometer<Derived, Base, types::pure67>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getAccelerometer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::getAccelerometer", 
				(void*)addresses::address67(), 
				(void*)wrap::getAccelerometer<Thiscall, Derived, Base, types::pure67>::value
			);
		}

		if constexpr (compare::setAccelerometer<Derived, Base, types::pure68>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setAccelerometer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::setAccelerometer", 
				(void*)addresses::address68(), 
				(void*)wrap::setAccelerometer<Thiscall, Derived, Base, types::pure68>::value
			);
		}

		if constexpr (compare::getDeltaTime<Derived, Base, types::pure69>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getDeltaTime", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::getDeltaTime", 
				(void*)addresses::address69(), 
				(void*)wrap::getDeltaTime<Thiscall, Derived, Base, types::pure69>::value
			);
		}

		if constexpr (compare::getSceneDelegate<Derived, Base, types::pure70>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getSceneDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::getSceneDelegate", 
				(void*)addresses::address70(), 
				(void*)wrap::getSceneDelegate<Thiscall, Derived, Base, types::pure70>::value
			);
		}

		if constexpr (compare::setSceneDelegate<Derived, Base, types::pure71>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setSceneDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::setSceneDelegate", 
				(void*)addresses::address71(), 
				(void*)wrap::setSceneDelegate<Thiscall, Derived, Base, types::pure71>::value
			);
		}

		if constexpr (compare::getWinSize<Derived, Base, types::pure72>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getWinSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::getWinSize", 
				(void*)addresses::address72(), 
				(void*)wrap::getWinSize<Thiscall, Derived, Base, types::pure72>::value
			);
		}

		if constexpr (compare::pushScene<Derived, Base, types::pure73>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::pushScene", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::pushScene", 
				(void*)addresses::address73(), 
				(void*)wrap::pushScene<Membercall, Derived, Base, types::pure73>::value
			);
		}

		if constexpr (compare::replaceScene<Derived, Base, types::pure74>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::replaceScene", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::replaceScene", 
				(void*)addresses::address74(), 
				(void*)wrap::replaceScene<Membercall, Derived, Base, types::pure74>::value
			);
		}

		if constexpr (compare::resetSmoothFixCounter<Derived, Base, types::pure75>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::resetSmoothFixCounter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::resetSmoothFixCounter", 
				(void*)addresses::address75(), 
				(void*)wrap::resetSmoothFixCounter<Thiscall, Derived, Base, types::pure75>::value
			);
		}

		if constexpr (compare::sharedDirector<Derived, Base, types::pure76>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::sharedDirector", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::sharedDirector", 
				(void*)addresses::address76(), 
				(void*)wrap::sharedDirector<Cdecl, Derived, Base, types::pure76>::value
			);
		}

		if constexpr (compare::calculateDeltaTime<Derived, Base, types::pure77>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::calculateDeltaTime", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::calculateDeltaTime", 
				(void*)addresses::address77(), 
				(void*)wrap::calculateDeltaTime<Thiscall, Derived, Base, types::pure77>::value
			);
		}

		if constexpr (compare::calculateMPF<Derived, Base, types::pure78>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::calculateMPF", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::calculateMPF", 
				(void*)addresses::address78(), 
				(void*)wrap::calculateMPF<Thiscall, Derived, Base, types::pure78>::value
			);
		}

		if constexpr (compare::convertToGL<Derived, Base, types::pure79>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::convertToGL", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::convertToGL", 
				(void*)addresses::address79(), 
				(void*)wrap::convertToGL<Membercall, Derived, Base, types::pure79>::value
			);
		}

		if constexpr (compare::drawScene<Derived, Base, types::pure80>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::drawScene", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::drawScene", 
				(void*)addresses::address80(), 
				(void*)wrap::drawScene<Thiscall, Derived, Base, types::pure80>::value
			);
		}

		if constexpr (compare::setNextScene<Derived, Base, types::pure81>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setNextScene", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::setNextScene", 
				(void*)addresses::address81(), 
				(void*)wrap::setNextScene<Thiscall, Derived, Base, types::pure81>::value
			);
		}

		if constexpr (compare::showStats<Derived, Base, types::pure82>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::showStats", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::showStats", 
				(void*)addresses::address82(), 
				(void*)wrap::showStats<Thiscall, Derived, Base, types::pure82>::value
			);
		}

		if constexpr (compare::updateContentScale<Derived, Base, types::pure83>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::updateContentScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::updateContentScale", 
				(void*)addresses::address83(), 
				(void*)wrap::updateContentScale<Membercall, Derived, Base, types::pure83>::value
			);
		}

		if constexpr (compare::popSceneWithTransition<Derived, Base, types::pure84>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::popSceneWithTransition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::popSceneWithTransition", 
				(void*)addresses::address84(), 
				(void*)wrap::popSceneWithTransition<Membercall, Derived, Base, types::pure84>::value
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

		if constexpr (compare::create<Derived, Base, types::pure104>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCFadeTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCFadeTo::create", 
				(void*)addresses::address104(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure104>::value
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

		if constexpr (compare::create<Derived, Base, types::pure94>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEaseElasticOut::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCEaseElasticOut::create", 
				(void*)addresses::address94(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure94>::value
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

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure252>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMouseHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMouseHandler::handlerWithDelegate", 
				(void*)addresses::address252(), 
				(void*)wrap::handlerWithDelegate<Optcall, Derived, Base, types::pure252>::value
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure253>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMouseHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMouseHandler::initWithDelegate", 
				(void*)addresses::address253(), 
				(void*)wrap::initWithDelegate<Thiscall, Derived, Base, types::pure253>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1608>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingCircle::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LoadingCircle::create", 
				(void*)addresses::address1608(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure1608>::value
			);
		}

		if constexpr (compare::show<Derived, Base, types::pure1609>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingCircle::show", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LoadingCircle::show", 
				(void*)addresses::address1609(), 
				(void*)wrap::show<Thiscall, Derived, Base, types::pure1609>::value
			);
		}

		if constexpr (compare::fadeAndRemove<Derived, Base, types::pure1610>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingCircle::fadeAndRemove", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LoadingCircle::fadeAndRemove", 
				(void*)addresses::address1610(), 
				(void*)wrap::fadeAndRemove<Thiscall, Derived, Base, types::pure1610>::value
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

		if constexpr (compare::initWithImageData<Derived, Base, types::pure114>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCImage::initWithImageData", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCImage::initWithImageData", 
				(void*)addresses::address114(), 
				(void*)wrap::initWithImageData<Membercall, Derived, Base, types::pure114>::value
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

		if constexpr (compare::create<Derived, Base, types::pure95>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEaseIn::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCEaseIn::create", 
				(void*)addresses::address95(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure95>::value
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

		if constexpr (compare::create<Derived, Base, types::pure96>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEaseInOut::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCEaseInOut::create", 
				(void*)addresses::address96(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure96>::value
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

		if constexpr (compare::create<Derived, Base, types::pure97>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEaseOut::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCEaseOut::create", 
				(void*)addresses::address97(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure97>::value
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

		if constexpr (compare::activate<Derived, Base, types::pure228>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::activate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemLabel::activate", 
				(void*)addresses::address228(), 
				(void*)wrap::activate<Thiscall, Derived, Base, types::pure228>::value
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure229>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::selected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemLabel::selected", 
				(void*)addresses::address229(), 
				(void*)wrap::selected<Thiscall, Derived, Base, types::pure229>::value
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure230>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemLabel::unselected", 
				(void*)addresses::address230(), 
				(void*)wrap::unselected<Thiscall, Derived, Base, types::pure230>::value
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure231>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemLabel::setEnabled", 
				(void*)addresses::address231(), 
				(void*)wrap::setEnabled<Thiscall, Derived, Base, types::pure231>::value
			);
		}

		if constexpr (compare::getDisabledColor<Derived, Base, types::pure232>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::getDisabledColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemLabel::getDisabledColor", 
				(void*)addresses::address232(), 
				(void*)wrap::getDisabledColor<Thiscall, Derived, Base, types::pure232>::value
			);
		}

		if constexpr (compare::setDisabledColor<Derived, Base, types::pure233>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::setDisabledColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemLabel::setDisabledColor", 
				(void*)addresses::address233(), 
				(void*)wrap::setDisabledColor<Thiscall, Derived, Base, types::pure233>::value
			);
		}

		if constexpr (compare::getLabel<Derived, Base, types::pure234>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::getLabel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemLabel::getLabel", 
				(void*)addresses::address234(), 
				(void*)wrap::getLabel<Thiscall, Derived, Base, types::pure234>::value
			);
		}

		if constexpr (compare::setLabel<Derived, Base, types::pure235>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::setLabel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemLabel::setLabel", 
				(void*)addresses::address235(), 
				(void*)wrap::setLabel<Thiscall, Derived, Base, types::pure235>::value
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

		if constexpr (compare::create<Derived, Base, types::pure720>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemSpriteExtra::create", 
				(void*)addresses::address720(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure720>::value
			);
		}

		if constexpr (compare::setSizeMult<Derived, Base, types::pure721>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::setSizeMult", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemSpriteExtra::setSizeMult", 
				(void*)addresses::address721(), 
				(void*)wrap::setSizeMult<Membercall, Derived, Base, types::pure721>::value
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure722>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemSpriteExtra::constructor", 
				(void*)addresses::address722(), 
				(void*)wrap::constructor<Thiscall, Derived, Base, types::pure722>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure723>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemSpriteExtra::destructor", 
				(void*)addresses::address723(), 
				(void*)wrap::destructor<Thiscall, Derived, Base, types::pure723>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure724>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemSpriteExtra::init", 
				(void*)addresses::address724(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure724>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure725>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemSpriteExtra::init", 
				(void*)addresses::address725(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure725>::value
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure726>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::activate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemSpriteExtra::activate", 
				(void*)addresses::address726(), 
				(void*)wrap::activate<Thiscall, Derived, Base, types::pure726>::value
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure727>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::selected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemSpriteExtra::selected", 
				(void*)addresses::address727(), 
				(void*)wrap::selected<Thiscall, Derived, Base, types::pure727>::value
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure728>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemSpriteExtra::unselected", 
				(void*)addresses::address728(), 
				(void*)wrap::unselected<Thiscall, Derived, Base, types::pure728>::value
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

		if constexpr (compare::create<Derived, Base, types::pure103>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCFadeOut::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCFadeOut::create", 
				(void*)addresses::address103(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure103>::value
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

		if constexpr (compare::create<Derived, Base, types::pure106>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCHide::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCHide::create", 
				(void*)addresses::address106(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure106>::value
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

		if constexpr (compare::updateBlending<Derived, Base, types::pure818>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateBlending", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ColorChannelSprite::updateBlending", 
				(void*)addresses::address818(), 
				(void*)wrap::updateBlending<Membercall, Derived, Base, types::pure818>::value
			);
		}

		if constexpr (compare::updateCopyLabel<Derived, Base, types::pure819>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateCopyLabel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ColorChannelSprite::updateCopyLabel", 
				(void*)addresses::address819(), 
				(void*)wrap::updateCopyLabel<Membercall, Derived, Base, types::pure819>::value
			);
		}

		if constexpr (compare::updateOpacity<Derived, Base, types::pure820>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ColorChannelSprite::updateOpacity", 
				(void*)addresses::address820(), 
				(void*)wrap::updateOpacity<Membercall, Derived, Base, types::pure820>::value
			);
		}

		if constexpr (compare::updateValues<Derived, Base, types::pure821>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateValues", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ColorChannelSprite::updateValues", 
				(void*)addresses::address821(), 
				(void*)wrap::updateValues<Membercall, Derived, Base, types::pure821>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure822>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ColorChannelSprite::create", 
				(void*)addresses::address822(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure822>::value
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

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure420>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSet::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSet::acceptVisitor", 
				(void*)addresses::address420(), 
				(void*)wrap::acceptVisitor<Thiscall, Derived, Base, types::pure420>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2065>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TableView::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TableView::create", 
				(void*)addresses::address2065(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure2065>::value
			);
		}

		if constexpr (compare::reloadData<Derived, Base, types::pure2066>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TableView::reloadData", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TableView::reloadData", 
				(void*)addresses::address2066(), 
				(void*)wrap::reloadData<Thiscall, Derived, Base, types::pure2066>::value
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

		if constexpr (compare::loadPage<Derived, Base, types::pure640>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementsLayer::loadPage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementsLayer::loadPage", 
				(void*)addresses::address640(), 
				(void*)wrap::loadPage<Membercall, Derived, Base, types::pure640>::value
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

		if constexpr (compare::sharedDispatcher<Derived, Base, types::pure109>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDispatcher::sharedDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCIMEDispatcher::sharedDispatcher", 
				(void*)addresses::address109(), 
				(void*)wrap::sharedDispatcher<Cdecl, Derived, Base, types::pure109>::value
			);
		}

		if constexpr (compare::addDelegate<Derived, Base, types::pure110>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDispatcher::addDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCIMEDispatcher::addDelegate", 
				(void*)addresses::address110(), 
				(void*)wrap::addDelegate<Membercall, Derived, Base, types::pure110>::value
			);
		}

		if constexpr (compare::removeDelegate<Derived, Base, types::pure111>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDispatcher::removeDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCIMEDispatcher::removeDelegate", 
				(void*)addresses::address111(), 
				(void*)wrap::removeDelegate<Membercall, Derived, Base, types::pure111>::value
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

		if constexpr (compare::init<Derived, Base, types::pure1509>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"InfoLayer::init", 
				(void*)addresses::address1509(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure1509>::value
			);
		}

		if constexpr (compare::setupCommentsBrowser<Derived, Base, types::pure1510>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoLayer::setupCommentsBrowser", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"InfoLayer::setupCommentsBrowser", 
				(void*)addresses::address1510(), 
				(void*)wrap::setupCommentsBrowser<Membercall, Derived, Base, types::pure1510>::value
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

		if constexpr (compare::create<Derived, Base, types::pure169>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::create", 
				(void*)addresses::address169(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure169>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure170>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::draw", 
				(void*)addresses::address170(), 
				(void*)wrap::draw<Thiscall, Derived, Base, types::pure170>::value
			);
		}

		if constexpr (compare::getBlendFunc<Derived, Base, types::pure171>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::getBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::getBlendFunc", 
				(void*)addresses::address171(), 
				(void*)wrap::getBlendFunc<Thiscall, Derived, Base, types::pure171>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure172>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::init", 
				(void*)addresses::address172(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure172>::value
			);
		}

		if constexpr (compare::initWithColor<Derived, Base, types::pure173>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::initWithColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::initWithColor", 
				(void*)addresses::address173(), 
				(void*)wrap::initWithColor<Membercall, Derived, Base, types::pure173>::value
			);
		}

		if constexpr (compare::initWithColor<Derived, Base, types::pure174>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::initWithColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::initWithColor", 
				(void*)addresses::address174(), 
				(void*)wrap::initWithColor<Membercall, Derived, Base, types::pure174>::value
			);
		}

		if constexpr (compare::setBlendFunc<Derived, Base, types::pure175>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::setBlendFunc", 
				(void*)addresses::address175(), 
				(void*)wrap::setBlendFunc<Membercall, Derived, Base, types::pure175>::value
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure176>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::setColor", 
				(void*)addresses::address176(), 
				(void*)wrap::setColor<Membercall, Derived, Base, types::pure176>::value
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure177>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::setContentSize", 
				(void*)addresses::address177(), 
				(void*)wrap::setContentSize<Membercall, Derived, Base, types::pure177>::value
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure178>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::setOpacity", 
				(void*)addresses::address178(), 
				(void*)wrap::setOpacity<Membercall, Derived, Base, types::pure178>::value
			);
		}

		if constexpr (compare::updateColor<Derived, Base, types::pure179>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::updateColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::updateColor", 
				(void*)addresses::address179(), 
				(void*)wrap::updateColor<Thiscall, Derived, Base, types::pure179>::value
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

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure120>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeypadHandler::handlerWithDelegate", 
				(void*)addresses::address120(), 
				(void*)wrap::handlerWithDelegate<Optcall, Derived, Base, types::pure120>::value
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure121>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeypadHandler::initWithDelegate", 
				(void*)addresses::address121(), 
				(void*)wrap::initWithDelegate<Thiscall, Derived, Base, types::pure121>::value
			);
		}

		if constexpr (compare::getDelegate<Derived, Base, types::pure123>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::getDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeypadHandler::getDelegate", 
				(void*)addresses::address123(), 
				(void*)wrap::getDelegate<Thiscall, Derived, Base, types::pure123>::value
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

		if constexpr (compare::dispatchKeyboardMSG<Derived, Base, types::pure115>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG", 
				(void*)addresses::address115(), 
				(void*)wrap::dispatchKeyboardMSG<Membercall, Derived, Base, types::pure115>::value
			);
		}

		if constexpr (compare::keyToString<Derived, Base, types::pure116>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardDispatcher::keyToString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeyboardDispatcher::keyToString", 
				(void*)addresses::address116(), 
				(void*)wrap::keyToString<Membercall, Derived, Base, types::pure116>::value
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

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure117>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeyboardHandler::handlerWithDelegate", 
				(void*)addresses::address117(), 
				(void*)wrap::handlerWithDelegate<Optcall, Derived, Base, types::pure117>::value
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure118>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeyboardHandler::initWithDelegate", 
				(void*)addresses::address118(), 
				(void*)wrap::initWithDelegate<Thiscall, Derived, Base, types::pure118>::value
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

		if constexpr (compare::listButtonBarSwitchedPage<Derived, Base, types::pure1495>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GaragePage::listButtonBarSwitchedPage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GaragePage::listButtonBarSwitchedPage", 
				(void*)addresses::address1495(), 
				(void*)wrap::listButtonBarSwitchedPage<Membercall, Derived, Base, types::pure1495>::value
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure1496>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GaragePage::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GaragePage::constructor", 
				(void*)addresses::address1496(), 
				(void*)wrap::constructor<Thiscall, Derived, Base, types::pure1496>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1497>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GaragePage::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GaragePage::init", 
				(void*)addresses::address1497(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure1497>::value
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

		if constexpr (compare::create<Derived, Base, types::pure735>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemToggler::create", 
				(void*)addresses::address735(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure735>::value
			);
		}

		if constexpr (compare::setSizeMult<Derived, Base, types::pure736>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::setSizeMult", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemToggler::setSizeMult", 
				(void*)addresses::address736(), 
				(void*)wrap::setSizeMult<Membercall, Derived, Base, types::pure736>::value
			);
		}

		if constexpr (compare::toggle<Derived, Base, types::pure737>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::toggle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemToggler::toggle", 
				(void*)addresses::address737(), 
				(void*)wrap::toggle<Membercall, Derived, Base, types::pure737>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure738>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemToggler::init", 
				(void*)addresses::address738(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure738>::value
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure739>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::activate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemToggler::activate", 
				(void*)addresses::address739(), 
				(void*)wrap::activate<Thiscall, Derived, Base, types::pure739>::value
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure740>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::selected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemToggler::selected", 
				(void*)addresses::address740(), 
				(void*)wrap::selected<Thiscall, Derived, Base, types::pure740>::value
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure741>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemToggler::unselected", 
				(void*)addresses::address741(), 
				(void*)wrap::unselected<Thiscall, Derived, Base, types::pure741>::value
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure742>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemToggler::setEnabled", 
				(void*)addresses::address742(), 
				(void*)wrap::setEnabled<Membercall, Derived, Base, types::pure742>::value
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

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure132>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::ccTouchBegan", 
				(void*)addresses::address132(), 
				(void*)wrap::ccTouchBegan<Thiscall, Derived, Base, types::pure132>::value
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure133>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::ccTouchCancelled", 
				(void*)addresses::address133(), 
				(void*)wrap::ccTouchCancelled<Thiscall, Derived, Base, types::pure133>::value
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure134>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::ccTouchEnded", 
				(void*)addresses::address134(), 
				(void*)wrap::ccTouchEnded<Thiscall, Derived, Base, types::pure134>::value
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure135>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::ccTouchMoved", 
				(void*)addresses::address135(), 
				(void*)wrap::ccTouchMoved<Thiscall, Derived, Base, types::pure135>::value
			);
		}

		if constexpr (compare::ccTouchesBegan<Derived, Base, types::pure136>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::ccTouchesBegan", 
				(void*)addresses::address136(), 
				(void*)wrap::ccTouchesBegan<Thiscall, Derived, Base, types::pure136>::value
			);
		}

		if constexpr (compare::ccTouchesCancelled<Derived, Base, types::pure137>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::ccTouchesCancelled", 
				(void*)addresses::address137(), 
				(void*)wrap::ccTouchesCancelled<Thiscall, Derived, Base, types::pure137>::value
			);
		}

		if constexpr (compare::ccTouchesEnded<Derived, Base, types::pure138>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesEnded", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::ccTouchesEnded", 
				(void*)addresses::address138(), 
				(void*)wrap::ccTouchesEnded<Thiscall, Derived, Base, types::pure138>::value
			);
		}

		if constexpr (compare::ccTouchesMoved<Derived, Base, types::pure139>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesMoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::ccTouchesMoved", 
				(void*)addresses::address139(), 
				(void*)wrap::ccTouchesMoved<Thiscall, Derived, Base, types::pure139>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure140>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::create", 
				(void*)addresses::address140(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure140>::value
			);
		}

		if constexpr (compare::didAccelerate<Derived, Base, types::pure141>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::didAccelerate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::didAccelerate", 
				(void*)addresses::address141(), 
				(void*)wrap::didAccelerate<Thiscall, Derived, Base, types::pure141>::value
			);
		}

		if constexpr (compare::getTouchMode<Derived, Base, types::pure142>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::getTouchMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::getTouchMode", 
				(void*)addresses::address142(), 
				(void*)wrap::getTouchMode<Thiscall, Derived, Base, types::pure142>::value
			);
		}

		if constexpr (compare::getTouchPriority<Derived, Base, types::pure143>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::getTouchPriority", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::getTouchPriority", 
				(void*)addresses::address143(), 
				(void*)wrap::getTouchPriority<Thiscall, Derived, Base, types::pure143>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure144>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::init", 
				(void*)addresses::address144(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure144>::value
			);
		}

		if constexpr (compare::isAccelerometerEnabled<Derived, Base, types::pure145>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isAccelerometerEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::isAccelerometerEnabled", 
				(void*)addresses::address145(), 
				(void*)wrap::isAccelerometerEnabled<Thiscall, Derived, Base, types::pure145>::value
			);
		}

		if constexpr (compare::isKeyboardEnabled<Derived, Base, types::pure146>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isKeyboardEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::isKeyboardEnabled", 
				(void*)addresses::address146(), 
				(void*)wrap::isKeyboardEnabled<Thiscall, Derived, Base, types::pure146>::value
			);
		}

		if constexpr (compare::isKeypadEnabled<Derived, Base, types::pure147>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isKeypadEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::isKeypadEnabled", 
				(void*)addresses::address147(), 
				(void*)wrap::isKeypadEnabled<Thiscall, Derived, Base, types::pure147>::value
			);
		}

		if constexpr (compare::isMouseEnabled<Derived, Base, types::pure148>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isMouseEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::isMouseEnabled", 
				(void*)addresses::address148(), 
				(void*)wrap::isMouseEnabled<Thiscall, Derived, Base, types::pure148>::value
			);
		}

		if constexpr (compare::isTouchEnabled<Derived, Base, types::pure149>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isTouchEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::isTouchEnabled", 
				(void*)addresses::address149(), 
				(void*)wrap::isTouchEnabled<Thiscall, Derived, Base, types::pure149>::value
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure150>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::keyBackClicked", 
				(void*)addresses::address150(), 
				(void*)wrap::keyBackClicked<Thiscall, Derived, Base, types::pure150>::value
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure151>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::keyDown", 
				(void*)addresses::address151(), 
				(void*)wrap::keyDown<Thiscall, Derived, Base, types::pure151>::value
			);
		}

		if constexpr (compare::keyMenuClicked<Derived, Base, types::pure152>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::keyMenuClicked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::keyMenuClicked", 
				(void*)addresses::address152(), 
				(void*)wrap::keyMenuClicked<Thiscall, Derived, Base, types::pure152>::value
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure153>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::onEnter", 
				(void*)addresses::address153(), 
				(void*)wrap::onEnter<Thiscall, Derived, Base, types::pure153>::value
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure154>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::onEnterTransitionDidFinish", 
				(void*)addresses::address154(), 
				(void*)wrap::onEnterTransitionDidFinish<Thiscall, Derived, Base, types::pure154>::value
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure155>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::onExit", 
				(void*)addresses::address155(), 
				(void*)wrap::onExit<Thiscall, Derived, Base, types::pure155>::value
			);
		}

		if constexpr (compare::registerScriptTouchHandler<Derived, Base, types::pure156>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::registerScriptTouchHandler", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::registerScriptTouchHandler", 
				(void*)addresses::address156(), 
				(void*)wrap::registerScriptTouchHandler<Thiscall, Derived, Base, types::pure156>::value
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure157>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::registerWithTouchDispatcher", 
				(void*)addresses::address157(), 
				(void*)wrap::registerWithTouchDispatcher<Thiscall, Derived, Base, types::pure157>::value
			);
		}

		if constexpr (compare::setAccelerometerEnabled<Derived, Base, types::pure158>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setAccelerometerEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::setAccelerometerEnabled", 
				(void*)addresses::address158(), 
				(void*)wrap::setAccelerometerEnabled<Thiscall, Derived, Base, types::pure158>::value
			);
		}

		if constexpr (compare::setAccelerometerInterval<Derived, Base, types::pure159>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setAccelerometerInterval", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::setAccelerometerInterval", 
				(void*)addresses::address159(), 
				(void*)wrap::setAccelerometerInterval<Thiscall, Derived, Base, types::pure159>::value
			);
		}

		if constexpr (compare::setKeyboardEnabled<Derived, Base, types::pure160>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setKeyboardEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::setKeyboardEnabled", 
				(void*)addresses::address160(), 
				(void*)wrap::setKeyboardEnabled<Thiscall, Derived, Base, types::pure160>::value
			);
		}

		if constexpr (compare::setKeypadEnabled<Derived, Base, types::pure161>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setKeypadEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::setKeypadEnabled", 
				(void*)addresses::address161(), 
				(void*)wrap::setKeypadEnabled<Thiscall, Derived, Base, types::pure161>::value
			);
		}

		if constexpr (compare::setMouseEnabled<Derived, Base, types::pure162>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setMouseEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::setMouseEnabled", 
				(void*)addresses::address162(), 
				(void*)wrap::setMouseEnabled<Thiscall, Derived, Base, types::pure162>::value
			);
		}

		if constexpr (compare::setTouchEnabled<Derived, Base, types::pure163>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setTouchEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::setTouchEnabled", 
				(void*)addresses::address163(), 
				(void*)wrap::setTouchEnabled<Thiscall, Derived, Base, types::pure163>::value
			);
		}

		if constexpr (compare::setTouchMode<Derived, Base, types::pure164>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setTouchMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::setTouchMode", 
				(void*)addresses::address164(), 
				(void*)wrap::setTouchMode<Thiscall, Derived, Base, types::pure164>::value
			);
		}

		if constexpr (compare::setTouchPriority<Derived, Base, types::pure165>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setTouchPriority", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::setTouchPriority", 
				(void*)addresses::address165(), 
				(void*)wrap::setTouchPriority<Thiscall, Derived, Base, types::pure165>::value
			);
		}

		if constexpr (compare::unregisterScriptTouchHandler<Derived, Base, types::pure166>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::unregisterScriptTouchHandler", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::unregisterScriptTouchHandler", 
				(void*)addresses::address166(), 
				(void*)wrap::unregisterScriptTouchHandler<Thiscall, Derived, Base, types::pure166>::value
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

		if constexpr (compare::init<Derived, Base, types::pure182>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::init", 
				(void*)addresses::address182(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure182>::value
			);
		}

		if constexpr (compare::getOpacity<Derived, Base, types::pure183>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::getOpacity", 
				(void*)addresses::address183(), 
				(void*)wrap::getOpacity<Thiscall, Derived, Base, types::pure183>::value
			);
		}

		if constexpr (compare::getDisplayedOpacity<Derived, Base, types::pure184>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::getDisplayedOpacity", 
				(void*)addresses::address184(), 
				(void*)wrap::getDisplayedOpacity<Thiscall, Derived, Base, types::pure184>::value
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure185>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::setOpacity", 
				(void*)addresses::address185(), 
				(void*)wrap::setOpacity<Thiscall, Derived, Base, types::pure185>::value
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure186>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::updateDisplayedOpacity", 
				(void*)addresses::address186(), 
				(void*)wrap::updateDisplayedOpacity<Thiscall, Derived, Base, types::pure186>::value
			);
		}

		if constexpr (compare::isCascadeOpacityEnabled<Derived, Base, types::pure187>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::isCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::isCascadeOpacityEnabled", 
				(void*)addresses::address187(), 
				(void*)wrap::isCascadeOpacityEnabled<Thiscall, Derived, Base, types::pure187>::value
			);
		}

		if constexpr (compare::setCascadeOpacityEnabled<Derived, Base, types::pure188>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::setCascadeOpacityEnabled", 
				(void*)addresses::address188(), 
				(void*)wrap::setCascadeOpacityEnabled<Thiscall, Derived, Base, types::pure188>::value
			);
		}

		if constexpr (compare::getColor<Derived, Base, types::pure189>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::getColor", 
				(void*)addresses::address189(), 
				(void*)wrap::getColor<Thiscall, Derived, Base, types::pure189>::value
			);
		}

		if constexpr (compare::getDisplayedColor<Derived, Base, types::pure190>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::getDisplayedColor", 
				(void*)addresses::address190(), 
				(void*)wrap::getDisplayedColor<Thiscall, Derived, Base, types::pure190>::value
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure191>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::setColor", 
				(void*)addresses::address191(), 
				(void*)wrap::setColor<Thiscall, Derived, Base, types::pure191>::value
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure192>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::updateDisplayedColor", 
				(void*)addresses::address192(), 
				(void*)wrap::updateDisplayedColor<Thiscall, Derived, Base, types::pure192>::value
			);
		}

		if constexpr (compare::isCascadeColorEnabled<Derived, Base, types::pure193>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::isCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::isCascadeColorEnabled", 
				(void*)addresses::address193(), 
				(void*)wrap::isCascadeColorEnabled<Thiscall, Derived, Base, types::pure193>::value
			);
		}

		if constexpr (compare::setCascadeColorEnabled<Derived, Base, types::pure194>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::setCascadeColorEnabled", 
				(void*)addresses::address194(), 
				(void*)wrap::setCascadeColorEnabled<Thiscall, Derived, Base, types::pure194>::value
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

		if constexpr (compare::resetSystem<Derived, Base, types::pure398>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCParticleSystem::resetSystem", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCParticleSystem::resetSystem", 
				(void*)addresses::address398(), 
				(void*)wrap::resetSystem<Thiscall, Derived, Base, types::pure398>::value
			);
		}

		if constexpr (compare::resumeSystem<Derived, Base, types::pure399>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCParticleSystem::resumeSystem", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCParticleSystem::resumeSystem", 
				(void*)addresses::address399(), 
				(void*)wrap::resumeSystem<Thiscall, Derived, Base, types::pure399>::value
			);
		}

		if constexpr (compare::stopSystem<Derived, Base, types::pure400>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCParticleSystem::stopSystem", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCParticleSystem::stopSystem", 
				(void*)addresses::address400(), 
				(void*)wrap::stopSystem<Thiscall, Derived, Base, types::pure400>::value
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

		if constexpr (compare::alignItemsHorizontallyWithPadding<Derived, Base, types::pure196>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::alignItemsHorizontallyWithPadding", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::alignItemsHorizontallyWithPadding", 
				(void*)addresses::address196(), 
				(void*)wrap::alignItemsHorizontallyWithPadding<Membercall, Derived, Base, types::pure196>::value
			);
		}

		if constexpr (compare::alignItemsVerticallyWithPadding<Derived, Base, types::pure197>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::alignItemsVerticallyWithPadding", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::alignItemsVerticallyWithPadding", 
				(void*)addresses::address197(), 
				(void*)wrap::alignItemsVerticallyWithPadding<Membercall, Derived, Base, types::pure197>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure198>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::create", 
				(void*)addresses::address198(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure198>::value
			);
		}

		if constexpr (compare::createWithArray<Derived, Base, types::pure199>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::createWithArray", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::createWithArray", 
				(void*)addresses::address199(), 
				(void*)wrap::createWithArray<Optcall, Derived, Base, types::pure199>::value
			);
		}

		if constexpr (compare::createWithItem<Derived, Base, types::pure200>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::createWithItem", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::createWithItem", 
				(void*)addresses::address200(), 
				(void*)wrap::createWithItem<Optcall, Derived, Base, types::pure200>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure201>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::addChild", 
				(void*)addresses::address201(), 
				(void*)wrap::addChild<Thiscall, Derived, Base, types::pure201>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure202>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::addChild", 
				(void*)addresses::address202(), 
				(void*)wrap::addChild<Thiscall, Derived, Base, types::pure202>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure203>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::addChild", 
				(void*)addresses::address203(), 
				(void*)wrap::addChild<Thiscall, Derived, Base, types::pure203>::value
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure204>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::ccTouchBegan", 
				(void*)addresses::address204(), 
				(void*)wrap::ccTouchBegan<Thiscall, Derived, Base, types::pure204>::value
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure205>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::ccTouchMoved", 
				(void*)addresses::address205(), 
				(void*)wrap::ccTouchMoved<Thiscall, Derived, Base, types::pure205>::value
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure206>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::ccTouchEnded", 
				(void*)addresses::address206(), 
				(void*)wrap::ccTouchEnded<Thiscall, Derived, Base, types::pure206>::value
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure207>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::ccTouchCancelled", 
				(void*)addresses::address207(), 
				(void*)wrap::ccTouchCancelled<Thiscall, Derived, Base, types::pure207>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure208>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::init", 
				(void*)addresses::address208(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure208>::value
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure209>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::registerWithTouchDispatcher", 
				(void*)addresses::address209(), 
				(void*)wrap::registerWithTouchDispatcher<Thiscall, Derived, Base, types::pure209>::value
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure210>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::onExit", 
				(void*)addresses::address210(), 
				(void*)wrap::onExit<Thiscall, Derived, Base, types::pure210>::value
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure211>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::removeChild", 
				(void*)addresses::address211(), 
				(void*)wrap::removeChild<Thiscall, Derived, Base, types::pure211>::value
			);
		}

		if constexpr (compare::initWithArray<Derived, Base, types::pure212>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::initWithArray", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenu::initWithArray", 
				(void*)addresses::address212(), 
				(void*)wrap::initWithArray<Membercall, Derived, Base, types::pure212>::value
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

		if constexpr (compare::activate<Derived, Base, types::pure217>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::activate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::activate", 
				(void*)addresses::address217(), 
				(void*)wrap::activate<Thiscall, Derived, Base, types::pure217>::value
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure218>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::selected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::selected", 
				(void*)addresses::address218(), 
				(void*)wrap::selected<Thiscall, Derived, Base, types::pure218>::value
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure219>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::unselected", 
				(void*)addresses::address219(), 
				(void*)wrap::unselected<Thiscall, Derived, Base, types::pure219>::value
			);
		}

		if constexpr (compare::registerScriptTapHandler<Derived, Base, types::pure220>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::registerScriptTapHandler", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::registerScriptTapHandler", 
				(void*)addresses::address220(), 
				(void*)wrap::registerScriptTapHandler<Thiscall, Derived, Base, types::pure220>::value
			);
		}

		if constexpr (compare::unregisterScriptTapHandler<Derived, Base, types::pure221>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::unregisterScriptTapHandler", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::unregisterScriptTapHandler", 
				(void*)addresses::address221(), 
				(void*)wrap::unregisterScriptTapHandler<Thiscall, Derived, Base, types::pure221>::value
			);
		}

		if constexpr (compare::isEnabled<Derived, Base, types::pure222>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::isEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::isEnabled", 
				(void*)addresses::address222(), 
				(void*)wrap::isEnabled<Thiscall, Derived, Base, types::pure222>::value
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure223>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::setEnabled", 
				(void*)addresses::address223(), 
				(void*)wrap::setEnabled<Thiscall, Derived, Base, types::pure223>::value
			);
		}

		if constexpr (compare::isSelected<Derived, Base, types::pure224>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::isSelected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::isSelected", 
				(void*)addresses::address224(), 
				(void*)wrap::isSelected<Thiscall, Derived, Base, types::pure224>::value
			);
		}

		if constexpr (compare::rect<Derived, Base, types::pure225>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::rect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::rect", 
				(void*)addresses::address225(), 
				(void*)wrap::rect<Thiscall, Derived, Base, types::pure225>::value
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

		if constexpr (compare::sharedState<Derived, Base, types::pure1637>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MusicDownloadManager::sharedState", 
				(void*)addresses::address1637(), 
				(void*)wrap::sharedState<Cdecl, Derived, Base, types::pure1637>::value
			);
		}

		if constexpr (compare::pathForSong<Derived, Base, types::pure1638>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::pathForSong", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MusicDownloadManager::pathForSong", 
				(void*)addresses::address1638(), 
				(void*)wrap::pathForSong<Membercall, Derived, Base, types::pure1638>::value
			);
		}

		if constexpr (compare::getDownloadedSongs<Derived, Base, types::pure1639>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::getDownloadedSongs", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MusicDownloadManager::getDownloadedSongs", 
				(void*)addresses::address1639(), 
				(void*)wrap::getDownloadedSongs<Thiscall, Derived, Base, types::pure1639>::value
			);
		}

		if constexpr (compare::songStateChanged<Derived, Base, types::pure1640>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::songStateChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MusicDownloadManager::songStateChanged", 
				(void*)addresses::address1640(), 
				(void*)wrap::songStateChanged<Thiscall, Derived, Base, types::pure1640>::value
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

		if constexpr (compare::isEqual<Derived, Base, types::pure496>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::isEqual", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCString::isEqual", 
				(void*)addresses::address496(), 
				(void*)wrap::isEqual<Thiscall, Derived, Base, types::pure496>::value
			);
		}

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure497>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCString::acceptVisitor", 
				(void*)addresses::address497(), 
				(void*)wrap::acceptVisitor<Thiscall, Derived, Base, types::pure497>::value
			);
		}

		if constexpr (compare::copyWithZone<Derived, Base, types::pure498>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::copyWithZone", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCString::copyWithZone", 
				(void*)addresses::address498(), 
				(void*)wrap::copyWithZone<Thiscall, Derived, Base, types::pure498>::value
			);
		}

		if constexpr (compare::boolValue<Derived, Base, types::pure499>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::boolValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCString::boolValue", 
				(void*)addresses::address499(), 
				(void*)wrap::boolValue<Thiscall, Derived, Base, types::pure499>::value
			);
		}

		if constexpr (compare::doubleValue<Derived, Base, types::pure500>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::doubleValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCString::doubleValue", 
				(void*)addresses::address500(), 
				(void*)wrap::doubleValue<Thiscall, Derived, Base, types::pure500>::value
			);
		}

		if constexpr (compare::floatValue<Derived, Base, types::pure501>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::floatValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCString::floatValue", 
				(void*)addresses::address501(), 
				(void*)wrap::floatValue<Thiscall, Derived, Base, types::pure501>::value
			);
		}

		if constexpr (compare::getCString<Derived, Base, types::pure502>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::getCString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCString::getCString", 
				(void*)addresses::address502(), 
				(void*)wrap::getCString<Thiscall, Derived, Base, types::pure502>::value
			);
		}

		if constexpr (compare::intValue<Derived, Base, types::pure503>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::intValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCString::intValue", 
				(void*)addresses::address503(), 
				(void*)wrap::intValue<Thiscall, Derived, Base, types::pure503>::value
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

		if constexpr (compare::init<Derived, Base, types::pure226>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemImage::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemImage::init", 
				(void*)addresses::address226(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure226>::value
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

		if constexpr (compare::selected<Derived, Base, types::pure236>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::selected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::selected", 
				(void*)addresses::address236(), 
				(void*)wrap::selected<Thiscall, Derived, Base, types::pure236>::value
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure237>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::unselected", 
				(void*)addresses::address237(), 
				(void*)wrap::unselected<Thiscall, Derived, Base, types::pure237>::value
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure238>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::setEnabled", 
				(void*)addresses::address238(), 
				(void*)wrap::setEnabled<Thiscall, Derived, Base, types::pure238>::value
			);
		}

		if constexpr (compare::getNormalImage<Derived, Base, types::pure239>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::getNormalImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::getNormalImage", 
				(void*)addresses::address239(), 
				(void*)wrap::getNormalImage<Thiscall, Derived, Base, types::pure239>::value
			);
		}

		if constexpr (compare::setNormalImage<Derived, Base, types::pure240>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setNormalImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::setNormalImage", 
				(void*)addresses::address240(), 
				(void*)wrap::setNormalImage<Thiscall, Derived, Base, types::pure240>::value
			);
		}

		if constexpr (compare::getSelectedImage<Derived, Base, types::pure241>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::getSelectedImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::getSelectedImage", 
				(void*)addresses::address241(), 
				(void*)wrap::getSelectedImage<Thiscall, Derived, Base, types::pure241>::value
			);
		}

		if constexpr (compare::setSelectedImage<Derived, Base, types::pure242>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setSelectedImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::setSelectedImage", 
				(void*)addresses::address242(), 
				(void*)wrap::setSelectedImage<Thiscall, Derived, Base, types::pure242>::value
			);
		}

		if constexpr (compare::getDisabledImage<Derived, Base, types::pure243>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::getDisabledImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::getDisabledImage", 
				(void*)addresses::address243(), 
				(void*)wrap::getDisabledImage<Thiscall, Derived, Base, types::pure243>::value
			);
		}

		if constexpr (compare::setDisabledImage<Derived, Base, types::pure244>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setDisabledImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::setDisabledImage", 
				(void*)addresses::address244(), 
				(void*)wrap::setDisabledImage<Thiscall, Derived, Base, types::pure244>::value
			);
		}

		if constexpr (compare::updateImagesVisibility<Derived, Base, types::pure245>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::updateImagesVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::updateImagesVisibility", 
				(void*)addresses::address245(), 
				(void*)wrap::updateImagesVisibility<Thiscall, Derived, Base, types::pure245>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure246>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::create", 
				(void*)addresses::address246(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure246>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure247>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::create", 
				(void*)addresses::address247(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure247>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure248>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::create", 
				(void*)addresses::address248(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure248>::value
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

		if constexpr (compare::create<Derived, Base, types::pure256>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMoveTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMoveTo::create", 
				(void*)addresses::address256(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure256>::value
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

		if constexpr (compare::reset<Derived, Base, types::pure249>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::reset", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMotionStreak::reset", 
				(void*)addresses::address249(), 
				(void*)wrap::reset<Thiscall, Derived, Base, types::pure249>::value
			);
		}

		if constexpr (compare::resumeStroke<Derived, Base, types::pure250>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::resumeStroke", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMotionStreak::resumeStroke", 
				(void*)addresses::address250(), 
				(void*)wrap::resumeStroke<Thiscall, Derived, Base, types::pure250>::value
			);
		}

		if constexpr (compare::stopStroke<Derived, Base, types::pure251>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::stopStroke", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMotionStreak::stopStroke", 
				(void*)addresses::address251(), 
				(void*)wrap::stopStroke<Thiscall, Derived, Base, types::pure251>::value
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

		if constexpr (compare::create<Derived, Base, types::pure255>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMoveBy::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMoveBy::create", 
				(void*)addresses::address255(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure255>::value
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

		if constexpr (compare::_setZOrder<Derived, Base, types::pure258>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::_setZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::_setZOrder", 
				(void*)addresses::address258(), 
				(void*)wrap::_setZOrder<Membercall, Derived, Base, types::pure258>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure259>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::addChild", 
				(void*)addresses::address259(), 
				(void*)wrap::addChild<Membercall, Derived, Base, types::pure259>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure260>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::addChild", 
				(void*)addresses::address260(), 
				(void*)wrap::addChild<Membercall, Derived, Base, types::pure260>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure261>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::addChild", 
				(void*)addresses::address261(), 
				(void*)wrap::addChild<Membercall, Derived, Base, types::pure261>::value
			);
		}

		if constexpr (compare::addComponent<Derived, Base, types::pure262>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addComponent", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::addComponent", 
				(void*)addresses::address262(), 
				(void*)wrap::addComponent<Membercall, Derived, Base, types::pure262>::value
			);
		}

		if constexpr (compare::cleanup<Derived, Base, types::pure263>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::cleanup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::cleanup", 
				(void*)addresses::address263(), 
				(void*)wrap::cleanup<Thiscall, Derived, Base, types::pure263>::value
			);
		}

		if constexpr (compare::convertToNodeSpace<Derived, Base, types::pure264>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::convertToNodeSpace", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::convertToNodeSpace", 
				(void*)addresses::address264(), 
				(void*)wrap::convertToNodeSpace<Membercall, Derived, Base, types::pure264>::value
			);
		}

		if constexpr (compare::convertToWorldSpace<Derived, Base, types::pure265>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::convertToWorldSpace", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::convertToWorldSpace", 
				(void*)addresses::address265(), 
				(void*)wrap::convertToWorldSpace<Membercall, Derived, Base, types::pure265>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure266>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::create", 
				(void*)addresses::address266(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure266>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure267>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::draw", 
				(void*)addresses::address267(), 
				(void*)wrap::draw<Thiscall, Derived, Base, types::pure267>::value
			);
		}

		if constexpr (compare::getActionByTag<Derived, Base, types::pure268>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getActionByTag", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getActionByTag", 
				(void*)addresses::address268(), 
				(void*)wrap::getActionByTag<Membercall, Derived, Base, types::pure268>::value
			);
		}

		if constexpr (compare::getActionManager<Derived, Base, types::pure269>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getActionManager", 
				(void*)addresses::address269(), 
				(void*)wrap::getActionManager<Thiscall, Derived, Base, types::pure269>::value
			);
		}

		if constexpr (compare::getAnchorPoint<Derived, Base, types::pure270>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getAnchorPoint", 
				(void*)addresses::address270(), 
				(void*)wrap::getAnchorPoint<Thiscall, Derived, Base, types::pure270>::value
			);
		}

		if constexpr (compare::getAnchorPointInPoints<Derived, Base, types::pure271>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getAnchorPointInPoints", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getAnchorPointInPoints", 
				(void*)addresses::address271(), 
				(void*)wrap::getAnchorPointInPoints<Thiscall, Derived, Base, types::pure271>::value
			);
		}

		if constexpr (compare::getCamera<Derived, Base, types::pure272>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getCamera", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getCamera", 
				(void*)addresses::address272(), 
				(void*)wrap::getCamera<Thiscall, Derived, Base, types::pure272>::value
			);
		}

		if constexpr (compare::getChildByTag<Derived, Base, types::pure273>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getChildByTag", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getChildByTag", 
				(void*)addresses::address273(), 
				(void*)wrap::getChildByTag<Membercall, Derived, Base, types::pure273>::value
			);
		}

		if constexpr (compare::getChildren<Derived, Base, types::pure274>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getChildren", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getChildren", 
				(void*)addresses::address274(), 
				(void*)wrap::getChildren<Thiscall, Derived, Base, types::pure274>::value
			);
		}

		if constexpr (compare::getChildrenCount<Derived, Base, types::pure275>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getChildrenCount", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getChildrenCount", 
				(void*)addresses::address275(), 
				(void*)wrap::getChildrenCount<Thiscall, Derived, Base, types::pure275>::value
			);
		}

		if constexpr (compare::getContentSize<Derived, Base, types::pure276>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getContentSize", 
				(void*)addresses::address276(), 
				(void*)wrap::getContentSize<Thiscall, Derived, Base, types::pure276>::value
			);
		}

		if constexpr (compare::getGLServerState<Derived, Base, types::pure277>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getGLServerState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getGLServerState", 
				(void*)addresses::address277(), 
				(void*)wrap::getGLServerState<Thiscall, Derived, Base, types::pure277>::value
			);
		}

		if constexpr (compare::getGrid<Derived, Base, types::pure278>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getGrid", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getGrid", 
				(void*)addresses::address278(), 
				(void*)wrap::getGrid<Thiscall, Derived, Base, types::pure278>::value
			);
		}

		if constexpr (compare::getOrderOfArrival<Derived, Base, types::pure279>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getOrderOfArrival", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getOrderOfArrival", 
				(void*)addresses::address279(), 
				(void*)wrap::getOrderOfArrival<Thiscall, Derived, Base, types::pure279>::value
			);
		}

		if constexpr (compare::getParent<Derived, Base, types::pure280>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getParent", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getParent", 
				(void*)addresses::address280(), 
				(void*)wrap::getParent<Thiscall, Derived, Base, types::pure280>::value
			);
		}

		if constexpr (compare::getPosition<Derived, Base, types::pure281>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getPosition", 
				(void*)addresses::address281(), 
				(void*)wrap::getPosition<Thiscall, Derived, Base, types::pure281>::value
			);
		}

		if constexpr (compare::getPosition<Derived, Base, types::pure282>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getPosition", 
				(void*)addresses::address282(), 
				(void*)wrap::getPosition<Membercall, Derived, Base, types::pure282>::value
			);
		}

		if constexpr (compare::getPositionX<Derived, Base, types::pure283>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPositionX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getPositionX", 
				(void*)addresses::address283(), 
				(void*)wrap::getPositionX<Thiscall, Derived, Base, types::pure283>::value
			);
		}

		if constexpr (compare::getPositionY<Derived, Base, types::pure284>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPositionY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getPositionY", 
				(void*)addresses::address284(), 
				(void*)wrap::getPositionY<Thiscall, Derived, Base, types::pure284>::value
			);
		}

		if constexpr (compare::getRotation<Derived, Base, types::pure285>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getRotation", 
				(void*)addresses::address285(), 
				(void*)wrap::getRotation<Thiscall, Derived, Base, types::pure285>::value
			);
		}

		if constexpr (compare::getRotationX<Derived, Base, types::pure286>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getRotationX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getRotationX", 
				(void*)addresses::address286(), 
				(void*)wrap::getRotationX<Thiscall, Derived, Base, types::pure286>::value
			);
		}

		if constexpr (compare::getRotationY<Derived, Base, types::pure287>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getRotationY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getRotationY", 
				(void*)addresses::address287(), 
				(void*)wrap::getRotationY<Thiscall, Derived, Base, types::pure287>::value
			);
		}

		if constexpr (compare::getScale<Derived, Base, types::pure288>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getScale", 
				(void*)addresses::address288(), 
				(void*)wrap::getScale<Thiscall, Derived, Base, types::pure288>::value
			);
		}

		if constexpr (compare::getScaleX<Derived, Base, types::pure289>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getScaleX", 
				(void*)addresses::address289(), 
				(void*)wrap::getScaleX<Thiscall, Derived, Base, types::pure289>::value
			);
		}

		if constexpr (compare::getScaleY<Derived, Base, types::pure290>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getScaleY", 
				(void*)addresses::address290(), 
				(void*)wrap::getScaleY<Thiscall, Derived, Base, types::pure290>::value
			);
		}

		if constexpr (compare::getScaledContentSize<Derived, Base, types::pure291>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScaledContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getScaledContentSize", 
				(void*)addresses::address291(), 
				(void*)wrap::getScaledContentSize<Thiscall, Derived, Base, types::pure291>::value
			);
		}

		if constexpr (compare::getScheduler<Derived, Base, types::pure292>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getScheduler", 
				(void*)addresses::address292(), 
				(void*)wrap::getScheduler<Thiscall, Derived, Base, types::pure292>::value
			);
		}

		if constexpr (compare::getShaderProgram<Derived, Base, types::pure293>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getShaderProgram", 
				(void*)addresses::address293(), 
				(void*)wrap::getShaderProgram<Thiscall, Derived, Base, types::pure293>::value
			);
		}

		if constexpr (compare::getSkewX<Derived, Base, types::pure294>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getSkewX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getSkewX", 
				(void*)addresses::address294(), 
				(void*)wrap::getSkewX<Thiscall, Derived, Base, types::pure294>::value
			);
		}

		if constexpr (compare::getSkewY<Derived, Base, types::pure295>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getSkewY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getSkewY", 
				(void*)addresses::address295(), 
				(void*)wrap::getSkewY<Thiscall, Derived, Base, types::pure295>::value
			);
		}

		if constexpr (compare::getUserData<Derived, Base, types::pure296>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getUserData", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getUserData", 
				(void*)addresses::address296(), 
				(void*)wrap::getUserData<Thiscall, Derived, Base, types::pure296>::value
			);
		}

		if constexpr (compare::getUserObject<Derived, Base, types::pure297>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getUserObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getUserObject", 
				(void*)addresses::address297(), 
				(void*)wrap::getUserObject<Thiscall, Derived, Base, types::pure297>::value
			);
		}

		if constexpr (compare::getVertexZ<Derived, Base, types::pure298>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getVertexZ", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getVertexZ", 
				(void*)addresses::address298(), 
				(void*)wrap::getVertexZ<Thiscall, Derived, Base, types::pure298>::value
			);
		}

		if constexpr (compare::getZOrder<Derived, Base, types::pure299>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::getZOrder", 
				(void*)addresses::address299(), 
				(void*)wrap::getZOrder<Thiscall, Derived, Base, types::pure299>::value
			);
		}

		if constexpr (compare::ignoreAnchorPointForPosition<Derived, Base, types::pure300>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::ignoreAnchorPointForPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::ignoreAnchorPointForPosition", 
				(void*)addresses::address300(), 
				(void*)wrap::ignoreAnchorPointForPosition<Membercall, Derived, Base, types::pure300>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure301>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::init", 
				(void*)addresses::address301(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure301>::value
			);
		}

		if constexpr (compare::isIgnoreAnchorPointForPosition<Derived, Base, types::pure302>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::isIgnoreAnchorPointForPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::isIgnoreAnchorPointForPosition", 
				(void*)addresses::address302(), 
				(void*)wrap::isIgnoreAnchorPointForPosition<Thiscall, Derived, Base, types::pure302>::value
			);
		}

		if constexpr (compare::isRunning<Derived, Base, types::pure303>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::isRunning", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::isRunning", 
				(void*)addresses::address303(), 
				(void*)wrap::isRunning<Thiscall, Derived, Base, types::pure303>::value
			);
		}

		if constexpr (compare::isVisible<Derived, Base, types::pure304>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::isVisible", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::isVisible", 
				(void*)addresses::address304(), 
				(void*)wrap::isVisible<Thiscall, Derived, Base, types::pure304>::value
			);
		}

		if constexpr (compare::nodeToParentTransform<Derived, Base, types::pure305>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::nodeToParentTransform", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::nodeToParentTransform", 
				(void*)addresses::address305(), 
				(void*)wrap::nodeToParentTransform<Thiscall, Derived, Base, types::pure305>::value
			);
		}

		if constexpr (compare::nodeToWorldTransform<Derived, Base, types::pure306>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::nodeToWorldTransform", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::nodeToWorldTransform", 
				(void*)addresses::address306(), 
				(void*)wrap::nodeToWorldTransform<Thiscall, Derived, Base, types::pure306>::value
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure307>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::onEnter", 
				(void*)addresses::address307(), 
				(void*)wrap::onEnter<Thiscall, Derived, Base, types::pure307>::value
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure308>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::onEnterTransitionDidFinish", 
				(void*)addresses::address308(), 
				(void*)wrap::onEnterTransitionDidFinish<Thiscall, Derived, Base, types::pure308>::value
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure309>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::onExit", 
				(void*)addresses::address309(), 
				(void*)wrap::onExit<Thiscall, Derived, Base, types::pure309>::value
			);
		}

		if constexpr (compare::onExitTransitionDidStart<Derived, Base, types::pure310>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onExitTransitionDidStart", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::onExitTransitionDidStart", 
				(void*)addresses::address310(), 
				(void*)wrap::onExitTransitionDidStart<Thiscall, Derived, Base, types::pure310>::value
			);
		}

		if constexpr (compare::parentToNodeTransform<Derived, Base, types::pure311>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::parentToNodeTransform", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::parentToNodeTransform", 
				(void*)addresses::address311(), 
				(void*)wrap::parentToNodeTransform<Thiscall, Derived, Base, types::pure311>::value
			);
		}

		if constexpr (compare::pauseSchedulerAndActions<Derived, Base, types::pure312>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::pauseSchedulerAndActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::pauseSchedulerAndActions", 
				(void*)addresses::address312(), 
				(void*)wrap::pauseSchedulerAndActions<Thiscall, Derived, Base, types::pure312>::value
			);
		}

		if constexpr (compare::registerScriptHandler<Derived, Base, types::pure313>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::registerScriptHandler", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::registerScriptHandler", 
				(void*)addresses::address313(), 
				(void*)wrap::registerScriptHandler<Membercall, Derived, Base, types::pure313>::value
			);
		}

		if constexpr (compare::removeAllChildren<Derived, Base, types::pure314>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeAllChildren", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeAllChildren", 
				(void*)addresses::address314(), 
				(void*)wrap::removeAllChildren<Thiscall, Derived, Base, types::pure314>::value
			);
		}

		if constexpr (compare::removeAllChildrenWithCleanup<Derived, Base, types::pure315>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeAllChildrenWithCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeAllChildrenWithCleanup", 
				(void*)addresses::address315(), 
				(void*)wrap::removeAllChildrenWithCleanup<Membercall, Derived, Base, types::pure315>::value
			);
		}

		if constexpr (compare::removeAllComponents<Derived, Base, types::pure316>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeAllComponents", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeAllComponents", 
				(void*)addresses::address316(), 
				(void*)wrap::removeAllComponents<Thiscall, Derived, Base, types::pure316>::value
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure317>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeChild", 
				(void*)addresses::address317(), 
				(void*)wrap::removeChild<Membercall, Derived, Base, types::pure317>::value
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure318>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeChild", 
				(void*)addresses::address318(), 
				(void*)wrap::removeChild<Membercall, Derived, Base, types::pure318>::value
			);
		}

		if constexpr (compare::removeChildByTag<Derived, Base, types::pure319>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChildByTag", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeChildByTag", 
				(void*)addresses::address319(), 
				(void*)wrap::removeChildByTag<Membercall, Derived, Base, types::pure319>::value
			);
		}

		if constexpr (compare::removeChildByTag<Derived, Base, types::pure320>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChildByTag", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeChildByTag", 
				(void*)addresses::address320(), 
				(void*)wrap::removeChildByTag<Membercall, Derived, Base, types::pure320>::value
			);
		}

		if constexpr (compare::removeComponent<Derived, Base, types::pure321>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeComponent", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeComponent", 
				(void*)addresses::address321(), 
				(void*)wrap::removeComponent<Membercall, Derived, Base, types::pure321>::value
			);
		}

		if constexpr (compare::removeComponent<Derived, Base, types::pure322>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeComponent", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeComponent", 
				(void*)addresses::address322(), 
				(void*)wrap::removeComponent<Membercall, Derived, Base, types::pure322>::value
			);
		}

		if constexpr (compare::removeFromParent<Derived, Base, types::pure323>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeFromParent", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeFromParent", 
				(void*)addresses::address323(), 
				(void*)wrap::removeFromParent<Thiscall, Derived, Base, types::pure323>::value
			);
		}

		if constexpr (compare::removeFromParentAndCleanup<Derived, Base, types::pure324>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeFromParentAndCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeFromParentAndCleanup", 
				(void*)addresses::address324(), 
				(void*)wrap::removeFromParentAndCleanup<Membercall, Derived, Base, types::pure324>::value
			);
		}

		if constexpr (compare::removeMeAndCleanup<Derived, Base, types::pure325>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeMeAndCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::removeMeAndCleanup", 
				(void*)addresses::address325(), 
				(void*)wrap::removeMeAndCleanup<Thiscall, Derived, Base, types::pure325>::value
			);
		}

		if constexpr (compare::reorderChild<Derived, Base, types::pure326>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::reorderChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::reorderChild", 
				(void*)addresses::address326(), 
				(void*)wrap::reorderChild<Membercall, Derived, Base, types::pure326>::value
			);
		}

		if constexpr (compare::resumeSchedulerAndActions<Derived, Base, types::pure327>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::resumeSchedulerAndActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::resumeSchedulerAndActions", 
				(void*)addresses::address327(), 
				(void*)wrap::resumeSchedulerAndActions<Thiscall, Derived, Base, types::pure327>::value
			);
		}

		if constexpr (compare::runAction<Derived, Base, types::pure328>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::runAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::runAction", 
				(void*)addresses::address328(), 
				(void*)wrap::runAction<Membercall, Derived, Base, types::pure328>::value
			);
		}

		if constexpr (compare::schedule<Derived, Base, types::pure329>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::schedule", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::schedule", 
				(void*)addresses::address329(), 
				(void*)wrap::schedule<Membercall, Derived, Base, types::pure329>::value
			);
		}

		if constexpr (compare::schedule<Derived, Base, types::pure330>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::schedule", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::schedule", 
				(void*)addresses::address330(), 
				(void*)wrap::schedule<Membercall, Derived, Base, types::pure330>::value
			);
		}

		if constexpr (compare::scheduleUpdate<Derived, Base, types::pure331>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::scheduleUpdate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::scheduleUpdate", 
				(void*)addresses::address331(), 
				(void*)wrap::scheduleUpdate<Thiscall, Derived, Base, types::pure331>::value
			);
		}

		if constexpr (compare::setActionManager<Derived, Base, types::pure332>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setActionManager", 
				(void*)addresses::address332(), 
				(void*)wrap::setActionManager<Membercall, Derived, Base, types::pure332>::value
			);
		}

		if constexpr (compare::setAnchorPoint<Derived, Base, types::pure333>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setAnchorPoint", 
				(void*)addresses::address333(), 
				(void*)wrap::setAnchorPoint<Membercall, Derived, Base, types::pure333>::value
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure334>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setContentSize", 
				(void*)addresses::address334(), 
				(void*)wrap::setContentSize<Membercall, Derived, Base, types::pure334>::value
			);
		}

		if constexpr (compare::setGLServerState<Derived, Base, types::pure335>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setGLServerState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setGLServerState", 
				(void*)addresses::address335(), 
				(void*)wrap::setGLServerState<Membercall, Derived, Base, types::pure335>::value
			);
		}

		if constexpr (compare::setGrid<Derived, Base, types::pure336>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setGrid", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setGrid", 
				(void*)addresses::address336(), 
				(void*)wrap::setGrid<Membercall, Derived, Base, types::pure336>::value
			);
		}

		if constexpr (compare::setOrderOfArrival<Derived, Base, types::pure337>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setOrderOfArrival", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setOrderOfArrival", 
				(void*)addresses::address337(), 
				(void*)wrap::setOrderOfArrival<Membercall, Derived, Base, types::pure337>::value
			);
		}

		if constexpr (compare::setParent<Derived, Base, types::pure338>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setParent", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setParent", 
				(void*)addresses::address338(), 
				(void*)wrap::setParent<Membercall, Derived, Base, types::pure338>::value
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure339>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setPosition", 
				(void*)addresses::address339(), 
				(void*)wrap::setPosition<Membercall, Derived, Base, types::pure339>::value
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure340>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setPosition", 
				(void*)addresses::address340(), 
				(void*)wrap::setPosition<Membercall, Derived, Base, types::pure340>::value
			);
		}

		if constexpr (compare::setPositionX<Derived, Base, types::pure341>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPositionX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setPositionX", 
				(void*)addresses::address341(), 
				(void*)wrap::setPositionX<Membercall, Derived, Base, types::pure341>::value
			);
		}

		if constexpr (compare::setPositionY<Derived, Base, types::pure342>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPositionY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setPositionY", 
				(void*)addresses::address342(), 
				(void*)wrap::setPositionY<Membercall, Derived, Base, types::pure342>::value
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure343>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setRotation", 
				(void*)addresses::address343(), 
				(void*)wrap::setRotation<Membercall, Derived, Base, types::pure343>::value
			);
		}

		if constexpr (compare::setRotationX<Derived, Base, types::pure344>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setRotationX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setRotationX", 
				(void*)addresses::address344(), 
				(void*)wrap::setRotationX<Membercall, Derived, Base, types::pure344>::value
			);
		}

		if constexpr (compare::setRotationY<Derived, Base, types::pure345>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setRotationY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setRotationY", 
				(void*)addresses::address345(), 
				(void*)wrap::setRotationY<Membercall, Derived, Base, types::pure345>::value
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure346>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setScale", 
				(void*)addresses::address346(), 
				(void*)wrap::setScale<Membercall, Derived, Base, types::pure346>::value
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure347>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setScale", 
				(void*)addresses::address347(), 
				(void*)wrap::setScale<Membercall, Derived, Base, types::pure347>::value
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure348>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setScaleX", 
				(void*)addresses::address348(), 
				(void*)wrap::setScaleX<Membercall, Derived, Base, types::pure348>::value
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure349>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setScaleY", 
				(void*)addresses::address349(), 
				(void*)wrap::setScaleY<Membercall, Derived, Base, types::pure349>::value
			);
		}

		if constexpr (compare::setScheduler<Derived, Base, types::pure350>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setScheduler", 
				(void*)addresses::address350(), 
				(void*)wrap::setScheduler<Membercall, Derived, Base, types::pure350>::value
			);
		}

		if constexpr (compare::setShaderProgram<Derived, Base, types::pure351>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setShaderProgram", 
				(void*)addresses::address351(), 
				(void*)wrap::setShaderProgram<Membercall, Derived, Base, types::pure351>::value
			);
		}

		if constexpr (compare::setSkewX<Derived, Base, types::pure352>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setSkewX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setSkewX", 
				(void*)addresses::address352(), 
				(void*)wrap::setSkewX<Membercall, Derived, Base, types::pure352>::value
			);
		}

		if constexpr (compare::setSkewY<Derived, Base, types::pure353>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setSkewY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setSkewY", 
				(void*)addresses::address353(), 
				(void*)wrap::setSkewY<Membercall, Derived, Base, types::pure353>::value
			);
		}

		if constexpr (compare::setUserData<Derived, Base, types::pure354>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setUserData", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setUserData", 
				(void*)addresses::address354(), 
				(void*)wrap::setUserData<Membercall, Derived, Base, types::pure354>::value
			);
		}

		if constexpr (compare::setUserObject<Derived, Base, types::pure355>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setUserObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setUserObject", 
				(void*)addresses::address355(), 
				(void*)wrap::setUserObject<Membercall, Derived, Base, types::pure355>::value
			);
		}

		if constexpr (compare::setVertexZ<Derived, Base, types::pure356>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setVertexZ", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setVertexZ", 
				(void*)addresses::address356(), 
				(void*)wrap::setVertexZ<Membercall, Derived, Base, types::pure356>::value
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure357>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setVisible", 
				(void*)addresses::address357(), 
				(void*)wrap::setVisible<Membercall, Derived, Base, types::pure357>::value
			);
		}

		if constexpr (compare::setZOrder<Derived, Base, types::pure358>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::setZOrder", 
				(void*)addresses::address358(), 
				(void*)wrap::setZOrder<Membercall, Derived, Base, types::pure358>::value
			);
		}

		if constexpr (compare::sortAllChildren<Derived, Base, types::pure359>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::sortAllChildren", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::sortAllChildren", 
				(void*)addresses::address359(), 
				(void*)wrap::sortAllChildren<Thiscall, Derived, Base, types::pure359>::value
			);
		}

		if constexpr (compare::stopActionByTag<Derived, Base, types::pure360>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::stopActionByTag", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::stopActionByTag", 
				(void*)addresses::address360(), 
				(void*)wrap::stopActionByTag<Membercall, Derived, Base, types::pure360>::value
			);
		}

		if constexpr (compare::stopAllActions<Derived, Base, types::pure361>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::stopAllActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::stopAllActions", 
				(void*)addresses::address361(), 
				(void*)wrap::stopAllActions<Thiscall, Derived, Base, types::pure361>::value
			);
		}

		if constexpr (compare::unregisterScriptHandler<Derived, Base, types::pure362>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unregisterScriptHandler", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::unregisterScriptHandler", 
				(void*)addresses::address362(), 
				(void*)wrap::unregisterScriptHandler<Thiscall, Derived, Base, types::pure362>::value
			);
		}

		if constexpr (compare::unschedule<Derived, Base, types::pure363>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unschedule", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::unschedule", 
				(void*)addresses::address363(), 
				(void*)wrap::unschedule<Membercall, Derived, Base, types::pure363>::value
			);
		}

		if constexpr (compare::unscheduleAllSelectors<Derived, Base, types::pure364>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unscheduleAllSelectors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::unscheduleAllSelectors", 
				(void*)addresses::address364(), 
				(void*)wrap::unscheduleAllSelectors<Thiscall, Derived, Base, types::pure364>::value
			);
		}

		if constexpr (compare::unscheduleUpdate<Derived, Base, types::pure365>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unscheduleUpdate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::unscheduleUpdate", 
				(void*)addresses::address365(), 
				(void*)wrap::unscheduleUpdate<Thiscall, Derived, Base, types::pure365>::value
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure366>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::update", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::update", 
				(void*)addresses::address366(), 
				(void*)wrap::update<Membercall, Derived, Base, types::pure366>::value
			);
		}

		if constexpr (compare::updateTransform<Derived, Base, types::pure367>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::updateTransform", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::updateTransform", 
				(void*)addresses::address367(), 
				(void*)wrap::updateTransform<Thiscall, Derived, Base, types::pure367>::value
			);
		}

		if constexpr (compare::updateTweenAction<Derived, Base, types::pure368>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::updateTweenAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::updateTweenAction", 
				(void*)addresses::address368(), 
				(void*)wrap::updateTweenAction<Membercall, Derived, Base, types::pure368>::value
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure369>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::visit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::visit", 
				(void*)addresses::address369(), 
				(void*)wrap::visit<Thiscall, Derived, Base, types::pure369>::value
			);
		}

		if constexpr (compare::worldToNodeTransform<Derived, Base, types::pure370>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::worldToNodeTransform", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::worldToNodeTransform", 
				(void*)addresses::address370(), 
				(void*)wrap::worldToNodeTransform<Thiscall, Derived, Base, types::pure370>::value
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

		if constexpr (compare::begin<Derived, Base, types::pure404>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::begin", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCRenderTexture::begin", 
				(void*)addresses::address404(), 
				(void*)wrap::begin<Thiscall, Derived, Base, types::pure404>::value
			);
		}

		if constexpr (compare::end<Derived, Base, types::pure405>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::end", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCRenderTexture::end", 
				(void*)addresses::address405(), 
				(void*)wrap::end<Thiscall, Derived, Base, types::pure405>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure406>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCRenderTexture::create", 
				(void*)addresses::address406(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure406>::value
			);
		}

		if constexpr (compare::newCCImage<Derived, Base, types::pure407>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::newCCImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCRenderTexture::newCCImage", 
				(void*)addresses::address407(), 
				(void*)wrap::newCCImage<Membercall, Derived, Base, types::pure407>::value
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

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure388>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::acceptVisitor", 
				(void*)addresses::address388(), 
				(void*)wrap::acceptVisitor<Membercall, Derived, Base, types::pure388>::value
			);
		}

		if constexpr (compare::autorelease<Derived, Base, types::pure389>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::autorelease", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::autorelease", 
				(void*)addresses::address389(), 
				(void*)wrap::autorelease<Thiscall, Derived, Base, types::pure389>::value
			);
		}

		if constexpr (compare::canEncode<Derived, Base, types::pure390>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::canEncode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::canEncode", 
				(void*)addresses::address390(), 
				(void*)wrap::canEncode<Thiscall, Derived, Base, types::pure390>::value
			);
		}

		if constexpr (compare::encodeWithCoder<Derived, Base, types::pure391>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::encodeWithCoder", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::encodeWithCoder", 
				(void*)addresses::address391(), 
				(void*)wrap::encodeWithCoder<Membercall, Derived, Base, types::pure391>::value
			);
		}

		if constexpr (compare::getTag<Derived, Base, types::pure392>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::getTag", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::getTag", 
				(void*)addresses::address392(), 
				(void*)wrap::getTag<Thiscall, Derived, Base, types::pure392>::value
			);
		}

		if constexpr (compare::isEqual<Derived, Base, types::pure393>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::isEqual", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::isEqual", 
				(void*)addresses::address393(), 
				(void*)wrap::isEqual<Membercall, Derived, Base, types::pure393>::value
			);
		}

		if constexpr (compare::release<Derived, Base, types::pure394>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::release", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::release", 
				(void*)addresses::address394(), 
				(void*)wrap::release<Thiscall, Derived, Base, types::pure394>::value
			);
		}

		if constexpr (compare::retain<Derived, Base, types::pure395>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::retain", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::retain", 
				(void*)addresses::address395(), 
				(void*)wrap::retain<Thiscall, Derived, Base, types::pure395>::value
			);
		}

		if constexpr (compare::setTag<Derived, Base, types::pure396>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::setTag", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::setTag", 
				(void*)addresses::address396(), 
				(void*)wrap::setTag<Thiscall, Derived, Base, types::pure396>::value
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

		if constexpr (compare::create<Derived, Base, types::pure401>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCParticleSystemQuad::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCParticleSystemQuad::create", 
				(void*)addresses::address401(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure401>::value
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

		if constexpr (compare::create<Derived, Base, types::pure410>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScaleTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCScaleTo::create", 
				(void*)addresses::address410(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure410>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure411>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScaleTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCScaleTo::create", 
				(void*)addresses::address411(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure411>::value
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

		if constexpr (compare::create<Derived, Base, types::pure412>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScene::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCScene::create", 
				(void*)addresses::address412(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure412>::value
			);
		}

		if constexpr (compare::getHighestChildZ<Derived, Base, types::pure413>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScene::getHighestChildZ", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCScene::getHighestChildZ", 
				(void*)addresses::address413(), 
				(void*)wrap::getHighestChildZ<Thiscall, Derived, Base, types::pure413>::value
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

		if constexpr (compare::scheduleSelector<Derived, Base, types::pure414>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::scheduleSelector", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCScheduler::scheduleSelector", 
				(void*)addresses::address414(), 
				(void*)wrap::scheduleSelector<Membercall, Derived, Base, types::pure414>::value
			);
		}

		if constexpr (compare::scheduleUpdateForTarget<Derived, Base, types::pure415>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::scheduleUpdateForTarget", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCScheduler::scheduleUpdateForTarget", 
				(void*)addresses::address415(), 
				(void*)wrap::scheduleUpdateForTarget<Membercall, Derived, Base, types::pure415>::value
			);
		}

		if constexpr (compare::unscheduleAllForTarget<Derived, Base, types::pure416>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::unscheduleAllForTarget", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCScheduler::unscheduleAllForTarget", 
				(void*)addresses::address416(), 
				(void*)wrap::unscheduleAllForTarget<Membercall, Derived, Base, types::pure416>::value
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure417>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::update", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCScheduler::update", 
				(void*)addresses::address417(), 
				(void*)wrap::update<Membercall, Derived, Base, types::pure417>::value
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

		if constexpr (compare::init<Derived, Base, types::pure422>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::init", 
				(void*)addresses::address422(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure422>::value
			);
		}

		if constexpr (compare::setVertexZ<Derived, Base, types::pure423>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setVertexZ", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setVertexZ", 
				(void*)addresses::address423(), 
				(void*)wrap::setVertexZ<Thiscall, Derived, Base, types::pure423>::value
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure424>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setScaleX", 
				(void*)addresses::address424(), 
				(void*)wrap::setScaleX<Thiscall, Derived, Base, types::pure424>::value
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure425>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setScaleY", 
				(void*)addresses::address425(), 
				(void*)wrap::setScaleY<Thiscall, Derived, Base, types::pure425>::value
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure426>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setScale", 
				(void*)addresses::address426(), 
				(void*)wrap::setScale<Thiscall, Derived, Base, types::pure426>::value
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure427>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setPosition", 
				(void*)addresses::address427(), 
				(void*)wrap::setPosition<Thiscall, Derived, Base, types::pure427>::value
			);
		}

		if constexpr (compare::setSkewX<Derived, Base, types::pure428>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setSkewX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setSkewX", 
				(void*)addresses::address428(), 
				(void*)wrap::setSkewX<Thiscall, Derived, Base, types::pure428>::value
			);
		}

		if constexpr (compare::setSkewY<Derived, Base, types::pure429>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setSkewY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setSkewY", 
				(void*)addresses::address429(), 
				(void*)wrap::setSkewY<Thiscall, Derived, Base, types::pure429>::value
			);
		}

		if constexpr (compare::setAnchorPoint<Derived, Base, types::pure430>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setAnchorPoint", 
				(void*)addresses::address430(), 
				(void*)wrap::setAnchorPoint<Thiscall, Derived, Base, types::pure430>::value
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure431>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setVisible", 
				(void*)addresses::address431(), 
				(void*)wrap::setVisible<Thiscall, Derived, Base, types::pure431>::value
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure432>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setRotation", 
				(void*)addresses::address432(), 
				(void*)wrap::setRotation<Thiscall, Derived, Base, types::pure432>::value
			);
		}

		if constexpr (compare::setRotationX<Derived, Base, types::pure433>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setRotationX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setRotationX", 
				(void*)addresses::address433(), 
				(void*)wrap::setRotationX<Thiscall, Derived, Base, types::pure433>::value
			);
		}

		if constexpr (compare::setRotationY<Derived, Base, types::pure434>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setRotationY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setRotationY", 
				(void*)addresses::address434(), 
				(void*)wrap::setRotationY<Thiscall, Derived, Base, types::pure434>::value
			);
		}

		if constexpr (compare::ignoreAnchorPointForPosition<Derived, Base, types::pure435>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::ignoreAnchorPointForPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::ignoreAnchorPointForPosition", 
				(void*)addresses::address435(), 
				(void*)wrap::ignoreAnchorPointForPosition<Thiscall, Derived, Base, types::pure435>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure436>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::addChild", 
				(void*)addresses::address436(), 
				(void*)wrap::addChild<Thiscall, Derived, Base, types::pure436>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure437>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::addChild", 
				(void*)addresses::address437(), 
				(void*)wrap::addChild<Thiscall, Derived, Base, types::pure437>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure438>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::addChild", 
				(void*)addresses::address438(), 
				(void*)wrap::addChild<Thiscall, Derived, Base, types::pure438>::value
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure439>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::removeChild", 
				(void*)addresses::address439(), 
				(void*)wrap::removeChild<Thiscall, Derived, Base, types::pure439>::value
			);
		}

		if constexpr (compare::removeAllChildrenWithCleanup<Derived, Base, types::pure440>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::removeAllChildrenWithCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::removeAllChildrenWithCleanup", 
				(void*)addresses::address440(), 
				(void*)wrap::removeAllChildrenWithCleanup<Thiscall, Derived, Base, types::pure440>::value
			);
		}

		if constexpr (compare::reorderChild<Derived, Base, types::pure441>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::reorderChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::reorderChild", 
				(void*)addresses::address441(), 
				(void*)wrap::reorderChild<Thiscall, Derived, Base, types::pure441>::value
			);
		}

		if constexpr (compare::sortAllChildren<Derived, Base, types::pure442>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::sortAllChildren", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::sortAllChildren", 
				(void*)addresses::address442(), 
				(void*)wrap::sortAllChildren<Thiscall, Derived, Base, types::pure442>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure443>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::draw", 
				(void*)addresses::address443(), 
				(void*)wrap::draw<Thiscall, Derived, Base, types::pure443>::value
			);
		}

		if constexpr (compare::updateTransform<Derived, Base, types::pure444>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateTransform", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::updateTransform", 
				(void*)addresses::address444(), 
				(void*)wrap::updateTransform<Thiscall, Derived, Base, types::pure444>::value
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure445>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setOpacity", 
				(void*)addresses::address445(), 
				(void*)wrap::setOpacity<Thiscall, Derived, Base, types::pure445>::value
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure446>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::updateDisplayedOpacity", 
				(void*)addresses::address446(), 
				(void*)wrap::updateDisplayedOpacity<Thiscall, Derived, Base, types::pure446>::value
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure447>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setColor", 
				(void*)addresses::address447(), 
				(void*)wrap::setColor<Thiscall, Derived, Base, types::pure447>::value
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure448>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::updateDisplayedColor", 
				(void*)addresses::address448(), 
				(void*)wrap::updateDisplayedColor<Thiscall, Derived, Base, types::pure448>::value
			);
		}

		if constexpr (compare::setOpacityModifyRGB<Derived, Base, types::pure449>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setOpacityModifyRGB", 
				(void*)addresses::address449(), 
				(void*)wrap::setOpacityModifyRGB<Thiscall, Derived, Base, types::pure449>::value
			);
		}

		if constexpr (compare::isOpacityModifyRGB<Derived, Base, types::pure450>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::isOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::isOpacityModifyRGB", 
				(void*)addresses::address450(), 
				(void*)wrap::isOpacityModifyRGB<Thiscall, Derived, Base, types::pure450>::value
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure451>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::initWithTexture", 
				(void*)addresses::address451(), 
				(void*)wrap::initWithTexture<Thiscall, Derived, Base, types::pure451>::value
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure452>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::initWithTexture", 
				(void*)addresses::address452(), 
				(void*)wrap::initWithTexture<Thiscall, Derived, Base, types::pure452>::value
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure453>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::initWithTexture", 
				(void*)addresses::address453(), 
				(void*)wrap::initWithTexture<Thiscall, Derived, Base, types::pure453>::value
			);
		}

		if constexpr (compare::initWithSpriteFrame<Derived, Base, types::pure454>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::initWithSpriteFrame", 
				(void*)addresses::address454(), 
				(void*)wrap::initWithSpriteFrame<Thiscall, Derived, Base, types::pure454>::value
			);
		}

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure455>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::initWithSpriteFrameName", 
				(void*)addresses::address455(), 
				(void*)wrap::initWithSpriteFrameName<Thiscall, Derived, Base, types::pure455>::value
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure456>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::initWithFile", 
				(void*)addresses::address456(), 
				(void*)wrap::initWithFile<Thiscall, Derived, Base, types::pure456>::value
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure457>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::initWithFile", 
				(void*)addresses::address457(), 
				(void*)wrap::initWithFile<Thiscall, Derived, Base, types::pure457>::value
			);
		}

		if constexpr (compare::setTexture<Derived, Base, types::pure458>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setTexture", 
				(void*)addresses::address458(), 
				(void*)wrap::setTexture<Thiscall, Derived, Base, types::pure458>::value
			);
		}

		if constexpr (compare::getTexture<Derived, Base, types::pure459>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::getTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::getTexture", 
				(void*)addresses::address459(), 
				(void*)wrap::getTexture<Thiscall, Derived, Base, types::pure459>::value
			);
		}

		if constexpr (compare::setChildColor<Derived, Base, types::pure460>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setChildColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setChildColor", 
				(void*)addresses::address460(), 
				(void*)wrap::setChildColor<Thiscall, Derived, Base, types::pure460>::value
			);
		}

		if constexpr (compare::setChildOpacity<Derived, Base, types::pure461>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setChildOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setChildOpacity", 
				(void*)addresses::address461(), 
				(void*)wrap::setChildOpacity<Thiscall, Derived, Base, types::pure461>::value
			);
		}

		if constexpr (compare::getBatchNode<Derived, Base, types::pure462>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::getBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::getBatchNode", 
				(void*)addresses::address462(), 
				(void*)wrap::getBatchNode<Thiscall, Derived, Base, types::pure462>::value
			);
		}

		if constexpr (compare::setBatchNode<Derived, Base, types::pure463>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setBatchNode", 
				(void*)addresses::address463(), 
				(void*)wrap::setBatchNode<Thiscall, Derived, Base, types::pure463>::value
			);
		}

		if constexpr (compare::refreshTextureRect<Derived, Base, types::pure464>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::refreshTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::refreshTextureRect", 
				(void*)addresses::address464(), 
				(void*)wrap::refreshTextureRect<Thiscall, Derived, Base, types::pure464>::value
			);
		}

		if constexpr (compare::setTextureRect<Derived, Base, types::pure465>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setTextureRect", 
				(void*)addresses::address465(), 
				(void*)wrap::setTextureRect<Thiscall, Derived, Base, types::pure465>::value
			);
		}

		if constexpr (compare::setTextureRect<Derived, Base, types::pure466>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setTextureRect", 
				(void*)addresses::address466(), 
				(void*)wrap::setTextureRect<Thiscall, Derived, Base, types::pure466>::value
			);
		}

		if constexpr (compare::setVertexRect<Derived, Base, types::pure467>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setVertexRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setVertexRect", 
				(void*)addresses::address467(), 
				(void*)wrap::setVertexRect<Thiscall, Derived, Base, types::pure467>::value
			);
		}

		if constexpr (compare::setDisplayFrame<Derived, Base, types::pure468>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setDisplayFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setDisplayFrame", 
				(void*)addresses::address468(), 
				(void*)wrap::setDisplayFrame<Thiscall, Derived, Base, types::pure468>::value
			);
		}

		if constexpr (compare::isFrameDisplayed<Derived, Base, types::pure469>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::isFrameDisplayed", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::isFrameDisplayed", 
				(void*)addresses::address469(), 
				(void*)wrap::isFrameDisplayed<Thiscall, Derived, Base, types::pure469>::value
			);
		}

		if constexpr (compare::displayFrame<Derived, Base, types::pure470>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::displayFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::displayFrame", 
				(void*)addresses::address470(), 
				(void*)wrap::displayFrame<Thiscall, Derived, Base, types::pure470>::value
			);
		}

		if constexpr (compare::setDisplayFrameWithAnimationName<Derived, Base, types::pure471>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setDisplayFrameWithAnimationName", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setDisplayFrameWithAnimationName", 
				(void*)addresses::address471(), 
				(void*)wrap::setDisplayFrameWithAnimationName<Thiscall, Derived, Base, types::pure471>::value
			);
		}

		if constexpr (compare::setTextureCoords<Derived, Base, types::pure472>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTextureCoords", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setTextureCoords", 
				(void*)addresses::address472(), 
				(void*)wrap::setTextureCoords<Thiscall, Derived, Base, types::pure472>::value
			);
		}

		if constexpr (compare::updateBlendFunc<Derived, Base, types::pure473>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::updateBlendFunc", 
				(void*)addresses::address473(), 
				(void*)wrap::updateBlendFunc<Thiscall, Derived, Base, types::pure473>::value
			);
		}

		if constexpr (compare::setReorderChildDirtyRecursively<Derived, Base, types::pure474>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setReorderChildDirtyRecursively", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setReorderChildDirtyRecursively", 
				(void*)addresses::address474(), 
				(void*)wrap::setReorderChildDirtyRecursively<Thiscall, Derived, Base, types::pure474>::value
			);
		}

		if constexpr (compare::setDirtyRecursively<Derived, Base, types::pure475>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setDirtyRecursively", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setDirtyRecursively", 
				(void*)addresses::address475(), 
				(void*)wrap::setDirtyRecursively<Thiscall, Derived, Base, types::pure475>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure477>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::create", 
				(void*)addresses::address477(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure477>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure478>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::create", 
				(void*)addresses::address478(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure478>::value
			);
		}

		if constexpr (compare::createWithSpriteFrame<Derived, Base, types::pure479>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::createWithSpriteFrame", 
				(void*)addresses::address479(), 
				(void*)wrap::createWithSpriteFrame<Optcall, Derived, Base, types::pure479>::value
			);
		}

		if constexpr (compare::createWithSpriteFrameName<Derived, Base, types::pure480>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::createWithSpriteFrameName", 
				(void*)addresses::address480(), 
				(void*)wrap::createWithSpriteFrameName<Optcall, Derived, Base, types::pure480>::value
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure481>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::createWithTexture", 
				(void*)addresses::address481(), 
				(void*)wrap::createWithTexture<Optcall, Derived, Base, types::pure481>::value
			);
		}

		if constexpr (compare::setFlipX<Derived, Base, types::pure482>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setFlipX", 
				(void*)addresses::address482(), 
				(void*)wrap::setFlipX<Membercall, Derived, Base, types::pure482>::value
			);
		}

		if constexpr (compare::setFlipY<Derived, Base, types::pure483>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::setFlipY", 
				(void*)addresses::address483(), 
				(void*)wrap::setFlipY<Membercall, Derived, Base, types::pure483>::value
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

		if constexpr (compare::create<Derived, Base, types::pure484>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSpriteBatchNode::create", 
				(void*)addresses::address484(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure484>::value
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure485>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSpriteBatchNode::createWithTexture", 
				(void*)addresses::address485(), 
				(void*)wrap::createWithTexture<Optcall, Derived, Base, types::pure485>::value
			);
		}

		if constexpr (compare::getUsedAtlasCapacity<Derived, Base, types::pure486>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::getUsedAtlasCapacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSpriteBatchNode::getUsedAtlasCapacity", 
				(void*)addresses::address486(), 
				(void*)wrap::getUsedAtlasCapacity<Thiscall, Derived, Base, types::pure486>::value
			);
		}

		if constexpr (compare::increaseAtlasCapacity<Derived, Base, types::pure487>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::increaseAtlasCapacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSpriteBatchNode::increaseAtlasCapacity", 
				(void*)addresses::address487(), 
				(void*)wrap::increaseAtlasCapacity<Membercall, Derived, Base, types::pure487>::value
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

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure504>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTargetedTouchHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTargetedTouchHandler::handlerWithDelegate", 
				(void*)addresses::address504(), 
				(void*)wrap::handlerWithDelegate<Optcall, Derived, Base, types::pure504>::value
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure505>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTargetedTouchHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTargetedTouchHandler::initWithDelegate", 
				(void*)addresses::address505(), 
				(void*)wrap::initWithDelegate<Membercall, Derived, Base, types::pure505>::value
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

		if constexpr (compare::getContentSize<Derived, Base, types::pure509>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::getContentSize", 
				(void*)addresses::address509(), 
				(void*)wrap::getContentSize<Thiscall, Derived, Base, types::pure509>::value
			);
		}

		if constexpr (compare::getMaxS<Derived, Base, types::pure510>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getMaxS", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::getMaxS", 
				(void*)addresses::address510(), 
				(void*)wrap::getMaxS<Thiscall, Derived, Base, types::pure510>::value
			);
		}

		if constexpr (compare::getMaxT<Derived, Base, types::pure511>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getMaxT", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::getMaxT", 
				(void*)addresses::address511(), 
				(void*)wrap::getMaxT<Thiscall, Derived, Base, types::pure511>::value
			);
		}

		if constexpr (compare::getName<Derived, Base, types::pure512>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getName", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::getName", 
				(void*)addresses::address512(), 
				(void*)wrap::getName<Thiscall, Derived, Base, types::pure512>::value
			);
		}

		if constexpr (compare::getPixelFormat<Derived, Base, types::pure513>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getPixelFormat", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::getPixelFormat", 
				(void*)addresses::address513(), 
				(void*)wrap::getPixelFormat<Thiscall, Derived, Base, types::pure513>::value
			);
		}

		if constexpr (compare::getPixelsHigh<Derived, Base, types::pure514>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getPixelsHigh", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::getPixelsHigh", 
				(void*)addresses::address514(), 
				(void*)wrap::getPixelsHigh<Thiscall, Derived, Base, types::pure514>::value
			);
		}

		if constexpr (compare::getPixelsWide<Derived, Base, types::pure515>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getPixelsWide", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::getPixelsWide", 
				(void*)addresses::address515(), 
				(void*)wrap::getPixelsWide<Thiscall, Derived, Base, types::pure515>::value
			);
		}

		if constexpr (compare::getShaderProgram<Derived, Base, types::pure516>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::getShaderProgram", 
				(void*)addresses::address516(), 
				(void*)wrap::getShaderProgram<Thiscall, Derived, Base, types::pure516>::value
			);
		}

		if constexpr (compare::initPremultipliedATextureWithImage<Derived, Base, types::pure517>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::initPremultipliedATextureWithImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::initPremultipliedATextureWithImage", 
				(void*)addresses::address517(), 
				(void*)wrap::initPremultipliedATextureWithImage<Membercall, Derived, Base, types::pure517>::value
			);
		}

		if constexpr (compare::initWithData<Derived, Base, types::pure518>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::initWithData", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::initWithData", 
				(void*)addresses::address518(), 
				(void*)wrap::initWithData<Membercall, Derived, Base, types::pure518>::value
			);
		}

		if constexpr (compare::setAliasTexParameters<Derived, Base, types::pure519>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setAliasTexParameters", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::setAliasTexParameters", 
				(void*)addresses::address519(), 
				(void*)wrap::setAliasTexParameters<Thiscall, Derived, Base, types::pure519>::value
			);
		}

		if constexpr (compare::setAntiAliasTexParameters<Derived, Base, types::pure520>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setAntiAliasTexParameters", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::setAntiAliasTexParameters", 
				(void*)addresses::address520(), 
				(void*)wrap::setAntiAliasTexParameters<Thiscall, Derived, Base, types::pure520>::value
			);
		}

		if constexpr (compare::setMaxS<Derived, Base, types::pure521>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setMaxS", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::setMaxS", 
				(void*)addresses::address521(), 
				(void*)wrap::setMaxS<Membercall, Derived, Base, types::pure521>::value
			);
		}

		if constexpr (compare::setMaxT<Derived, Base, types::pure522>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setMaxT", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::setMaxT", 
				(void*)addresses::address522(), 
				(void*)wrap::setMaxT<Membercall, Derived, Base, types::pure522>::value
			);
		}

		if constexpr (compare::setShaderProgram<Derived, Base, types::pure523>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::setShaderProgram", 
				(void*)addresses::address523(), 
				(void*)wrap::setShaderProgram<Membercall, Derived, Base, types::pure523>::value
			);
		}

		if constexpr (compare::initWithImage<Derived, Base, types::pure524>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::initWithImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::initWithImage", 
				(void*)addresses::address524(), 
				(void*)wrap::initWithImage<Membercall, Derived, Base, types::pure524>::value
			);
		}

		if constexpr (compare::setTexParameters<Derived, Base, types::pure525>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setTexParameters", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::setTexParameters", 
				(void*)addresses::address525(), 
				(void*)wrap::setTexParameters<Membercall, Derived, Base, types::pure525>::value
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

		if constexpr (compare::addImage<Derived, Base, types::pure526>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTextureCache::addImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTextureCache::addImage", 
				(void*)addresses::address526(), 
				(void*)wrap::addImage<Membercall, Derived, Base, types::pure526>::value
			);
		}

		if constexpr (compare::sharedTextureCache<Derived, Base, types::pure527>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTextureCache::sharedTextureCache", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTextureCache::sharedTextureCache", 
				(void*)addresses::address527(), 
				(void*)wrap::sharedTextureCache<Cdecl, Derived, Base, types::pure527>::value
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

		if constexpr (compare::createToggleButton<Derived, Base, types::pure1663>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PauseLayer::createToggleButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PauseLayer::createToggleButton", 
				(void*)addresses::address1663(), 
				(void*)wrap::createToggleButton<Membercall, Derived, Base, types::pure1663>::value
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

		if constexpr (compare::create<Derived, Base, types::pure528>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTintTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTintTo::create", 
				(void*)addresses::address528(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure528>::value
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

		if constexpr (compare::playEffect<Derived, Base, types::pure1471>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::playEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameSoundManager::playEffect", 
				(void*)addresses::address1471(), 
				(void*)wrap::playEffect<Membercall, Derived, Base, types::pure1471>::value
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1475>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameSoundManager::sharedState", 
				(void*)addresses::address1475(), 
				(void*)wrap::sharedState<Cdecl, Derived, Base, types::pure1475>::value
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

		if constexpr (compare::getDelta<Derived, Base, types::pure529>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getDelta", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouch::getDelta", 
				(void*)addresses::address529(), 
				(void*)wrap::getDelta<Thiscall, Derived, Base, types::pure529>::value
			);
		}

		if constexpr (compare::getLocationInView<Derived, Base, types::pure530>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getLocationInView", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouch::getLocationInView", 
				(void*)addresses::address530(), 
				(void*)wrap::getLocationInView<Thiscall, Derived, Base, types::pure530>::value
			);
		}

		if constexpr (compare::getPreviousLocationInView<Derived, Base, types::pure531>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getPreviousLocationInView", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouch::getPreviousLocationInView", 
				(void*)addresses::address531(), 
				(void*)wrap::getPreviousLocationInView<Thiscall, Derived, Base, types::pure531>::value
			);
		}

		if constexpr (compare::getLocation<Derived, Base, types::pure532>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getLocation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouch::getLocation", 
				(void*)addresses::address532(), 
				(void*)wrap::getLocation<Thiscall, Derived, Base, types::pure532>::value
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

		if constexpr (compare::decrementForcePrio<Derived, Base, types::pure533>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchDispatcher::decrementForcePrio", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouchDispatcher::decrementForcePrio", 
				(void*)addresses::address533(), 
				(void*)wrap::decrementForcePrio<Membercall, Derived, Base, types::pure533>::value
			);
		}

		if constexpr (compare::incrementForcePrio<Derived, Base, types::pure534>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchDispatcher::incrementForcePrio", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouchDispatcher::incrementForcePrio", 
				(void*)addresses::address534(), 
				(void*)wrap::incrementForcePrio<Membercall, Derived, Base, types::pure534>::value
			);
		}

		if constexpr (compare::touches<Derived, Base, types::pure535>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchDispatcher::touches", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouchDispatcher::touches", 
				(void*)addresses::address535(), 
				(void*)wrap::touches<Membercall, Derived, Base, types::pure535>::value
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

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure536>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouchHandler::initWithDelegate", 
				(void*)addresses::address536(), 
				(void*)wrap::initWithDelegate<Thiscall, Derived, Base, types::pure536>::value
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

		if constexpr (compare::create<Derived, Base, types::pure538>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTransitionFade::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTransitionFade::create", 
				(void*)addresses::address538(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure538>::value
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

		if constexpr (compare::createNewLevel<Derived, Base, types::pure1270>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::createNewLevel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameLevelManager::createNewLevel", 
				(void*)addresses::address1270(), 
				(void*)wrap::createNewLevel<Thiscall, Derived, Base, types::pure1270>::value
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1271>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameLevelManager::sharedState", 
				(void*)addresses::address1271(), 
				(void*)wrap::sharedState<Cdecl, Derived, Base, types::pure1271>::value
			);
		}

		if constexpr (compare::getMainLevel<Derived, Base, types::pure1277>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::getMainLevel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameLevelManager::getMainLevel", 
				(void*)addresses::address1277(), 
				(void*)wrap::getMainLevel<Membercall, Derived, Base, types::pure1277>::value
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

		if constexpr (compare::setColorValue<Derived, Base, types::pure539>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlColourPicker::setColorValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCControlColourPicker::setColorValue", 
				(void*)addresses::address539(), 
				(void*)wrap::setColorValue<Membercall, Derived, Base, types::pure539>::value
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

		if constexpr (compare::HSVfromRGB<Derived, Base, types::pure540>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlUtils::HSVfromRGB", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCControlUtils::HSVfromRGB", 
				(void*)addresses::address540(), 
				(void*)wrap::HSVfromRGB<Optcall, Derived, Base, types::pure540>::value
			);
		}

		if constexpr (compare::RGBfromHSV<Derived, Base, types::pure541>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlUtils::RGBfromHSV", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCControlUtils::RGBfromHSV", 
				(void*)addresses::address541(), 
				(void*)wrap::RGBfromHSV<Optcall, Derived, Base, types::pure541>::value
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

		if constexpr (compare::create<Derived, Base, types::pure543>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::create", 
				(void*)addresses::address543(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure543>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure544>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::create", 
				(void*)addresses::address544(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure544>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure546>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::init", 
				(void*)addresses::address546(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure546>::value
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure547>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setContentSize", 
				(void*)addresses::address547(), 
				(void*)wrap::setContentSize<Thiscall, Derived, Base, types::pure547>::value
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure548>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::visit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::visit", 
				(void*)addresses::address548(), 
				(void*)wrap::visit<Thiscall, Derived, Base, types::pure548>::value
			);
		}

		if constexpr (compare::getOpacity<Derived, Base, types::pure549>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::getOpacity", 
				(void*)addresses::address549(), 
				(void*)wrap::getOpacity<Thiscall, Derived, Base, types::pure549>::value
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure550>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setOpacity", 
				(void*)addresses::address550(), 
				(void*)wrap::setOpacity<Thiscall, Derived, Base, types::pure550>::value
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure551>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::updateDisplayedOpacity", 
				(void*)addresses::address551(), 
				(void*)wrap::updateDisplayedOpacity<Thiscall, Derived, Base, types::pure551>::value
			);
		}

		if constexpr (compare::getColor<Derived, Base, types::pure552>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::getColor", 
				(void*)addresses::address552(), 
				(void*)wrap::getColor<Thiscall, Derived, Base, types::pure552>::value
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure553>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setColor", 
				(void*)addresses::address553(), 
				(void*)wrap::setColor<Thiscall, Derived, Base, types::pure553>::value
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure554>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::updateDisplayedColor", 
				(void*)addresses::address554(), 
				(void*)wrap::updateDisplayedColor<Thiscall, Derived, Base, types::pure554>::value
			);
		}

		if constexpr (compare::setOpacityModifyRGB<Derived, Base, types::pure555>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setOpacityModifyRGB", 
				(void*)addresses::address555(), 
				(void*)wrap::setOpacityModifyRGB<Thiscall, Derived, Base, types::pure555>::value
			);
		}

		if constexpr (compare::isOpacityModifyRGB<Derived, Base, types::pure556>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::isOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::isOpacityModifyRGB", 
				(void*)addresses::address556(), 
				(void*)wrap::isOpacityModifyRGB<Thiscall, Derived, Base, types::pure556>::value
			);
		}

		if constexpr (compare::getPreferredSize<Derived, Base, types::pure557>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getPreferredSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::getPreferredSize", 
				(void*)addresses::address557(), 
				(void*)wrap::getPreferredSize<Thiscall, Derived, Base, types::pure557>::value
			);
		}

		if constexpr (compare::setPreferredSize<Derived, Base, types::pure558>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setPreferredSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setPreferredSize", 
				(void*)addresses::address558(), 
				(void*)wrap::setPreferredSize<Thiscall, Derived, Base, types::pure558>::value
			);
		}

		if constexpr (compare::getCapInsets<Derived, Base, types::pure559>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getCapInsets", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::getCapInsets", 
				(void*)addresses::address559(), 
				(void*)wrap::getCapInsets<Thiscall, Derived, Base, types::pure559>::value
			);
		}

		if constexpr (compare::setCapInsets<Derived, Base, types::pure560>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setCapInsets", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setCapInsets", 
				(void*)addresses::address560(), 
				(void*)wrap::setCapInsets<Thiscall, Derived, Base, types::pure560>::value
			);
		}

		if constexpr (compare::getInsetLeft<Derived, Base, types::pure561>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetLeft", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::getInsetLeft", 
				(void*)addresses::address561(), 
				(void*)wrap::getInsetLeft<Thiscall, Derived, Base, types::pure561>::value
			);
		}

		if constexpr (compare::setInsetLeft<Derived, Base, types::pure562>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetLeft", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setInsetLeft", 
				(void*)addresses::address562(), 
				(void*)wrap::setInsetLeft<Thiscall, Derived, Base, types::pure562>::value
			);
		}

		if constexpr (compare::getInsetTop<Derived, Base, types::pure563>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetTop", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::getInsetTop", 
				(void*)addresses::address563(), 
				(void*)wrap::getInsetTop<Thiscall, Derived, Base, types::pure563>::value
			);
		}

		if constexpr (compare::setInsetTop<Derived, Base, types::pure564>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetTop", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setInsetTop", 
				(void*)addresses::address564(), 
				(void*)wrap::setInsetTop<Thiscall, Derived, Base, types::pure564>::value
			);
		}

		if constexpr (compare::getInsetRight<Derived, Base, types::pure565>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetRight", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::getInsetRight", 
				(void*)addresses::address565(), 
				(void*)wrap::getInsetRight<Thiscall, Derived, Base, types::pure565>::value
			);
		}

		if constexpr (compare::setInsetRight<Derived, Base, types::pure566>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetRight", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setInsetRight", 
				(void*)addresses::address566(), 
				(void*)wrap::setInsetRight<Thiscall, Derived, Base, types::pure566>::value
			);
		}

		if constexpr (compare::getInsetBottom<Derived, Base, types::pure567>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetBottom", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::getInsetBottom", 
				(void*)addresses::address567(), 
				(void*)wrap::getInsetBottom<Thiscall, Derived, Base, types::pure567>::value
			);
		}

		if constexpr (compare::setInsetBottom<Derived, Base, types::pure568>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetBottom", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setInsetBottom", 
				(void*)addresses::address568(), 
				(void*)wrap::setInsetBottom<Thiscall, Derived, Base, types::pure568>::value
			);
		}

		if constexpr (compare::initWithBatchNode<Derived, Base, types::pure569>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				(void*)addresses::address569(), 
				(void*)wrap::initWithBatchNode<Thiscall, Derived, Base, types::pure569>::value
			);
		}

		if constexpr (compare::initWithBatchNode<Derived, Base, types::pure570>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				(void*)addresses::address570(), 
				(void*)wrap::initWithBatchNode<Thiscall, Derived, Base, types::pure570>::value
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure571>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address571(), 
				(void*)wrap::initWithFile<Thiscall, Derived, Base, types::pure571>::value
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure572>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address572(), 
				(void*)wrap::initWithFile<Thiscall, Derived, Base, types::pure572>::value
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure573>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address573(), 
				(void*)wrap::initWithFile<Thiscall, Derived, Base, types::pure573>::value
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure574>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address574(), 
				(void*)wrap::initWithFile<Thiscall, Derived, Base, types::pure574>::value
			);
		}

		if constexpr (compare::initWithSpriteFrame<Derived, Base, types::pure575>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				(void*)addresses::address575(), 
				(void*)wrap::initWithSpriteFrame<Thiscall, Derived, Base, types::pure575>::value
			);
		}

		if constexpr (compare::initWithSpriteFrame<Derived, Base, types::pure576>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				(void*)addresses::address576(), 
				(void*)wrap::initWithSpriteFrame<Thiscall, Derived, Base, types::pure576>::value
			);
		}

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure577>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				(void*)addresses::address577(), 
				(void*)wrap::initWithSpriteFrameName<Thiscall, Derived, Base, types::pure577>::value
			);
		}

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure578>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				(void*)addresses::address578(), 
				(void*)wrap::initWithSpriteFrameName<Thiscall, Derived, Base, types::pure578>::value
			);
		}

		if constexpr (compare::updateWithBatchNode<Derived, Base, types::pure579>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::updateWithBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::updateWithBatchNode", 
				(void*)addresses::address579(), 
				(void*)wrap::updateWithBatchNode<Thiscall, Derived, Base, types::pure579>::value
			);
		}

		if constexpr (compare::setSpriteFrame<Derived, Base, types::pure580>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::setSpriteFrame", 
				(void*)addresses::address580(), 
				(void*)wrap::setSpriteFrame<Thiscall, Derived, Base, types::pure580>::value
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

		if constexpr (compare::init<Derived, Base, types::pure583>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::init", 
				(void*)addresses::address583(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure583>::value
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure584>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::setContentSize", 
				(void*)addresses::address584(), 
				(void*)wrap::setContentSize<Thiscall, Derived, Base, types::pure584>::value
			);
		}

		if constexpr (compare::getContentSize<Derived, Base, types::pure585>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::getContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::getContentSize", 
				(void*)addresses::address585(), 
				(void*)wrap::getContentSize<Thiscall, Derived, Base, types::pure585>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure586>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::addChild", 
				(void*)addresses::address586(), 
				(void*)wrap::addChild<Thiscall, Derived, Base, types::pure586>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure587>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::addChild", 
				(void*)addresses::address587(), 
				(void*)wrap::addChild<Thiscall, Derived, Base, types::pure587>::value
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure588>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::addChild", 
				(void*)addresses::address588(), 
				(void*)wrap::addChild<Thiscall, Derived, Base, types::pure588>::value
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure589>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::visit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::visit", 
				(void*)addresses::address589(), 
				(void*)wrap::visit<Thiscall, Derived, Base, types::pure589>::value
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure590>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::ccTouchBegan", 
				(void*)addresses::address590(), 
				(void*)wrap::ccTouchBegan<Thiscall, Derived, Base, types::pure590>::value
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure591>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::ccTouchMoved", 
				(void*)addresses::address591(), 
				(void*)wrap::ccTouchMoved<Thiscall, Derived, Base, types::pure591>::value
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure592>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::ccTouchEnded", 
				(void*)addresses::address592(), 
				(void*)wrap::ccTouchEnded<Thiscall, Derived, Base, types::pure592>::value
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure593>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::ccTouchCancelled", 
				(void*)addresses::address593(), 
				(void*)wrap::ccTouchCancelled<Thiscall, Derived, Base, types::pure593>::value
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure594>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::registerWithTouchDispatcher", 
				(void*)addresses::address594(), 
				(void*)wrap::registerWithTouchDispatcher<Thiscall, Derived, Base, types::pure594>::value
			);
		}

		if constexpr (compare::setTouchEnabled<Derived, Base, types::pure595>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::setTouchEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::setTouchEnabled", 
				(void*)addresses::address595(), 
				(void*)wrap::setTouchEnabled<Thiscall, Derived, Base, types::pure595>::value
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

		if constexpr (compare::create<Derived, Base, types::pure631>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementBar::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementBar::create", 
				(void*)addresses::address631(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure631>::value
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

		if constexpr (compare::sharedState<Derived, Base, types::pure634>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementManager::sharedState", 
				(void*)addresses::address634(), 
				(void*)wrap::sharedState<Thiscall, Derived, Base, types::pure634>::value
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

		if constexpr (compare::sharedState<Derived, Base, types::pure636>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementNotifier::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementNotifier::sharedState", 
				(void*)addresses::address636(), 
				(void*)wrap::sharedState<Thiscall, Derived, Base, types::pure636>::value
			);
		}

		if constexpr (compare::showNextAchievement<Derived, Base, types::pure638>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementNotifier::showNextAchievement", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementNotifier::showNextAchievement", 
				(void*)addresses::address638(), 
				(void*)wrap::showNextAchievement<Thiscall, Derived, Base, types::pure638>::value
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

		if constexpr (compare::create<Derived, Base, types::pure644>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AnimatedShopKeeper::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AnimatedShopKeeper::create", 
				(void*)addresses::address644(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure644>::value
			);
		}

		if constexpr (compare::startAnimating<Derived, Base, types::pure645>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AnimatedShopKeeper::startAnimating", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AnimatedShopKeeper::startAnimating", 
				(void*)addresses::address645(), 
				(void*)wrap::startAnimating<Thiscall, Derived, Base, types::pure645>::value
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

		if constexpr (compare::applicationDidFinishLaunching<Derived, Base, types::pure647>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationDidFinishLaunching", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AppDelegate::applicationDidFinishLaunching", 
				(void*)addresses::address647(), 
				(void*)wrap::applicationDidFinishLaunching<Thiscall, Derived, Base, types::pure647>::value
			);
		}

		if constexpr (compare::applicationDidEnterBackground<Derived, Base, types::pure648>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationDidEnterBackground", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AppDelegate::applicationDidEnterBackground", 
				(void*)addresses::address648(), 
				(void*)wrap::applicationDidEnterBackground<Thiscall, Derived, Base, types::pure648>::value
			);
		}

		if constexpr (compare::applicationWillEnterForeground<Derived, Base, types::pure649>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationWillEnterForeground", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AppDelegate::applicationWillEnterForeground", 
				(void*)addresses::address649(), 
				(void*)wrap::applicationWillEnterForeground<Thiscall, Derived, Base, types::pure649>::value
			);
		}

		if constexpr (compare::applicationWillBecomeActive<Derived, Base, types::pure650>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationWillBecomeActive", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AppDelegate::applicationWillBecomeActive", 
				(void*)addresses::address650(), 
				(void*)wrap::applicationWillBecomeActive<Thiscall, Derived, Base, types::pure650>::value
			);
		}

		if constexpr (compare::applicationWillResignActive<Derived, Base, types::pure651>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationWillResignActive", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AppDelegate::applicationWillResignActive", 
				(void*)addresses::address651(), 
				(void*)wrap::applicationWillResignActive<Thiscall, Derived, Base, types::pure651>::value
			);
		}

		if constexpr (compare::trySaveGame<Derived, Base, types::pure652>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::trySaveGame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AppDelegate::trySaveGame", 
				(void*)addresses::address652(), 
				(void*)wrap::trySaveGame<Thiscall, Derived, Base, types::pure652>::value
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

		if constexpr (compare::init<Derived, Base, types::pure1622>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::init", 
				(void*)addresses::address1622(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure1622>::value
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure1623>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::keyBackClicked", 
				(void*)addresses::address1623(), 
				(void*)wrap::keyBackClicked<Thiscall, Derived, Base, types::pure1623>::value
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure1624>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::keyDown", 
				(void*)addresses::address1624(), 
				(void*)wrap::keyDown<Thiscall, Derived, Base, types::pure1624>::value
			);
		}

		if constexpr (compare::onMoreGames<Derived, Base, types::pure1627>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onMoreGames", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::onMoreGames", 
				(void*)addresses::address1627(), 
				(void*)wrap::onMoreGames<Membercall, Derived, Base, types::pure1627>::value
			);
		}

		if constexpr (compare::onGarage<Derived, Base, types::pure1628>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onGarage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::onGarage", 
				(void*)addresses::address1628(), 
				(void*)wrap::onGarage<Membercall, Derived, Base, types::pure1628>::value
			);
		}

		if constexpr (compare::scene<Derived, Base, types::pure1630>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::scene", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::scene", 
				(void*)addresses::address1630(), 
				(void*)wrap::scene<Optcall, Derived, Base, types::pure1630>::value
			);
		}

		if constexpr (compare::node<Derived, Base, types::pure1631>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::node", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::node", 
				(void*)addresses::address1631(), 
				(void*)wrap::node<Thiscall, Derived, Base, types::pure1631>::value
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

		if constexpr (compare::init<Derived, Base, types::pure664>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::init", 
				(void*)addresses::address664(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure664>::value
			);
		}

		if constexpr (compare::setupList<Derived, Base, types::pure666>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::setupList", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::setupList", 
				(void*)addresses::address666(), 
				(void*)wrap::setupList<Thiscall, Derived, Base, types::pure666>::value
			);
		}

		if constexpr (compare::cellHeightForRowAtIndexPath<Derived, Base, types::pure668>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::cellHeightForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::cellHeightForRowAtIndexPath", 
				(void*)addresses::address668(), 
				(void*)wrap::cellHeightForRowAtIndexPath<Thiscall, Derived, Base, types::pure668>::value
			);
		}

		if constexpr (compare::numberOfRowsInSection<Derived, Base, types::pure670>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::numberOfRowsInSection", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::numberOfRowsInSection", 
				(void*)addresses::address670(), 
				(void*)wrap::numberOfRowsInSection<Thiscall, Derived, Base, types::pure670>::value
			);
		}

		if constexpr (compare::numberOfSectionsInTableView<Derived, Base, types::pure671>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::numberOfSectionsInTableView", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::numberOfSectionsInTableView", 
				(void*)addresses::address671(), 
				(void*)wrap::numberOfSectionsInTableView<Thiscall, Derived, Base, types::pure671>::value
			);
		}

		if constexpr (compare::cellForRowAtIndexPath<Derived, Base, types::pure672>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::cellForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::cellForRowAtIndexPath", 
				(void*)addresses::address672(), 
				(void*)wrap::cellForRowAtIndexPath<Thiscall, Derived, Base, types::pure672>::value
			);
		}

		if constexpr (compare::getListCell<Derived, Base, types::pure675>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::getListCell", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::getListCell", 
				(void*)addresses::address675(), 
				(void*)wrap::getListCell<Thiscall, Derived, Base, types::pure675>::value
			);
		}

		if constexpr (compare::loadCell<Derived, Base, types::pure676>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::loadCell", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::loadCell", 
				(void*)addresses::address676(), 
				(void*)wrap::loadCell<Thiscall, Derived, Base, types::pure676>::value
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

		if constexpr (compare::instantMoveToPage<Derived, Base, types::pure678>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomScrollLayer::instantMoveToPage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomScrollLayer::instantMoveToPage", 
				(void*)addresses::address678(), 
				(void*)wrap::instantMoveToPage<Membercall, Derived, Base, types::pure678>::value
			);
		}

		if constexpr (compare::moveToPage<Derived, Base, types::pure679>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomScrollLayer::moveToPage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomScrollLayer::moveToPage", 
				(void*)addresses::address679(), 
				(void*)wrap::moveToPage<Membercall, Derived, Base, types::pure679>::value
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

		if constexpr (compare::create<Derived, Base, types::pure680>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ButtonSprite::create", 
				(void*)addresses::address680(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure680>::value
			);
		}

		if constexpr (compare::updateBGImage<Derived, Base, types::pure683>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::updateBGImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ButtonSprite::updateBGImage", 
				(void*)addresses::address683(), 
				(void*)wrap::updateBGImage<Membercall, Derived, Base, types::pure683>::value
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure685>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::setString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ButtonSprite::setString", 
				(void*)addresses::address685(), 
				(void*)wrap::setString<Membercall, Derived, Base, types::pure685>::value
			);
		}

		if constexpr (compare::updateSpriteBGSize<Derived, Base, types::pure686>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::updateSpriteBGSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ButtonSprite::updateSpriteBGSize", 
				(void*)addresses::address686(), 
				(void*)wrap::updateSpriteBGSize<Membercall, Derived, Base, types::pure686>::value
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

		if constexpr (compare::runAnimation<Derived, Base, types::pure687>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCAnimatedSprite::runAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCAnimatedSprite::runAnimation", 
				(void*)addresses::address687(), 
				(void*)wrap::runAnimation<Membercall, Derived, Base, types::pure687>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure689>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCAnimatedSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCAnimatedSprite::create", 
				(void*)addresses::address689(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure689>::value
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

		if constexpr (compare::create<Derived, Base, types::pure703>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCCircleWave::create", 
				(void*)addresses::address703(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure703>::value
			);
		}

		if constexpr (compare::followObject<Derived, Base, types::pure705>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::followObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCCircleWave::followObject", 
				(void*)addresses::address705(), 
				(void*)wrap::followObject<Membercall, Derived, Base, types::pure705>::value
			);
		}

		if constexpr (compare::updatePosition<Derived, Base, types::pure706>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::updatePosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCCircleWave::updatePosition", 
				(void*)addresses::address706(), 
				(void*)wrap::updatePosition<Membercall, Derived, Base, types::pure706>::value
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure707>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCCircleWave::setPosition", 
				(void*)addresses::address707(), 
				(void*)wrap::setPosition<Membercall, Derived, Base, types::pure707>::value
			);
		}

		if constexpr (compare::removeMeAndCleanup<Derived, Base, types::pure708>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::removeMeAndCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCCircleWave::removeMeAndCleanup", 
				(void*)addresses::address708(), 
				(void*)wrap::removeMeAndCleanup<Thiscall, Derived, Base, types::pure708>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure709>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCCircleWave::draw", 
				(void*)addresses::address709(), 
				(void*)wrap::draw<Thiscall, Derived, Base, types::pure709>::value
			);
		}

		if constexpr (compare::updateTweenAction<Derived, Base, types::pure710>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::updateTweenAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCCircleWave::updateTweenAction", 
				(void*)addresses::address710(), 
				(void*)wrap::updateTweenAction<Membercall, Derived, Base, types::pure710>::value
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

		if constexpr (compare::create<Derived, Base, types::pure712>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCContentLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCContentLayer::create", 
				(void*)addresses::address712(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure712>::value
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

		if constexpr (compare::create<Derived, Base, types::pure713>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCIndexPath::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCIndexPath::create", 
				(void*)addresses::address713(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure713>::value
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

		if constexpr (compare::playEffect<Derived, Base, types::pure715>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCLightFlash::playEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCLightFlash::playEffect", 
				(void*)addresses::address715(), 
				(void*)wrap::playEffect<Membercall, Derived, Base, types::pure715>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure2079>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TextArea::constructor", 
				(void*)addresses::address2079(), 
				(void*)wrap::constructor<Thiscall, Derived, Base, types::pure2079>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure2082>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TextArea::init", 
				(void*)addresses::address2082(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure2082>::value
			);
		}

		if constexpr (compare::colorAllCharactersTo<Derived, Base, types::pure2084>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::colorAllCharactersTo", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TextArea::colorAllCharactersTo", 
				(void*)addresses::address2084(), 
				(void*)wrap::colorAllCharactersTo<Membercall, Derived, Base, types::pure2084>::value
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure2085>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::setString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TextArea::setString", 
				(void*)addresses::address2085(), 
				(void*)wrap::setString<Membercall, Derived, Base, types::pure2085>::value
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

		if constexpr (compare::createToggleButton<Derived, Base, types::pure1491>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameToolbox::createToggleButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameToolbox::createToggleButton", 
				(void*)addresses::address1491(), 
				(void*)wrap::createToggleButton<Optcall, Derived, Base, types::pure1491>::value
			);
		}

		if constexpr (compare::transformColor<Derived, Base, types::pure1492>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameToolbox::transformColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameToolbox::transformColor", 
				(void*)addresses::address1492(), 
				(void*)wrap::transformColor<Optcall, Derived, Base, types::pure1492>::value
			);
		}

		if constexpr (compare::alignItemsHorisontally<Derived, Base, types::pure1493>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameToolbox::alignItemsHorisontally", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameToolbox::alignItemsHorisontally", 
				(void*)addresses::address1493(), 
				(void*)wrap::alignItemsHorisontally<Optcall, Derived, Base, types::pure1493>::value
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

		if constexpr (compare::create<Derived, Base, types::pure746>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCNodeContainer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCNodeContainer::create", 
				(void*)addresses::address746(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure746>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure747>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCNodeContainer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCNodeContainer::init", 
				(void*)addresses::address747(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure747>::value
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure748>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCNodeContainer::visit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCNodeContainer::visit", 
				(void*)addresses::address748(), 
				(void*)wrap::visit<Thiscall, Derived, Base, types::pure748>::value
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

		if constexpr (compare::visit<Derived, Base, types::pure753>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::visit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::visit", 
				(void*)addresses::address753(), 
				(void*)wrap::visit<Thiscall, Derived, Base, types::pure753>::value
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure754>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::ccTouchBegan", 
				(void*)addresses::address754(), 
				(void*)wrap::ccTouchBegan<Thiscall, Derived, Base, types::pure754>::value
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure755>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::ccTouchMoved", 
				(void*)addresses::address755(), 
				(void*)wrap::ccTouchMoved<Thiscall, Derived, Base, types::pure755>::value
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure756>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::ccTouchEnded", 
				(void*)addresses::address756(), 
				(void*)wrap::ccTouchEnded<Thiscall, Derived, Base, types::pure756>::value
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure757>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::ccTouchCancelled", 
				(void*)addresses::address757(), 
				(void*)wrap::ccTouchCancelled<Thiscall, Derived, Base, types::pure757>::value
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure758>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::registerWithTouchDispatcher", 
				(void*)addresses::address758(), 
				(void*)wrap::registerWithTouchDispatcher<Thiscall, Derived, Base, types::pure758>::value
			);
		}

		if constexpr (compare::preVisitWithClippingRect<Derived, Base, types::pure759>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::preVisitWithClippingRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::preVisitWithClippingRect", 
				(void*)addresses::address759(), 
				(void*)wrap::preVisitWithClippingRect<Thiscall, Derived, Base, types::pure759>::value
			);
		}

		if constexpr (compare::postVisit<Derived, Base, types::pure760>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::postVisit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::postVisit", 
				(void*)addresses::address760(), 
				(void*)wrap::postVisit<Thiscall, Derived, Base, types::pure760>::value
			);
		}

		if constexpr (compare::moveToTop<Derived, Base, types::pure761>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::moveToTop", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::moveToTop", 
				(void*)addresses::address761(), 
				(void*)wrap::moveToTop<Thiscall, Derived, Base, types::pure761>::value
			);
		}

		if constexpr (compare::moveToTopWithOffset<Derived, Base, types::pure762>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::moveToTopWithOffset", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::moveToTopWithOffset", 
				(void*)addresses::address762(), 
				(void*)wrap::moveToTopWithOffset<Membercall, Derived, Base, types::pure762>::value
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure763>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::constructor", 
				(void*)addresses::address763(), 
				(void*)wrap::constructor<Membercall, Derived, Base, types::pure763>::value
			);
		}

		if constexpr (compare::scrollLayer<Derived, Base, types::pure764>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::scrollLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::scrollLayer", 
				(void*)addresses::address764(), 
				(void*)wrap::scrollLayer<Membercall, Derived, Base, types::pure764>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2057>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SongInfoLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SongInfoLayer::create", 
				(void*)addresses::address2057(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure2057>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure2058>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SongInfoLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SongInfoLayer::create", 
				(void*)addresses::address2058(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure2058>::value
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

		if constexpr (compare::textForColorIdx<Derived, Base, types::pure1245>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSpecialColorSelect::textForColorIdx", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJSpecialColorSelect::textForColorIdx", 
				(void*)addresses::address1245(), 
				(void*)wrap::textForColorIdx<Optcall, Derived, Base, types::pure1245>::value
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

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure771>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::initWithSpriteFrameName", 
				(void*)addresses::address771(), 
				(void*)wrap::initWithSpriteFrameName<Membercall, Derived, Base, types::pure771>::value
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure772>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::setScaleX", 
				(void*)addresses::address772(), 
				(void*)wrap::setScaleX<Membercall, Derived, Base, types::pure772>::value
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure773>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::setScaleY", 
				(void*)addresses::address773(), 
				(void*)wrap::setScaleY<Membercall, Derived, Base, types::pure773>::value
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure774>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::setScale", 
				(void*)addresses::address774(), 
				(void*)wrap::setScale<Membercall, Derived, Base, types::pure774>::value
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure775>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::setPosition", 
				(void*)addresses::address775(), 
				(void*)wrap::setPosition<Membercall, Derived, Base, types::pure775>::value
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure776>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::setRotation", 
				(void*)addresses::address776(), 
				(void*)wrap::setRotation<Membercall, Derived, Base, types::pure776>::value
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure777>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::initWithTexture", 
				(void*)addresses::address777(), 
				(void*)wrap::initWithTexture<Membercall, Derived, Base, types::pure777>::value
			);
		}

		if constexpr (compare::setFlipX<Derived, Base, types::pure778>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::setFlipX", 
				(void*)addresses::address778(), 
				(void*)wrap::setFlipX<Membercall, Derived, Base, types::pure778>::value
			);
		}

		if constexpr (compare::setFlipY<Derived, Base, types::pure779>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::setFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::setFlipY", 
				(void*)addresses::address779(), 
				(void*)wrap::setFlipY<Membercall, Derived, Base, types::pure779>::value
			);
		}

		if constexpr (compare::createWithSpriteFrame<Derived, Base, types::pure780>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::createWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::createWithSpriteFrame", 
				(void*)addresses::address780(), 
				(void*)wrap::createWithSpriteFrame<Optcall, Derived, Base, types::pure780>::value
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

		if constexpr (compare::setString<Derived, Base, types::pure788>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::setString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::setString", 
				(void*)addresses::address788(), 
				(void*)wrap::setString<Membercall, Derived, Base, types::pure788>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure793>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::init", 
				(void*)addresses::address793(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure793>::value
			);
		}

		if constexpr (compare::refreshLabel<Derived, Base, types::pure794>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::refreshLabel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::refreshLabel", 
				(void*)addresses::address794(), 
				(void*)wrap::refreshLabel<Thiscall, Derived, Base, types::pure794>::value
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure796>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::registerWithTouchDispatcher", 
				(void*)addresses::address796(), 
				(void*)wrap::registerWithTouchDispatcher<Thiscall, Derived, Base, types::pure796>::value
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure797>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::visit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::visit", 
				(void*)addresses::address797(), 
				(void*)wrap::visit<Thiscall, Derived, Base, types::pure797>::value
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure798>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::ccTouchBegan", 
				(void*)addresses::address798(), 
				(void*)wrap::ccTouchBegan<Thiscall, Derived, Base, types::pure798>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure802>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::textChanged", 
				(void*)addresses::address802(), 
				(void*)wrap::textChanged<Thiscall, Derived, Base, types::pure802>::value
			);
		}

		if constexpr (compare::onClickTrackNode<Derived, Base, types::pure803>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onClickTrackNode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::onClickTrackNode", 
				(void*)addresses::address803(), 
				(void*)wrap::onClickTrackNode<Thiscall, Derived, Base, types::pure803>::value
			);
		}

		if constexpr (compare::keyboardWillShow<Derived, Base, types::pure804>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::keyboardWillShow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::keyboardWillShow", 
				(void*)addresses::address804(), 
				(void*)wrap::keyboardWillShow<Thiscall, Derived, Base, types::pure804>::value
			);
		}

		if constexpr (compare::keyboardWillHide<Derived, Base, types::pure805>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::keyboardWillHide", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::keyboardWillHide", 
				(void*)addresses::address805(), 
				(void*)wrap::keyboardWillHide<Thiscall, Derived, Base, types::pure805>::value
			);
		}

		if constexpr (compare::onTextFieldAttachWithIME<Derived, Base, types::pure807>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onTextFieldAttachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::onTextFieldAttachWithIME", 
				(void*)addresses::address807(), 
				(void*)wrap::onTextFieldAttachWithIME<Thiscall, Derived, Base, types::pure807>::value
			);
		}

		if constexpr (compare::onTextFieldDetachWithIME<Derived, Base, types::pure808>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onTextFieldDetachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::onTextFieldDetachWithIME", 
				(void*)addresses::address808(), 
				(void*)wrap::onTextFieldDetachWithIME<Thiscall, Derived, Base, types::pure808>::value
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

		if constexpr (compare::create<Derived, Base, types::pure809>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ChallengesPage::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ChallengesPage::create", 
				(void*)addresses::address809(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure809>::value
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

		if constexpr (compare::colorValueChanged<Derived, Base, types::pure823>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorSelectPopup::colorValueChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ColorSelectPopup::colorValueChanged", 
				(void*)addresses::address823(), 
				(void*)wrap::colorValueChanged<Thiscall, Derived, Base, types::pure823>::value
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

		if constexpr (compare::onStop<Derived, Base, types::pure826>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CreateGuidelinesLayer::onStop", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CreateGuidelinesLayer::onStop", 
				(void*)addresses::address826(), 
				(void*)wrap::onStop<Membercall, Derived, Base, types::pure826>::value
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

		if constexpr (compare::createDialogLayer<Derived, Base, types::pure851>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::createDialogLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::createDialogLayer", 
				(void*)addresses::address851(), 
				(void*)wrap::createDialogLayer<Optcall, Derived, Base, types::pure851>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure852>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::init", 
				(void*)addresses::address852(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure852>::value
			);
		}

		if constexpr (compare::animateIn<Derived, Base, types::pure853>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::animateIn", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::animateIn", 
				(void*)addresses::address853(), 
				(void*)wrap::animateIn<Membercall, Derived, Base, types::pure853>::value
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
struct Modify<Derived, CustomListView> : ModifyBase<Modify<Derived, CustomListView>> {
	using ModifyBase<Modify<Derived, CustomListView>>::ModifyBase;
	using Base = CustomListView;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure833>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomListView::create", 
				(void*)addresses::address833(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure833>::value
			);
		}

		if constexpr (compare::getListCell<Derived, Base, types::pure834>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::getListCell", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomListView::getListCell", 
				(void*)addresses::address834(), 
				(void*)wrap::getListCell<Thiscall, Derived, Base, types::pure834>::value
			);
		}

		if constexpr (compare::loadCell<Derived, Base, types::pure835>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::loadCell", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomListView::loadCell", 
				(void*)addresses::address835(), 
				(void*)wrap::loadCell<Thiscall, Derived, Base, types::pure835>::value
			);
		}

		if constexpr (compare::setupList<Derived, Base, types::pure836>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::setupList", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomListView::setupList", 
				(void*)addresses::address836(), 
				(void*)wrap::setupList<Thiscall, Derived, Base, types::pure836>::value
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure837>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomListView::constructor", 
				(void*)addresses::address837(), 
				(void*)wrap::constructor<Thiscall, Derived, Base, types::pure837>::value
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

		if constexpr (compare::updateSongObject<Derived, Base, types::pure844>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomSongWidget::updateSongObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomSongWidget::updateSongObject", 
				(void*)addresses::address844(), 
				(void*)wrap::updateSongObject<Membercall, Derived, Base, types::pure844>::value
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

		if constexpr (compare::onNextColorChannel<Derived, Base, types::pure845>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomizeObjectLayer::onNextColorChannel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomizeObjectLayer::onNextColorChannel", 
				(void*)addresses::address845(), 
				(void*)wrap::onNextColorChannel<Membercall, Derived, Base, types::pure845>::value
			);
		}

		if constexpr (compare::onSelectColor<Derived, Base, types::pure846>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomizeObjectLayer::onSelectColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomizeObjectLayer::onSelectColor", 
				(void*)addresses::address846(), 
				(void*)wrap::onSelectColor<Membercall, Derived, Base, types::pure846>::value
			);
		}

		if constexpr (compare::getActiveMode<Derived, Base, types::pure847>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomizeObjectLayer::getActiveMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomizeObjectLayer::getActiveMode", 
				(void*)addresses::address847(), 
				(void*)wrap::getActiveMode<Membercall, Derived, Base, types::pure847>::value
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

		if constexpr (compare::create<Derived, Base, types::pure848>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DailyLevelPage::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DailyLevelPage::create", 
				(void*)addresses::address848(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure848>::value
			);
		}

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
struct Modify<Derived, DialogObject> : ModifyBase<Modify<Derived, DialogObject>> {
	using ModifyBase<Modify<Derived, DialogObject>>::ModifyBase;
	using Base = DialogObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure864>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogObject::create", 
				(void*)addresses::address864(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure864>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure865>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogObject::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogObject::init", 
				(void*)addresses::address865(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure865>::value
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

		if constexpr (compare::loadFromItems<Derived, Base, types::pure871>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditButtonBar::loadFromItems", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditButtonBar::loadFromItems", 
				(void*)addresses::address871(), 
				(void*)wrap::loadFromItems<Membercall, Derived, Base, types::pure871>::value
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

		if constexpr (compare::create<Derived, Base, types::pure873>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditLevelLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditLevelLayer::create", 
				(void*)addresses::address873(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure873>::value
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

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure877>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::keyBackClicked", 
				(void*)addresses::address877(), 
				(void*)wrap::keyBackClicked<Thiscall, Derived, Base, types::pure877>::value
			);
		}

		if constexpr (compare::FLAlert_Clicked<Derived, Base, types::pure880>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::FLAlert_Clicked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::FLAlert_Clicked", 
				(void*)addresses::address880(), 
				(void*)wrap::FLAlert_Clicked<Thiscall, Derived, Base, types::pure880>::value
			);
		}

		if constexpr (compare::saveLevel<Derived, Base, types::pure881>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::saveLevel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::saveLevel", 
				(void*)addresses::address881(), 
				(void*)wrap::saveLevel<Thiscall, Derived, Base, types::pure881>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure882>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::init", 
				(void*)addresses::address882(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure882>::value
			);
		}

		if constexpr (compare::onExitEditor<Derived, Base, types::pure883>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onExitEditor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::onExitEditor", 
				(void*)addresses::address883(), 
				(void*)wrap::onExitEditor<Membercall, Derived, Base, types::pure883>::value
			);
		}

		if constexpr (compare::playStep2<Derived, Base, types::pure884>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::playStep2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::playStep2", 
				(void*)addresses::address884(), 
				(void*)wrap::playStep2<Thiscall, Derived, Base, types::pure884>::value
			);
		}

		if constexpr (compare::onResume<Derived, Base, types::pure885>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onResume", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::onResume", 
				(void*)addresses::address885(), 
				(void*)wrap::onResume<Membercall, Derived, Base, types::pure885>::value
			);
		}

		if constexpr (compare::onSaveAndPlay<Derived, Base, types::pure886>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onSaveAndPlay", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::onSaveAndPlay", 
				(void*)addresses::address886(), 
				(void*)wrap::onSaveAndPlay<Membercall, Derived, Base, types::pure886>::value
			);
		}

		if constexpr (compare::onSaveAndExit<Derived, Base, types::pure887>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onSaveAndExit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::onSaveAndExit", 
				(void*)addresses::address887(), 
				(void*)wrap::onSaveAndExit<Membercall, Derived, Base, types::pure887>::value
			);
		}

		if constexpr (compare::onSave<Derived, Base, types::pure888>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onSave", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::onSave", 
				(void*)addresses::address888(), 
				(void*)wrap::onSave<Membercall, Derived, Base, types::pure888>::value
			);
		}

		if constexpr (compare::onExitNoSave<Derived, Base, types::pure889>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::onExitNoSave", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::onExitNoSave", 
				(void*)addresses::address889(), 
				(void*)wrap::onExitNoSave<Membercall, Derived, Base, types::pure889>::value
			);
		}

		if constexpr (compare::uncheckAllPortals<Derived, Base, types::pure890>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::uncheckAllPortals", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::uncheckAllPortals", 
				(void*)addresses::address890(), 
				(void*)wrap::uncheckAllPortals<Membercall, Derived, Base, types::pure890>::value
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure891>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::constructor", 
				(void*)addresses::address891(), 
				(void*)wrap::constructor<Thiscall, Derived, Base, types::pure891>::value
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

		if constexpr (compare::deselectAll<Derived, Base, types::pure895>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::deselectAll", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::deselectAll", 
				(void*)addresses::address895(), 
				(void*)wrap::deselectAll<Thiscall, Derived, Base, types::pure895>::value
			);
		}

		if constexpr (compare::disableButton<Derived, Base, types::pure897>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::disableButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::disableButton", 
				(void*)addresses::address897(), 
				(void*)wrap::disableButton<Membercall, Derived, Base, types::pure897>::value
			);
		}

		if constexpr (compare::editObject<Derived, Base, types::pure899>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::editObject", 
				(void*)addresses::address899(), 
				(void*)wrap::editObject<Membercall, Derived, Base, types::pure899>::value
			);
		}

		if constexpr (compare::enableButton<Derived, Base, types::pure900>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::enableButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::enableButton", 
				(void*)addresses::address900(), 
				(void*)wrap::enableButton<Membercall, Derived, Base, types::pure900>::value
			);
		}

		if constexpr (compare::getCreateBtn<Derived, Base, types::pure901>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getCreateBtn", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::getCreateBtn", 
				(void*)addresses::address901(), 
				(void*)wrap::getCreateBtn<Membercall, Derived, Base, types::pure901>::value
			);
		}

		if constexpr (compare::getGroupCenter<Derived, Base, types::pure902>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getGroupCenter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::getGroupCenter", 
				(void*)addresses::address902(), 
				(void*)wrap::getGroupCenter<Membercall, Derived, Base, types::pure902>::value
			);
		}

		if constexpr (compare::getSelectedObjects<Derived, Base, types::pure903>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getSelectedObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::getSelectedObjects", 
				(void*)addresses::address903(), 
				(void*)wrap::getSelectedObjects<Thiscall, Derived, Base, types::pure903>::value
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure908>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::keyDown", 
				(void*)addresses::address908(), 
				(void*)wrap::keyDown<Thiscall, Derived, Base, types::pure908>::value
			);
		}

		if constexpr (compare::moveObject<Derived, Base, types::pure909>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::moveObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::moveObject", 
				(void*)addresses::address909(), 
				(void*)wrap::moveObject<Membercall, Derived, Base, types::pure909>::value
			);
		}

		if constexpr (compare::onDuplicate<Derived, Base, types::pure910>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onDuplicate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onDuplicate", 
				(void*)addresses::address910(), 
				(void*)wrap::onDuplicate<Membercall, Derived, Base, types::pure910>::value
			);
		}

		if constexpr (compare::pasteObjects<Derived, Base, types::pure911>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::pasteObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::pasteObjects", 
				(void*)addresses::address911(), 
				(void*)wrap::pasteObjects<Membercall, Derived, Base, types::pure911>::value
			);
		}

		if constexpr (compare::redoLastAction<Derived, Base, types::pure914>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::redoLastAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::redoLastAction", 
				(void*)addresses::address914(), 
				(void*)wrap::redoLastAction<Membercall, Derived, Base, types::pure914>::value
			);
		}

		if constexpr (compare::scaleObjects<Derived, Base, types::pure917>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::scaleObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::scaleObjects", 
				(void*)addresses::address917(), 
				(void*)wrap::scaleObjects<Membercall, Derived, Base, types::pure917>::value
			);
		}

		if constexpr (compare::selectObjects<Derived, Base, types::pure918>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::selectObjects", 
				(void*)addresses::address918(), 
				(void*)wrap::selectObjects<Membercall, Derived, Base, types::pure918>::value
			);
		}

		if constexpr (compare::undoLastAction<Derived, Base, types::pure920>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::undoLastAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::undoLastAction", 
				(void*)addresses::address920(), 
				(void*)wrap::undoLastAction<Membercall, Derived, Base, types::pure920>::value
			);
		}

		if constexpr (compare::updateButtons<Derived, Base, types::pure921>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateButtons", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::updateButtons", 
				(void*)addresses::address921(), 
				(void*)wrap::updateButtons<Thiscall, Derived, Base, types::pure921>::value
			);
		}

		if constexpr (compare::updateObjectInfoLabel<Derived, Base, types::pure922>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateObjectInfoLabel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::updateObjectInfoLabel", 
				(void*)addresses::address922(), 
				(void*)wrap::updateObjectInfoLabel<Thiscall, Derived, Base, types::pure922>::value
			);
		}

		if constexpr (compare::updateSlider<Derived, Base, types::pure923>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateSlider", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::updateSlider", 
				(void*)addresses::address923(), 
				(void*)wrap::updateSlider<Thiscall, Derived, Base, types::pure923>::value
			);
		}

		if constexpr (compare::updateZoom<Derived, Base, types::pure924>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateZoom", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::updateZoom", 
				(void*)addresses::address924(), 
				(void*)wrap::updateZoom<Membercall, Derived, Base, types::pure924>::value
			);
		}

		if constexpr (compare::selectObject<Derived, Base, types::pure925>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::selectObject", 
				(void*)addresses::address925(), 
				(void*)wrap::selectObject<Membercall, Derived, Base, types::pure925>::value
			);
		}

		if constexpr (compare::selectAll<Derived, Base, types::pure926>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectAll", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::selectAll", 
				(void*)addresses::address926(), 
				(void*)wrap::selectAll<Thiscall, Derived, Base, types::pure926>::value
			);
		}

		if constexpr (compare::selectAllWithDirection<Derived, Base, types::pure927>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectAllWithDirection", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::selectAllWithDirection", 
				(void*)addresses::address927(), 
				(void*)wrap::selectAllWithDirection<Membercall, Derived, Base, types::pure927>::value
			);
		}

		if constexpr (compare::getTouchPoint<Derived, Base, types::pure928>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getTouchPoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::getTouchPoint", 
				(void*)addresses::address928(), 
				(void*)wrap::getTouchPoint<Membercall, Derived, Base, types::pure928>::value
			);
		}

		if constexpr (compare::onSelectBuildTab<Derived, Base, types::pure929>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onSelectBuildTab", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onSelectBuildTab", 
				(void*)addresses::address929(), 
				(void*)wrap::onSelectBuildTab<Membercall, Derived, Base, types::pure929>::value
			);
		}

		if constexpr (compare::onCreateButton<Derived, Base, types::pure930>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onCreateButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onCreateButton", 
				(void*)addresses::address930(), 
				(void*)wrap::onCreateButton<Membercall, Derived, Base, types::pure930>::value
			);
		}

		if constexpr (compare::getSpriteButton<Derived, Base, types::pure931>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getSpriteButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::getSpriteButton", 
				(void*)addresses::address931(), 
				(void*)wrap::getSpriteButton<Membercall, Derived, Base, types::pure931>::value
			);
		}

		if constexpr (compare::offsetForKey<Derived, Base, types::pure932>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::offsetForKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::offsetForKey", 
				(void*)addresses::address932(), 
				(void*)wrap::offsetForKey<Membercall, Derived, Base, types::pure932>::value
			);
		}

		if constexpr (compare::updateDeleteMenu<Derived, Base, types::pure933>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateDeleteMenu", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::updateDeleteMenu", 
				(void*)addresses::address933(), 
				(void*)wrap::updateDeleteMenu<Thiscall, Derived, Base, types::pure933>::value
			);
		}

		if constexpr (compare::updateCreateMenu<Derived, Base, types::pure934>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateCreateMenu", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::updateCreateMenu", 
				(void*)addresses::address934(), 
				(void*)wrap::updateCreateMenu<Membercall, Derived, Base, types::pure934>::value
			);
		}

		if constexpr (compare::toggleMode<Derived, Base, types::pure935>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::toggleMode", 
				(void*)addresses::address935(), 
				(void*)wrap::toggleMode<Membercall, Derived, Base, types::pure935>::value
			);
		}

		if constexpr (compare::zoomIn<Derived, Base, types::pure936>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::zoomIn", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::zoomIn", 
				(void*)addresses::address936(), 
				(void*)wrap::zoomIn<Membercall, Derived, Base, types::pure936>::value
			);
		}

		if constexpr (compare::zoomOut<Derived, Base, types::pure937>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::zoomOut", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::zoomOut", 
				(void*)addresses::address937(), 
				(void*)wrap::zoomOut<Membercall, Derived, Base, types::pure937>::value
			);
		}

		if constexpr (compare::rotateObjects<Derived, Base, types::pure938>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::rotateObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::rotateObjects", 
				(void*)addresses::address938(), 
				(void*)wrap::rotateObjects<Membercall, Derived, Base, types::pure938>::value
			);
		}

		if constexpr (compare::updateGridNodeSize<Derived, Base, types::pure939>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateGridNodeSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::updateGridNodeSize", 
				(void*)addresses::address939(), 
				(void*)wrap::updateGridNodeSize<Thiscall, Derived, Base, types::pure939>::value
			);
		}

		if constexpr (compare::updateSpecialUIElements<Derived, Base, types::pure940>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateSpecialUIElements", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::updateSpecialUIElements", 
				(void*)addresses::address940(), 
				(void*)wrap::updateSpecialUIElements<Thiscall, Derived, Base, types::pure940>::value
			);
		}

		if constexpr (compare::constrainGameLayerPosition<Derived, Base, types::pure941>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::constrainGameLayerPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::constrainGameLayerPosition", 
				(void*)addresses::address941(), 
				(void*)wrap::constrainGameLayerPosition<Membercall, Derived, Base, types::pure941>::value
			);
		}

		if constexpr (compare::moveGameLayer<Derived, Base, types::pure942>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::moveGameLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::moveGameLayer", 
				(void*)addresses::address942(), 
				(void*)wrap::moveGameLayer<Membercall, Derived, Base, types::pure942>::value
			);
		}

		if constexpr (compare::showUI<Derived, Base, types::pure943>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::showUI", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::showUI", 
				(void*)addresses::address943(), 
				(void*)wrap::showUI<Membercall, Derived, Base, types::pure943>::value
			);
		}

		if constexpr (compare::editObject2<Derived, Base, types::pure944>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editObject2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::editObject2", 
				(void*)addresses::address944(), 
				(void*)wrap::editObject2<Membercall, Derived, Base, types::pure944>::value
			);
		}

		if constexpr (compare::editGroup<Derived, Base, types::pure945>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::editGroup", 
				(void*)addresses::address945(), 
				(void*)wrap::editGroup<Membercall, Derived, Base, types::pure945>::value
			);
		}

		if constexpr (compare::moveObjectCall<Derived, Base, types::pure946>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::moveObjectCall", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::moveObjectCall", 
				(void*)addresses::address946(), 
				(void*)wrap::moveObjectCall<Membercall, Derived, Base, types::pure946>::value
			);
		}

		if constexpr (compare::transformObjectCall<Derived, Base, types::pure947>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::transformObjectCall", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::transformObjectCall", 
				(void*)addresses::address947(), 
				(void*)wrap::transformObjectCall<Membercall, Derived, Base, types::pure947>::value
			);
		}

		if constexpr (compare::onDeleteSelected<Derived, Base, types::pure948>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onDeleteSelected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onDeleteSelected", 
				(void*)addresses::address948(), 
				(void*)wrap::onDeleteSelected<Membercall, Derived, Base, types::pure948>::value
			);
		}

		if constexpr (compare::onCopy<Derived, Base, types::pure949>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onCopy", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onCopy", 
				(void*)addresses::address949(), 
				(void*)wrap::onCopy<Membercall, Derived, Base, types::pure949>::value
			);
		}

		if constexpr (compare::onPaste<Derived, Base, types::pure950>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPaste", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onPaste", 
				(void*)addresses::address950(), 
				(void*)wrap::onPaste<Membercall, Derived, Base, types::pure950>::value
			);
		}

		if constexpr (compare::toggleEnableRotate<Derived, Base, types::pure951>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleEnableRotate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::toggleEnableRotate", 
				(void*)addresses::address951(), 
				(void*)wrap::toggleEnableRotate<Membercall, Derived, Base, types::pure951>::value
			);
		}

		if constexpr (compare::toggleFreeMove<Derived, Base, types::pure952>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleFreeMove", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::toggleFreeMove", 
				(void*)addresses::address952(), 
				(void*)wrap::toggleFreeMove<Membercall, Derived, Base, types::pure952>::value
			);
		}

		if constexpr (compare::toggleSwipe<Derived, Base, types::pure953>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleSwipe", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::toggleSwipe", 
				(void*)addresses::address953(), 
				(void*)wrap::toggleSwipe<Membercall, Derived, Base, types::pure953>::value
			);
		}

		if constexpr (compare::toggleSnap<Derived, Base, types::pure954>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleSnap", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::toggleSnap", 
				(void*)addresses::address954(), 
				(void*)wrap::toggleSnap<Membercall, Derived, Base, types::pure954>::value
			);
		}

		if constexpr (compare::onPlayback<Derived, Base, types::pure955>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPlayback", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onPlayback", 
				(void*)addresses::address955(), 
				(void*)wrap::onPlayback<Membercall, Derived, Base, types::pure955>::value
			);
		}

		if constexpr (compare::onPlaytest<Derived, Base, types::pure956>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPlaytest", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onPlaytest", 
				(void*)addresses::address956(), 
				(void*)wrap::onPlaytest<Membercall, Derived, Base, types::pure956>::value
			);
		}

		if constexpr (compare::onStopPlaytest<Derived, Base, types::pure957>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onStopPlaytest", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onStopPlaytest", 
				(void*)addresses::address957(), 
				(void*)wrap::onStopPlaytest<Membercall, Derived, Base, types::pure957>::value
			);
		}

		if constexpr (compare::onGroupUp<Derived, Base, types::pure958>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGroupUp", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onGroupUp", 
				(void*)addresses::address958(), 
				(void*)wrap::onGroupUp<Membercall, Derived, Base, types::pure958>::value
			);
		}

		if constexpr (compare::onGroupDown<Derived, Base, types::pure959>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGroupDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onGroupDown", 
				(void*)addresses::address959(), 
				(void*)wrap::onGroupDown<Membercall, Derived, Base, types::pure959>::value
			);
		}

		if constexpr (compare::selectBuildTab<Derived, Base, types::pure960>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectBuildTab", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::selectBuildTab", 
				(void*)addresses::address960(), 
				(void*)wrap::selectBuildTab<Membercall, Derived, Base, types::pure960>::value
			);
		}

		if constexpr (compare::onPause<Derived, Base, types::pure961>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPause", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onPause", 
				(void*)addresses::address961(), 
				(void*)wrap::onPause<Membercall, Derived, Base, types::pure961>::value
			);
		}

		if constexpr (compare::onSettings<Derived, Base, types::pure962>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onSettings", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onSettings", 
				(void*)addresses::address962(), 
				(void*)wrap::onSettings<Membercall, Derived, Base, types::pure962>::value
			);
		}

		if constexpr (compare::activateRotationControl<Derived, Base, types::pure963>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::activateRotationControl", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::activateRotationControl", 
				(void*)addresses::address963(), 
				(void*)wrap::activateRotationControl<Membercall, Derived, Base, types::pure963>::value
			);
		}

		if constexpr (compare::activateScaleControl<Derived, Base, types::pure964>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::activateScaleControl", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::activateScaleControl", 
				(void*)addresses::address964(), 
				(void*)wrap::activateScaleControl<Membercall, Derived, Base, types::pure964>::value
			);
		}

		if constexpr (compare::dynamicGroupUpdate<Derived, Base, types::pure965>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::dynamicGroupUpdate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::dynamicGroupUpdate", 
				(void*)addresses::address965(), 
				(void*)wrap::dynamicGroupUpdate<Membercall, Derived, Base, types::pure965>::value
			);
		}

		if constexpr (compare::createRockOutline<Derived, Base, types::pure966>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::createRockOutline", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::createRockOutline", 
				(void*)addresses::address966(), 
				(void*)wrap::createRockOutline<Thiscall, Derived, Base, types::pure966>::value
			);
		}

		if constexpr (compare::createRockEdges<Derived, Base, types::pure967>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::createRockEdges", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::createRockEdges", 
				(void*)addresses::address967(), 
				(void*)wrap::createRockEdges<Thiscall, Derived, Base, types::pure967>::value
			);
		}

		if constexpr (compare::createRockBase<Derived, Base, types::pure968>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::createRockBase", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::createRockBase", 
				(void*)addresses::address968(), 
				(void*)wrap::createRockBase<Thiscall, Derived, Base, types::pure968>::value
			);
		}

		if constexpr (compare::onCopyState<Derived, Base, types::pure969>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onCopyState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onCopyState", 
				(void*)addresses::address969(), 
				(void*)wrap::onCopyState<Membercall, Derived, Base, types::pure969>::value
			);
		}

		if constexpr (compare::onPasteColor<Derived, Base, types::pure970>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPasteColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onPasteColor", 
				(void*)addresses::address970(), 
				(void*)wrap::onPasteColor<Membercall, Derived, Base, types::pure970>::value
			);
		}

		if constexpr (compare::onPasteState<Derived, Base, types::pure971>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPasteState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onPasteState", 
				(void*)addresses::address971(), 
				(void*)wrap::onPasteState<Membercall, Derived, Base, types::pure971>::value
			);
		}

		if constexpr (compare::onGroupSticky<Derived, Base, types::pure972>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGroupSticky", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onGroupSticky", 
				(void*)addresses::address972(), 
				(void*)wrap::onGroupSticky<Membercall, Derived, Base, types::pure972>::value
			);
		}

		if constexpr (compare::onUngroupSticky<Derived, Base, types::pure973>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onUngroupSticky", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onUngroupSticky", 
				(void*)addresses::address973(), 
				(void*)wrap::onUngroupSticky<Membercall, Derived, Base, types::pure973>::value
			);
		}

		if constexpr (compare::onGoToLayer<Derived, Base, types::pure974>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGoToLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onGoToLayer", 
				(void*)addresses::address974(), 
				(void*)wrap::onGoToLayer<Membercall, Derived, Base, types::pure974>::value
			);
		}

		if constexpr (compare::onGoToBaseLayer<Derived, Base, types::pure975>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGoToBaseLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onGoToBaseLayer", 
				(void*)addresses::address975(), 
				(void*)wrap::onGoToBaseLayer<Membercall, Derived, Base, types::pure975>::value
			);
		}

		if constexpr (compare::editColor<Derived, Base, types::pure976>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::editColor", 
				(void*)addresses::address976(), 
				(void*)wrap::editColor<Membercall, Derived, Base, types::pure976>::value
			);
		}

		if constexpr (compare::alignObjects<Derived, Base, types::pure977>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::alignObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::alignObjects", 
				(void*)addresses::address977(), 
				(void*)wrap::alignObjects<Membercall, Derived, Base, types::pure977>::value
			);
		}

		if constexpr (compare::keyUp<Derived, Base, types::pure978>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::keyUp", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::keyUp", 
				(void*)addresses::address978(), 
				(void*)wrap::keyUp<Thiscall, Derived, Base, types::pure978>::value
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

		if constexpr (compare::create<Derived, Base, types::pure980>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EffectGameObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EffectGameObject::create", 
				(void*)addresses::address980(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure980>::value
			);
		}

		if constexpr (compare::triggerObject<Derived, Base, types::pure982>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EffectGameObject::triggerObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EffectGameObject::triggerObject", 
				(void*)addresses::address982(), 
				(void*)wrap::triggerObject<Thiscall, Derived, Base, types::pure982>::value
			);
		}

		if constexpr (compare::getSaveString<Derived, Base, types::pure983>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EffectGameObject::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EffectGameObject::getSaveString", 
				(void*)addresses::address983(), 
				(void*)wrap::getSaveString<Thiscall, Derived, Base, types::pure983>::value
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

		if constexpr (compare::updateSliderPosition<Derived, Base, types::pure1240>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRotationControl::updateSliderPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJRotationControl::updateSliderPosition", 
				(void*)addresses::address1240(), 
				(void*)wrap::updateSliderPosition<Membercall, Derived, Base, types::pure1240>::value
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

		if constexpr (compare::save<Derived, Base, types::pure1267>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GManager::save", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GManager::save", 
				(void*)addresses::address1267(), 
				(void*)wrap::save<Thiscall, Derived, Base, types::pure1267>::value
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

		if constexpr (compare::onEnter<Derived, Base, types::pure988>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::onEnter", 
				(void*)addresses::address988(), 
				(void*)wrap::onEnter<Thiscall, Derived, Base, types::pure988>::value
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure989>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::ccTouchBegan", 
				(void*)addresses::address989(), 
				(void*)wrap::ccTouchBegan<Thiscall, Derived, Base, types::pure989>::value
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure990>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::ccTouchMoved", 
				(void*)addresses::address990(), 
				(void*)wrap::ccTouchMoved<Thiscall, Derived, Base, types::pure990>::value
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure991>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::ccTouchEnded", 
				(void*)addresses::address991(), 
				(void*)wrap::ccTouchEnded<Thiscall, Derived, Base, types::pure991>::value
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure992>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::ccTouchCancelled", 
				(void*)addresses::address992(), 
				(void*)wrap::ccTouchCancelled<Thiscall, Derived, Base, types::pure992>::value
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure993>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::registerWithTouchDispatcher", 
				(void*)addresses::address993(), 
				(void*)wrap::registerWithTouchDispatcher<Thiscall, Derived, Base, types::pure993>::value
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure994>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::keyBackClicked", 
				(void*)addresses::address994(), 
				(void*)wrap::keyBackClicked<Thiscall, Derived, Base, types::pure994>::value
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure995>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::keyDown", 
				(void*)addresses::address995(), 
				(void*)wrap::keyDown<Thiscall, Derived, Base, types::pure995>::value
			);
		}

		if constexpr (compare::show<Derived, Base, types::pure996>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::show", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::show", 
				(void*)addresses::address996(), 
				(void*)wrap::show<Thiscall, Derived, Base, types::pure996>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure998>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::create", 
				(void*)addresses::address998(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure998>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure999>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::create", 
				(void*)addresses::address999(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure999>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1000>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::create", 
				(void*)addresses::address1000(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1000>::value
			);
		}

		if constexpr (compare::onBtn1<Derived, Base, types::pure1001>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::onBtn1", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::onBtn1", 
				(void*)addresses::address1001(), 
				(void*)wrap::onBtn1<Membercall, Derived, Base, types::pure1001>::value
			);
		}

		if constexpr (compare::onBtn2<Derived, Base, types::pure1002>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::onBtn2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::onBtn2", 
				(void*)addresses::address1002(), 
				(void*)wrap::onBtn2<Membercall, Derived, Base, types::pure1002>::value
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

		if constexpr (compare::sharedEngine<Derived, Base, types::pure1004>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::sharedEngine", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FMODAudioEngine::sharedEngine", 
				(void*)addresses::address1004(), 
				(void*)wrap::sharedEngine<Cdecl, Derived, Base, types::pure1004>::value
			);
		}

		if constexpr (compare::preloadEffect<Derived, Base, types::pure1005>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::preloadEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FMODAudioEngine::preloadEffect", 
				(void*)addresses::address1005(), 
				(void*)wrap::preloadEffect<Membercall, Derived, Base, types::pure1005>::value
			);
		}

		if constexpr (compare::isBackgroundMusicPlaying<Derived, Base, types::pure1006>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::isBackgroundMusicPlaying", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FMODAudioEngine::isBackgroundMusicPlaying", 
				(void*)addresses::address1006(), 
				(void*)wrap::isBackgroundMusicPlaying<Thiscall, Derived, Base, types::pure1006>::value
			);
		}

		if constexpr (compare::isBackgroundMusicPlaying<Derived, Base, types::pure1007>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::isBackgroundMusicPlaying", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FMODAudioEngine::isBackgroundMusicPlaying", 
				(void*)addresses::address1007(), 
				(void*)wrap::isBackgroundMusicPlaying<Membercall, Derived, Base, types::pure1007>::value
			);
		}

		if constexpr (compare::playBackgroundMusic<Derived, Base, types::pure1008>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::playBackgroundMusic", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FMODAudioEngine::playBackgroundMusic", 
				(void*)addresses::address1008(), 
				(void*)wrap::playBackgroundMusic<Membercall, Derived, Base, types::pure1008>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1517>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LeaderboardsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LeaderboardsLayer::create", 
				(void*)addresses::address1517(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1517>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1009>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODSound::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FMODSound::create", 
				(void*)addresses::address1009(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1009>::value
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

		if constexpr (compare::sharedState<Derived, Base, types::pure1015>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJAccountManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJAccountManager::sharedState", 
				(void*)addresses::address1015(), 
				(void*)wrap::sharedState<Cdecl, Derived, Base, types::pure1015>::value
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

		if constexpr (compare::toggleGroupTriggered<Derived, Base, types::pure1025>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::toggleGroupTriggered", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::toggleGroupTriggered", 
				(void*)addresses::address1025(), 
				(void*)wrap::toggleGroupTriggered<Thiscall, Derived, Base, types::pure1025>::value
			);
		}

		if constexpr (compare::spawnGroup<Derived, Base, types::pure1026>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::spawnGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::spawnGroup", 
				(void*)addresses::address1026(), 
				(void*)wrap::spawnGroup<Thiscall, Derived, Base, types::pure1026>::value
			);
		}

		if constexpr (compare::getCapacityString<Derived, Base, types::pure1042>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getCapacityString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::getCapacityString", 
				(void*)addresses::address1042(), 
				(void*)wrap::getCapacityString<Thiscall, Derived, Base, types::pure1042>::value
			);
		}

		if constexpr (compare::pushButton<Derived, Base, types::pure1063>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::pushButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::pushButton", 
				(void*)addresses::address1063(), 
				(void*)wrap::pushButton<Membercall, Derived, Base, types::pure1063>::value
			);
		}

		if constexpr (compare::releaseButton<Derived, Base, types::pure1066>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::releaseButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::releaseButton", 
				(void*)addresses::address1066(), 
				(void*)wrap::releaseButton<Membercall, Derived, Base, types::pure1066>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1091>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJComment::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJComment::create", 
				(void*)addresses::address1091(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1091>::value
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

		if constexpr (compare::enterLayer<Derived, Base, types::pure1095>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::enterLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::enterLayer", 
				(void*)addresses::address1095(), 
				(void*)wrap::enterLayer<Thiscall, Derived, Base, types::pure1095>::value
			);
		}

		if constexpr (compare::exitLayer<Derived, Base, types::pure1096>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::exitLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::exitLayer", 
				(void*)addresses::address1096(), 
				(void*)wrap::exitLayer<Thiscall, Derived, Base, types::pure1096>::value
			);
		}

		if constexpr (compare::showLayer<Derived, Base, types::pure1097>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::showLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::showLayer", 
				(void*)addresses::address1097(), 
				(void*)wrap::showLayer<Thiscall, Derived, Base, types::pure1097>::value
			);
		}

		if constexpr (compare::hideLayer<Derived, Base, types::pure1098>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::hideLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::hideLayer", 
				(void*)addresses::address1098(), 
				(void*)wrap::hideLayer<Thiscall, Derived, Base, types::pure1098>::value
			);
		}

		if constexpr (compare::layerVisible<Derived, Base, types::pure1099>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::layerVisible", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::layerVisible", 
				(void*)addresses::address1099(), 
				(void*)wrap::layerVisible<Thiscall, Derived, Base, types::pure1099>::value
			);
		}

		if constexpr (compare::layerHidden<Derived, Base, types::pure1100>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::layerHidden", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::layerHidden", 
				(void*)addresses::address1100(), 
				(void*)wrap::layerHidden<Thiscall, Derived, Base, types::pure1100>::value
			);
		}

		if constexpr (compare::disableUI<Derived, Base, types::pure1102>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::disableUI", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::disableUI", 
				(void*)addresses::address1102(), 
				(void*)wrap::disableUI<Thiscall, Derived, Base, types::pure1102>::value
			);
		}

		if constexpr (compare::enableUI<Derived, Base, types::pure1103>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::enableUI", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::enableUI", 
				(void*)addresses::address1103(), 
				(void*)wrap::enableUI<Thiscall, Derived, Base, types::pure1103>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure1109>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::draw", 
				(void*)addresses::address1109(), 
				(void*)wrap::draw<Thiscall, Derived, Base, types::pure1109>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1110>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::init", 
				(void*)addresses::address1110(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure1110>::value
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure1111>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::registerWithTouchDispatcher", 
				(void*)addresses::address1111(), 
				(void*)wrap::registerWithTouchDispatcher<Thiscall, Derived, Base, types::pure1111>::value
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure1112>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::keyBackClicked", 
				(void*)addresses::address1112(), 
				(void*)wrap::keyBackClicked<Thiscall, Derived, Base, types::pure1112>::value
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

		if constexpr (compare::getColorAction<Derived, Base, types::pure1136>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getColorAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::getColorAction", 
				(void*)addresses::address1136(), 
				(void*)wrap::getColorAction<Membercall, Derived, Base, types::pure1136>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1203>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::create", 
				(void*)addresses::address1203(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure1203>::value
			);
		}

		if constexpr (compare::getAudioFileName<Derived, Base, types::pure1204>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getAudioFileName", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::getAudioFileName", 
				(void*)addresses::address1204(), 
				(void*)wrap::getAudioFileName<Thiscall, Derived, Base, types::pure1204>::value
			);
		}

		if constexpr (compare::levelWasAltered<Derived, Base, types::pure1208>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::levelWasAltered", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::levelWasAltered", 
				(void*)addresses::address1208(), 
				(void*)wrap::levelWasAltered<Thiscall, Derived, Base, types::pure1208>::value
			);
		}

		if constexpr (compare::dataLoaded<Derived, Base, types::pure1210>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::dataLoaded", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::dataLoaded", 
				(void*)addresses::address1210(), 
				(void*)wrap::dataLoaded<Membercall, Derived, Base, types::pure1210>::value
			);
		}

		if constexpr (compare::getAverageDifficulty<Derived, Base, types::pure1211>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getAverageDifficulty", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::getAverageDifficulty", 
				(void*)addresses::address1211(), 
				(void*)wrap::getAverageDifficulty<Thiscall, Derived, Base, types::pure1211>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1214>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::create", 
				(void*)addresses::address1214(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure1214>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1215>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::init", 
				(void*)addresses::address1215(), 
				(void*)wrap::init<Thiscall, Derived, Base, types::pure1215>::value
			);
		}

		if constexpr (compare::onSelectTab<Derived, Base, types::pure1216>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onSelectTab", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onSelectTab", 
				(void*)addresses::address1216(), 
				(void*)wrap::onSelectTab<Membercall, Derived, Base, types::pure1216>::value
			);
		}

		if constexpr (compare::onPlayerIcon<Derived, Base, types::pure1217>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onPlayerIcon", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onPlayerIcon", 
				(void*)addresses::address1217(), 
				(void*)wrap::onPlayerIcon<Membercall, Derived, Base, types::pure1217>::value
			);
		}

		if constexpr (compare::onShipIcon<Derived, Base, types::pure1218>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onShipIcon", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onShipIcon", 
				(void*)addresses::address1218(), 
				(void*)wrap::onShipIcon<Membercall, Derived, Base, types::pure1218>::value
			);
		}

		if constexpr (compare::onBallIcon<Derived, Base, types::pure1219>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onBallIcon", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onBallIcon", 
				(void*)addresses::address1219(), 
				(void*)wrap::onBallIcon<Membercall, Derived, Base, types::pure1219>::value
			);
		}

		if constexpr (compare::onBirdIcon<Derived, Base, types::pure1220>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onBirdIcon", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onBirdIcon", 
				(void*)addresses::address1220(), 
				(void*)wrap::onBirdIcon<Membercall, Derived, Base, types::pure1220>::value
			);
		}

		if constexpr (compare::onDartIcon<Derived, Base, types::pure1221>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onDartIcon", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onDartIcon", 
				(void*)addresses::address1221(), 
				(void*)wrap::onDartIcon<Membercall, Derived, Base, types::pure1221>::value
			);
		}

		if constexpr (compare::onRobotIcon<Derived, Base, types::pure1222>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onRobotIcon", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onRobotIcon", 
				(void*)addresses::address1222(), 
				(void*)wrap::onRobotIcon<Membercall, Derived, Base, types::pure1222>::value
			);
		}

		if constexpr (compare::onSpiderIcon<Derived, Base, types::pure1223>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onSpiderIcon", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onSpiderIcon", 
				(void*)addresses::address1223(), 
				(void*)wrap::onSpiderIcon<Membercall, Derived, Base, types::pure1223>::value
			);
		}

		if constexpr (compare::onShards<Derived, Base, types::pure1224>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onShards", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onShards", 
				(void*)addresses::address1224(), 
				(void*)wrap::onShards<Membercall, Derived, Base, types::pure1224>::value
			);
		}

		if constexpr (compare::onBack<Derived, Base, types::pure1225>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onBack", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onBack", 
				(void*)addresses::address1225(), 
				(void*)wrap::onBack<Membercall, Derived, Base, types::pure1225>::value
			);
		}

		if constexpr (compare::onShop<Derived, Base, types::pure1226>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onShop", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onShop", 
				(void*)addresses::address1226(), 
				(void*)wrap::onShop<Membercall, Derived, Base, types::pure1226>::value
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

		if constexpr (compare::updateGroundWidth<Derived, Base, types::pure1227>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGroundLayer::updateGroundWidth", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGroundLayer::updateGroundWidth", 
				(void*)addresses::address1227(), 
				(void*)wrap::updateGroundWidth<Thiscall, Derived, Base, types::pure1227>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1229>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJItemIcon::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJItemIcon::create", 
				(void*)addresses::address1229(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1229>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1231>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJListLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJListLayer::create", 
				(void*)addresses::address1231(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1231>::value
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

		if constexpr (compare::init<Derived, Base, types::pure1519>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelBrowserLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelBrowserLayer::init", 
				(void*)addresses::address1519(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure1519>::value
			);
		}

		if constexpr (compare::setupLevelBrowser<Derived, Base, types::pure1520>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelBrowserLayer::setupLevelBrowser", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelBrowserLayer::setupLevelBrowser", 
				(void*)addresses::address1520(), 
				(void*)wrap::setupLevelBrowser<Membercall, Derived, Base, types::pure1520>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1521>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelBrowserLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelBrowserLayer::create", 
				(void*)addresses::address1521(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1521>::value
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

		if constexpr (compare::updateLabel<Derived, Base, types::pure1241>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJScaleControl::updateLabel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJScaleControl::updateLabel", 
				(void*)addresses::address1241(), 
				(void*)wrap::updateLabel<Membercall, Derived, Base, types::pure1241>::value
			);
		}

		if constexpr (compare::loadValues<Derived, Base, types::pure1242>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJScaleControl::loadValues", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJScaleControl::loadValues", 
				(void*)addresses::address1242(), 
				(void*)wrap::loadValues<Membercall, Derived, Base, types::pure1242>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1244>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSearchObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJSearchObject::create", 
				(void*)addresses::address1244(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1244>::value
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

		if constexpr (compare::colorForIdx<Derived, Base, types::pure1310>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::colorForIdx", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::colorForIdx", 
				(void*)addresses::address1310(), 
				(void*)wrap::colorForIdx<Membercall, Derived, Base, types::pure1310>::value
			);
		}

		if constexpr (compare::fadeInMusic<Derived, Base, types::pure1313>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::fadeInMusic", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::fadeInMusic", 
				(void*)addresses::address1313(), 
				(void*)wrap::fadeInMusic<Membercall, Derived, Base, types::pure1313>::value
			);
		}

		if constexpr (compare::getGameVariable<Derived, Base, types::pure1316>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::getGameVariable", 
				(void*)addresses::address1316(), 
				(void*)wrap::getGameVariable<Membercall, Derived, Base, types::pure1316>::value
			);
		}

		if constexpr (compare::getIntGameVariable<Derived, Base, types::pure1317>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getIntGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::getIntGameVariable", 
				(void*)addresses::address1317(), 
				(void*)wrap::getIntGameVariable<Membercall, Derived, Base, types::pure1317>::value
			);
		}

		if constexpr (compare::getUGV<Derived, Base, types::pure1318>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getUGV", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::getUGV", 
				(void*)addresses::address1318(), 
				(void*)wrap::getUGV<Membercall, Derived, Base, types::pure1318>::value
			);
		}

		if constexpr (compare::reloadAll<Derived, Base, types::pure1321>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reloadAll", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::reloadAll", 
				(void*)addresses::address1321(), 
				(void*)wrap::reloadAll<Membercall, Derived, Base, types::pure1321>::value
			);
		}

		if constexpr (compare::reloadAllStep2<Derived, Base, types::pure1322>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reloadAllStep2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::reloadAllStep2", 
				(void*)addresses::address1322(), 
				(void*)wrap::reloadAllStep2<Thiscall, Derived, Base, types::pure1322>::value
			);
		}

		if constexpr (compare::setGameVariable<Derived, Base, types::pure1325>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::setGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::setGameVariable", 
				(void*)addresses::address1325(), 
				(void*)wrap::setGameVariable<Membercall, Derived, Base, types::pure1325>::value
			);
		}

		if constexpr (compare::setIntGameVariable<Derived, Base, types::pure1326>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::setIntGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::setIntGameVariable", 
				(void*)addresses::address1326(), 
				(void*)wrap::setIntGameVariable<Membercall, Derived, Base, types::pure1326>::value
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1328>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::sharedState", 
				(void*)addresses::address1328(), 
				(void*)wrap::sharedState<Cdecl, Derived, Base, types::pure1328>::value
			);
		}

		if constexpr (compare::isColorUnlocked<Derived, Base, types::pure1335>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::isColorUnlocked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::isColorUnlocked", 
				(void*)addresses::address1335(), 
				(void*)wrap::isColorUnlocked<Membercall, Derived, Base, types::pure1335>::value
			);
		}

		if constexpr (compare::isIconUnlocked<Derived, Base, types::pure1336>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::isIconUnlocked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::isIconUnlocked", 
				(void*)addresses::address1336(), 
				(void*)wrap::isIconUnlocked<Membercall, Derived, Base, types::pure1336>::value
			);
		}

		if constexpr (compare::toggleGameVariable<Derived, Base, types::pure1337>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::toggleGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::toggleGameVariable", 
				(void*)addresses::address1337(), 
				(void*)wrap::toggleGameVariable<Membercall, Derived, Base, types::pure1337>::value
			);
		}

		if constexpr (compare::returnToLastScene<Derived, Base, types::pure1338>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::returnToLastScene", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::returnToLastScene", 
				(void*)addresses::address1338(), 
				(void*)wrap::returnToLastScene<Optcall, Derived, Base, types::pure1338>::value
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

		if constexpr (compare::setScaleX<Derived, Base, types::pure1352>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setScaleX", 
				(void*)addresses::address1352(), 
				(void*)wrap::setScaleX<Thiscall, Derived, Base, types::pure1352>::value
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure1353>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setScaleY", 
				(void*)addresses::address1353(), 
				(void*)wrap::setScaleY<Thiscall, Derived, Base, types::pure1353>::value
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure1354>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setScale", 
				(void*)addresses::address1354(), 
				(void*)wrap::setScale<Thiscall, Derived, Base, types::pure1354>::value
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure1355>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setPosition", 
				(void*)addresses::address1355(), 
				(void*)wrap::setPosition<Thiscall, Derived, Base, types::pure1355>::value
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure1356>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setVisible", 
				(void*)addresses::address1356(), 
				(void*)wrap::setVisible<Thiscall, Derived, Base, types::pure1356>::value
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure1357>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setRotation", 
				(void*)addresses::address1357(), 
				(void*)wrap::setRotation<Thiscall, Derived, Base, types::pure1357>::value
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure1358>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setOpacity", 
				(void*)addresses::address1358(), 
				(void*)wrap::setOpacity<Thiscall, Derived, Base, types::pure1358>::value
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure1359>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::initWithTexture", 
				(void*)addresses::address1359(), 
				(void*)wrap::initWithTexture<Thiscall, Derived, Base, types::pure1359>::value
			);
		}

		if constexpr (compare::setChildColor<Derived, Base, types::pure1360>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setChildColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setChildColor", 
				(void*)addresses::address1360(), 
				(void*)wrap::setChildColor<Thiscall, Derived, Base, types::pure1360>::value
			);
		}

		if constexpr (compare::setupCustomSprites<Derived, Base, types::pure1364>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setupCustomSprites", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setupCustomSprites", 
				(void*)addresses::address1364(), 
				(void*)wrap::setupCustomSprites<Thiscall, Derived, Base, types::pure1364>::value
			);
		}

		if constexpr (compare::addMainSpriteToParent<Derived, Base, types::pure1365>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addMainSpriteToParent", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::addMainSpriteToParent", 
				(void*)addresses::address1365(), 
				(void*)wrap::addMainSpriteToParent<Thiscall, Derived, Base, types::pure1365>::value
			);
		}

		if constexpr (compare::resetObject<Derived, Base, types::pure1366>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::resetObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::resetObject", 
				(void*)addresses::address1366(), 
				(void*)wrap::resetObject<Thiscall, Derived, Base, types::pure1366>::value
			);
		}

		if constexpr (compare::activateObject<Derived, Base, types::pure1368>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::activateObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::activateObject", 
				(void*)addresses::address1368(), 
				(void*)wrap::activateObject<Thiscall, Derived, Base, types::pure1368>::value
			);
		}

		if constexpr (compare::deactivateObject<Derived, Base, types::pure1369>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::deactivateObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::deactivateObject", 
				(void*)addresses::address1369(), 
				(void*)wrap::deactivateObject<Thiscall, Derived, Base, types::pure1369>::value
			);
		}

		if constexpr (compare::getObjectRect<Derived, Base, types::pure1370>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getObjectRect", 
				(void*)addresses::address1370(), 
				(void*)wrap::getObjectRect<Thiscall, Derived, Base, types::pure1370>::value
			);
		}

		if constexpr (compare::getObjectRect<Derived, Base, types::pure1371>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getObjectRect", 
				(void*)addresses::address1371(), 
				(void*)wrap::getObjectRect<Thiscall, Derived, Base, types::pure1371>::value
			);
		}

		if constexpr (compare::getObjectRect2<Derived, Base, types::pure1372>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRect2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getObjectRect2", 
				(void*)addresses::address1372(), 
				(void*)wrap::getObjectRect2<Thiscall, Derived, Base, types::pure1372>::value
			);
		}

		if constexpr (compare::getObjectTextureRect<Derived, Base, types::pure1373>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getObjectTextureRect", 
				(void*)addresses::address1373(), 
				(void*)wrap::getObjectTextureRect<Thiscall, Derived, Base, types::pure1373>::value
			);
		}

		if constexpr (compare::getRealPosition<Derived, Base, types::pure1374>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getRealPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getRealPosition", 
				(void*)addresses::address1374(), 
				(void*)wrap::getRealPosition<Thiscall, Derived, Base, types::pure1374>::value
			);
		}

		if constexpr (compare::setStartPos<Derived, Base, types::pure1375>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setStartPos", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setStartPos", 
				(void*)addresses::address1375(), 
				(void*)wrap::setStartPos<Thiscall, Derived, Base, types::pure1375>::value
			);
		}

		if constexpr (compare::updateStartValues<Derived, Base, types::pure1376>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateStartValues", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::updateStartValues", 
				(void*)addresses::address1376(), 
				(void*)wrap::updateStartValues<Thiscall, Derived, Base, types::pure1376>::value
			);
		}

		if constexpr (compare::getSaveString<Derived, Base, types::pure1378>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getSaveString", 
				(void*)addresses::address1378(), 
				(void*)wrap::getSaveString<Thiscall, Derived, Base, types::pure1378>::value
			);
		}

		if constexpr (compare::isFlipX<Derived, Base, types::pure1379>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::isFlipX", 
				(void*)addresses::address1379(), 
				(void*)wrap::isFlipX<Thiscall, Derived, Base, types::pure1379>::value
			);
		}

		if constexpr (compare::isFlipY<Derived, Base, types::pure1380>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::isFlipY", 
				(void*)addresses::address1380(), 
				(void*)wrap::isFlipY<Thiscall, Derived, Base, types::pure1380>::value
			);
		}

		if constexpr (compare::setRScaleX<Derived, Base, types::pure1381>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setRScaleX", 
				(void*)addresses::address1381(), 
				(void*)wrap::setRScaleX<Thiscall, Derived, Base, types::pure1381>::value
			);
		}

		if constexpr (compare::setRScaleY<Derived, Base, types::pure1382>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setRScaleY", 
				(void*)addresses::address1382(), 
				(void*)wrap::setRScaleY<Thiscall, Derived, Base, types::pure1382>::value
			);
		}

		if constexpr (compare::setRScale<Derived, Base, types::pure1383>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setRScale", 
				(void*)addresses::address1383(), 
				(void*)wrap::setRScale<Thiscall, Derived, Base, types::pure1383>::value
			);
		}

		if constexpr (compare::getRScaleY<Derived, Base, types::pure1385>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getRScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getRScaleY", 
				(void*)addresses::address1385(), 
				(void*)wrap::getRScaleY<Thiscall, Derived, Base, types::pure1385>::value
			);
		}

		if constexpr (compare::calculateSpawnXPos<Derived, Base, types::pure1386>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::calculateSpawnXPos", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::calculateSpawnXPos", 
				(void*)addresses::address1386(), 
				(void*)wrap::calculateSpawnXPos<Thiscall, Derived, Base, types::pure1386>::value
			);
		}

		if constexpr (compare::powerOnObject<Derived, Base, types::pure1388>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::powerOnObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::powerOnObject", 
				(void*)addresses::address1388(), 
				(void*)wrap::powerOnObject<Thiscall, Derived, Base, types::pure1388>::value
			);
		}

		if constexpr (compare::powerOffObject<Derived, Base, types::pure1389>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::powerOffObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::powerOffObject", 
				(void*)addresses::address1389(), 
				(void*)wrap::powerOffObject<Thiscall, Derived, Base, types::pure1389>::value
			);
		}

		if constexpr (compare::setObjectColor<Derived, Base, types::pure1390>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setObjectColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setObjectColor", 
				(void*)addresses::address1390(), 
				(void*)wrap::setObjectColor<Thiscall, Derived, Base, types::pure1390>::value
			);
		}

		if constexpr (compare::setGlowColor<Derived, Base, types::pure1391>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setGlowColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setGlowColor", 
				(void*)addresses::address1391(), 
				(void*)wrap::setGlowColor<Thiscall, Derived, Base, types::pure1391>::value
			);
		}

		if constexpr (compare::getOrientedBox<Derived, Base, types::pure1392>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getOrientedBox", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getOrientedBox", 
				(void*)addresses::address1392(), 
				(void*)wrap::getOrientedBox<Thiscall, Derived, Base, types::pure1392>::value
			);
		}

		if constexpr (compare::addToGroup<Derived, Base, types::pure1393>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addToGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::addToGroup", 
				(void*)addresses::address1393(), 
				(void*)wrap::addToGroup<Thiscall, Derived, Base, types::pure1393>::value
			);
		}

		if constexpr (compare::removeFromGroup<Derived, Base, types::pure1394>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::removeFromGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::removeFromGroup", 
				(void*)addresses::address1394(), 
				(void*)wrap::removeFromGroup<Thiscall, Derived, Base, types::pure1394>::value
			);
		}

		if constexpr (compare::getType<Derived, Base, types::pure1400>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getType", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getType", 
				(void*)addresses::address1400(), 
				(void*)wrap::getType<Thiscall, Derived, Base, types::pure1400>::value
			);
		}

		if constexpr (compare::setType<Derived, Base, types::pure1401>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setType", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setType", 
				(void*)addresses::address1401(), 
				(void*)wrap::setType<Thiscall, Derived, Base, types::pure1401>::value
			);
		}

		if constexpr (compare::getStartPos<Derived, Base, types::pure1402>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getStartPos", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getStartPos", 
				(void*)addresses::address1402(), 
				(void*)wrap::getStartPos<Thiscall, Derived, Base, types::pure1402>::value
			);
		}

		if constexpr (compare::createWithFrame<Derived, Base, types::pure1412>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::createWithFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::createWithFrame", 
				(void*)addresses::address1412(), 
				(void*)wrap::createWithFrame<Optcall, Derived, Base, types::pure1412>::value
			);
		}

		if constexpr (compare::createWithKey<Derived, Base, types::pure1413>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::createWithKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::createWithKey", 
				(void*)addresses::address1413(), 
				(void*)wrap::createWithKey<Optcall, Derived, Base, types::pure1413>::value
			);
		}

		if constexpr (compare::getBoxOffset<Derived, Base, types::pure1418>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getBoxOffset", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getBoxOffset", 
				(void*)addresses::address1418(), 
				(void*)wrap::getBoxOffset<Thiscall, Derived, Base, types::pure1418>::value
			);
		}

		if constexpr (compare::objectFromString<Derived, Base, types::pure1438>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::objectFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::objectFromString", 
				(void*)addresses::address1438(), 
				(void*)wrap::objectFromString<Optcall, Derived, Base, types::pure1438>::value
			);
		}

		if constexpr (compare::selectObject<Derived, Base, types::pure1444>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::selectObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::selectObject", 
				(void*)addresses::address1444(), 
				(void*)wrap::selectObject<Membercall, Derived, Base, types::pure1444>::value
			);
		}

		if constexpr (compare::updateCustomScale<Derived, Base, types::pure1454>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateCustomScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::updateCustomScale", 
				(void*)addresses::address1454(), 
				(void*)wrap::updateCustomScale<Membercall, Derived, Base, types::pure1454>::value
			);
		}

		if constexpr (compare::deselectObject<Derived, Base, types::pure1461>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::deselectObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::deselectObject", 
				(void*)addresses::address1461(), 
				(void*)wrap::deselectObject<Thiscall, Derived, Base, types::pure1461>::value
			);
		}

		if constexpr (compare::createRotateAction<Derived, Base, types::pure1462>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::createRotateAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::createRotateAction", 
				(void*)addresses::address1462(), 
				(void*)wrap::createRotateAction<Membercall, Derived, Base, types::pure1462>::value
			);
		}

		if constexpr (compare::setMyAction<Derived, Base, types::pure1463>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setMyAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setMyAction", 
				(void*)addresses::address1463(), 
				(void*)wrap::setMyAction<Membercall, Derived, Base, types::pure1463>::value
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

		if constexpr (compare::sharedState<Derived, Base, types::pure1486>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::sharedState", 
				(void*)addresses::address1486(), 
				(void*)wrap::sharedState<Thiscall, Derived, Base, types::pure1486>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1498>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GauntletSelectLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GauntletSelectLayer::create", 
				(void*)addresses::address1498(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure1498>::value
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

		if constexpr (compare::init<Derived, Base, types::pure1505>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoAlertButton::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"InfoAlertButton::init", 
				(void*)addresses::address1505(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure1505>::value
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure1506>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoAlertButton::activate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"InfoAlertButton::activate", 
				(void*)addresses::address1506(), 
				(void*)wrap::activate<Thiscall, Derived, Base, types::pure1506>::value
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure1507>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoAlertButton::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"InfoAlertButton::constructor", 
				(void*)addresses::address1507(), 
				(void*)wrap::constructor<Thiscall, Derived, Base, types::pure1507>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1508>::value) {
			Interface::get()->logInfo(
				"Adding hook at function InfoAlertButton::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"InfoAlertButton::create", 
				(void*)addresses::address1508(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1508>::value
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

		if constexpr (compare::onClose<Derived, Base, types::pure1511>::value) {
			Interface::get()->logInfo(
				"Adding hook at function KeybindingsLayer::onClose", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"KeybindingsLayer::onClose", 
				(void*)addresses::address1511(), 
				(void*)wrap::onClose<Membercall, Derived, Base, types::pure1511>::value
			);
		}

		if constexpr (compare::onPrevPage<Derived, Base, types::pure1512>::value) {
			Interface::get()->logInfo(
				"Adding hook at function KeybindingsLayer::onPrevPage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"KeybindingsLayer::onPrevPage", 
				(void*)addresses::address1512(), 
				(void*)wrap::onPrevPage<Membercall, Derived, Base, types::pure1512>::value
			);
		}

		if constexpr (compare::onNextPage<Derived, Base, types::pure1513>::value) {
			Interface::get()->logInfo(
				"Adding hook at function KeybindingsLayer::onNextPage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"KeybindingsLayer::onNextPage", 
				(void*)addresses::address1513(), 
				(void*)wrap::onNextPage<Membercall, Derived, Base, types::pure1513>::value
			);
		}

		if constexpr (compare::goToPage<Derived, Base, types::pure1514>::value) {
			Interface::get()->logInfo(
				"Adding hook at function KeybindingsLayer::goToPage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"KeybindingsLayer::goToPage", 
				(void*)addresses::address1514(), 
				(void*)wrap::goToPage<Membercall, Derived, Base, types::pure1514>::value
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

		if constexpr (compare::update<Derived, Base, types::pure1525>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::update", 
				(void*)addresses::address1525(), 
				(void*)wrap::update<Thiscall, Derived, Base, types::pure1525>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1535>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::create", 
				(void*)addresses::address1535(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1535>::value
			);
		}

		if constexpr (compare::addObjectFromString<Derived, Base, types::pure1537>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addObjectFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::addObjectFromString", 
				(void*)addresses::address1537(), 
				(void*)wrap::addObjectFromString<Membercall, Derived, Base, types::pure1537>::value
			);
		}

		if constexpr (compare::addSpecial<Derived, Base, types::pure1538>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addSpecial", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::addSpecial", 
				(void*)addresses::address1538(), 
				(void*)wrap::addSpecial<Membercall, Derived, Base, types::pure1538>::value
			);
		}

		if constexpr (compare::createObject<Derived, Base, types::pure1545>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::createObject", 
				(void*)addresses::address1545(), 
				(void*)wrap::createObject<Membercall, Derived, Base, types::pure1545>::value
			);
		}

		if constexpr (compare::getLastObjectX<Derived, Base, types::pure1548>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getLastObjectX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::getLastObjectX", 
				(void*)addresses::address1548(), 
				(void*)wrap::getLastObjectX<Thiscall, Derived, Base, types::pure1548>::value
			);
		}

		if constexpr (compare::getLevelString<Derived, Base, types::pure1549>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getLevelString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::getLevelString", 
				(void*)addresses::address1549(), 
				(void*)wrap::getLevelString<Thiscall, Derived, Base, types::pure1549>::value
			);
		}

		if constexpr (compare::getNextFreeGroupID<Derived, Base, types::pure1552>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getNextFreeGroupID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::getNextFreeGroupID", 
				(void*)addresses::address1552(), 
				(void*)wrap::getNextFreeGroupID<Membercall, Derived, Base, types::pure1552>::value
			);
		}

		if constexpr (compare::getObjectRect<Derived, Base, types::pure1554>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getObjectRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::getObjectRect", 
				(void*)addresses::address1554(), 
				(void*)wrap::getObjectRect<Membercall, Derived, Base, types::pure1554>::value
			);
		}

		if constexpr (compare::objectAtPosition<Derived, Base, types::pure1558>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::objectAtPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::objectAtPosition", 
				(void*)addresses::address1558(), 
				(void*)wrap::objectAtPosition<Membercall, Derived, Base, types::pure1558>::value
			);
		}

		if constexpr (compare::pasteAttributeState<Derived, Base, types::pure1563>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::pasteAttributeState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::pasteAttributeState", 
				(void*)addresses::address1563(), 
				(void*)wrap::pasteAttributeState<Membercall, Derived, Base, types::pure1563>::value
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure1567>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::removeAllObjects", 
				(void*)addresses::address1567(), 
				(void*)wrap::removeAllObjects<Thiscall, Derived, Base, types::pure1567>::value
			);
		}

		if constexpr (compare::removeObject<Derived, Base, types::pure1569>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::removeObject", 
				(void*)addresses::address1569(), 
				(void*)wrap::removeObject<Membercall, Derived, Base, types::pure1569>::value
			);
		}

		if constexpr (compare::updateEditorMode<Derived, Base, types::pure1588>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateEditorMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateEditorMode", 
				(void*)addresses::address1588(), 
				(void*)wrap::updateEditorMode<Thiscall, Derived, Base, types::pure1588>::value
			);
		}

		if constexpr (compare::updateOptions<Derived, Base, types::pure1592>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateOptions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateOptions", 
				(void*)addresses::address1592(), 
				(void*)wrap::updateOptions<Thiscall, Derived, Base, types::pure1592>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1595>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelInfoLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelInfoLayer::create", 
				(void*)addresses::address1595(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1595>::value
			);
		}

		if constexpr (compare::onGarage<Derived, Base, types::pure1596>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelInfoLayer::onGarage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelInfoLayer::onGarage", 
				(void*)addresses::address1596(), 
				(void*)wrap::onGarage<Membercall, Derived, Base, types::pure1596>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1598>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSelectLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelSelectLayer::create", 
				(void*)addresses::address1598(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1598>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1599>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelSettingsLayer::create", 
				(void*)addresses::address1599(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1599>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1612>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LoadingLayer::create", 
				(void*)addresses::address1612(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1612>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1613>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LoadingLayer::init", 
				(void*)addresses::address1613(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure1613>::value
			);
		}

		if constexpr (compare::getLoadingString<Derived, Base, types::pure1614>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::getLoadingString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LoadingLayer::getLoadingString", 
				(void*)addresses::address1614(), 
				(void*)wrap::getLoadingString<Thiscall, Derived, Base, types::pure1614>::value
			);
		}

		if constexpr (compare::loadAssets<Derived, Base, types::pure1615>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::loadAssets", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LoadingLayer::loadAssets", 
				(void*)addresses::address1615(), 
				(void*)wrap::loadAssets<Thiscall, Derived, Base, types::pure1615>::value
			);
		}

		if constexpr (compare::loadingFinished<Derived, Base, types::pure1616>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::loadingFinished", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LoadingLayer::loadingFinished", 
				(void*)addresses::address1616(), 
				(void*)wrap::loadingFinished<Thiscall, Derived, Base, types::pure1616>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1632>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MoreOptionsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MoreOptionsLayer::create", 
				(void*)addresses::address1632(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure1632>::value
			);
		}

		if constexpr (compare::addToggle<Derived, Base, types::pure1633>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MoreOptionsLayer::addToggle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MoreOptionsLayer::addToggle", 
				(void*)addresses::address1633(), 
				(void*)wrap::addToggle<Membercall, Derived, Base, types::pure1633>::value
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

		if constexpr (compare::sharedState<Derived, Base, types::pure1652>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ObjectToolbox::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ObjectToolbox::sharedState", 
				(void*)addresses::address1652(), 
				(void*)wrap::sharedState<Cdecl, Derived, Base, types::pure1652>::value
			);
		}

		if constexpr (compare::gridNodeSizeForKey<Derived, Base, types::pure1653>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ObjectToolbox::gridNodeSizeForKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ObjectToolbox::gridNodeSizeForKey", 
				(void*)addresses::address1653(), 
				(void*)wrap::gridNodeSizeForKey<Membercall, Derived, Base, types::pure1653>::value
			);
		}

		if constexpr (compare::perspectiveBlockFrame<Derived, Base, types::pure1654>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ObjectToolbox::perspectiveBlockFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ObjectToolbox::perspectiveBlockFrame", 
				(void*)addresses::address1654(), 
				(void*)wrap::perspectiveBlockFrame<Membercall, Derived, Base, types::pure1654>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1660>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OptionsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OptionsLayer::create", 
				(void*)addresses::address1660(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure1660>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1686>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::create", 
				(void*)addresses::address1686(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1686>::value
			);
		}

		if constexpr (compare::createCheckpoint<Derived, Base, types::pure1687>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::createCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::createCheckpoint", 
				(void*)addresses::address1687(), 
				(void*)wrap::createCheckpoint<Thiscall, Derived, Base, types::pure1687>::value
			);
		}

		if constexpr (compare::destroyPlayer<Derived, Base, types::pure1692>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::destroyPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::destroyPlayer", 
				(void*)addresses::address1692(), 
				(void*)wrap::destroyPlayer<Membercall, Derived, Base, types::pure1692>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure1694>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::draw", 
				(void*)addresses::address1694(), 
				(void*)wrap::draw<Thiscall, Derived, Base, types::pure1694>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1720>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::init", 
				(void*)addresses::address1720(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure1720>::value
			);
		}

		if constexpr (compare::levelComplete<Derived, Base, types::pure1722>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::levelComplete", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::levelComplete", 
				(void*)addresses::address1722(), 
				(void*)wrap::levelComplete<Thiscall, Derived, Base, types::pure1722>::value
			);
		}

		if constexpr (compare::markCheckpoint<Derived, Base, types::pure1729>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::markCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::markCheckpoint", 
				(void*)addresses::address1729(), 
				(void*)wrap::markCheckpoint<Thiscall, Derived, Base, types::pure1729>::value
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure1731>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::onEnterTransitionDidFinish", 
				(void*)addresses::address1731(), 
				(void*)wrap::onEnterTransitionDidFinish<Thiscall, Derived, Base, types::pure1731>::value
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure1732>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::onExit", 
				(void*)addresses::address1732(), 
				(void*)wrap::onExit<Thiscall, Derived, Base, types::pure1732>::value
			);
		}

		if constexpr (compare::onQuit<Derived, Base, types::pure1733>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::onQuit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::onQuit", 
				(void*)addresses::address1733(), 
				(void*)wrap::onQuit<Thiscall, Derived, Base, types::pure1733>::value
			);
		}

		if constexpr (compare::removeLastCheckpoint<Derived, Base, types::pure1754>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::removeLastCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::removeLastCheckpoint", 
				(void*)addresses::address1754(), 
				(void*)wrap::removeLastCheckpoint<Thiscall, Derived, Base, types::pure1754>::value
			);
		}

		if constexpr (compare::resetLevel<Derived, Base, types::pure1756>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::resetLevel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::resetLevel", 
				(void*)addresses::address1756(), 
				(void*)wrap::resetLevel<Thiscall, Derived, Base, types::pure1756>::value
			);
		}

		if constexpr (compare::scene<Derived, Base, types::pure1760>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::scene", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::scene", 
				(void*)addresses::address1760(), 
				(void*)wrap::scene<Membercall, Derived, Base, types::pure1760>::value
			);
		}

		if constexpr (compare::setupLevelStart<Derived, Base, types::pure1761>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::setupLevelStart", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::setupLevelStart", 
				(void*)addresses::address1761(), 
				(void*)wrap::setupLevelStart<Membercall, Derived, Base, types::pure1761>::value
			);
		}

		if constexpr (compare::timeForXPos2<Derived, Base, types::pure1789>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::timeForXPos2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::timeForXPos2", 
				(void*)addresses::address1789(), 
				(void*)wrap::timeForXPos2<Membercall, Derived, Base, types::pure1789>::value
			);
		}

		if constexpr (compare::togglePracticeMode<Derived, Base, types::pure1795>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::togglePracticeMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::togglePracticeMode", 
				(void*)addresses::address1795(), 
				(void*)wrap::togglePracticeMode<Membercall, Derived, Base, types::pure1795>::value
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1801>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::update", 
				(void*)addresses::address1801(), 
				(void*)wrap::update<Thiscall, Derived, Base, types::pure1801>::value
			);
		}

		if constexpr (compare::updateAttempts<Derived, Base, types::pure1802>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateAttempts", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateAttempts", 
				(void*)addresses::address1802(), 
				(void*)wrap::updateAttempts<Thiscall, Derived, Base, types::pure1802>::value
			);
		}

		if constexpr (compare::updateReplay<Derived, Base, types::pure1810>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateReplay", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateReplay", 
				(void*)addresses::address1810(), 
				(void*)wrap::updateReplay<Membercall, Derived, Base, types::pure1810>::value
			);
		}

		if constexpr (compare::updateTweenAction<Derived, Base, types::pure1812>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateTweenAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateTweenAction", 
				(void*)addresses::address1812(), 
				(void*)wrap::updateTweenAction<Thiscall, Derived, Base, types::pure1812>::value
			);
		}

		if constexpr (compare::updateVisibility<Derived, Base, types::pure1813>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateVisibility", 
				(void*)addresses::address1813(), 
				(void*)wrap::updateVisibility<Thiscall, Derived, Base, types::pure1813>::value
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure1815>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::visit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::visit", 
				(void*)addresses::address1815(), 
				(void*)wrap::visit<Thiscall, Derived, Base, types::pure1815>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1819>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::destructor", 
				(void*)addresses::address1819(), 
				(void*)wrap::destructor<Thiscall, Derived, Base, types::pure1819>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1974>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PointNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PointNode::create", 
				(void*)addresses::address1974(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1974>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1975>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ProfilePage::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ProfilePage::create", 
				(void*)addresses::address1975(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1975>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1980>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SelectArtLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SelectArtLayer::create", 
				(void*)addresses::address1980(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure1980>::value
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

		if constexpr (compare::updateGroupIDLabel<Derived, Base, types::pure1983>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::updateGroupIDLabel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetGroupIDLayer::updateGroupIDLabel", 
				(void*)addresses::address1983(), 
				(void*)wrap::updateGroupIDLabel<Thiscall, Derived, Base, types::pure1983>::value
			);
		}

		if constexpr (compare::updateEditorLayerID<Derived, Base, types::pure1985>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::updateEditorLayerID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetGroupIDLayer::updateEditorLayerID", 
				(void*)addresses::address1985(), 
				(void*)wrap::updateEditorLayerID<Thiscall, Derived, Base, types::pure1985>::value
			);
		}

		if constexpr (compare::updateEditorLayerID2<Derived, Base, types::pure1986>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::updateEditorLayerID2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetGroupIDLayer::updateEditorLayerID2", 
				(void*)addresses::address1986(), 
				(void*)wrap::updateEditorLayerID2<Thiscall, Derived, Base, types::pure1986>::value
			);
		}

		if constexpr (compare::updateZOrder<Derived, Base, types::pure1987>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::updateZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetGroupIDLayer::updateZOrder", 
				(void*)addresses::address1987(), 
				(void*)wrap::updateZOrder<Thiscall, Derived, Base, types::pure1987>::value
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

		if constexpr (compare::init<Derived, Base, types::pure2042>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SimplePlayer::init", 
				(void*)addresses::address2042(), 
				(void*)wrap::init<Membercall, Derived, Base, types::pure2042>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure2043>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SimplePlayer::create", 
				(void*)addresses::address2043(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure2043>::value
			);
		}

		if constexpr (compare::updatePlayerFrame<Derived, Base, types::pure2044>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::updatePlayerFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SimplePlayer::updatePlayerFrame", 
				(void*)addresses::address2044(), 
				(void*)wrap::updatePlayerFrame<Membercall, Derived, Base, types::pure2044>::value
			);
		}

		if constexpr (compare::updateColors<Derived, Base, types::pure2045>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::updateColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SimplePlayer::updateColors", 
				(void*)addresses::address2045(), 
				(void*)wrap::updateColors<Thiscall, Derived, Base, types::pure2045>::value
			);
		}

		if constexpr (compare::setFrames<Derived, Base, types::pure2046>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::setFrames", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SimplePlayer::setFrames", 
				(void*)addresses::address2046(), 
				(void*)wrap::setFrames<Membercall, Derived, Base, types::pure2046>::value
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure2047>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SimplePlayer::setColor", 
				(void*)addresses::address2047(), 
				(void*)wrap::setColor<Membercall, Derived, Base, types::pure2047>::value
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure2048>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SimplePlayer::setOpacity", 
				(void*)addresses::address2048(), 
				(void*)wrap::setOpacity<Membercall, Derived, Base, types::pure2048>::value
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

		if constexpr (compare::getValue<Derived, Base, types::pure2052>::value) {
			Interface::get()->logInfo(
				"Adding hook at function Slider::getValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"Slider::getValue", 
				(void*)addresses::address2052(), 
				(void*)wrap::getValue<Thiscall, Derived, Base, types::pure2052>::value
			);
		}

		if constexpr (compare::updateBar<Derived, Base, types::pure2053>::value) {
			Interface::get()->logInfo(
				"Adding hook at function Slider::updateBar", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"Slider::updateBar", 
				(void*)addresses::address2053(), 
				(void*)wrap::updateBar<Thiscall, Derived, Base, types::pure2053>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure2054>::value) {
			Interface::get()->logInfo(
				"Adding hook at function Slider::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"Slider::create", 
				(void*)addresses::address2054(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure2054>::value
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

		if constexpr (compare::setValue<Derived, Base, types::pure2055>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SliderThumb::setValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SliderThumb::setValue", 
				(void*)addresses::address2055(), 
				(void*)wrap::setValue<Membercall, Derived, Base, types::pure2055>::value
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

		if constexpr (compare::updateBGColor<Derived, Base, types::pure2063>::value) {
			Interface::get()->logInfo(
				"Adding hook at function StatsCell::updateBGColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"StatsCell::updateBGColor", 
				(void*)addresses::address2063(), 
				(void*)wrap::updateBGColor<Membercall, Derived, Base, types::pure2063>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure2064>::value) {
			Interface::get()->logInfo(
				"Adding hook at function StatsCell::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"StatsCell::draw", 
				(void*)addresses::address2064(), 
				(void*)wrap::draw<Thiscall, Derived, Base, types::pure2064>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2078>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextAlertPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TextAlertPopup::create", 
				(void*)addresses::address2078(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure2078>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2099>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::create", 
				(void*)addresses::address2099(), 
				(void*)wrap::create<Cdecl, Derived, Base, types::pure2099>::value
			);
		}

		if constexpr (compare::onCheck<Derived, Base, types::pure2104>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::onCheck", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::onCheck", 
				(void*)addresses::address2104(), 
				(void*)wrap::onCheck<Membercall, Derived, Base, types::pure2104>::value
			);
		}

		if constexpr (compare::onDeleteCheck<Derived, Base, types::pure2105>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::onDeleteCheck", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::onDeleteCheck", 
				(void*)addresses::address2105(), 
				(void*)wrap::onDeleteCheck<Membercall, Derived, Base, types::pure2105>::value
			);
		}

		if constexpr (compare::onPause<Derived, Base, types::pure2106>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::onPause", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::onPause", 
				(void*)addresses::address2106(), 
				(void*)wrap::onPause<Membercall, Derived, Base, types::pure2106>::value
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure2107>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::keyDown", 
				(void*)addresses::address2107(), 
				(void*)wrap::keyDown<Thiscall, Derived, Base, types::pure2107>::value
			);
		}

		if constexpr (compare::keyUp<Derived, Base, types::pure2108>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::keyUp", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::keyUp", 
				(void*)addresses::address2108(), 
				(void*)wrap::keyUp<Thiscall, Derived, Base, types::pure2108>::value
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure2109>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::constructor", 
				(void*)addresses::address2109(), 
				(void*)wrap::constructor<Thiscall, Derived, Base, types::pure2109>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure2110>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::destructor", 
				(void*)addresses::address2110(), 
				(void*)wrap::destructor<Thiscall, Derived, Base, types::pure2110>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2112>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UndoObject::create", 
				(void*)addresses::address2112(), 
				(void*)wrap::create<Optcall, Derived, Base, types::pure2112>::value
			);
		}

		if constexpr (compare::createWithArray<Derived, Base, types::pure2113>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::createWithArray", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UndoObject::createWithArray", 
				(void*)addresses::address2113(), 
				(void*)wrap::createWithArray<Optcall, Derived, Base, types::pure2113>::value
			);
		}

		if constexpr (compare::createWithTransformObjects<Derived, Base, types::pure2114>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::createWithTransformObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UndoObject::createWithTransformObjects", 
				(void*)addresses::address2114(), 
				(void*)wrap::createWithTransformObjects<Optcall, Derived, Base, types::pure2114>::value
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
