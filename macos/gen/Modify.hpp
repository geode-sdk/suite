
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2162>::value, DefaultConv>(
				"UILayer::create", 
				(void*)addresses::address2162()
			);
		}

		if constexpr (compare::disableMenu<Derived, Base, types::pure2163>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::disableMenu", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::disableMenu<DefaultConv, Derived, Base, types::pure2163>::value, DefaultConv>(
				"UILayer::disableMenu", 
				(void*)addresses::address2163()
			);
		}

		if constexpr (compare::enableMenu<Derived, Base, types::pure2164>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::enableMenu", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enableMenu<DefaultConv, Derived, Base, types::pure2164>::value, DefaultConv>(
				"UILayer::enableMenu", 
				(void*)addresses::address2164()
			);
		}

		if constexpr (compare::pCommand<Derived, Base, types::pure2165>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::pCommand", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pCommand<DefaultConv, Derived, Base, types::pure2165>::value, DefaultConv>(
				"UILayer::pCommand", 
				(void*)addresses::address2165()
			);
		}

		if constexpr (compare::toggleCheckpointsMenu<Derived, Base, types::pure2166>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::toggleCheckpointsMenu", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleCheckpointsMenu<DefaultConv, Derived, Base, types::pure2166>::value, DefaultConv>(
				"UILayer::toggleCheckpointsMenu", 
				(void*)addresses::address2166()
			);
		}

		if constexpr (compare::onCheck<Derived, Base, types::pure2167>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::onCheck", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onCheck<DefaultConv, Derived, Base, types::pure2167>::value, DefaultConv>(
				"UILayer::onCheck", 
				(void*)addresses::address2167()
			);
		}

		if constexpr (compare::onDeleteCheck<Derived, Base, types::pure2168>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::onDeleteCheck", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onDeleteCheck<DefaultConv, Derived, Base, types::pure2168>::value, DefaultConv>(
				"UILayer::onDeleteCheck", 
				(void*)addresses::address2168()
			);
		}

		if constexpr (compare::onPause<Derived, Base, types::pure2169>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::onPause", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPause<DefaultConv, Derived, Base, types::pure2169>::value, DefaultConv>(
				"UILayer::onPause", 
				(void*)addresses::address2169()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure2170>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure2170>::value, DefaultConv>(
				"UILayer::keyDown", 
				(void*)addresses::address2170()
			);
		}

		if constexpr (compare::keyUp<Derived, Base, types::pure2171>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::keyUp", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyUp<DefaultConv, Derived, Base, types::pure2171>::value, DefaultConv>(
				"UILayer::keyUp", 
				(void*)addresses::address2171()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ToggleTriggerAction> : ModifyBase<Modify<Derived, ToggleTriggerAction>> {
	using ModifyBase<Modify<Derived, ToggleTriggerAction>>::ModifyBase;
	using Base = ToggleTriggerAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::createFromString<Derived, Base, types::pure2153>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ToggleTriggerAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createFromString<DefaultConv, Derived, Base, types::pure2153>::value, DefaultConv>(
				"ToggleTriggerAction::createFromString", 
				(void*)addresses::address2153()
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
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure2140>::value, DefaultConv>(
				"TextArea::constructor", 
				(void*)addresses::address2140()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure2141>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure2141>::value, DefaultConv>(
				"TextArea::draw", 
				(void*)addresses::address2141()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure2142>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure2142>::value, DefaultConv>(
				"TextArea::setOpacity", 
				(void*)addresses::address2142()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure2143>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure2143>::value, DefaultConv>(
				"TextArea::init", 
				(void*)addresses::address2143()
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure2146>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::setString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setString<DefaultConv, Derived, Base, types::pure2146>::value, DefaultConv>(
				"TextArea::setString", 
				(void*)addresses::address2146()
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
struct Modify<Derived, TableViewDataSource> : ModifyBase<Modify<Derived, TableViewDataSource>> {
	using ModifyBase<Modify<Derived, TableViewDataSource>>::ModifyBase;
	using Base = TableViewDataSource;
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

		if constexpr (compare::draw<Derived, Base, types::pure2125>::value) {
			Interface::get()->logInfo(
				"Adding hook at function StatsCell::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure2125>::value, DefaultConv>(
				"StatsCell::draw", 
				(void*)addresses::address2125()
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
struct Modify<Derived, SliderTouchLogic> : ModifyBase<Modify<Derived, SliderTouchLogic>> {
	using ModifyBase<Modify<Derived, SliderTouchLogic>>::ModifyBase;
	using Base = SliderTouchLogic;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
			Interface::get()->addHook<wrap::setValue<DefaultConv, Derived, Base, types::pure2115>::value, DefaultConv>(
				"SliderThumb::setValue", 
				(void*)addresses::address2115()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SimplePlayer> : ModifyBase<Modify<Derived, SimplePlayer>> {
	using ModifyBase<Modify<Derived, SimplePlayer>>::ModifyBase;
	using Base = SimplePlayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2103>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2103>::value, DefaultConv>(
				"SimplePlayer::create", 
				(void*)addresses::address2103()
			);
		}

		if constexpr (compare::updatePlayerFrame<Derived, Base, types::pure2104>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::updatePlayerFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerFrame<DefaultConv, Derived, Base, types::pure2104>::value, DefaultConv>(
				"SimplePlayer::updatePlayerFrame", 
				(void*)addresses::address2104()
			);
		}

		if constexpr (compare::updateColors<Derived, Base, types::pure2105>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::updateColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColors<DefaultConv, Derived, Base, types::pure2105>::value, DefaultConv>(
				"SimplePlayer::updateColors", 
				(void*)addresses::address2105()
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

		if constexpr (compare::createFromString<Derived, Base, types::pure2123>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SpawnTriggerAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createFromString<DefaultConv, Derived, Base, types::pure2123>::value, DefaultConv>(
				"SpawnTriggerAction::createFromString", 
				(void*)addresses::address2123()
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

		if constexpr (compare::create<Derived, Base, types::pure2090>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupSpawnPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2090>::value, DefaultConv>(
				"SetupSpawnPopup::create", 
				(void*)addresses::address2090()
			);
		}

		if constexpr (compare::createToggleButton<Derived, Base, types::pure2091>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupSpawnPopup::createToggleButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createToggleButton<DefaultConv, Derived, Base, types::pure2091>::value, DefaultConv>(
				"SetupSpawnPopup::createToggleButton", 
				(void*)addresses::address2091()
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2092>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupSpawnPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2092>::value, DefaultConv>(
				"SetupSpawnPopup::onTargetIDArrow", 
				(void*)addresses::address2092()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2093>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupSpawnPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2093>::value, DefaultConv>(
				"SetupSpawnPopup::textChanged", 
				(void*)addresses::address2093()
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2094>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupSpawnPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2094>::value, DefaultConv>(
				"SetupSpawnPopup::updateTargetID", 
				(void*)addresses::address2094()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetupShakePopup> : ModifyBase<Modify<Derived, SetupShakePopup>> {
	using ModifyBase<Modify<Derived, SetupShakePopup>>::ModifyBase;
	using Base = SetupShakePopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2089>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupShakePopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2089>::value, DefaultConv>(
				"SetupShakePopup::create", 
				(void*)addresses::address2089()
			);
		}

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
struct Modify<Derived, SetupObjectTogglePopup> : ModifyBase<Modify<Derived, SetupObjectTogglePopup>> {
	using ModifyBase<Modify<Derived, SetupObjectTogglePopup>>::ModifyBase;
	using Base = SetupObjectTogglePopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2074>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupObjectTogglePopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2074>::value, DefaultConv>(
				"SetupObjectTogglePopup::create", 
				(void*)addresses::address2074()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure2075>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupObjectTogglePopup::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure2075>::value, DefaultConv>(
				"SetupObjectTogglePopup::init", 
				(void*)addresses::address2075()
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2076>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupObjectTogglePopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2076>::value, DefaultConv>(
				"SetupObjectTogglePopup::onTargetIDArrow", 
				(void*)addresses::address2076()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2077>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupObjectTogglePopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2077>::value, DefaultConv>(
				"SetupObjectTogglePopup::textChanged", 
				(void*)addresses::address2077()
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2078>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupObjectTogglePopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2078>::value, DefaultConv>(
				"SetupObjectTogglePopup::updateTargetID", 
				(void*)addresses::address2078()
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

		if constexpr (compare::create<Derived, Base, types::pure2062>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCountTriggerPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2062>::value, DefaultConv>(
				"SetupCountTriggerPopup::create", 
				(void*)addresses::address2062()
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2063>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCountTriggerPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2063>::value, DefaultConv>(
				"SetupCountTriggerPopup::onTargetIDArrow", 
				(void*)addresses::address2063()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2064>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCountTriggerPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2064>::value, DefaultConv>(
				"SetupCountTriggerPopup::textChanged", 
				(void*)addresses::address2064()
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2065>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCountTriggerPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2065>::value, DefaultConv>(
				"SetupCountTriggerPopup::updateTargetID", 
				(void*)addresses::address2065()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetupAnimationPopup> : ModifyBase<Modify<Derived, SetupAnimationPopup>> {
	using ModifyBase<Modify<Derived, SetupAnimationPopup>>::ModifyBase;
	using Base = SetupAnimationPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2054>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupAnimationPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2054>::value, DefaultConv>(
				"SetupAnimationPopup::create", 
				(void*)addresses::address2054()
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2055>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupAnimationPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2055>::value, DefaultConv>(
				"SetupAnimationPopup::onTargetIDArrow", 
				(void*)addresses::address2055()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2056>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupAnimationPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2056>::value, DefaultConv>(
				"SetupAnimationPopup::textChanged", 
				(void*)addresses::address2056()
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2057>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupAnimationPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2057>::value, DefaultConv>(
				"SetupAnimationPopup::updateTargetID", 
				(void*)addresses::address2057()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetTargetIDLayer> : ModifyBase<Modify<Derived, SetTargetIDLayer>> {
	using ModifyBase<Modify<Derived, SetTargetIDLayer>>::ModifyBase;
	using Base = SetTargetIDLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2050>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetTargetIDLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2050>::value, DefaultConv>(
				"SetTargetIDLayer::create", 
				(void*)addresses::address2050()
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2051>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetTargetIDLayer::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2051>::value, DefaultConv>(
				"SetTargetIDLayer::onTargetIDArrow", 
				(void*)addresses::address2051()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2052>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetTargetIDLayer::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2052>::value, DefaultConv>(
				"SetTargetIDLayer::textChanged", 
				(void*)addresses::address2052()
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2053>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetTargetIDLayer::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2053>::value, DefaultConv>(
				"SetTargetIDLayer::updateTargetID", 
				(void*)addresses::address2053()
			);
		}

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
struct Modify<Derived, SelectArtLayer> : ModifyBase<Modify<Derived, SelectArtLayer>> {
	using ModifyBase<Modify<Derived, SelectArtLayer>>::ModifyBase;
	using Base = SelectArtLayer;
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

		if constexpr (compare::create<Derived, Base, types::pure2039>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ScrollingLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2039>::value, DefaultConv>(
				"ScrollingLayer::create", 
				(void*)addresses::address2039()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, RetryLevelLayer> : ModifyBase<Modify<Derived, RetryLevelLayer>> {
	using ModifyBase<Modify<Derived, RetryLevelLayer>>::ModifyBase;
	using Base = RetryLevelLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2038>::value) {
			Interface::get()->logInfo(
				"Adding hook at function RetryLevelLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2038>::value, DefaultConv>(
				"RetryLevelLayer::create", 
				(void*)addresses::address2038()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetupPickupTriggerPopup> : ModifyBase<Modify<Derived, SetupPickupTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupPickupTriggerPopup>>::ModifyBase;
	using Base = SetupPickupTriggerPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2083>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupPickupTriggerPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2083>::value, DefaultConv>(
				"SetupPickupTriggerPopup::create", 
				(void*)addresses::address2083()
			);
		}

		if constexpr (compare::onItemIDArrow<Derived, Base, types::pure2084>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupPickupTriggerPopup::onItemIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onItemIDArrow<DefaultConv, Derived, Base, types::pure2084>::value, DefaultConv>(
				"SetupPickupTriggerPopup::onItemIDArrow", 
				(void*)addresses::address2084()
			);
		}

		if constexpr (compare::onNextItemID<Derived, Base, types::pure2085>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupPickupTriggerPopup::onNextItemID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onNextItemID<DefaultConv, Derived, Base, types::pure2085>::value, DefaultConv>(
				"SetupPickupTriggerPopup::onNextItemID", 
				(void*)addresses::address2085()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2086>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupPickupTriggerPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2086>::value, DefaultConv>(
				"SetupPickupTriggerPopup::textChanged", 
				(void*)addresses::address2086()
			);
		}

		if constexpr (compare::updateItemID<Derived, Base, types::pure2087>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupPickupTriggerPopup::updateItemID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateItemID<DefaultConv, Derived, Base, types::pure2087>::value, DefaultConv>(
				"SetupPickupTriggerPopup::updateItemID", 
				(void*)addresses::address2087()
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

	}
};

template<class Derived>
struct Modify<Derived, PlayerObject> : ModifyBase<Modify<Derived, PlayerObject>> {
	using ModifyBase<Modify<Derived, PlayerObject>>::ModifyBase;
	using Base = PlayerObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure1883>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1883>::value, DefaultConv>(
				"PlayerObject::destructor", 
				(void*)addresses::address1883()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1884>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure1884>::value, DefaultConv>(
				"PlayerObject::update", 
				(void*)addresses::address1884()
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure1885>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleX<DefaultConv, Derived, Base, types::pure1885>::value, DefaultConv>(
				"PlayerObject::setScaleX", 
				(void*)addresses::address1885()
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure1886>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleY<DefaultConv, Derived, Base, types::pure1886>::value, DefaultConv>(
				"PlayerObject::setScaleY", 
				(void*)addresses::address1886()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure1887>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure1887>::value, DefaultConv>(
				"PlayerObject::setScale", 
				(void*)addresses::address1887()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure1888>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure1888>::value, DefaultConv>(
				"PlayerObject::setPosition", 
				(void*)addresses::address1888()
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure1889>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVisible<DefaultConv, Derived, Base, types::pure1889>::value, DefaultConv>(
				"PlayerObject::setVisible", 
				(void*)addresses::address1889()
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure1890>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotation<DefaultConv, Derived, Base, types::pure1890>::value, DefaultConv>(
				"PlayerObject::setRotation", 
				(void*)addresses::address1890()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure1891>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure1891>::value, DefaultConv>(
				"PlayerObject::setOpacity", 
				(void*)addresses::address1891()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure1892>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure1892>::value, DefaultConv>(
				"PlayerObject::setColor", 
				(void*)addresses::address1892()
			);
		}

		if constexpr (compare::setFlipX<Derived, Base, types::pure1893>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipX<DefaultConv, Derived, Base, types::pure1893>::value, DefaultConv>(
				"PlayerObject::setFlipX", 
				(void*)addresses::address1893()
			);
		}

		if constexpr (compare::setFlipY<Derived, Base, types::pure1894>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipY<DefaultConv, Derived, Base, types::pure1894>::value, DefaultConv>(
				"PlayerObject::setFlipY", 
				(void*)addresses::address1894()
			);
		}

		if constexpr (compare::resetObject<Derived, Base, types::pure1895>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetObject<DefaultConv, Derived, Base, types::pure1895>::value, DefaultConv>(
				"PlayerObject::resetObject", 
				(void*)addresses::address1895()
			);
		}

		if constexpr (compare::getRealPosition<Derived, Base, types::pure1896>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getRealPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRealPosition<DefaultConv, Derived, Base, types::pure1896>::value, DefaultConv>(
				"PlayerObject::getRealPosition", 
				(void*)addresses::address1896()
			);
		}

		if constexpr (compare::getOrientedBox<Derived, Base, types::pure1897>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getOrientedBox", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOrientedBox<DefaultConv, Derived, Base, types::pure1897>::value, DefaultConv>(
				"PlayerObject::getOrientedBox", 
				(void*)addresses::address1897()
			);
		}

		if constexpr (compare::animationFinished<Derived, Base, types::pure1898>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::animationFinished", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::animationFinished<DefaultConv, Derived, Base, types::pure1898>::value, DefaultConv>(
				"PlayerObject::animationFinished", 
				(void*)addresses::address1898()
			);
		}

		if constexpr (compare::activateStreak<Derived, Base, types::pure1899>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::activateStreak", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activateStreak<DefaultConv, Derived, Base, types::pure1899>::value, DefaultConv>(
				"PlayerObject::activateStreak", 
				(void*)addresses::address1899()
			);
		}

		if constexpr (compare::addAllParticles<Derived, Base, types::pure1900>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::addAllParticles", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addAllParticles<DefaultConv, Derived, Base, types::pure1900>::value, DefaultConv>(
				"PlayerObject::addAllParticles", 
				(void*)addresses::address1900()
			);
		}

		if constexpr (compare::addToTouchedRings<Derived, Base, types::pure1901>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::addToTouchedRings", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToTouchedRings<DefaultConv, Derived, Base, types::pure1901>::value, DefaultConv>(
				"PlayerObject::addToTouchedRings", 
				(void*)addresses::address1901()
			);
		}

		if constexpr (compare::boostPlayer<Derived, Base, types::pure1902>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::boostPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::boostPlayer<DefaultConv, Derived, Base, types::pure1902>::value, DefaultConv>(
				"PlayerObject::boostPlayer", 
				(void*)addresses::address1902()
			);
		}

		if constexpr (compare::bumpPlayer<Derived, Base, types::pure1903>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::bumpPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::bumpPlayer<DefaultConv, Derived, Base, types::pure1903>::value, DefaultConv>(
				"PlayerObject::bumpPlayer", 
				(void*)addresses::address1903()
			);
		}

		if constexpr (compare::buttonDown<Derived, Base, types::pure1904>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::buttonDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::buttonDown<DefaultConv, Derived, Base, types::pure1904>::value, DefaultConv>(
				"PlayerObject::buttonDown", 
				(void*)addresses::address1904()
			);
		}

		if constexpr (compare::checkSnapJumpToObject<Derived, Base, types::pure1905>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::checkSnapJumpToObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::checkSnapJumpToObject<DefaultConv, Derived, Base, types::pure1905>::value, DefaultConv>(
				"PlayerObject::checkSnapJumpToObject", 
				(void*)addresses::address1905()
			);
		}

		if constexpr (compare::collidedWithObject<Derived, Base, types::pure1906>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::collidedWithObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::collidedWithObject<DefaultConv, Derived, Base, types::pure1906>::value, DefaultConv>(
				"PlayerObject::collidedWithObject", 
				(void*)addresses::address1906()
			);
		}

		if constexpr (compare::collidedWithObject<Derived, Base, types::pure1907>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::collidedWithObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::collidedWithObject<DefaultConv, Derived, Base, types::pure1907>::value, DefaultConv>(
				"PlayerObject::collidedWithObject", 
				(void*)addresses::address1907()
			);
		}

		if constexpr (compare::collidedWithSlope<Derived, Base, types::pure1908>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::collidedWithSlope", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::collidedWithSlope<DefaultConv, Derived, Base, types::pure1908>::value, DefaultConv>(
				"PlayerObject::collidedWithSlope", 
				(void*)addresses::address1908()
			);
		}

		if constexpr (compare::convertToClosestRotation<Derived, Base, types::pure1909>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::convertToClosestRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::convertToClosestRotation<DefaultConv, Derived, Base, types::pure1909>::value, DefaultConv>(
				"PlayerObject::convertToClosestRotation", 
				(void*)addresses::address1909()
			);
		}

		if constexpr (compare::copyAttributes<Derived, Base, types::pure1910>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::copyAttributes", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::copyAttributes<DefaultConv, Derived, Base, types::pure1910>::value, DefaultConv>(
				"PlayerObject::copyAttributes", 
				(void*)addresses::address1910()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1911>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1911>::value, DefaultConv>(
				"PlayerObject::create", 
				(void*)addresses::address1911()
			);
		}

		if constexpr (compare::deactivateParticle<Derived, Base, types::pure1912>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::deactivateParticle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::deactivateParticle<DefaultConv, Derived, Base, types::pure1912>::value, DefaultConv>(
				"PlayerObject::deactivateParticle", 
				(void*)addresses::address1912()
			);
		}

		if constexpr (compare::deactivateStreak<Derived, Base, types::pure1913>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::deactivateStreak", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::deactivateStreak<DefaultConv, Derived, Base, types::pure1913>::value, DefaultConv>(
				"PlayerObject::deactivateStreak", 
				(void*)addresses::address1913()
			);
		}

		if constexpr (compare::fadeOutStreak2<Derived, Base, types::pure1914>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::fadeOutStreak2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fadeOutStreak2<DefaultConv, Derived, Base, types::pure1914>::value, DefaultConv>(
				"PlayerObject::fadeOutStreak2", 
				(void*)addresses::address1914()
			);
		}

		if constexpr (compare::flashPlayer<Derived, Base, types::pure1915>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::flashPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::flashPlayer<DefaultConv, Derived, Base, types::pure1915>::value, DefaultConv>(
				"PlayerObject::flashPlayer", 
				(void*)addresses::address1915()
			);
		}

		if constexpr (compare::flipGravity<Derived, Base, types::pure1916>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::flipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::flipGravity<DefaultConv, Derived, Base, types::pure1916>::value, DefaultConv>(
				"PlayerObject::flipGravity", 
				(void*)addresses::address1916()
			);
		}

		if constexpr (compare::flipMod<Derived, Base, types::pure1917>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::flipMod", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::flipMod<DefaultConv, Derived, Base, types::pure1917>::value, DefaultConv>(
				"PlayerObject::flipMod", 
				(void*)addresses::address1917()
			);
		}

		if constexpr (compare::getActiveMode<Derived, Base, types::pure1918>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getActiveMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getActiveMode<DefaultConv, Derived, Base, types::pure1918>::value, DefaultConv>(
				"PlayerObject::getActiveMode", 
				(void*)addresses::address1918()
			);
		}

		if constexpr (compare::getModifiedSlopeYVel<Derived, Base, types::pure1919>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getModifiedSlopeYVel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getModifiedSlopeYVel<DefaultConv, Derived, Base, types::pure1919>::value, DefaultConv>(
				"PlayerObject::getModifiedSlopeYVel", 
				(void*)addresses::address1919()
			);
		}

		if constexpr (compare::getOldPosition<Derived, Base, types::pure1920>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getOldPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOldPosition<DefaultConv, Derived, Base, types::pure1920>::value, DefaultConv>(
				"PlayerObject::getOldPosition", 
				(void*)addresses::address1920()
			);
		}

		if constexpr (compare::getSecondColor<Derived, Base, types::pure1921>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getSecondColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSecondColor<DefaultConv, Derived, Base, types::pure1921>::value, DefaultConv>(
				"PlayerObject::getSecondColor", 
				(void*)addresses::address1921()
			);
		}

		if constexpr (compare::gravityDown<Derived, Base, types::pure1922>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::gravityDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::gravityDown<DefaultConv, Derived, Base, types::pure1922>::value, DefaultConv>(
				"PlayerObject::gravityDown", 
				(void*)addresses::address1922()
			);
		}

		if constexpr (compare::gravityUp<Derived, Base, types::pure1923>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::gravityUp", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::gravityUp<DefaultConv, Derived, Base, types::pure1923>::value, DefaultConv>(
				"PlayerObject::gravityUp", 
				(void*)addresses::address1923()
			);
		}

		if constexpr (compare::hardFlipGravity<Derived, Base, types::pure1924>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::hardFlipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hardFlipGravity<DefaultConv, Derived, Base, types::pure1924>::value, DefaultConv>(
				"PlayerObject::hardFlipGravity", 
				(void*)addresses::address1924()
			);
		}

		if constexpr (compare::hitGround<Derived, Base, types::pure1925>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::hitGround", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hitGround<DefaultConv, Derived, Base, types::pure1925>::value, DefaultConv>(
				"PlayerObject::hitGround", 
				(void*)addresses::address1925()
			);
		}

		if constexpr (compare::incrementJumps<Derived, Base, types::pure1926>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::incrementJumps", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::incrementJumps<DefaultConv, Derived, Base, types::pure1926>::value, DefaultConv>(
				"PlayerObject::incrementJumps", 
				(void*)addresses::address1926()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1927>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1927>::value, DefaultConv>(
				"PlayerObject::init", 
				(void*)addresses::address1927()
			);
		}

		if constexpr (compare::isBoostValid<Derived, Base, types::pure1928>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::isBoostValid", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isBoostValid<DefaultConv, Derived, Base, types::pure1928>::value, DefaultConv>(
				"PlayerObject::isBoostValid", 
				(void*)addresses::address1928()
			);
		}

		if constexpr (compare::isFlying<Derived, Base, types::pure1929>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::isFlying", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isFlying<DefaultConv, Derived, Base, types::pure1929>::value, DefaultConv>(
				"PlayerObject::isFlying", 
				(void*)addresses::address1929()
			);
		}

		if constexpr (compare::isSafeFlip<Derived, Base, types::pure1930>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::isSafeFlip", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isSafeFlip<DefaultConv, Derived, Base, types::pure1930>::value, DefaultConv>(
				"PlayerObject::isSafeFlip", 
				(void*)addresses::address1930()
			);
		}

		if constexpr (compare::isSafeMode<Derived, Base, types::pure1931>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::isSafeMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isSafeMode<DefaultConv, Derived, Base, types::pure1931>::value, DefaultConv>(
				"PlayerObject::isSafeMode", 
				(void*)addresses::address1931()
			);
		}

		if constexpr (compare::isSafeSpiderFlip<Derived, Base, types::pure1932>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::isSafeSpiderFlip", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isSafeSpiderFlip<DefaultConv, Derived, Base, types::pure1932>::value, DefaultConv>(
				"PlayerObject::isSafeSpiderFlip", 
				(void*)addresses::address1932()
			);
		}

		if constexpr (compare::levelFlipFinished<Derived, Base, types::pure1933>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::levelFlipFinished", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::levelFlipFinished<DefaultConv, Derived, Base, types::pure1933>::value, DefaultConv>(
				"PlayerObject::levelFlipFinished", 
				(void*)addresses::address1933()
			);
		}

		if constexpr (compare::levelFlipping<Derived, Base, types::pure1934>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::levelFlipping", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::levelFlipping<DefaultConv, Derived, Base, types::pure1934>::value, DefaultConv>(
				"PlayerObject::levelFlipping", 
				(void*)addresses::address1934()
			);
		}

		if constexpr (compare::levelWillFlip<Derived, Base, types::pure1935>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::levelWillFlip", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::levelWillFlip<DefaultConv, Derived, Base, types::pure1935>::value, DefaultConv>(
				"PlayerObject::levelWillFlip", 
				(void*)addresses::address1935()
			);
		}

		if constexpr (compare::loadFromCheckpoint<Derived, Base, types::pure1936>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::loadFromCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadFromCheckpoint<DefaultConv, Derived, Base, types::pure1936>::value, DefaultConv>(
				"PlayerObject::loadFromCheckpoint", 
				(void*)addresses::address1936()
			);
		}

		if constexpr (compare::lockPlayer<Derived, Base, types::pure1937>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::lockPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::lockPlayer<DefaultConv, Derived, Base, types::pure1937>::value, DefaultConv>(
				"PlayerObject::lockPlayer", 
				(void*)addresses::address1937()
			);
		}

		if constexpr (compare::logValues<Derived, Base, types::pure1938>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::logValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::logValues<DefaultConv, Derived, Base, types::pure1938>::value, DefaultConv>(
				"PlayerObject::logValues", 
				(void*)addresses::address1938()
			);
		}

		if constexpr (compare::modeDidChange<Derived, Base, types::pure1939>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::modeDidChange", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::modeDidChange<DefaultConv, Derived, Base, types::pure1939>::value, DefaultConv>(
				"PlayerObject::modeDidChange", 
				(void*)addresses::address1939()
			);
		}

		if constexpr (compare::placeStreakPoint<Derived, Base, types::pure1940>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::placeStreakPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::placeStreakPoint<DefaultConv, Derived, Base, types::pure1940>::value, DefaultConv>(
				"PlayerObject::placeStreakPoint", 
				(void*)addresses::address1940()
			);
		}

		if constexpr (compare::playBurstEffect<Derived, Base, types::pure1941>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playBurstEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playBurstEffect<DefaultConv, Derived, Base, types::pure1941>::value, DefaultConv>(
				"PlayerObject::playBurstEffect", 
				(void*)addresses::address1941()
			);
		}

		if constexpr (compare::playDeathEffect<Derived, Base, types::pure1942>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playDeathEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playDeathEffect<DefaultConv, Derived, Base, types::pure1942>::value, DefaultConv>(
				"PlayerObject::playDeathEffect", 
				(void*)addresses::address1942()
			);
		}

		if constexpr (compare::playDynamicSpiderRun<Derived, Base, types::pure1943>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playDynamicSpiderRun", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playDynamicSpiderRun<DefaultConv, Derived, Base, types::pure1943>::value, DefaultConv>(
				"PlayerObject::playDynamicSpiderRun", 
				(void*)addresses::address1943()
			);
		}

		if constexpr (compare::playerDestroyed<Derived, Base, types::pure1944>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playerDestroyed", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playerDestroyed<DefaultConv, Derived, Base, types::pure1944>::value, DefaultConv>(
				"PlayerObject::playerDestroyed", 
				(void*)addresses::address1944()
			);
		}

		if constexpr (compare::playerIsFalling<Derived, Base, types::pure1945>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playerIsFalling", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playerIsFalling<DefaultConv, Derived, Base, types::pure1945>::value, DefaultConv>(
				"PlayerObject::playerIsFalling", 
				(void*)addresses::address1945()
			);
		}

		if constexpr (compare::playerTeleported<Derived, Base, types::pure1946>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playerTeleported", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playerTeleported<DefaultConv, Derived, Base, types::pure1946>::value, DefaultConv>(
				"PlayerObject::playerTeleported", 
				(void*)addresses::address1946()
			);
		}

		if constexpr (compare::playingEndEffect<Derived, Base, types::pure1947>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playingEndEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playingEndEffect<DefaultConv, Derived, Base, types::pure1947>::value, DefaultConv>(
				"PlayerObject::playingEndEffect", 
				(void*)addresses::address1947()
			);
		}

		if constexpr (compare::postCollision<Derived, Base, types::pure1948>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::postCollision", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::postCollision<DefaultConv, Derived, Base, types::pure1948>::value, DefaultConv>(
				"PlayerObject::postCollision", 
				(void*)addresses::address1948()
			);
		}

		if constexpr (compare::preCollision<Derived, Base, types::pure1949>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::preCollision", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::preCollision<DefaultConv, Derived, Base, types::pure1949>::value, DefaultConv>(
				"PlayerObject::preCollision", 
				(void*)addresses::address1949()
			);
		}

		if constexpr (compare::preSlopeCollision<Derived, Base, types::pure1950>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::preSlopeCollision", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::preSlopeCollision<DefaultConv, Derived, Base, types::pure1950>::value, DefaultConv>(
				"PlayerObject::preSlopeCollision", 
				(void*)addresses::address1950()
			);
		}

		if constexpr (compare::propellPlayer<Derived, Base, types::pure1951>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::propellPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::propellPlayer<DefaultConv, Derived, Base, types::pure1951>::value, DefaultConv>(
				"PlayerObject::propellPlayer", 
				(void*)addresses::address1951()
			);
		}

		if constexpr (compare::pushButton<Derived, Base, types::pure1952>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::pushButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pushButton<DefaultConv, Derived, Base, types::pure1952>::value, DefaultConv>(
				"PlayerObject::pushButton", 
				(void*)addresses::address1952()
			);
		}

		if constexpr (compare::pushDown<Derived, Base, types::pure1953>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::pushDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pushDown<DefaultConv, Derived, Base, types::pure1953>::value, DefaultConv>(
				"PlayerObject::pushDown", 
				(void*)addresses::address1953()
			);
		}

		if constexpr (compare::pushPlayer<Derived, Base, types::pure1954>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::pushPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pushPlayer<DefaultConv, Derived, Base, types::pure1954>::value, DefaultConv>(
				"PlayerObject::pushPlayer", 
				(void*)addresses::address1954()
			);
		}

		if constexpr (compare::releaseButton<Derived, Base, types::pure1955>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::releaseButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::releaseButton<DefaultConv, Derived, Base, types::pure1955>::value, DefaultConv>(
				"PlayerObject::releaseButton", 
				(void*)addresses::address1955()
			);
		}

		if constexpr (compare::removeAllParticles<Derived, Base, types::pure1956>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::removeAllParticles", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllParticles<DefaultConv, Derived, Base, types::pure1956>::value, DefaultConv>(
				"PlayerObject::removeAllParticles", 
				(void*)addresses::address1956()
			);
		}

		if constexpr (compare::removePendingCheckpoint<Derived, Base, types::pure1957>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::removePendingCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removePendingCheckpoint<DefaultConv, Derived, Base, types::pure1957>::value, DefaultConv>(
				"PlayerObject::removePendingCheckpoint", 
				(void*)addresses::address1957()
			);
		}

		if constexpr (compare::resetAllParticles<Derived, Base, types::pure1958>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetAllParticles", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetAllParticles<DefaultConv, Derived, Base, types::pure1958>::value, DefaultConv>(
				"PlayerObject::resetAllParticles", 
				(void*)addresses::address1958()
			);
		}

		if constexpr (compare::resetCollisionLog<Derived, Base, types::pure1959>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetCollisionLog", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetCollisionLog<DefaultConv, Derived, Base, types::pure1959>::value, DefaultConv>(
				"PlayerObject::resetCollisionLog", 
				(void*)addresses::address1959()
			);
		}

		if constexpr (compare::resetPlayerIcon<Derived, Base, types::pure1960>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetPlayerIcon", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetPlayerIcon<DefaultConv, Derived, Base, types::pure1960>::value, DefaultConv>(
				"PlayerObject::resetPlayerIcon", 
				(void*)addresses::address1960()
			);
		}

		if constexpr (compare::resetStateVariables<Derived, Base, types::pure1961>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetStateVariables", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetStateVariables<DefaultConv, Derived, Base, types::pure1961>::value, DefaultConv>(
				"PlayerObject::resetStateVariables", 
				(void*)addresses::address1961()
			);
		}

		if constexpr (compare::resetStreak<Derived, Base, types::pure1962>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetStreak", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetStreak<DefaultConv, Derived, Base, types::pure1962>::value, DefaultConv>(
				"PlayerObject::resetStreak", 
				(void*)addresses::address1962()
			);
		}

		if constexpr (compare::ringJump<Derived, Base, types::pure1963>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::ringJump", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ringJump<DefaultConv, Derived, Base, types::pure1963>::value, DefaultConv>(
				"PlayerObject::ringJump", 
				(void*)addresses::address1963()
			);
		}

		if constexpr (compare::runBallRotation<Derived, Base, types::pure1964>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runBallRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runBallRotation<DefaultConv, Derived, Base, types::pure1964>::value, DefaultConv>(
				"PlayerObject::runBallRotation", 
				(void*)addresses::address1964()
			);
		}

		if constexpr (compare::runBallRotation2<Derived, Base, types::pure1965>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runBallRotation2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runBallRotation2<DefaultConv, Derived, Base, types::pure1965>::value, DefaultConv>(
				"PlayerObject::runBallRotation2", 
				(void*)addresses::address1965()
			);
		}

		if constexpr (compare::runNormalRotation<Derived, Base, types::pure1966>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runNormalRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runNormalRotation<DefaultConv, Derived, Base, types::pure1966>::value, DefaultConv>(
				"PlayerObject::runNormalRotation", 
				(void*)addresses::address1966()
			);
		}

		if constexpr (compare::runRotateAction<Derived, Base, types::pure1967>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runRotateAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runRotateAction<DefaultConv, Derived, Base, types::pure1967>::value, DefaultConv>(
				"PlayerObject::runRotateAction", 
				(void*)addresses::address1967()
			);
		}

		if constexpr (compare::saveToCheckpoint<Derived, Base, types::pure1968>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::saveToCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::saveToCheckpoint<DefaultConv, Derived, Base, types::pure1968>::value, DefaultConv>(
				"PlayerObject::saveToCheckpoint", 
				(void*)addresses::address1968()
			);
		}

		if constexpr (compare::setSecondColor<Derived, Base, types::pure1969>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setSecondColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSecondColor<DefaultConv, Derived, Base, types::pure1969>::value, DefaultConv>(
				"PlayerObject::setSecondColor", 
				(void*)addresses::address1969()
			);
		}

		if constexpr (compare::setupStreak<Derived, Base, types::pure1970>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setupStreak", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupStreak<DefaultConv, Derived, Base, types::pure1970>::value, DefaultConv>(
				"PlayerObject::setupStreak", 
				(void*)addresses::address1970()
			);
		}

		if constexpr (compare::spawnCircle<Derived, Base, types::pure1971>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnCircle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnCircle<DefaultConv, Derived, Base, types::pure1971>::value, DefaultConv>(
				"PlayerObject::spawnCircle", 
				(void*)addresses::address1971()
			);
		}

		if constexpr (compare::spawnCircle2<Derived, Base, types::pure1972>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnCircle2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnCircle2<DefaultConv, Derived, Base, types::pure1972>::value, DefaultConv>(
				"PlayerObject::spawnCircle2", 
				(void*)addresses::address1972()
			);
		}

		if constexpr (compare::spawnDualCircle<Derived, Base, types::pure1973>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnDualCircle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnDualCircle<DefaultConv, Derived, Base, types::pure1973>::value, DefaultConv>(
				"PlayerObject::spawnDualCircle", 
				(void*)addresses::address1973()
			);
		}

		if constexpr (compare::spawnFromPlayer<Derived, Base, types::pure1974>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnFromPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnFromPlayer<DefaultConv, Derived, Base, types::pure1974>::value, DefaultConv>(
				"PlayerObject::spawnFromPlayer", 
				(void*)addresses::address1974()
			);
		}

		if constexpr (compare::spawnPortalCircle<Derived, Base, types::pure1975>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnPortalCircle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnPortalCircle<DefaultConv, Derived, Base, types::pure1975>::value, DefaultConv>(
				"PlayerObject::spawnPortalCircle", 
				(void*)addresses::address1975()
			);
		}

		if constexpr (compare::spawnScaleCircle<Derived, Base, types::pure1976>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnScaleCircle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnScaleCircle<DefaultConv, Derived, Base, types::pure1976>::value, DefaultConv>(
				"PlayerObject::spawnScaleCircle", 
				(void*)addresses::address1976()
			);
		}

		if constexpr (compare::specialGroundHit<Derived, Base, types::pure1977>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::specialGroundHit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::specialGroundHit<DefaultConv, Derived, Base, types::pure1977>::value, DefaultConv>(
				"PlayerObject::specialGroundHit", 
				(void*)addresses::address1977()
			);
		}

		if constexpr (compare::speedDown<Derived, Base, types::pure1978>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::speedDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::speedDown<DefaultConv, Derived, Base, types::pure1978>::value, DefaultConv>(
				"PlayerObject::speedDown", 
				(void*)addresses::address1978()
			);
		}

		if constexpr (compare::speedUp<Derived, Base, types::pure1979>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::speedUp", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::speedUp<DefaultConv, Derived, Base, types::pure1979>::value, DefaultConv>(
				"PlayerObject::speedUp", 
				(void*)addresses::address1979()
			);
		}

		if constexpr (compare::spiderTestJump<Derived, Base, types::pure1980>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spiderTestJump", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spiderTestJump<DefaultConv, Derived, Base, types::pure1980>::value, DefaultConv>(
				"PlayerObject::spiderTestJump", 
				(void*)addresses::address1980()
			);
		}

		if constexpr (compare::startDashing<Derived, Base, types::pure1981>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::startDashing", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::startDashing<DefaultConv, Derived, Base, types::pure1981>::value, DefaultConv>(
				"PlayerObject::startDashing", 
				(void*)addresses::address1981()
			);
		}

		if constexpr (compare::stopBurstEffect<Derived, Base, types::pure1982>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::stopBurstEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopBurstEffect<DefaultConv, Derived, Base, types::pure1982>::value, DefaultConv>(
				"PlayerObject::stopBurstEffect", 
				(void*)addresses::address1982()
			);
		}

		if constexpr (compare::stopDashing<Derived, Base, types::pure1983>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::stopDashing", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopDashing<DefaultConv, Derived, Base, types::pure1983>::value, DefaultConv>(
				"PlayerObject::stopDashing", 
				(void*)addresses::address1983()
			);
		}

		if constexpr (compare::stopRotation<Derived, Base, types::pure1984>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::stopRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopRotation<DefaultConv, Derived, Base, types::pure1984>::value, DefaultConv>(
				"PlayerObject::stopRotation", 
				(void*)addresses::address1984()
			);
		}

		if constexpr (compare::storeCollision<Derived, Base, types::pure1985>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::storeCollision", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::storeCollision<DefaultConv, Derived, Base, types::pure1985>::value, DefaultConv>(
				"PlayerObject::storeCollision", 
				(void*)addresses::address1985()
			);
		}

		if constexpr (compare::switchedToMode<Derived, Base, types::pure1986>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::switchedToMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::switchedToMode<DefaultConv, Derived, Base, types::pure1986>::value, DefaultConv>(
				"PlayerObject::switchedToMode", 
				(void*)addresses::address1986()
			);
		}

		if constexpr (compare::testForMoving<Derived, Base, types::pure1987>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::testForMoving", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::testForMoving<DefaultConv, Derived, Base, types::pure1987>::value, DefaultConv>(
				"PlayerObject::testForMoving", 
				(void*)addresses::address1987()
			);
		}

		if constexpr (compare::toggleBirdMode<Derived, Base, types::pure1988>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleBirdMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleBirdMode<DefaultConv, Derived, Base, types::pure1988>::value, DefaultConv>(
				"PlayerObject::toggleBirdMode", 
				(void*)addresses::address1988()
			);
		}

		if constexpr (compare::toggleDartMode<Derived, Base, types::pure1989>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleDartMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleDartMode<DefaultConv, Derived, Base, types::pure1989>::value, DefaultConv>(
				"PlayerObject::toggleDartMode", 
				(void*)addresses::address1989()
			);
		}

		if constexpr (compare::toggleFlyMode<Derived, Base, types::pure1990>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleFlyMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleFlyMode<DefaultConv, Derived, Base, types::pure1990>::value, DefaultConv>(
				"PlayerObject::toggleFlyMode", 
				(void*)addresses::address1990()
			);
		}

		if constexpr (compare::toggleGhostEffect<Derived, Base, types::pure1991>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleGhostEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleGhostEffect<DefaultConv, Derived, Base, types::pure1991>::value, DefaultConv>(
				"PlayerObject::toggleGhostEffect", 
				(void*)addresses::address1991()
			);
		}

		if constexpr (compare::togglePlayerScale<Derived, Base, types::pure1992>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::togglePlayerScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::togglePlayerScale<DefaultConv, Derived, Base, types::pure1992>::value, DefaultConv>(
				"PlayerObject::togglePlayerScale", 
				(void*)addresses::address1992()
			);
		}

		if constexpr (compare::toggleRobotMode<Derived, Base, types::pure1993>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleRobotMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleRobotMode<DefaultConv, Derived, Base, types::pure1993>::value, DefaultConv>(
				"PlayerObject::toggleRobotMode", 
				(void*)addresses::address1993()
			);
		}

		if constexpr (compare::toggleRollMode<Derived, Base, types::pure1994>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleRollMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleRollMode<DefaultConv, Derived, Base, types::pure1994>::value, DefaultConv>(
				"PlayerObject::toggleRollMode", 
				(void*)addresses::address1994()
			);
		}

		if constexpr (compare::toggleSpiderMode<Derived, Base, types::pure1995>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleSpiderMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleSpiderMode<DefaultConv, Derived, Base, types::pure1995>::value, DefaultConv>(
				"PlayerObject::toggleSpiderMode", 
				(void*)addresses::address1995()
			);
		}

		if constexpr (compare::toggleVisibility<Derived, Base, types::pure1996>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleVisibility<DefaultConv, Derived, Base, types::pure1996>::value, DefaultConv>(
				"PlayerObject::toggleVisibility", 
				(void*)addresses::address1996()
			);
		}

		if constexpr (compare::touchedObject<Derived, Base, types::pure1997>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::touchedObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::touchedObject<DefaultConv, Derived, Base, types::pure1997>::value, DefaultConv>(
				"PlayerObject::touchedObject", 
				(void*)addresses::address1997()
			);
		}

		if constexpr (compare::tryPlaceCheckpoint<Derived, Base, types::pure1998>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::tryPlaceCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::tryPlaceCheckpoint<DefaultConv, Derived, Base, types::pure1998>::value, DefaultConv>(
				"PlayerObject::tryPlaceCheckpoint", 
				(void*)addresses::address1998()
			);
		}

		if constexpr (compare::updateCheckpointMode<Derived, Base, types::pure1999>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateCheckpointMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCheckpointMode<DefaultConv, Derived, Base, types::pure1999>::value, DefaultConv>(
				"PlayerObject::updateCheckpointMode", 
				(void*)addresses::address1999()
			);
		}

		if constexpr (compare::updateCheckpointTest<Derived, Base, types::pure2000>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateCheckpointTest", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCheckpointTest<DefaultConv, Derived, Base, types::pure2000>::value, DefaultConv>(
				"PlayerObject::updateCheckpointTest", 
				(void*)addresses::address2000()
			);
		}

		if constexpr (compare::updateCollide<Derived, Base, types::pure2001>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateCollide", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCollide<DefaultConv, Derived, Base, types::pure2001>::value, DefaultConv>(
				"PlayerObject::updateCollide", 
				(void*)addresses::address2001()
			);
		}

		if constexpr (compare::updateCollideBottom<Derived, Base, types::pure2002>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateCollideBottom", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCollideBottom<DefaultConv, Derived, Base, types::pure2002>::value, DefaultConv>(
				"PlayerObject::updateCollideBottom", 
				(void*)addresses::address2002()
			);
		}

		if constexpr (compare::updateCollideTop<Derived, Base, types::pure2003>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateCollideTop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCollideTop<DefaultConv, Derived, Base, types::pure2003>::value, DefaultConv>(
				"PlayerObject::updateCollideTop", 
				(void*)addresses::address2003()
			);
		}

		if constexpr (compare::updateDashAnimation<Derived, Base, types::pure2004>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateDashAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDashAnimation<DefaultConv, Derived, Base, types::pure2004>::value, DefaultConv>(
				"PlayerObject::updateDashAnimation", 
				(void*)addresses::address2004()
			);
		}

		if constexpr (compare::updateDashArt<Derived, Base, types::pure2005>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateDashArt", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDashArt<DefaultConv, Derived, Base, types::pure2005>::value, DefaultConv>(
				"PlayerObject::updateDashArt", 
				(void*)addresses::address2005()
			);
		}

		if constexpr (compare::updateGlowColor<Derived, Base, types::pure2006>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateGlowColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateGlowColor<DefaultConv, Derived, Base, types::pure2006>::value, DefaultConv>(
				"PlayerObject::updateGlowColor", 
				(void*)addresses::address2006()
			);
		}

		if constexpr (compare::updateJump<Derived, Base, types::pure2007>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateJump", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateJump<DefaultConv, Derived, Base, types::pure2007>::value, DefaultConv>(
				"PlayerObject::updateJump", 
				(void*)addresses::address2007()
			);
		}

		if constexpr (compare::updateJumpVariables<Derived, Base, types::pure2008>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateJumpVariables", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateJumpVariables<DefaultConv, Derived, Base, types::pure2008>::value, DefaultConv>(
				"PlayerObject::updateJumpVariables", 
				(void*)addresses::address2008()
			);
		}

		if constexpr (compare::updatePlayerBirdFrame<Derived, Base, types::pure2009>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerBirdFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerBirdFrame<DefaultConv, Derived, Base, types::pure2009>::value, DefaultConv>(
				"PlayerObject::updatePlayerBirdFrame", 
				(void*)addresses::address2009()
			);
		}

		if constexpr (compare::updatePlayerDartFrame<Derived, Base, types::pure2010>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerDartFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerDartFrame<DefaultConv, Derived, Base, types::pure2010>::value, DefaultConv>(
				"PlayerObject::updatePlayerDartFrame", 
				(void*)addresses::address2010()
			);
		}

		if constexpr (compare::updatePlayerFrame<Derived, Base, types::pure2011>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerFrame<DefaultConv, Derived, Base, types::pure2011>::value, DefaultConv>(
				"PlayerObject::updatePlayerFrame", 
				(void*)addresses::address2011()
			);
		}

		if constexpr (compare::updatePlayerGlow<Derived, Base, types::pure2012>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerGlow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerGlow<DefaultConv, Derived, Base, types::pure2012>::value, DefaultConv>(
				"PlayerObject::updatePlayerGlow", 
				(void*)addresses::address2012()
			);
		}

		if constexpr (compare::updatePlayerRobotFrame<Derived, Base, types::pure2013>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerRobotFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerRobotFrame<DefaultConv, Derived, Base, types::pure2013>::value, DefaultConv>(
				"PlayerObject::updatePlayerRobotFrame", 
				(void*)addresses::address2013()
			);
		}

		if constexpr (compare::updatePlayerRollFrame<Derived, Base, types::pure2014>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerRollFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerRollFrame<DefaultConv, Derived, Base, types::pure2014>::value, DefaultConv>(
				"PlayerObject::updatePlayerRollFrame", 
				(void*)addresses::address2014()
			);
		}

		if constexpr (compare::updatePlayerScale<Derived, Base, types::pure2015>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerScale<DefaultConv, Derived, Base, types::pure2015>::value, DefaultConv>(
				"PlayerObject::updatePlayerScale", 
				(void*)addresses::address2015()
			);
		}

		if constexpr (compare::updatePlayerShipFrame<Derived, Base, types::pure2016>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerShipFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerShipFrame<DefaultConv, Derived, Base, types::pure2016>::value, DefaultConv>(
				"PlayerObject::updatePlayerShipFrame", 
				(void*)addresses::address2016()
			);
		}

		if constexpr (compare::updatePlayerSpiderFrame<Derived, Base, types::pure2017>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerSpiderFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerSpiderFrame<DefaultConv, Derived, Base, types::pure2017>::value, DefaultConv>(
				"PlayerObject::updatePlayerSpiderFrame", 
				(void*)addresses::address2017()
			);
		}

		if constexpr (compare::updatePlayerSpriteExtra<Derived, Base, types::pure2018>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerSpriteExtra", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePlayerSpriteExtra<DefaultConv, Derived, Base, types::pure2018>::value, DefaultConv>(
				"PlayerObject::updatePlayerSpriteExtra", 
				(void*)addresses::address2018()
			);
		}

		if constexpr (compare::updateRobotAnimationSpeed<Derived, Base, types::pure2019>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateRobotAnimationSpeed", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateRobotAnimationSpeed<DefaultConv, Derived, Base, types::pure2019>::value, DefaultConv>(
				"PlayerObject::updateRobotAnimationSpeed", 
				(void*)addresses::address2019()
			);
		}

		if constexpr (compare::updateRotation<Derived, Base, types::pure2020>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateRotation<DefaultConv, Derived, Base, types::pure2020>::value, DefaultConv>(
				"PlayerObject::updateRotation", 
				(void*)addresses::address2020()
			);
		}

		if constexpr (compare::updateRotation<Derived, Base, types::pure2021>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateRotation<DefaultConv, Derived, Base, types::pure2021>::value, DefaultConv>(
				"PlayerObject::updateRotation", 
				(void*)addresses::address2021()
			);
		}

		if constexpr (compare::updateShipRotation<Derived, Base, types::pure2022>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateShipRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateShipRotation<DefaultConv, Derived, Base, types::pure2022>::value, DefaultConv>(
				"PlayerObject::updateShipRotation", 
				(void*)addresses::address2022()
			);
		}

		if constexpr (compare::updateShipSpriteExtra<Derived, Base, types::pure2023>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateShipSpriteExtra", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateShipSpriteExtra<DefaultConv, Derived, Base, types::pure2023>::value, DefaultConv>(
				"PlayerObject::updateShipSpriteExtra", 
				(void*)addresses::address2023()
			);
		}

		if constexpr (compare::updateSlopeRotation<Derived, Base, types::pure2024>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateSlopeRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSlopeRotation<DefaultConv, Derived, Base, types::pure2024>::value, DefaultConv>(
				"PlayerObject::updateSlopeRotation", 
				(void*)addresses::address2024()
			);
		}

		if constexpr (compare::updateSlopeYVelocity<Derived, Base, types::pure2025>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateSlopeYVelocity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSlopeYVelocity<DefaultConv, Derived, Base, types::pure2025>::value, DefaultConv>(
				"PlayerObject::updateSlopeYVelocity", 
				(void*)addresses::address2025()
			);
		}

		if constexpr (compare::updateSpecial<Derived, Base, types::pure2026>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateSpecial", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSpecial<DefaultConv, Derived, Base, types::pure2026>::value, DefaultConv>(
				"PlayerObject::updateSpecial", 
				(void*)addresses::address2026()
			);
		}

		if constexpr (compare::updateStateVariables<Derived, Base, types::pure2027>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateStateVariables", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateStateVariables<DefaultConv, Derived, Base, types::pure2027>::value, DefaultConv>(
				"PlayerObject::updateStateVariables", 
				(void*)addresses::address2027()
			);
		}

		if constexpr (compare::updateTimeMod<Derived, Base, types::pure2028>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateTimeMod", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTimeMod<DefaultConv, Derived, Base, types::pure2028>::value, DefaultConv>(
				"PlayerObject::updateTimeMod", 
				(void*)addresses::address2028()
			);
		}

		if constexpr (compare::usingWallLimitedMode<Derived, Base, types::pure2029>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::usingWallLimitedMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::usingWallLimitedMode<DefaultConv, Derived, Base, types::pure2029>::value, DefaultConv>(
				"PlayerObject::usingWallLimitedMode", 
				(void*)addresses::address2029()
			);
		}

		if constexpr (compare::yStartDown<Derived, Base, types::pure2030>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::yStartDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::yStartDown<DefaultConv, Derived, Base, types::pure2030>::value, DefaultConv>(
				"PlayerObject::yStartDown", 
				(void*)addresses::address2030()
			);
		}

		if constexpr (compare::yStartUp<Derived, Base, types::pure2031>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::yStartUp", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::yStartUp<DefaultConv, Derived, Base, types::pure2031>::value, DefaultConv>(
				"PlayerObject::yStartUp", 
				(void*)addresses::address2031()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, PlayerCheckpoint> : ModifyBase<Modify<Derived, PlayerCheckpoint>> {
	using ModifyBase<Modify<Derived, PlayerCheckpoint>>::ModifyBase;
	using Base = PlayerCheckpoint;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure1880>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerCheckpoint::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1880>::value, DefaultConv>(
				"PlayerCheckpoint::destructor", 
				(void*)addresses::address1880()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1881>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerCheckpoint::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1881>::value, DefaultConv>(
				"PlayerCheckpoint::init", 
				(void*)addresses::address1881()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1882>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerCheckpoint::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1882>::value, DefaultConv>(
				"PlayerCheckpoint::create", 
				(void*)addresses::address1882()
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

		if constexpr (compare::addCircle<Derived, Base, types::pure1728>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::addCircle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addCircle<DefaultConv, Derived, Base, types::pure1728>::value, DefaultConv>(
				"PlayLayer::addCircle", 
				(void*)addresses::address1728()
			);
		}

		if constexpr (compare::addObject<Derived, Base, types::pure1729>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::addObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addObject<DefaultConv, Derived, Base, types::pure1729>::value, DefaultConv>(
				"PlayLayer::addObject", 
				(void*)addresses::address1729()
			);
		}

		if constexpr (compare::addToGroupOld<Derived, Base, types::pure1730>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::addToGroupOld", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToGroupOld<DefaultConv, Derived, Base, types::pure1730>::value, DefaultConv>(
				"PlayLayer::addToGroupOld", 
				(void*)addresses::address1730()
			);
		}

		if constexpr (compare::addToSpeedObjects<Derived, Base, types::pure1731>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::addToSpeedObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToSpeedObjects<DefaultConv, Derived, Base, types::pure1731>::value, DefaultConv>(
				"PlayLayer::addToSpeedObjects", 
				(void*)addresses::address1731()
			);
		}

		if constexpr (compare::animateInDualGround<Derived, Base, types::pure1732>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::animateInDualGround", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::animateInDualGround<DefaultConv, Derived, Base, types::pure1732>::value, DefaultConv>(
				"PlayLayer::animateInDualGround", 
				(void*)addresses::address1732()
			);
		}

		if constexpr (compare::animateInGround<Derived, Base, types::pure1733>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::animateInGround", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::animateInGround<DefaultConv, Derived, Base, types::pure1733>::value, DefaultConv>(
				"PlayLayer::animateInGround", 
				(void*)addresses::address1733()
			);
		}

		if constexpr (compare::animateOutGround<Derived, Base, types::pure1734>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::animateOutGround", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::animateOutGround<DefaultConv, Derived, Base, types::pure1734>::value, DefaultConv>(
				"PlayLayer::animateOutGround", 
				(void*)addresses::address1734()
			);
		}

		if constexpr (compare::animateOutGroundFinished<Derived, Base, types::pure1735>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::animateOutGroundFinished", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::animateOutGroundFinished<DefaultConv, Derived, Base, types::pure1735>::value, DefaultConv>(
				"PlayLayer::animateOutGroundFinished", 
				(void*)addresses::address1735()
			);
		}

		if constexpr (compare::applyEnterEffect<Derived, Base, types::pure1736>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::applyEnterEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applyEnterEffect<DefaultConv, Derived, Base, types::pure1736>::value, DefaultConv>(
				"PlayLayer::applyEnterEffect", 
				(void*)addresses::address1736()
			);
		}

		if constexpr (compare::calculateColorValues<Derived, Base, types::pure1737>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::calculateColorValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateColorValues<DefaultConv, Derived, Base, types::pure1737>::value, DefaultConv>(
				"PlayLayer::calculateColorValues", 
				(void*)addresses::address1737()
			);
		}

		if constexpr (compare::cameraMoveX<Derived, Base, types::pure1738>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::cameraMoveX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::cameraMoveX<DefaultConv, Derived, Base, types::pure1738>::value, DefaultConv>(
				"PlayLayer::cameraMoveX", 
				(void*)addresses::address1738()
			);
		}

		if constexpr (compare::cameraMoveY<Derived, Base, types::pure1739>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::cameraMoveY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::cameraMoveY<DefaultConv, Derived, Base, types::pure1739>::value, DefaultConv>(
				"PlayLayer::cameraMoveY", 
				(void*)addresses::address1739()
			);
		}

		if constexpr (compare::checkCollisions<Derived, Base, types::pure1740>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::checkCollisions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::checkCollisions<DefaultConv, Derived, Base, types::pure1740>::value, DefaultConv>(
				"PlayLayer::checkCollisions", 
				(void*)addresses::address1740()
			);
		}

		if constexpr (compare::circleWaveWillBeRemoved<Derived, Base, types::pure1741>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::circleWaveWillBeRemoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::circleWaveWillBeRemoved<DefaultConv, Derived, Base, types::pure1741>::value, DefaultConv>(
				"PlayLayer::circleWaveWillBeRemoved", 
				(void*)addresses::address1741()
			);
		}

		if constexpr (compare::claimParticle<Derived, Base, types::pure1742>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::claimParticle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::claimParticle<DefaultConv, Derived, Base, types::pure1742>::value, DefaultConv>(
				"PlayLayer::claimParticle", 
				(void*)addresses::address1742()
			);
		}

		if constexpr (compare::clearPickedUpItems<Derived, Base, types::pure1743>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::clearPickedUpItems", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::clearPickedUpItems<DefaultConv, Derived, Base, types::pure1743>::value, DefaultConv>(
				"PlayLayer::clearPickedUpItems", 
				(void*)addresses::address1743()
			);
		}

		if constexpr (compare::colorObject<Derived, Base, types::pure1744>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::colorObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorObject<DefaultConv, Derived, Base, types::pure1744>::value, DefaultConv>(
				"PlayLayer::colorObject", 
				(void*)addresses::address1744()
			);
		}

		if constexpr (compare::commitJumps<Derived, Base, types::pure1745>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::commitJumps", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::commitJumps<DefaultConv, Derived, Base, types::pure1745>::value, DefaultConv>(
				"PlayLayer::commitJumps", 
				(void*)addresses::address1745()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1746>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1746>::value, DefaultConv>(
				"PlayLayer::create", 
				(void*)addresses::address1746()
			);
		}

		if constexpr (compare::createCheckpoint<Derived, Base, types::pure1747>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::createCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createCheckpoint<DefaultConv, Derived, Base, types::pure1747>::value, DefaultConv>(
				"PlayLayer::createCheckpoint", 
				(void*)addresses::address1747()
			);
		}

		if constexpr (compare::createObjectsFromSetup<Derived, Base, types::pure1748>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::createObjectsFromSetup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createObjectsFromSetup<DefaultConv, Derived, Base, types::pure1748>::value, DefaultConv>(
				"PlayLayer::createObjectsFromSetup", 
				(void*)addresses::address1748()
			);
		}

		if constexpr (compare::createParticle<Derived, Base, types::pure1749>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::createParticle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createParticle<DefaultConv, Derived, Base, types::pure1749>::value, DefaultConv>(
				"PlayLayer::createParticle", 
				(void*)addresses::address1749()
			);
		}

		if constexpr (compare::currencyWillExit<Derived, Base, types::pure1750>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::currencyWillExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::currencyWillExit<DefaultConv, Derived, Base, types::pure1750>::value, DefaultConv>(
				"PlayLayer::currencyWillExit", 
				(void*)addresses::address1750()
			);
		}

		if constexpr (compare::delayedResetLevel<Derived, Base, types::pure1751>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::delayedResetLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::delayedResetLevel<DefaultConv, Derived, Base, types::pure1751>::value, DefaultConv>(
				"PlayLayer::delayedResetLevel", 
				(void*)addresses::address1751()
			);
		}

		if constexpr (compare::destroyPlayer<Derived, Base, types::pure1752>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::destroyPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destroyPlayer<DefaultConv, Derived, Base, types::pure1752>::value, DefaultConv>(
				"PlayLayer::destroyPlayer", 
				(void*)addresses::address1752()
			);
		}

		if constexpr (compare::dialogClosed<Derived, Base, types::pure1753>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::dialogClosed", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::dialogClosed<DefaultConv, Derived, Base, types::pure1753>::value, DefaultConv>(
				"PlayLayer::dialogClosed", 
				(void*)addresses::address1753()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure1754>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure1754>::value, DefaultConv>(
				"PlayLayer::draw", 
				(void*)addresses::address1754()
			);
		}

		if constexpr (compare::enterDualMode<Derived, Base, types::pure1755>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::enterDualMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enterDualMode<DefaultConv, Derived, Base, types::pure1755>::value, DefaultConv>(
				"PlayLayer::enterDualMode", 
				(void*)addresses::address1755()
			);
		}

		if constexpr (compare::exitAirMode<Derived, Base, types::pure1756>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitAirMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::exitAirMode<DefaultConv, Derived, Base, types::pure1756>::value, DefaultConv>(
				"PlayLayer::exitAirMode", 
				(void*)addresses::address1756()
			);
		}

		if constexpr (compare::exitBirdMode<Derived, Base, types::pure1757>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitBirdMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::exitBirdMode<DefaultConv, Derived, Base, types::pure1757>::value, DefaultConv>(
				"PlayLayer::exitBirdMode", 
				(void*)addresses::address1757()
			);
		}

		if constexpr (compare::exitDartMode<Derived, Base, types::pure1758>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitDartMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::exitDartMode<DefaultConv, Derived, Base, types::pure1758>::value, DefaultConv>(
				"PlayLayer::exitDartMode", 
				(void*)addresses::address1758()
			);
		}

		if constexpr (compare::exitFlyMode<Derived, Base, types::pure1759>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitFlyMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::exitFlyMode<DefaultConv, Derived, Base, types::pure1759>::value, DefaultConv>(
				"PlayLayer::exitFlyMode", 
				(void*)addresses::address1759()
			);
		}

		if constexpr (compare::exitRobotMode<Derived, Base, types::pure1760>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitRobotMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::exitRobotMode<DefaultConv, Derived, Base, types::pure1760>::value, DefaultConv>(
				"PlayLayer::exitRobotMode", 
				(void*)addresses::address1760()
			);
		}

		if constexpr (compare::exitRollMode<Derived, Base, types::pure1761>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitRollMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::exitRollMode<DefaultConv, Derived, Base, types::pure1761>::value, DefaultConv>(
				"PlayLayer::exitRollMode", 
				(void*)addresses::address1761()
			);
		}

		if constexpr (compare::exitSpiderMode<Derived, Base, types::pure1762>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitSpiderMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::exitSpiderMode<DefaultConv, Derived, Base, types::pure1762>::value, DefaultConv>(
				"PlayLayer::exitSpiderMode", 
				(void*)addresses::address1762()
			);
		}

		if constexpr (compare::flipFinished<Derived, Base, types::pure1763>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::flipFinished", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::flipFinished<DefaultConv, Derived, Base, types::pure1763>::value, DefaultConv>(
				"PlayLayer::flipFinished", 
				(void*)addresses::address1763()
			);
		}

		if constexpr (compare::flipGravity<Derived, Base, types::pure1764>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::flipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::flipGravity<DefaultConv, Derived, Base, types::pure1764>::value, DefaultConv>(
				"PlayLayer::flipGravity", 
				(void*)addresses::address1764()
			);
		}

		if constexpr (compare::flipObjects<Derived, Base, types::pure1765>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::flipObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::flipObjects<DefaultConv, Derived, Base, types::pure1765>::value, DefaultConv>(
				"PlayLayer::flipObjects", 
				(void*)addresses::address1765()
			);
		}

		if constexpr (compare::fullReset<Derived, Base, types::pure1766>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::fullReset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fullReset<DefaultConv, Derived, Base, types::pure1766>::value, DefaultConv>(
				"PlayLayer::fullReset", 
				(void*)addresses::address1766()
			);
		}

		if constexpr (compare::getLastCheckpoint<Derived, Base, types::pure1767>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getLastCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLastCheckpoint<DefaultConv, Derived, Base, types::pure1767>::value, DefaultConv>(
				"PlayLayer::getLastCheckpoint", 
				(void*)addresses::address1767()
			);
		}

		if constexpr (compare::getMaxPortalY<Derived, Base, types::pure1768>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getMaxPortalY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMaxPortalY<DefaultConv, Derived, Base, types::pure1768>::value, DefaultConv>(
				"PlayLayer::getMaxPortalY", 
				(void*)addresses::address1768()
			);
		}

		if constexpr (compare::getMinPortalY<Derived, Base, types::pure1769>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getMinPortalY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMinPortalY<DefaultConv, Derived, Base, types::pure1769>::value, DefaultConv>(
				"PlayLayer::getMinPortalY", 
				(void*)addresses::address1769()
			);
		}

		if constexpr (compare::getObjectsState<Derived, Base, types::pure1770>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getObjectsState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectsState<DefaultConv, Derived, Base, types::pure1770>::value, DefaultConv>(
				"PlayLayer::getObjectsState", 
				(void*)addresses::address1770()
			);
		}

		if constexpr (compare::getOtherPlayer<Derived, Base, types::pure1771>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getOtherPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOtherPlayer<DefaultConv, Derived, Base, types::pure1771>::value, DefaultConv>(
				"PlayLayer::getOtherPlayer", 
				(void*)addresses::address1771()
			);
		}

		if constexpr (compare::getParticleKey<Derived, Base, types::pure1772>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getParticleKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getParticleKey<DefaultConv, Derived, Base, types::pure1772>::value, DefaultConv>(
				"PlayLayer::getParticleKey", 
				(void*)addresses::address1772()
			);
		}

		if constexpr (compare::getParticleKey2<Derived, Base, types::pure1773>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getParticleKey2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getParticleKey2<DefaultConv, Derived, Base, types::pure1773>::value, DefaultConv>(
				"PlayLayer::getParticleKey2", 
				(void*)addresses::address1773()
			);
		}

		if constexpr (compare::getRelativeMod<Derived, Base, types::pure1774>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getRelativeMod", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRelativeMod<DefaultConv, Derived, Base, types::pure1774>::value, DefaultConv>(
				"PlayLayer::getRelativeMod", 
				(void*)addresses::address1774()
			);
		}

		if constexpr (compare::getTempMilliTime<Derived, Base, types::pure1775>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getTempMilliTime", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTempMilliTime<DefaultConv, Derived, Base, types::pure1775>::value, DefaultConv>(
				"PlayLayer::getTempMilliTime", 
				(void*)addresses::address1775()
			);
		}

		if constexpr (compare::gravityEffectFinished<Derived, Base, types::pure1776>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::gravityEffectFinished", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::gravityEffectFinished<DefaultConv, Derived, Base, types::pure1776>::value, DefaultConv>(
				"PlayLayer::gravityEffectFinished", 
				(void*)addresses::address1776()
			);
		}

		if constexpr (compare::hasItem<Derived, Base, types::pure1777>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::hasItem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasItem<DefaultConv, Derived, Base, types::pure1777>::value, DefaultConv>(
				"PlayLayer::hasItem", 
				(void*)addresses::address1777()
			);
		}

		if constexpr (compare::hasUniqueCoin<Derived, Base, types::pure1778>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::hasUniqueCoin", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasUniqueCoin<DefaultConv, Derived, Base, types::pure1778>::value, DefaultConv>(
				"PlayLayer::hasUniqueCoin", 
				(void*)addresses::address1778()
			);
		}

		if constexpr (compare::incrementJumps<Derived, Base, types::pure1779>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::incrementJumps", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::incrementJumps<DefaultConv, Derived, Base, types::pure1779>::value, DefaultConv>(
				"PlayLayer::incrementJumps", 
				(void*)addresses::address1779()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1780>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1780>::value, DefaultConv>(
				"PlayLayer::init", 
				(void*)addresses::address1780()
			);
		}

		if constexpr (compare::isFlipping<Derived, Base, types::pure1781>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::isFlipping", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isFlipping<DefaultConv, Derived, Base, types::pure1781>::value, DefaultConv>(
				"PlayLayer::isFlipping", 
				(void*)addresses::address1781()
			);
		}

		if constexpr (compare::levelComplete<Derived, Base, types::pure1782>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::levelComplete", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::levelComplete<DefaultConv, Derived, Base, types::pure1782>::value, DefaultConv>(
				"PlayLayer::levelComplete", 
				(void*)addresses::address1782()
			);
		}

		if constexpr (compare::lightningFlash<Derived, Base, types::pure1783>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::lightningFlash", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::lightningFlash<DefaultConv, Derived, Base, types::pure1783>::value, DefaultConv>(
				"PlayLayer::lightningFlash", 
				(void*)addresses::address1783()
			);
		}

		if constexpr (compare::lightningFlash<Derived, Base, types::pure1784>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::lightningFlash", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::lightningFlash<DefaultConv, Derived, Base, types::pure1784>::value, DefaultConv>(
				"PlayLayer::lightningFlash", 
				(void*)addresses::address1784()
			);
		}

		if constexpr (compare::loadDefaultColors<Derived, Base, types::pure1785>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::loadDefaultColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadDefaultColors<DefaultConv, Derived, Base, types::pure1785>::value, DefaultConv>(
				"PlayLayer::loadDefaultColors", 
				(void*)addresses::address1785()
			);
		}

		if constexpr (compare::loadFromCheckpoint<Derived, Base, types::pure1786>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::loadFromCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadFromCheckpoint<DefaultConv, Derived, Base, types::pure1786>::value, DefaultConv>(
				"PlayLayer::loadFromCheckpoint", 
				(void*)addresses::address1786()
			);
		}

		if constexpr (compare::loadLastCheckpoint<Derived, Base, types::pure1787>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::loadLastCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadLastCheckpoint<DefaultConv, Derived, Base, types::pure1787>::value, DefaultConv>(
				"PlayLayer::loadLastCheckpoint", 
				(void*)addresses::address1787()
			);
		}

		if constexpr (compare::loadSavedObjectsState<Derived, Base, types::pure1788>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::loadSavedObjectsState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadSavedObjectsState<DefaultConv, Derived, Base, types::pure1788>::value, DefaultConv>(
				"PlayLayer::loadSavedObjectsState", 
				(void*)addresses::address1788()
			);
		}

		if constexpr (compare::markCheckpoint<Derived, Base, types::pure1789>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::markCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::markCheckpoint<DefaultConv, Derived, Base, types::pure1789>::value, DefaultConv>(
				"PlayLayer::markCheckpoint", 
				(void*)addresses::address1789()
			);
		}

		if constexpr (compare::moveCameraToPos<Derived, Base, types::pure1790>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::moveCameraToPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveCameraToPos<DefaultConv, Derived, Base, types::pure1790>::value, DefaultConv>(
				"PlayLayer::moveCameraToPos", 
				(void*)addresses::address1790()
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure1791>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure1791>::value, DefaultConv>(
				"PlayLayer::onEnterTransitionDidFinish", 
				(void*)addresses::address1791()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure1792>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure1792>::value, DefaultConv>(
				"PlayLayer::onExit", 
				(void*)addresses::address1792()
			);
		}

		if constexpr (compare::onQuit<Derived, Base, types::pure1793>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::onQuit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onQuit<DefaultConv, Derived, Base, types::pure1793>::value, DefaultConv>(
				"PlayLayer::onQuit", 
				(void*)addresses::address1793()
			);
		}

		if constexpr (compare::optimizeColorGroups<Derived, Base, types::pure1794>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::optimizeColorGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::optimizeColorGroups<DefaultConv, Derived, Base, types::pure1794>::value, DefaultConv>(
				"PlayLayer::optimizeColorGroups", 
				(void*)addresses::address1794()
			);
		}

		if constexpr (compare::optimizeOpacityGroups<Derived, Base, types::pure1795>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::optimizeOpacityGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::optimizeOpacityGroups<DefaultConv, Derived, Base, types::pure1795>::value, DefaultConv>(
				"PlayLayer::optimizeOpacityGroups", 
				(void*)addresses::address1795()
			);
		}

		if constexpr (compare::optimizeSaveRequiredGroups<Derived, Base, types::pure1796>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::optimizeSaveRequiredGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::optimizeSaveRequiredGroups<DefaultConv, Derived, Base, types::pure1796>::value, DefaultConv>(
				"PlayLayer::optimizeSaveRequiredGroups", 
				(void*)addresses::address1796()
			);
		}

		if constexpr (compare::pauseGame<Derived, Base, types::pure1797>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::pauseGame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pauseGame<DefaultConv, Derived, Base, types::pure1797>::value, DefaultConv>(
				"PlayLayer::pauseGame", 
				(void*)addresses::address1797()
			);
		}

		if constexpr (compare::pickupItem<Derived, Base, types::pure1798>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::pickupItem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pickupItem<DefaultConv, Derived, Base, types::pure1798>::value, DefaultConv>(
				"PlayLayer::pickupItem", 
				(void*)addresses::address1798()
			);
		}

		if constexpr (compare::playAnimationCommand<Derived, Base, types::pure1799>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playAnimationCommand", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playAnimationCommand<DefaultConv, Derived, Base, types::pure1799>::value, DefaultConv>(
				"PlayLayer::playAnimationCommand", 
				(void*)addresses::address1799()
			);
		}

		if constexpr (compare::playEndAnimationToPos<Derived, Base, types::pure1800>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playEndAnimationToPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playEndAnimationToPos<DefaultConv, Derived, Base, types::pure1800>::value, DefaultConv>(
				"PlayLayer::playEndAnimationToPos", 
				(void*)addresses::address1800()
			);
		}

		if constexpr (compare::playExitDualEffect<Derived, Base, types::pure1801>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playExitDualEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playExitDualEffect<DefaultConv, Derived, Base, types::pure1801>::value, DefaultConv>(
				"PlayLayer::playExitDualEffect", 
				(void*)addresses::address1801()
			);
		}

		if constexpr (compare::playFlashEffect<Derived, Base, types::pure1802>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playFlashEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playFlashEffect<DefaultConv, Derived, Base, types::pure1802>::value, DefaultConv>(
				"PlayLayer::playFlashEffect", 
				(void*)addresses::address1802()
			);
		}

		if constexpr (compare::playGravityEffect<Derived, Base, types::pure1803>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playGravityEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playGravityEffect<DefaultConv, Derived, Base, types::pure1803>::value, DefaultConv>(
				"PlayLayer::playGravityEffect", 
				(void*)addresses::address1803()
			);
		}

		if constexpr (compare::playSpeedParticle<Derived, Base, types::pure1804>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playSpeedParticle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playSpeedParticle<DefaultConv, Derived, Base, types::pure1804>::value, DefaultConv>(
				"PlayLayer::playSpeedParticle", 
				(void*)addresses::address1804()
			);
		}

		if constexpr (compare::playerWillSwitchMode<Derived, Base, types::pure1805>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playerWillSwitchMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playerWillSwitchMode<DefaultConv, Derived, Base, types::pure1805>::value, DefaultConv>(
				"PlayLayer::playerWillSwitchMode", 
				(void*)addresses::address1805()
			);
		}

		if constexpr (compare::prepareSpawnObjects<Derived, Base, types::pure1806>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::prepareSpawnObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::prepareSpawnObjects<DefaultConv, Derived, Base, types::pure1806>::value, DefaultConv>(
				"PlayLayer::prepareSpawnObjects", 
				(void*)addresses::address1806()
			);
		}

		if constexpr (compare::processItems<Derived, Base, types::pure1807>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::processItems", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processItems<DefaultConv, Derived, Base, types::pure1807>::value, DefaultConv>(
				"PlayLayer::processItems", 
				(void*)addresses::address1807()
			);
		}

		if constexpr (compare::processLoadedMoveActions<Derived, Base, types::pure1808>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::processLoadedMoveActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processLoadedMoveActions<DefaultConv, Derived, Base, types::pure1808>::value, DefaultConv>(
				"PlayLayer::processLoadedMoveActions", 
				(void*)addresses::address1808()
			);
		}

		if constexpr (compare::recordAction<Derived, Base, types::pure1809>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::recordAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::recordAction<DefaultConv, Derived, Base, types::pure1809>::value, DefaultConv>(
				"PlayLayer::recordAction", 
				(void*)addresses::address1809()
			);
		}

		if constexpr (compare::registerActiveObject<Derived, Base, types::pure1810>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::registerActiveObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerActiveObject<DefaultConv, Derived, Base, types::pure1810>::value, DefaultConv>(
				"PlayLayer::registerActiveObject", 
				(void*)addresses::address1810()
			);
		}

		if constexpr (compare::registerStateObject<Derived, Base, types::pure1811>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::registerStateObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerStateObject<DefaultConv, Derived, Base, types::pure1811>::value, DefaultConv>(
				"PlayLayer::registerStateObject", 
				(void*)addresses::address1811()
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure1812>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure1812>::value, DefaultConv>(
				"PlayLayer::removeAllObjects", 
				(void*)addresses::address1812()
			);
		}

		if constexpr (compare::removeFromGroupOld<Derived, Base, types::pure1813>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::removeFromGroupOld", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeFromGroupOld<DefaultConv, Derived, Base, types::pure1813>::value, DefaultConv>(
				"PlayLayer::removeFromGroupOld", 
				(void*)addresses::address1813()
			);
		}

		if constexpr (compare::removeLastCheckpoint<Derived, Base, types::pure1814>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::removeLastCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeLastCheckpoint<DefaultConv, Derived, Base, types::pure1814>::value, DefaultConv>(
				"PlayLayer::removeLastCheckpoint", 
				(void*)addresses::address1814()
			);
		}

		if constexpr (compare::removePlayer2<Derived, Base, types::pure1815>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::removePlayer2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removePlayer2<DefaultConv, Derived, Base, types::pure1815>::value, DefaultConv>(
				"PlayLayer::removePlayer2", 
				(void*)addresses::address1815()
			);
		}

		if constexpr (compare::resetLevel<Derived, Base, types::pure1816>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::resetLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetLevel<DefaultConv, Derived, Base, types::pure1816>::value, DefaultConv>(
				"PlayLayer::resetLevel", 
				(void*)addresses::address1816()
			);
		}

		if constexpr (compare::resume<Derived, Base, types::pure1817>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::resume", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resume<DefaultConv, Derived, Base, types::pure1817>::value, DefaultConv>(
				"PlayLayer::resume", 
				(void*)addresses::address1817()
			);
		}

		if constexpr (compare::resumeAndRestart<Derived, Base, types::pure1818>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::resumeAndRestart", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resumeAndRestart<DefaultConv, Derived, Base, types::pure1818>::value, DefaultConv>(
				"PlayLayer::resumeAndRestart", 
				(void*)addresses::address1818()
			);
		}

		if constexpr (compare::saveRecordAction<Derived, Base, types::pure1819>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::saveRecordAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::saveRecordAction<DefaultConv, Derived, Base, types::pure1819>::value, DefaultConv>(
				"PlayLayer::saveRecordAction", 
				(void*)addresses::address1819()
			);
		}

		if constexpr (compare::scene<Derived, Base, types::pure1820>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::scene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scene<DefaultConv, Derived, Base, types::pure1820>::value, DefaultConv>(
				"PlayLayer::scene", 
				(void*)addresses::address1820()
			);
		}

		if constexpr (compare::setupLevelStart<Derived, Base, types::pure1821>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::setupLevelStart", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupLevelStart<DefaultConv, Derived, Base, types::pure1821>::value, DefaultConv>(
				"PlayLayer::setupLevelStart", 
				(void*)addresses::address1821()
			);
		}

		if constexpr (compare::setupReplay<Derived, Base, types::pure1822>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::setupReplay", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupReplay<DefaultConv, Derived, Base, types::pure1822>::value, DefaultConv>(
				"PlayLayer::setupReplay", 
				(void*)addresses::address1822()
			);
		}

		if constexpr (compare::shakeCamera<Derived, Base, types::pure1823>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::shakeCamera", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::shakeCamera<DefaultConv, Derived, Base, types::pure1823>::value, DefaultConv>(
				"PlayLayer::shakeCamera", 
				(void*)addresses::address1823()
			);
		}

		if constexpr (compare::shouldBlend<Derived, Base, types::pure1824>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::shouldBlend", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::shouldBlend<DefaultConv, Derived, Base, types::pure1824>::value, DefaultConv>(
				"PlayLayer::shouldBlend", 
				(void*)addresses::address1824()
			);
		}

		if constexpr (compare::showCompleteEffect<Derived, Base, types::pure1825>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showCompleteEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showCompleteEffect<DefaultConv, Derived, Base, types::pure1825>::value, DefaultConv>(
				"PlayLayer::showCompleteEffect", 
				(void*)addresses::address1825()
			);
		}

		if constexpr (compare::showCompleteText<Derived, Base, types::pure1826>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showCompleteText", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showCompleteText<DefaultConv, Derived, Base, types::pure1826>::value, DefaultConv>(
				"PlayLayer::showCompleteText", 
				(void*)addresses::address1826()
			);
		}

		if constexpr (compare::showEndLayer<Derived, Base, types::pure1827>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showEndLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showEndLayer<DefaultConv, Derived, Base, types::pure1827>::value, DefaultConv>(
				"PlayLayer::showEndLayer", 
				(void*)addresses::address1827()
			);
		}

		if constexpr (compare::showHint<Derived, Base, types::pure1828>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showHint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showHint<DefaultConv, Derived, Base, types::pure1828>::value, DefaultConv>(
				"PlayLayer::showHint", 
				(void*)addresses::address1828()
			);
		}

		if constexpr (compare::showNewBest<Derived, Base, types::pure1829>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showNewBest", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showNewBest<DefaultConv, Derived, Base, types::pure1829>::value, DefaultConv>(
				"PlayLayer::showNewBest", 
				(void*)addresses::address1829()
			);
		}

		if constexpr (compare::showRetryLayer<Derived, Base, types::pure1830>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showRetryLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showRetryLayer<DefaultConv, Derived, Base, types::pure1830>::value, DefaultConv>(
				"PlayLayer::showRetryLayer", 
				(void*)addresses::address1830()
			);
		}

		if constexpr (compare::showTwoPlayerGuide<Derived, Base, types::pure1831>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showTwoPlayerGuide", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showTwoPlayerGuide<DefaultConv, Derived, Base, types::pure1831>::value, DefaultConv>(
				"PlayLayer::showTwoPlayerGuide", 
				(void*)addresses::address1831()
			);
		}

		if constexpr (compare::sortGroups<Derived, Base, types::pure1832>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::sortGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sortGroups<DefaultConv, Derived, Base, types::pure1832>::value, DefaultConv>(
				"PlayLayer::sortGroups", 
				(void*)addresses::address1832()
			);
		}

		if constexpr (compare::spawnCircle<Derived, Base, types::pure1833>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::spawnCircle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnCircle<DefaultConv, Derived, Base, types::pure1833>::value, DefaultConv>(
				"PlayLayer::spawnCircle", 
				(void*)addresses::address1833()
			);
		}

		if constexpr (compare::spawnFirework<Derived, Base, types::pure1834>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::spawnFirework", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnFirework<DefaultConv, Derived, Base, types::pure1834>::value, DefaultConv>(
				"PlayLayer::spawnFirework", 
				(void*)addresses::address1834()
			);
		}

		if constexpr (compare::spawnParticle<Derived, Base, types::pure1835>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::spawnParticle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnParticle<DefaultConv, Derived, Base, types::pure1835>::value, DefaultConv>(
				"PlayLayer::spawnParticle", 
				(void*)addresses::address1835()
			);
		}

		if constexpr (compare::spawnPlayer2<Derived, Base, types::pure1836>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::spawnPlayer2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnPlayer2<DefaultConv, Derived, Base, types::pure1836>::value, DefaultConv>(
				"PlayLayer::spawnPlayer2", 
				(void*)addresses::address1836()
			);
		}

		if constexpr (compare::startGame<Derived, Base, types::pure1837>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::startGame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::startGame<DefaultConv, Derived, Base, types::pure1837>::value, DefaultConv>(
				"PlayLayer::startGame", 
				(void*)addresses::address1837()
			);
		}

		if constexpr (compare::startMusic<Derived, Base, types::pure1838>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::startMusic", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::startMusic<DefaultConv, Derived, Base, types::pure1838>::value, DefaultConv>(
				"PlayLayer::startMusic", 
				(void*)addresses::address1838()
			);
		}

		if constexpr (compare::startRecording<Derived, Base, types::pure1839>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::startRecording", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::startRecording<DefaultConv, Derived, Base, types::pure1839>::value, DefaultConv>(
				"PlayLayer::startRecording", 
				(void*)addresses::address1839()
			);
		}

		if constexpr (compare::startRecordingDelayed<Derived, Base, types::pure1840>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::startRecordingDelayed", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::startRecordingDelayed<DefaultConv, Derived, Base, types::pure1840>::value, DefaultConv>(
				"PlayLayer::startRecordingDelayed", 
				(void*)addresses::address1840()
			);
		}

		if constexpr (compare::stopCameraShake<Derived, Base, types::pure1841>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::stopCameraShake", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopCameraShake<DefaultConv, Derived, Base, types::pure1841>::value, DefaultConv>(
				"PlayLayer::stopCameraShake", 
				(void*)addresses::address1841()
			);
		}

		if constexpr (compare::stopRecording<Derived, Base, types::pure1842>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::stopRecording", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopRecording<DefaultConv, Derived, Base, types::pure1842>::value, DefaultConv>(
				"PlayLayer::stopRecording", 
				(void*)addresses::address1842()
			);
		}

		if constexpr (compare::storeCheckpoint<Derived, Base, types::pure1843>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::storeCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::storeCheckpoint<DefaultConv, Derived, Base, types::pure1843>::value, DefaultConv>(
				"PlayLayer::storeCheckpoint", 
				(void*)addresses::address1843()
			);
		}

		if constexpr (compare::switchToFlyMode<Derived, Base, types::pure1844>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::switchToFlyMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::switchToFlyMode<DefaultConv, Derived, Base, types::pure1844>::value, DefaultConv>(
				"PlayLayer::switchToFlyMode", 
				(void*)addresses::address1844()
			);
		}

		if constexpr (compare::switchToRobotMode<Derived, Base, types::pure1845>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::switchToRobotMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::switchToRobotMode<DefaultConv, Derived, Base, types::pure1845>::value, DefaultConv>(
				"PlayLayer::switchToRobotMode", 
				(void*)addresses::address1845()
			);
		}

		if constexpr (compare::switchToRollMode<Derived, Base, types::pure1846>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::switchToRollMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::switchToRollMode<DefaultConv, Derived, Base, types::pure1846>::value, DefaultConv>(
				"PlayLayer::switchToRollMode", 
				(void*)addresses::address1846()
			);
		}

		if constexpr (compare::switchToSpiderMode<Derived, Base, types::pure1847>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::switchToSpiderMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::switchToSpiderMode<DefaultConv, Derived, Base, types::pure1847>::value, DefaultConv>(
				"PlayLayer::switchToSpiderMode", 
				(void*)addresses::address1847()
			);
		}

		if constexpr (compare::timeForXPos<Derived, Base, types::pure1848>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::timeForXPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::timeForXPos<DefaultConv, Derived, Base, types::pure1848>::value, DefaultConv>(
				"PlayLayer::timeForXPos", 
				(void*)addresses::address1848()
			);
		}

		if constexpr (compare::timeForXPos2<Derived, Base, types::pure1849>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::timeForXPos2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::timeForXPos2<DefaultConv, Derived, Base, types::pure1849>::value, DefaultConv>(
				"PlayLayer::timeForXPos2", 
				(void*)addresses::address1849()
			);
		}

		if constexpr (compare::toggleBGEffectVisibility<Derived, Base, types::pure1850>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleBGEffectVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleBGEffectVisibility<DefaultConv, Derived, Base, types::pure1850>::value, DefaultConv>(
				"PlayLayer::toggleBGEffectVisibility", 
				(void*)addresses::address1850()
			);
		}

		if constexpr (compare::toggleDualMode<Derived, Base, types::pure1851>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleDualMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleDualMode<DefaultConv, Derived, Base, types::pure1851>::value, DefaultConv>(
				"PlayLayer::toggleDualMode", 
				(void*)addresses::address1851()
			);
		}

		if constexpr (compare::toggleFlipped<Derived, Base, types::pure1852>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleFlipped", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleFlipped<DefaultConv, Derived, Base, types::pure1852>::value, DefaultConv>(
				"PlayLayer::toggleFlipped", 
				(void*)addresses::address1852()
			);
		}

		if constexpr (compare::toggleGhostEffect<Derived, Base, types::pure1853>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleGhostEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleGhostEffect<DefaultConv, Derived, Base, types::pure1853>::value, DefaultConv>(
				"PlayLayer::toggleGhostEffect", 
				(void*)addresses::address1853()
			);
		}

		if constexpr (compare::toggleGlitter<Derived, Base, types::pure1854>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleGlitter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleGlitter<DefaultConv, Derived, Base, types::pure1854>::value, DefaultConv>(
				"PlayLayer::toggleGlitter", 
				(void*)addresses::address1854()
			);
		}

		if constexpr (compare::togglePracticeMode<Derived, Base, types::pure1855>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::togglePracticeMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::togglePracticeMode<DefaultConv, Derived, Base, types::pure1855>::value, DefaultConv>(
				"PlayLayer::togglePracticeMode", 
				(void*)addresses::address1855()
			);
		}

		if constexpr (compare::toggleProgressbar<Derived, Base, types::pure1856>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleProgressbar", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleProgressbar<DefaultConv, Derived, Base, types::pure1856>::value, DefaultConv>(
				"PlayLayer::toggleProgressbar", 
				(void*)addresses::address1856()
			);
		}

		if constexpr (compare::tryStartRecord<Derived, Base, types::pure1857>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::tryStartRecord", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::tryStartRecord<DefaultConv, Derived, Base, types::pure1857>::value, DefaultConv>(
				"PlayLayer::tryStartRecord", 
				(void*)addresses::address1857()
			);
		}

		if constexpr (compare::unclaimParticle<Derived, Base, types::pure1858>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::unclaimParticle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unclaimParticle<DefaultConv, Derived, Base, types::pure1858>::value, DefaultConv>(
				"PlayLayer::unclaimParticle", 
				(void*)addresses::address1858()
			);
		}

		if constexpr (compare::unregisterActiveObject<Derived, Base, types::pure1859>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::unregisterActiveObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unregisterActiveObject<DefaultConv, Derived, Base, types::pure1859>::value, DefaultConv>(
				"PlayLayer::unregisterActiveObject", 
				(void*)addresses::address1859()
			);
		}

		if constexpr (compare::unregisterStateObject<Derived, Base, types::pure1860>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::unregisterStateObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unregisterStateObject<DefaultConv, Derived, Base, types::pure1860>::value, DefaultConv>(
				"PlayLayer::unregisterStateObject", 
				(void*)addresses::address1860()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1861>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure1861>::value, DefaultConv>(
				"PlayLayer::update", 
				(void*)addresses::address1861()
			);
		}

		if constexpr (compare::updateAttempts<Derived, Base, types::pure1862>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateAttempts", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateAttempts<DefaultConv, Derived, Base, types::pure1862>::value, DefaultConv>(
				"PlayLayer::updateAttempts", 
				(void*)addresses::address1862()
			);
		}

		if constexpr (compare::updateCamera<Derived, Base, types::pure1863>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateCamera", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCamera<DefaultConv, Derived, Base, types::pure1863>::value, DefaultConv>(
				"PlayLayer::updateCamera", 
				(void*)addresses::address1863()
			);
		}

		if constexpr (compare::updateColor<Derived, Base, types::pure1864>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColor<DefaultConv, Derived, Base, types::pure1864>::value, DefaultConv>(
				"PlayLayer::updateColor", 
				(void*)addresses::address1864()
			);
		}

		if constexpr (compare::updateDualGround<Derived, Base, types::pure1865>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateDualGround", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDualGround<DefaultConv, Derived, Base, types::pure1865>::value, DefaultConv>(
				"PlayLayer::updateDualGround", 
				(void*)addresses::address1865()
			);
		}

		if constexpr (compare::updateEffectPositions<Derived, Base, types::pure1866>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateEffectPositions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateEffectPositions<DefaultConv, Derived, Base, types::pure1866>::value, DefaultConv>(
				"PlayLayer::updateEffectPositions", 
				(void*)addresses::address1866()
			);
		}

		if constexpr (compare::updateLevelColors<Derived, Base, types::pure1867>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateLevelColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateLevelColors<DefaultConv, Derived, Base, types::pure1867>::value, DefaultConv>(
				"PlayLayer::updateLevelColors", 
				(void*)addresses::address1867()
			);
		}

		if constexpr (compare::updateMoveObjectsLastPosition<Derived, Base, types::pure1868>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateMoveObjectsLastPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateMoveObjectsLastPosition<DefaultConv, Derived, Base, types::pure1868>::value, DefaultConv>(
				"PlayLayer::updateMoveObjectsLastPosition", 
				(void*)addresses::address1868()
			);
		}

		if constexpr (compare::updateProgressbar<Derived, Base, types::pure1869>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateProgressbar", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateProgressbar<DefaultConv, Derived, Base, types::pure1869>::value, DefaultConv>(
				"PlayLayer::updateProgressbar", 
				(void*)addresses::address1869()
			);
		}

		if constexpr (compare::updateReplay<Derived, Base, types::pure1870>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateReplay", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateReplay<DefaultConv, Derived, Base, types::pure1870>::value, DefaultConv>(
				"PlayLayer::updateReplay", 
				(void*)addresses::address1870()
			);
		}

		if constexpr (compare::updateTimeMod<Derived, Base, types::pure1871>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateTimeMod", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTimeMod<DefaultConv, Derived, Base, types::pure1871>::value, DefaultConv>(
				"PlayLayer::updateTimeMod", 
				(void*)addresses::address1871()
			);
		}

		if constexpr (compare::updateTweenAction<Derived, Base, types::pure1872>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateTweenAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTweenAction<DefaultConv, Derived, Base, types::pure1872>::value, DefaultConv>(
				"PlayLayer::updateTweenAction", 
				(void*)addresses::address1872()
			);
		}

		if constexpr (compare::updateVisibility<Derived, Base, types::pure1873>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateVisibility<DefaultConv, Derived, Base, types::pure1873>::value, DefaultConv>(
				"PlayLayer::updateVisibility", 
				(void*)addresses::address1873()
			);
		}

		if constexpr (compare::vfDChk<Derived, Base, types::pure1874>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::vfDChk", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::vfDChk<DefaultConv, Derived, Base, types::pure1874>::value, DefaultConv>(
				"PlayLayer::vfDChk", 
				(void*)addresses::address1874()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure1875>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure1875>::value, DefaultConv>(
				"PlayLayer::visit", 
				(void*)addresses::address1875()
			);
		}

		if constexpr (compare::visitWithColorFlash<Derived, Base, types::pure1876>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::visitWithColorFlash", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visitWithColorFlash<DefaultConv, Derived, Base, types::pure1876>::value, DefaultConv>(
				"PlayLayer::visitWithColorFlash", 
				(void*)addresses::address1876()
			);
		}

		if constexpr (compare::willSwitchToMode<Derived, Base, types::pure1877>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::willSwitchToMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::willSwitchToMode<DefaultConv, Derived, Base, types::pure1877>::value, DefaultConv>(
				"PlayLayer::willSwitchToMode", 
				(void*)addresses::address1877()
			);
		}

		if constexpr (compare::xPosForTime<Derived, Base, types::pure1878>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::xPosForTime", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::xPosForTime<DefaultConv, Derived, Base, types::pure1878>::value, DefaultConv>(
				"PlayLayer::xPosForTime", 
				(void*)addresses::address1878()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1879>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1879>::value, DefaultConv>(
				"PlayLayer::destructor", 
				(void*)addresses::address1879()
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

		if constexpr (compare::hideCursor<Derived, Base, types::pure1724>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlatformToolbox::hideCursor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hideCursor<DefaultConv, Derived, Base, types::pure1724>::value, DefaultConv>(
				"PlatformToolbox::hideCursor", 
				(void*)addresses::address1724()
			);
		}

		if constexpr (compare::showCursor<Derived, Base, types::pure1725>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlatformToolbox::showCursor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showCursor<DefaultConv, Derived, Base, types::pure1725>::value, DefaultConv>(
				"PlatformToolbox::showCursor", 
				(void*)addresses::address1725()
			);
		}

		if constexpr (compare::isControllerConnected<Derived, Base, types::pure1726>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlatformToolbox::isControllerConnected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isControllerConnected<DefaultConv, Derived, Base, types::pure1726>::value, DefaultConv>(
				"PlatformToolbox::isControllerConnected", 
				(void*)addresses::address1726()
			);
		}

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1718>::value, DefaultConv>(
				"OptionsLayer::create", 
				(void*)addresses::address1718()
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

		if constexpr (compare::create<Derived, Base, types::pure1713>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OpacityEffectAction::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1713>::value, DefaultConv>(
				"OpacityEffectAction::create", 
				(void*)addresses::address1713()
			);
		}

		if constexpr (compare::createFromString<Derived, Base, types::pure1714>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OpacityEffectAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createFromString<DefaultConv, Derived, Base, types::pure1714>::value, DefaultConv>(
				"OpacityEffectAction::createFromString", 
				(void*)addresses::address1714()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1715>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OpacityEffectAction::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1715>::value, DefaultConv>(
				"OpacityEffectAction::init", 
				(void*)addresses::address1715()
			);
		}

		if constexpr (compare::step<Derived, Base, types::pure1716>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OpacityEffectAction::step", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::step<DefaultConv, Derived, Base, types::pure1716>::value, DefaultConv>(
				"OpacityEffectAction::step", 
				(void*)addresses::address1716()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ObjectToolbox> : ModifyBase<Modify<Derived, ObjectToolbox>> {
	using ModifyBase<Modify<Derived, ObjectToolbox>>::ModifyBase;
	using Base = ObjectToolbox;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure1709>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ObjectToolbox::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1709>::value, DefaultConv>(
				"ObjectToolbox::init", 
				(void*)addresses::address1709()
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1710>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ObjectToolbox::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1710>::value, DefaultConv>(
				"ObjectToolbox::sharedState", 
				(void*)addresses::address1710()
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

		if constexpr (compare::calculateWithCenter<Derived, Base, types::pure1699>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OBB2D::calculateWithCenter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateWithCenter<DefaultConv, Derived, Base, types::pure1699>::value, DefaultConv>(
				"OBB2D::calculateWithCenter", 
				(void*)addresses::address1699()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1700>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OBB2D::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1700>::value, DefaultConv>(
				"OBB2D::create", 
				(void*)addresses::address1700()
			);
		}

		if constexpr (compare::getBoundingRect<Derived, Base, types::pure1701>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OBB2D::getBoundingRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBoundingRect<DefaultConv, Derived, Base, types::pure1701>::value, DefaultConv>(
				"OBB2D::getBoundingRect", 
				(void*)addresses::address1701()
			);
		}

		if constexpr (compare::overlaps<Derived, Base, types::pure1702>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OBB2D::overlaps", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::overlaps<DefaultConv, Derived, Base, types::pure1702>::value, DefaultConv>(
				"OBB2D::overlaps", 
				(void*)addresses::address1702()
			);
		}

		if constexpr (compare::overlaps1Way<Derived, Base, types::pure1703>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OBB2D::overlaps1Way", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::overlaps1Way<DefaultConv, Derived, Base, types::pure1703>::value, DefaultConv>(
				"OBB2D::overlaps1Way", 
				(void*)addresses::address1703()
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

		if constexpr (compare::incrementPriorityForSong<Derived, Base, types::pure1694>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::incrementPriorityForSong", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::incrementPriorityForSong<DefaultConv, Derived, Base, types::pure1694>::value, DefaultConv>(
				"MusicDownloadManager::incrementPriorityForSong", 
				(void*)addresses::address1694()
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1695>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1695>::value, DefaultConv>(
				"MusicDownloadManager::sharedState", 
				(void*)addresses::address1695()
			);
		}

		if constexpr (compare::pathForSong<Derived, Base, types::pure1696>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::pathForSong", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pathForSong<DefaultConv, Derived, Base, types::pure1696>::value, DefaultConv>(
				"MusicDownloadManager::pathForSong", 
				(void*)addresses::address1696()
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
struct Modify<Derived, MultilineBitmapFont> : ModifyBase<Modify<Derived, MultilineBitmapFont>> {
	using ModifyBase<Modify<Derived, MultilineBitmapFont>>::ModifyBase;
	using Base = MultilineBitmapFont;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, MoreVideoOptionsLayer> : ModifyBase<Modify<Derived, MoreVideoOptionsLayer>> {
	using ModifyBase<Modify<Derived, MoreVideoOptionsLayer>>::ModifyBase;
	using Base = MoreVideoOptionsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1691>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MoreVideoOptionsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1691>::value, DefaultConv>(
				"MoreVideoOptionsLayer::create", 
				(void*)addresses::address1691()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1692>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MoreVideoOptionsLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1692>::value, DefaultConv>(
				"MoreVideoOptionsLayer::init", 
				(void*)addresses::address1692()
			);
		}

		if constexpr (compare::onClose<Derived, Base, types::pure1693>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MoreVideoOptionsLayer::onClose", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onClose<DefaultConv, Derived, Base, types::pure1693>::value, DefaultConv>(
				"MoreVideoOptionsLayer::onClose", 
				(void*)addresses::address1693()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, MenuLayer> : ModifyBase<Modify<Derived, MenuLayer>> {
	using ModifyBase<Modify<Derived, MenuLayer>>::ModifyBase;
	using Base = MenuLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure1665>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1665>::value, DefaultConv>(
				"MenuLayer::destructor", 
				(void*)addresses::address1665()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1666>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1666>::value, DefaultConv>(
				"MenuLayer::init", 
				(void*)addresses::address1666()
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure1667>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure1667>::value, DefaultConv>(
				"MenuLayer::keyBackClicked", 
				(void*)addresses::address1667()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure1668>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure1668>::value, DefaultConv>(
				"MenuLayer::keyDown", 
				(void*)addresses::address1668()
			);
		}

		if constexpr (compare::googlePlaySignedIn<Derived, Base, types::pure1669>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::googlePlaySignedIn", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::googlePlaySignedIn<DefaultConv, Derived, Base, types::pure1669>::value, DefaultConv>(
				"MenuLayer::googlePlaySignedIn", 
				(void*)addresses::address1669()
			);
		}

		if constexpr (compare::FLAlert_Clicked<Derived, Base, types::pure1670>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::FLAlert_Clicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::FLAlert_Clicked<DefaultConv, Derived, Base, types::pure1670>::value, DefaultConv>(
				"MenuLayer::FLAlert_Clicked", 
				(void*)addresses::address1670()
			);
		}

		if constexpr (compare::onMoreGames<Derived, Base, types::pure1671>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onMoreGames", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onMoreGames<DefaultConv, Derived, Base, types::pure1671>::value, DefaultConv>(
				"MenuLayer::onMoreGames", 
				(void*)addresses::address1671()
			);
		}

		if constexpr (compare::onQuit<Derived, Base, types::pure1673>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onQuit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onQuit<DefaultConv, Derived, Base, types::pure1673>::value, DefaultConv>(
				"MenuLayer::onQuit", 
				(void*)addresses::address1673()
			);
		}

		if constexpr (compare::onMyProfile<Derived, Base, types::pure1674>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onMyProfile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onMyProfile<DefaultConv, Derived, Base, types::pure1674>::value, DefaultConv>(
				"MenuLayer::onMyProfile", 
				(void*)addresses::address1674()
			);
		}

		if constexpr (compare::scene<Derived, Base, types::pure1686>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::scene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scene<DefaultConv, Derived, Base, types::pure1686>::value, DefaultConv>(
				"MenuLayer::scene", 
				(void*)addresses::address1686()
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
struct Modify<Derived, MenuGameLayer> : ModifyBase<Modify<Derived, MenuGameLayer>> {
	using ModifyBase<Modify<Derived, MenuGameLayer>>::ModifyBase;
	using Base = MenuGameLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::resetPlayer<Derived, Base, types::pure1663>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuGameLayer::resetPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetPlayer<DefaultConv, Derived, Base, types::pure1663>::value, DefaultConv>(
				"MenuGameLayer::resetPlayer", 
				(void*)addresses::address1663()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1664>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuGameLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure1664>::value, DefaultConv>(
				"MenuGameLayer::update", 
				(void*)addresses::address1664()
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
struct Modify<Derived, LevelSettingsDelegate> : ModifyBase<Modify<Derived, LevelSettingsDelegate>> {
	using ModifyBase<Modify<Derived, LevelSettingsDelegate>>::ModifyBase;
	using Base = LevelSettingsDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LevelSearchLayer> : ModifyBase<Modify<Derived, LevelSearchLayer>> {
	using ModifyBase<Modify<Derived, LevelSearchLayer>>::ModifyBase;
	using Base = LevelSearchLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, LeaderboardsLayer> : ModifyBase<Modify<Derived, LeaderboardsLayer>> {
	using ModifyBase<Modify<Derived, LeaderboardsLayer>>::ModifyBase;
	using Base = LeaderboardsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, SetupInstantCountPopup> : ModifyBase<Modify<Derived, SetupInstantCountPopup>> {
	using ModifyBase<Modify<Derived, SetupInstantCountPopup>>::ModifyBase;
	using Base = SetupInstantCountPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2066>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInstantCountPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2066>::value, DefaultConv>(
				"SetupInstantCountPopup::create", 
				(void*)addresses::address2066()
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2067>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInstantCountPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2067>::value, DefaultConv>(
				"SetupInstantCountPopup::onTargetIDArrow", 
				(void*)addresses::address2067()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2068>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInstantCountPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2068>::value, DefaultConv>(
				"SetupInstantCountPopup::textChanged", 
				(void*)addresses::address2068()
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2069>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInstantCountPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2069>::value, DefaultConv>(
				"SetupInstantCountPopup::updateTargetID", 
				(void*)addresses::address2069()
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
struct Modify<Derived, LevelUpdateDelegate> : ModifyBase<Modify<Derived, LevelUpdateDelegate>> {
	using ModifyBase<Modify<Derived, LevelUpdateDelegate>>::ModifyBase;
	using Base = LevelUpdateDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, InfoLayer> : ModifyBase<Modify<Derived, InfoLayer>> {
	using ModifyBase<Modify<Derived, InfoLayer>>::ModifyBase;
	using Base = InfoLayer;
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
struct Modify<Derived, GaragePage> : ModifyBase<Modify<Derived, GaragePage>> {
	using ModifyBase<Modify<Derived, GaragePage>>::ModifyBase;
	using Base = GaragePage;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure1531>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GaragePage::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1531>::value, DefaultConv>(
				"GaragePage::init", 
				(void*)addresses::address1531()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2035>::value, DefaultConv>(
				"ProfilePage::create", 
				(void*)addresses::address2035()
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
			Interface::get()->addHook<wrap::attachWithIME<DefaultConv, Derived, Base, types::pure108>::value, DefaultConv>(
				"cocos2d::CCIMEDelegate::attachWithIME", 
				(void*)addresses::address108()
			);
		}

		if constexpr (compare::detachWithIME<Derived, Base, types::pure109>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDelegate::detachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::detachWithIME<DefaultConv, Derived, Base, types::pure109>::value, DefaultConv>(
				"cocos2d::CCIMEDelegate::detachWithIME", 
				(void*)addresses::address109()
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

		if constexpr (compare::disableMetering<Derived, Base, types::pure1502>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::disableMetering", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::disableMetering<DefaultConv, Derived, Base, types::pure1502>::value, DefaultConv>(
				"GameSoundManager::disableMetering", 
				(void*)addresses::address1502()
			);
		}

		if constexpr (compare::enableMetering<Derived, Base, types::pure1503>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::enableMetering", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enableMetering<DefaultConv, Derived, Base, types::pure1503>::value, DefaultConv>(
				"GameSoundManager::enableMetering", 
				(void*)addresses::address1503()
			);
		}

		if constexpr (compare::getMeteringValue<Derived, Base, types::pure1504>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::getMeteringValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMeteringValue<DefaultConv, Derived, Base, types::pure1504>::value, DefaultConv>(
				"GameSoundManager::getMeteringValue", 
				(void*)addresses::address1504()
			);
		}

		if constexpr (compare::playBackgroundMusic<Derived, Base, types::pure1505>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::playBackgroundMusic", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playBackgroundMusic<DefaultConv, Derived, Base, types::pure1505>::value, DefaultConv>(
				"GameSoundManager::playBackgroundMusic", 
				(void*)addresses::address1505()
			);
		}

		if constexpr (compare::playEffect<Derived, Base, types::pure1506>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::playEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playEffect<DefaultConv, Derived, Base, types::pure1506>::value, DefaultConv>(
				"GameSoundManager::playEffect", 
				(void*)addresses::address1506()
			);
		}

		if constexpr (compare::stopBackgroundMusic<Derived, Base, types::pure1507>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::stopBackgroundMusic", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopBackgroundMusic<DefaultConv, Derived, Base, types::pure1507>::value, DefaultConv>(
				"GameSoundManager::stopBackgroundMusic", 
				(void*)addresses::address1507()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1508>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1508>::value, DefaultConv>(
				"GameSoundManager::destructor", 
				(void*)addresses::address1508()
			);
		}

		if constexpr (compare::sharedManager<Derived, Base, types::pure1509>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::sharedManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedManager<DefaultConv, Derived, Base, types::pure1509>::value, DefaultConv>(
				"GameSoundManager::sharedManager", 
				(void*)addresses::address1509()
			);
		}

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
			Interface::get()->addHook<wrap::isEqual<DefaultConv, Derived, Base, types::pure502>::value, DefaultConv>(
				"cocos2d::CCString::isEqual", 
				(void*)addresses::address502()
			);
		}

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure503>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::acceptVisitor<DefaultConv, Derived, Base, types::pure503>::value, DefaultConv>(
				"cocos2d::CCString::acceptVisitor", 
				(void*)addresses::address503()
			);
		}

		if constexpr (compare::copyWithZone<Derived, Base, types::pure504>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::copyWithZone", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::copyWithZone<DefaultConv, Derived, Base, types::pure504>::value, DefaultConv>(
				"cocos2d::CCString::copyWithZone", 
				(void*)addresses::address504()
			);
		}

		if constexpr (compare::boolValue<Derived, Base, types::pure505>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::boolValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::boolValue<DefaultConv, Derived, Base, types::pure505>::value, DefaultConv>(
				"cocos2d::CCString::boolValue", 
				(void*)addresses::address505()
			);
		}

		if constexpr (compare::doubleValue<Derived, Base, types::pure506>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::doubleValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::doubleValue<DefaultConv, Derived, Base, types::pure506>::value, DefaultConv>(
				"cocos2d::CCString::doubleValue", 
				(void*)addresses::address506()
			);
		}

		if constexpr (compare::floatValue<Derived, Base, types::pure507>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::floatValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::floatValue<DefaultConv, Derived, Base, types::pure507>::value, DefaultConv>(
				"cocos2d::CCString::floatValue", 
				(void*)addresses::address507()
			);
		}

		if constexpr (compare::getCString<Derived, Base, types::pure508>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::getCString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCString<DefaultConv, Derived, Base, types::pure508>::value, DefaultConv>(
				"cocos2d::CCString::getCString", 
				(void*)addresses::address508()
			);
		}

		if constexpr (compare::intValue<Derived, Base, types::pure509>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::intValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::intValue<DefaultConv, Derived, Base, types::pure509>::value, DefaultConv>(
				"cocos2d::CCString::intValue", 
				(void*)addresses::address509()
			);
		}

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
struct Modify<Derived, GameObjectCopy> : ModifyBase<Modify<Derived, GameObjectCopy>> {
	using ModifyBase<Modify<Derived, GameObjectCopy>>::ModifyBase;
	using Base = GameObjectCopy;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure1499>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObjectCopy::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1499>::value, DefaultConv>(
				"GameObjectCopy::destructor", 
				(void*)addresses::address1499()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1500>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObjectCopy::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1500>::value, DefaultConv>(
				"GameObjectCopy::create", 
				(void*)addresses::address1500()
			);
		}

		if constexpr (compare::resetObject<Derived, Base, types::pure1501>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObjectCopy::resetObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetObject<DefaultConv, Derived, Base, types::pure1501>::value, DefaultConv>(
				"GameObjectCopy::resetObject", 
				(void*)addresses::address1501()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure29>::value, DefaultConv>(
				"cocos2d::CCClippingNode::create", 
				(void*)addresses::address29()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure30>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure30>::value, DefaultConv>(
				"cocos2d::CCClippingNode::create", 
				(void*)addresses::address30()
			);
		}

		if constexpr (compare::getAlphaThreshold<Derived, Base, types::pure31>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::getAlphaThreshold", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAlphaThreshold<DefaultConv, Derived, Base, types::pure31>::value, DefaultConv>(
				"cocos2d::CCClippingNode::getAlphaThreshold", 
				(void*)addresses::address31()
			);
		}

		if constexpr (compare::getStencil<Derived, Base, types::pure32>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::getStencil", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getStencil<DefaultConv, Derived, Base, types::pure32>::value, DefaultConv>(
				"cocos2d::CCClippingNode::getStencil", 
				(void*)addresses::address32()
			);
		}

		if constexpr (compare::isInverted<Derived, Base, types::pure33>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::isInverted", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isInverted<DefaultConv, Derived, Base, types::pure33>::value, DefaultConv>(
				"cocos2d::CCClippingNode::isInverted", 
				(void*)addresses::address33()
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure34>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure34>::value, DefaultConv>(
				"cocos2d::CCClippingNode::onEnter", 
				(void*)addresses::address34()
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure35>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure35>::value, DefaultConv>(
				"cocos2d::CCClippingNode::onEnterTransitionDidFinish", 
				(void*)addresses::address35()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure36>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure36>::value, DefaultConv>(
				"cocos2d::CCClippingNode::onExit", 
				(void*)addresses::address36()
			);
		}

		if constexpr (compare::onExitTransitionDidStart<Derived, Base, types::pure37>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::onExitTransitionDidStart", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExitTransitionDidStart<DefaultConv, Derived, Base, types::pure37>::value, DefaultConv>(
				"cocos2d::CCClippingNode::onExitTransitionDidStart", 
				(void*)addresses::address37()
			);
		}

		if constexpr (compare::setAlphaThreshold<Derived, Base, types::pure38>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::setAlphaThreshold", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAlphaThreshold<DefaultConv, Derived, Base, types::pure38>::value, DefaultConv>(
				"cocos2d::CCClippingNode::setAlphaThreshold", 
				(void*)addresses::address38()
			);
		}

		if constexpr (compare::setInverted<Derived, Base, types::pure39>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::setInverted", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setInverted<DefaultConv, Derived, Base, types::pure39>::value, DefaultConv>(
				"cocos2d::CCClippingNode::setInverted", 
				(void*)addresses::address39()
			);
		}

		if constexpr (compare::setStencil<Derived, Base, types::pure40>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::setStencil", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setStencil<DefaultConv, Derived, Base, types::pure40>::value, DefaultConv>(
				"cocos2d::CCClippingNode::setStencil", 
				(void*)addresses::address40()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure41>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCClippingNode::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure41>::value, DefaultConv>(
				"cocos2d::CCClippingNode::visit", 
				(void*)addresses::address41()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GameManager> : ModifyBase<Modify<Derived, GameManager>> {
	using ModifyBase<Modify<Derived, GameManager>>::ModifyBase;
	using Base = GameManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::accountStatusChanged<Derived, Base, types::pure1344>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::accountStatusChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::accountStatusChanged<DefaultConv, Derived, Base, types::pure1344>::value, DefaultConv>(
				"GameManager::accountStatusChanged", 
				(void*)addresses::address1344()
			);
		}

		if constexpr (compare::colorForIdx<Derived, Base, types::pure1345>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::colorForIdx", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorForIdx<DefaultConv, Derived, Base, types::pure1345>::value, DefaultConv>(
				"GameManager::colorForIdx", 
				(void*)addresses::address1345()
			);
		}

		if constexpr (compare::didExitPlayscene<Derived, Base, types::pure1346>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::didExitPlayscene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::didExitPlayscene<DefaultConv, Derived, Base, types::pure1346>::value, DefaultConv>(
				"GameManager::didExitPlayscene", 
				(void*)addresses::address1346()
			);
		}

		if constexpr (compare::doQuickSave<Derived, Base, types::pure1347>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::doQuickSave", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::doQuickSave<DefaultConv, Derived, Base, types::pure1347>::value, DefaultConv>(
				"GameManager::doQuickSave", 
				(void*)addresses::address1347()
			);
		}

		if constexpr (compare::fadeInMusic<Derived, Base, types::pure1348>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::fadeInMusic", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fadeInMusic<DefaultConv, Derived, Base, types::pure1348>::value, DefaultConv>(
				"GameManager::fadeInMusic", 
				(void*)addresses::address1348()
			);
		}

		if constexpr (compare::getBGTexture<Derived, Base, types::pure1349>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getBGTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBGTexture<DefaultConv, Derived, Base, types::pure1349>::value, DefaultConv>(
				"GameManager::getBGTexture", 
				(void*)addresses::address1349()
			);
		}

		if constexpr (compare::getFontFile<Derived, Base, types::pure1350>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getFontFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getFontFile<DefaultConv, Derived, Base, types::pure1350>::value, DefaultConv>(
				"GameManager::getFontFile", 
				(void*)addresses::address1350()
			);
		}

		if constexpr (compare::getGameVariable<Derived, Base, types::pure1351>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGameVariable<DefaultConv, Derived, Base, types::pure1351>::value, DefaultConv>(
				"GameManager::getGameVariable", 
				(void*)addresses::address1351()
			);
		}

		if constexpr (compare::getIntGameVariable<Derived, Base, types::pure1352>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getIntGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getIntGameVariable<DefaultConv, Derived, Base, types::pure1352>::value, DefaultConv>(
				"GameManager::getIntGameVariable", 
				(void*)addresses::address1352()
			);
		}

		if constexpr (compare::getUGV<Derived, Base, types::pure1353>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getUGV", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getUGV<DefaultConv, Derived, Base, types::pure1353>::value, DefaultConv>(
				"GameManager::getUGV", 
				(void*)addresses::address1353()
			);
		}

		if constexpr (compare::loadDeathEffect<Derived, Base, types::pure1354>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::loadDeathEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadDeathEffect<DefaultConv, Derived, Base, types::pure1354>::value, DefaultConv>(
				"GameManager::loadDeathEffect", 
				(void*)addresses::address1354()
			);
		}

		if constexpr (compare::loadFont<Derived, Base, types::pure1355>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::loadFont", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadFont<DefaultConv, Derived, Base, types::pure1355>::value, DefaultConv>(
				"GameManager::loadFont", 
				(void*)addresses::address1355()
			);
		}

		if constexpr (compare::reloadAll<Derived, Base, types::pure1356>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reloadAll", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reloadAll<DefaultConv, Derived, Base, types::pure1356>::value, DefaultConv>(
				"GameManager::reloadAll", 
				(void*)addresses::address1356()
			);
		}

		if constexpr (compare::reloadAllStep2<Derived, Base, types::pure1357>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reloadAllStep2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reloadAllStep2<DefaultConv, Derived, Base, types::pure1357>::value, DefaultConv>(
				"GameManager::reloadAllStep2", 
				(void*)addresses::address1357()
			);
		}

		if constexpr (compare::reloadAllStep5<Derived, Base, types::pure1358>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reloadAllStep5", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reloadAllStep5<DefaultConv, Derived, Base, types::pure1358>::value, DefaultConv>(
				"GameManager::reloadAllStep5", 
				(void*)addresses::address1358()
			);
		}

		if constexpr (compare::reportPercentageForLevel<Derived, Base, types::pure1359>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reportPercentageForLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reportPercentageForLevel<DefaultConv, Derived, Base, types::pure1359>::value, DefaultConv>(
				"GameManager::reportPercentageForLevel", 
				(void*)addresses::address1359()
			);
		}

		if constexpr (compare::setGameVariable<Derived, Base, types::pure1360>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::setGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setGameVariable<DefaultConv, Derived, Base, types::pure1360>::value, DefaultConv>(
				"GameManager::setGameVariable", 
				(void*)addresses::address1360()
			);
		}

		if constexpr (compare::setIntGameVariable<Derived, Base, types::pure1361>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::setIntGameVariable", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setIntGameVariable<DefaultConv, Derived, Base, types::pure1361>::value, DefaultConv>(
				"GameManager::setIntGameVariable", 
				(void*)addresses::address1361()
			);
		}

		if constexpr (compare::setUGV<Derived, Base, types::pure1362>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::setUGV", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setUGV<DefaultConv, Derived, Base, types::pure1362>::value, DefaultConv>(
				"GameManager::setUGV", 
				(void*)addresses::address1362()
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1363>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1363>::value, DefaultConv>(
				"GameManager::sharedState", 
				(void*)addresses::address1363()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1364>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1364>::value, DefaultConv>(
				"GameManager::destructor", 
				(void*)addresses::address1364()
			);
		}

		if constexpr (compare::getGTexture<Derived, Base, types::pure1365>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getGTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGTexture<DefaultConv, Derived, Base, types::pure1365>::value, DefaultConv>(
				"GameManager::getGTexture", 
				(void*)addresses::address1365()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1366>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1366>::value, DefaultConv>(
				"GameManager::init", 
				(void*)addresses::address1366()
			);
		}

		if constexpr (compare::reportAchievementWithID<Derived, Base, types::pure1367>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reportAchievementWithID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reportAchievementWithID<DefaultConv, Derived, Base, types::pure1367>::value, DefaultConv>(
				"GameManager::reportAchievementWithID", 
				(void*)addresses::address1367()
			);
		}

		if constexpr (compare::resolutionForKey<Derived, Base, types::pure1368>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::resolutionForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resolutionForKey<DefaultConv, Derived, Base, types::pure1368>::value, DefaultConv>(
				"GameManager::resolutionForKey", 
				(void*)addresses::address1368()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1369>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure1369>::value, DefaultConv>(
				"GameManager::update", 
				(void*)addresses::address1369()
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

		if constexpr (compare::init<Derived, Base, types::pure871>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomSongLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure871>::value, DefaultConv>(
				"CustomSongLayer::init", 
				(void*)addresses::address871()
			);
		}

		if constexpr (compare::onArtists<Derived, Base, types::pure872>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomSongLayer::onArtists", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onArtists<DefaultConv, Derived, Base, types::pure872>::value, DefaultConv>(
				"CustomSongLayer::onArtists", 
				(void*)addresses::address872()
			);
		}

		if constexpr (compare::onSongBrowser<Derived, Base, types::pure873>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomSongLayer::onSongBrowser", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onSongBrowser<DefaultConv, Derived, Base, types::pure873>::value, DefaultConv>(
				"CustomSongLayer::onSongBrowser", 
				(void*)addresses::address873()
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
			Interface::get()->addHook<wrap::createNewLevel<DefaultConv, Derived, Base, types::pure1304>::value, DefaultConv>(
				"GameLevelManager::createNewLevel", 
				(void*)addresses::address1304()
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1305>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1305>::value, DefaultConv>(
				"GameLevelManager::sharedState", 
				(void*)addresses::address1305()
			);
		}

		if constexpr (compare::getPageInfo<Derived, Base, types::pure1306>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::getPageInfo", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPageInfo<DefaultConv, Derived, Base, types::pure1306>::value, DefaultConv>(
				"GameLevelManager::getPageInfo", 
				(void*)addresses::address1306()
			);
		}

		if constexpr (compare::getStoredOnlineLevels<Derived, Base, types::pure1307>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::getStoredOnlineLevels", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getStoredOnlineLevels<DefaultConv, Derived, Base, types::pure1307>::value, DefaultConv>(
				"GameLevelManager::getStoredOnlineLevels", 
				(void*)addresses::address1307()
			);
		}

		if constexpr (compare::getTopArtists<Derived, Base, types::pure1308>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::getTopArtists", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTopArtists<DefaultConv, Derived, Base, types::pure1308>::value, DefaultConv>(
				"GameLevelManager::getTopArtists", 
				(void*)addresses::address1308()
			);
		}

		if constexpr (compare::getTopArtistsKey<Derived, Base, types::pure1309>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::getTopArtistsKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTopArtistsKey<DefaultConv, Derived, Base, types::pure1309>::value, DefaultConv>(
				"GameLevelManager::getTopArtistsKey", 
				(void*)addresses::address1309()
			);
		}

		if constexpr (compare::makeTimeStamp<Derived, Base, types::pure1310>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::makeTimeStamp", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::makeTimeStamp<DefaultConv, Derived, Base, types::pure1310>::value, DefaultConv>(
				"GameLevelManager::makeTimeStamp", 
				(void*)addresses::address1310()
			);
		}

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
			Interface::get()->addHook<wrap::save<DefaultConv, Derived, Base, types::pure1301>::value, DefaultConv>(
				"GManager::save", 
				(void*)addresses::address1301()
			);
		}

		if constexpr (compare::saveData<Derived, Base, types::pure1302>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GManager::saveData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::saveData<DefaultConv, Derived, Base, types::pure1302>::value, DefaultConv>(
				"GManager::saveData", 
				(void*)addresses::address1302()
			);
		}

		if constexpr (compare::saveGMTo<Derived, Base, types::pure1303>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GManager::saveGMTo", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::saveGMTo<DefaultConv, Derived, Base, types::pure1303>::value, DefaultConv>(
				"GManager::saveGMTo", 
				(void*)addresses::address1303()
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
struct Modify<Derived, GJSpriteColor> : ModifyBase<Modify<Derived, GJSpriteColor>> {
	using ModifyBase<Modify<Derived, GJSpriteColor>>::ModifyBase;
	using Base = GJSpriteColor;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
struct Modify<Derived, GJScaleControlDelegate> : ModifyBase<Modify<Derived, GJScaleControlDelegate>> {
	using ModifyBase<Modify<Derived, GJScaleControlDelegate>>::ModifyBase;
	using Base = GJScaleControlDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure767>::value, DefaultConv>(
				"CCMenuItemToggler::create", 
				(void*)addresses::address767()
			);
		}

		if constexpr (compare::setSizeMult<Derived, Base, types::pure768>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::setSizeMult", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSizeMult<DefaultConv, Derived, Base, types::pure768>::value, DefaultConv>(
				"CCMenuItemToggler::setSizeMult", 
				(void*)addresses::address768()
			);
		}

		if constexpr (compare::toggle<Derived, Base, types::pure769>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::toggle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggle<DefaultConv, Derived, Base, types::pure769>::value, DefaultConv>(
				"CCMenuItemToggler::toggle", 
				(void*)addresses::address769()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure770>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure770>::value, DefaultConv>(
				"CCMenuItemToggler::init", 
				(void*)addresses::address770()
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure771>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::activate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activate<DefaultConv, Derived, Base, types::pure771>::value, DefaultConv>(
				"CCMenuItemToggler::activate", 
				(void*)addresses::address771()
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure772>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::selected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selected<DefaultConv, Derived, Base, types::pure772>::value, DefaultConv>(
				"CCMenuItemToggler::selected", 
				(void*)addresses::address772()
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure773>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unselected<DefaultConv, Derived, Base, types::pure773>::value, DefaultConv>(
				"CCMenuItemToggler::unselected", 
				(void*)addresses::address773()
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure774>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setEnabled<DefaultConv, Derived, Base, types::pure774>::value, DefaultConv>(
				"CCMenuItemToggler::setEnabled", 
				(void*)addresses::address774()
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
struct Modify<Derived, GJMapPack> : ModifyBase<Modify<Derived, GJMapPack>> {
	using ModifyBase<Modify<Derived, GJMapPack>>::ModifyBase;
	using Base = GJMapPack;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
			Interface::get()->addHook<wrap::onPlayerColor1<DefaultConv, Derived, Base, types::pure1246>::value, DefaultConv>(
				"GJGarageLayer::onPlayerColor1", 
				(void*)addresses::address1246()
			);
		}

		if constexpr (compare::onPlayerColor2<Derived, Base, types::pure1247>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onPlayerColor2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPlayerColor2<DefaultConv, Derived, Base, types::pure1247>::value, DefaultConv>(
				"GJGarageLayer::onPlayerColor2", 
				(void*)addresses::address1247()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1249>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1249>::value, DefaultConv>(
				"GJGarageLayer::init", 
				(void*)addresses::address1249()
			);
		}

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
struct Modify<Derived, GJGameLevel> : ModifyBase<Modify<Derived, GJGameLevel>> {
	using ModifyBase<Modify<Derived, GJGameLevel>>::ModifyBase;
	using Base = GJGameLevel;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure1233>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1233>::value, DefaultConv>(
				"GJGameLevel::destructor", 
				(void*)addresses::address1233()
			);
		}

		if constexpr (compare::encodeWithCoder<Derived, Base, types::pure1234>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::encodeWithCoder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::encodeWithCoder<DefaultConv, Derived, Base, types::pure1234>::value, DefaultConv>(
				"GJGameLevel::encodeWithCoder", 
				(void*)addresses::address1234()
			);
		}

		if constexpr (compare::canEncode<Derived, Base, types::pure1235>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::canEncode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::canEncode<DefaultConv, Derived, Base, types::pure1235>::value, DefaultConv>(
				"GJGameLevel::canEncode", 
				(void*)addresses::address1235()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1236>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1236>::value, DefaultConv>(
				"GJGameLevel::init", 
				(void*)addresses::address1236()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1237>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1237>::value, DefaultConv>(
				"GJGameLevel::create", 
				(void*)addresses::address1237()
			);
		}

		if constexpr (compare::getAudioFileName<Derived, Base, types::pure1238>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getAudioFileName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAudioFileName<DefaultConv, Derived, Base, types::pure1238>::value, DefaultConv>(
				"GJGameLevel::getAudioFileName", 
				(void*)addresses::address1238()
			);
		}

		if constexpr (compare::getCoinKey<Derived, Base, types::pure1239>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getCoinKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCoinKey<DefaultConv, Derived, Base, types::pure1239>::value, DefaultConv>(
				"GJGameLevel::getCoinKey", 
				(void*)addresses::address1239()
			);
		}

		if constexpr (compare::getLengthKey<Derived, Base, types::pure1240>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getLengthKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLengthKey<DefaultConv, Derived, Base, types::pure1240>::value, DefaultConv>(
				"GJGameLevel::getLengthKey", 
				(void*)addresses::address1240()
			);
		}

		if constexpr (compare::getNormalPercent<Derived, Base, types::pure1241>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getNormalPercent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getNormalPercent<DefaultConv, Derived, Base, types::pure1241>::value, DefaultConv>(
				"GJGameLevel::getNormalPercent", 
				(void*)addresses::address1241()
			);
		}

		if constexpr (compare::levelWasAltered<Derived, Base, types::pure1242>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::levelWasAltered", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::levelWasAltered<DefaultConv, Derived, Base, types::pure1242>::value, DefaultConv>(
				"GJGameLevel::levelWasAltered", 
				(void*)addresses::address1242()
			);
		}

		if constexpr (compare::savePercentage<Derived, Base, types::pure1243>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::savePercentage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::savePercentage<DefaultConv, Derived, Base, types::pure1243>::value, DefaultConv>(
				"GJGameLevel::savePercentage", 
				(void*)addresses::address1243()
			);
		}

		if constexpr (compare::dataLoaded<Derived, Base, types::pure1244>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::dataLoaded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::dataLoaded<DefaultConv, Derived, Base, types::pure1244>::value, DefaultConv>(
				"GJGameLevel::dataLoaded", 
				(void*)addresses::address1244()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2126>::value, DefaultConv>(
				"TableView::create", 
				(void*)addresses::address2126()
			);
		}

		if constexpr (compare::reloadData<Derived, Base, types::pure2127>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TableView::reloadData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reloadData<DefaultConv, Derived, Base, types::pure2127>::value, DefaultConv>(
				"TableView::reloadData", 
				(void*)addresses::address2127()
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
struct Modify<Derived, TopArtistsLayer> : ModifyBase<Modify<Derived, TopArtistsLayer>> {
	using ModifyBase<Modify<Derived, TopArtistsLayer>>::ModifyBase;
	using Base = TopArtistsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2154>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TopArtistsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2154>::value, DefaultConv>(
				"TopArtistsLayer::create", 
				(void*)addresses::address2154()
			);
		}

		if constexpr (compare::setupLeaderboard<Derived, Base, types::pure2155>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TopArtistsLayer::setupLeaderboard", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupLeaderboard<DefaultConv, Derived, Base, types::pure2155>::value, DefaultConv>(
				"TopArtistsLayer::setupLeaderboard", 
				(void*)addresses::address2155()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure2156>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TopArtistsLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure2156>::value, DefaultConv>(
				"TopArtistsLayer::init", 
				(void*)addresses::address2156()
			);
		}

		if constexpr (compare::loadPage<Derived, Base, types::pure2157>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TopArtistsLayer::loadPage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadPage<DefaultConv, Derived, Base, types::pure2157>::value, DefaultConv>(
				"TopArtistsLayer::loadPage", 
				(void*)addresses::address2157()
			);
		}

		if constexpr (compare::setupPageInfo<Derived, Base, types::pure2158>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TopArtistsLayer::setupPageInfo", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupPageInfo<DefaultConv, Derived, Base, types::pure2158>::value, DefaultConv>(
				"TopArtistsLayer::setupPageInfo", 
				(void*)addresses::address2158()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure545>::value, DefaultConv>(
				"cocos2d::CCTransitionFade::create", 
				(void*)addresses::address545()
			);
		}

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
			Interface::get()->addHook<wrap::enterLayer<DefaultConv, Derived, Base, types::pure1129>::value, DefaultConv>(
				"GJDropDownLayer::enterLayer", 
				(void*)addresses::address1129()
			);
		}

		if constexpr (compare::exitLayer<Derived, Base, types::pure1130>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::exitLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::exitLayer<DefaultConv, Derived, Base, types::pure1130>::value, DefaultConv>(
				"GJDropDownLayer::exitLayer", 
				(void*)addresses::address1130()
			);
		}

		if constexpr (compare::showLayer<Derived, Base, types::pure1131>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::showLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showLayer<DefaultConv, Derived, Base, types::pure1131>::value, DefaultConv>(
				"GJDropDownLayer::showLayer", 
				(void*)addresses::address1131()
			);
		}

		if constexpr (compare::hideLayer<Derived, Base, types::pure1132>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::hideLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hideLayer<DefaultConv, Derived, Base, types::pure1132>::value, DefaultConv>(
				"GJDropDownLayer::hideLayer", 
				(void*)addresses::address1132()
			);
		}

		if constexpr (compare::layerVisible<Derived, Base, types::pure1133>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::layerVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::layerVisible<DefaultConv, Derived, Base, types::pure1133>::value, DefaultConv>(
				"GJDropDownLayer::layerVisible", 
				(void*)addresses::address1133()
			);
		}

		if constexpr (compare::layerHidden<Derived, Base, types::pure1134>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::layerHidden", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::layerHidden<DefaultConv, Derived, Base, types::pure1134>::value, DefaultConv>(
				"GJDropDownLayer::layerHidden", 
				(void*)addresses::address1134()
			);
		}

		if constexpr (compare::disableUI<Derived, Base, types::pure1136>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::disableUI", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::disableUI<DefaultConv, Derived, Base, types::pure1136>::value, DefaultConv>(
				"GJDropDownLayer::disableUI", 
				(void*)addresses::address1136()
			);
		}

		if constexpr (compare::enableUI<Derived, Base, types::pure1137>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::enableUI", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enableUI<DefaultConv, Derived, Base, types::pure1137>::value, DefaultConv>(
				"GJDropDownLayer::enableUI", 
				(void*)addresses::address1137()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure1143>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure1143>::value, DefaultConv>(
				"GJDropDownLayer::draw", 
				(void*)addresses::address1143()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1144>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1144>::value, DefaultConv>(
				"GJDropDownLayer::init", 
				(void*)addresses::address1144()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure1145>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure1145>::value, DefaultConv>(
				"GJDropDownLayer::registerWithTouchDispatcher", 
				(void*)addresses::address1145()
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure1146>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure1146>::value, DefaultConv>(
				"GJDropDownLayer::keyBackClicked", 
				(void*)addresses::address1146()
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
struct Modify<Derived, GJColorSetupLayer> : ModifyBase<Modify<Derived, GJColorSetupLayer>> {
	using ModifyBase<Modify<Derived, GJColorSetupLayer>>::ModifyBase;
	using Base = GJColorSetupLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
struct Modify<Derived, EndPortalObject> : ModifyBase<Modify<Derived, EndPortalObject>> {
	using ModifyBase<Modify<Derived, EndPortalObject>>::ModifyBase;
	using Base = EndPortalObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1018>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EndPortalObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1018>::value, DefaultConv>(
				"EndPortalObject::create", 
				(void*)addresses::address1018()
			);
		}

		if constexpr (compare::updateColors<Derived, Base, types::pure1019>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EndPortalObject::updateColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColors<DefaultConv, Derived, Base, types::pure1019>::value, DefaultConv>(
				"EndPortalObject::updateColors", 
				(void*)addresses::address1019()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJBaseGameLayer> : ModifyBase<Modify<Derived, GJBaseGameLayer>> {
	using ModifyBase<Modify<Derived, GJBaseGameLayer>>::ModifyBase;
	using Base = GJBaseGameLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::objectsCollided<Derived, Base, types::pure1054>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::objectsCollided", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectsCollided<DefaultConv, Derived, Base, types::pure1054>::value, DefaultConv>(
				"GJBaseGameLayer::objectsCollided", 
				(void*)addresses::address1054()
			);
		}

		if constexpr (compare::createMoveCommand<Derived, Base, types::pure1055>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::createMoveCommand", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createMoveCommand<DefaultConv, Derived, Base, types::pure1055>::value, DefaultConv>(
				"GJBaseGameLayer::createMoveCommand", 
				(void*)addresses::address1055()
			);
		}

		if constexpr (compare::updateColor<Derived, Base, types::pure1056>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColor<DefaultConv, Derived, Base, types::pure1056>::value, DefaultConv>(
				"GJBaseGameLayer::updateColor", 
				(void*)addresses::address1056()
			);
		}

		if constexpr (compare::flipGravity<Derived, Base, types::pure1057>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::flipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::flipGravity<DefaultConv, Derived, Base, types::pure1057>::value, DefaultConv>(
				"GJBaseGameLayer::flipGravity", 
				(void*)addresses::address1057()
			);
		}

		if constexpr (compare::calculateColorValues<Derived, Base, types::pure1058>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::calculateColorValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateColorValues<DefaultConv, Derived, Base, types::pure1058>::value, DefaultConv>(
				"GJBaseGameLayer::calculateColorValues", 
				(void*)addresses::address1058()
			);
		}

		if constexpr (compare::toggleGroupTriggered<Derived, Base, types::pure1059>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::toggleGroupTriggered", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleGroupTriggered<DefaultConv, Derived, Base, types::pure1059>::value, DefaultConv>(
				"GJBaseGameLayer::toggleGroupTriggered", 
				(void*)addresses::address1059()
			);
		}

		if constexpr (compare::spawnGroup<Derived, Base, types::pure1060>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::spawnGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnGroup<DefaultConv, Derived, Base, types::pure1060>::value, DefaultConv>(
				"GJBaseGameLayer::spawnGroup", 
				(void*)addresses::address1060()
			);
		}

		if constexpr (compare::addToSection<Derived, Base, types::pure1061>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::addToSection", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToSection<DefaultConv, Derived, Base, types::pure1061>::value, DefaultConv>(
				"GJBaseGameLayer::addToSection", 
				(void*)addresses::address1061()
			);
		}

		if constexpr (compare::addToGroup<Derived, Base, types::pure1062>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::addToGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToGroup<DefaultConv, Derived, Base, types::pure1062>::value, DefaultConv>(
				"GJBaseGameLayer::addToGroup", 
				(void*)addresses::address1062()
			);
		}

		if constexpr (compare::removeFromGroup<Derived, Base, types::pure1063>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::removeFromGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeFromGroup<DefaultConv, Derived, Base, types::pure1063>::value, DefaultConv>(
				"GJBaseGameLayer::removeFromGroup", 
				(void*)addresses::address1063()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1064>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1064>::value, DefaultConv>(
				"GJBaseGameLayer::init", 
				(void*)addresses::address1064()
			);
		}

		if constexpr (compare::addObjectCounter<Derived, Base, types::pure1065>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::addObjectCounter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addObjectCounter<DefaultConv, Derived, Base, types::pure1065>::value, DefaultConv>(
				"GJBaseGameLayer::addObjectCounter", 
				(void*)addresses::address1065()
			);
		}

		if constexpr (compare::addToGroups<Derived, Base, types::pure1066>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::addToGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToGroups<DefaultConv, Derived, Base, types::pure1066>::value, DefaultConv>(
				"GJBaseGameLayer::addToGroups", 
				(void*)addresses::address1066()
			);
		}

		if constexpr (compare::atlasValue<Derived, Base, types::pure1067>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::atlasValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::atlasValue<DefaultConv, Derived, Base, types::pure1067>::value, DefaultConv>(
				"GJBaseGameLayer::atlasValue", 
				(void*)addresses::address1067()
			);
		}

		if constexpr (compare::bumpPlayer<Derived, Base, types::pure1068>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::bumpPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::bumpPlayer<DefaultConv, Derived, Base, types::pure1068>::value, DefaultConv>(
				"GJBaseGameLayer::bumpPlayer", 
				(void*)addresses::address1068()
			);
		}

		if constexpr (compare::calculateOpacityValues<Derived, Base, types::pure1069>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::calculateOpacityValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateOpacityValues<DefaultConv, Derived, Base, types::pure1069>::value, DefaultConv>(
				"GJBaseGameLayer::calculateOpacityValues", 
				(void*)addresses::address1069()
			);
		}

		if constexpr (compare::checkSpawnObjects<Derived, Base, types::pure1070>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::checkSpawnObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::checkSpawnObjects<DefaultConv, Derived, Base, types::pure1070>::value, DefaultConv>(
				"GJBaseGameLayer::checkSpawnObjects", 
				(void*)addresses::address1070()
			);
		}

		if constexpr (compare::collectItem<Derived, Base, types::pure1071>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::collectItem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::collectItem<DefaultConv, Derived, Base, types::pure1071>::value, DefaultConv>(
				"GJBaseGameLayer::collectItem", 
				(void*)addresses::address1071()
			);
		}

		if constexpr (compare::collectedObject<Derived, Base, types::pure1072>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::collectedObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::collectedObject<DefaultConv, Derived, Base, types::pure1072>::value, DefaultConv>(
				"GJBaseGameLayer::collectedObject", 
				(void*)addresses::address1072()
			);
		}

		if constexpr (compare::createTextLayers<Derived, Base, types::pure1073>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::createTextLayers", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createTextLayers<DefaultConv, Derived, Base, types::pure1073>::value, DefaultConv>(
				"GJBaseGameLayer::createTextLayers", 
				(void*)addresses::address1073()
			);
		}

		if constexpr (compare::damagingObjectsInRect<Derived, Base, types::pure1074>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::damagingObjectsInRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::damagingObjectsInRect<DefaultConv, Derived, Base, types::pure1074>::value, DefaultConv>(
				"GJBaseGameLayer::damagingObjectsInRect", 
				(void*)addresses::address1074()
			);
		}

		if constexpr (compare::enableHighCapacityMode<Derived, Base, types::pure1075>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::enableHighCapacityMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enableHighCapacityMode<DefaultConv, Derived, Base, types::pure1075>::value, DefaultConv>(
				"GJBaseGameLayer::enableHighCapacityMode", 
				(void*)addresses::address1075()
			);
		}

		if constexpr (compare::getCapacityString<Derived, Base, types::pure1076>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getCapacityString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCapacityString<DefaultConv, Derived, Base, types::pure1076>::value, DefaultConv>(
				"GJBaseGameLayer::getCapacityString", 
				(void*)addresses::address1076()
			);
		}

		if constexpr (compare::getGroundHeightForMode<Derived, Base, types::pure1077>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getGroundHeightForMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGroundHeightForMode<DefaultConv, Derived, Base, types::pure1077>::value, DefaultConv>(
				"GJBaseGameLayer::getGroundHeightForMode", 
				(void*)addresses::address1077()
			);
		}

		if constexpr (compare::getGroup<Derived, Base, types::pure1078>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGroup<DefaultConv, Derived, Base, types::pure1078>::value, DefaultConv>(
				"GJBaseGameLayer::getGroup", 
				(void*)addresses::address1078()
			);
		}

		if constexpr (compare::getMoveDeltaForObjects<Derived, Base, types::pure1079>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getMoveDeltaForObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMoveDeltaForObjects<DefaultConv, Derived, Base, types::pure1079>::value, DefaultConv>(
				"GJBaseGameLayer::getMoveDeltaForObjects", 
				(void*)addresses::address1079()
			);
		}

		if constexpr (compare::getOptimizedGroup<Derived, Base, types::pure1080>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getOptimizedGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOptimizedGroup<DefaultConv, Derived, Base, types::pure1080>::value, DefaultConv>(
				"GJBaseGameLayer::getOptimizedGroup", 
				(void*)addresses::address1080()
			);
		}

		if constexpr (compare::getStaticGroup<Derived, Base, types::pure1081>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getStaticGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getStaticGroup<DefaultConv, Derived, Base, types::pure1081>::value, DefaultConv>(
				"GJBaseGameLayer::getStaticGroup", 
				(void*)addresses::address1081()
			);
		}

		if constexpr (compare::isGroupDisabledForObject<Derived, Base, types::pure1082>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::isGroupDisabledForObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isGroupDisabledForObject<DefaultConv, Derived, Base, types::pure1082>::value, DefaultConv>(
				"GJBaseGameLayer::isGroupDisabledForObject", 
				(void*)addresses::address1082()
			);
		}

		if constexpr (compare::isGroupDisabledForObjectFull<Derived, Base, types::pure1083>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::isGroupDisabledForObjectFull", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isGroupDisabledForObjectFull<DefaultConv, Derived, Base, types::pure1083>::value, DefaultConv>(
				"GJBaseGameLayer::isGroupDisabledForObjectFull", 
				(void*)addresses::address1083()
			);
		}

		if constexpr (compare::loadUpToPosition<Derived, Base, types::pure1084>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::loadUpToPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadUpToPosition<DefaultConv, Derived, Base, types::pure1084>::value, DefaultConv>(
				"GJBaseGameLayer::loadUpToPosition", 
				(void*)addresses::address1084()
			);
		}

		if constexpr (compare::objectIntersectsCircle<Derived, Base, types::pure1085>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::objectIntersectsCircle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectIntersectsCircle<DefaultConv, Derived, Base, types::pure1085>::value, DefaultConv>(
				"GJBaseGameLayer::objectIntersectsCircle", 
				(void*)addresses::address1085()
			);
		}

		if constexpr (compare::objectTriggered<Derived, Base, types::pure1086>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::objectTriggered", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectTriggered<DefaultConv, Derived, Base, types::pure1086>::value, DefaultConv>(
				"GJBaseGameLayer::objectTriggered", 
				(void*)addresses::address1086()
			);
		}

		if constexpr (compare::optimizeMoveGroups<Derived, Base, types::pure1087>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::optimizeMoveGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::optimizeMoveGroups<DefaultConv, Derived, Base, types::pure1087>::value, DefaultConv>(
				"GJBaseGameLayer::optimizeMoveGroups", 
				(void*)addresses::address1087()
			);
		}

		if constexpr (compare::parentForZLayer<Derived, Base, types::pure1088>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::parentForZLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::parentForZLayer<DefaultConv, Derived, Base, types::pure1088>::value, DefaultConv>(
				"GJBaseGameLayer::parentForZLayer", 
				(void*)addresses::address1088()
			);
		}

		if constexpr (compare::playerTouchedRing<Derived, Base, types::pure1089>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::playerTouchedRing", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playerTouchedRing<DefaultConv, Derived, Base, types::pure1089>::value, DefaultConv>(
				"GJBaseGameLayer::playerTouchedRing", 
				(void*)addresses::address1089()
			);
		}

		if constexpr (compare::processColorObject<Derived, Base, types::pure1090>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processColorObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processColorObject<DefaultConv, Derived, Base, types::pure1090>::value, DefaultConv>(
				"GJBaseGameLayer::processColorObject", 
				(void*)addresses::address1090()
			);
		}

		if constexpr (compare::processFollowActions<Derived, Base, types::pure1091>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processFollowActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processFollowActions<DefaultConv, Derived, Base, types::pure1091>::value, DefaultConv>(
				"GJBaseGameLayer::processFollowActions", 
				(void*)addresses::address1091()
			);
		}

		if constexpr (compare::processMoveActions<Derived, Base, types::pure1092>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processMoveActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processMoveActions<DefaultConv, Derived, Base, types::pure1092>::value, DefaultConv>(
				"GJBaseGameLayer::processMoveActions", 
				(void*)addresses::address1092()
			);
		}

		if constexpr (compare::processMoveActionsStep<Derived, Base, types::pure1093>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processMoveActionsStep", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processMoveActionsStep<DefaultConv, Derived, Base, types::pure1093>::value, DefaultConv>(
				"GJBaseGameLayer::processMoveActionsStep", 
				(void*)addresses::address1093()
			);
		}

		if constexpr (compare::processOpacityObject<Derived, Base, types::pure1094>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processOpacityObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processOpacityObject<DefaultConv, Derived, Base, types::pure1094>::value, DefaultConv>(
				"GJBaseGameLayer::processOpacityObject", 
				(void*)addresses::address1094()
			);
		}

		if constexpr (compare::processPlayerFollowActions<Derived, Base, types::pure1095>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processPlayerFollowActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processPlayerFollowActions<DefaultConv, Derived, Base, types::pure1095>::value, DefaultConv>(
				"GJBaseGameLayer::processPlayerFollowActions", 
				(void*)addresses::address1095()
			);
		}

		if constexpr (compare::processRotationActions<Derived, Base, types::pure1096>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processRotationActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processRotationActions<DefaultConv, Derived, Base, types::pure1096>::value, DefaultConv>(
				"GJBaseGameLayer::processRotationActions", 
				(void*)addresses::address1096()
			);
		}

		if constexpr (compare::pushButton<Derived, Base, types::pure1097>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::pushButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pushButton<DefaultConv, Derived, Base, types::pure1097>::value, DefaultConv>(
				"GJBaseGameLayer::pushButton", 
				(void*)addresses::address1097()
			);
		}

		if constexpr (compare::rectIntersectsCircle<Derived, Base, types::pure1098>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::rectIntersectsCircle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::rectIntersectsCircle<DefaultConv, Derived, Base, types::pure1098>::value, DefaultConv>(
				"GJBaseGameLayer::rectIntersectsCircle", 
				(void*)addresses::address1098()
			);
		}

		if constexpr (compare::refreshCounterLabels<Derived, Base, types::pure1099>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::refreshCounterLabels", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::refreshCounterLabels<DefaultConv, Derived, Base, types::pure1099>::value, DefaultConv>(
				"GJBaseGameLayer::refreshCounterLabels", 
				(void*)addresses::address1099()
			);
		}

		if constexpr (compare::releaseButton<Derived, Base, types::pure1100>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::releaseButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::releaseButton<DefaultConv, Derived, Base, types::pure1100>::value, DefaultConv>(
				"GJBaseGameLayer::releaseButton", 
				(void*)addresses::address1100()
			);
		}

		if constexpr (compare::removeFromGroups<Derived, Base, types::pure1101>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::removeFromGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeFromGroups<DefaultConv, Derived, Base, types::pure1101>::value, DefaultConv>(
				"GJBaseGameLayer::removeFromGroups", 
				(void*)addresses::address1101()
			);
		}

		if constexpr (compare::removeObjectFromSection<Derived, Base, types::pure1102>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::removeObjectFromSection", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeObjectFromSection<DefaultConv, Derived, Base, types::pure1102>::value, DefaultConv>(
				"GJBaseGameLayer::removeObjectFromSection", 
				(void*)addresses::address1102()
			);
		}

		if constexpr (compare::reorderObjectSection<Derived, Base, types::pure1103>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::reorderObjectSection", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reorderObjectSection<DefaultConv, Derived, Base, types::pure1103>::value, DefaultConv>(
				"GJBaseGameLayer::reorderObjectSection", 
				(void*)addresses::address1103()
			);
		}

		if constexpr (compare::resetGroupCounters<Derived, Base, types::pure1104>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::resetGroupCounters", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetGroupCounters<DefaultConv, Derived, Base, types::pure1104>::value, DefaultConv>(
				"GJBaseGameLayer::resetGroupCounters", 
				(void*)addresses::address1104()
			);
		}

		if constexpr (compare::resetMoveOptimizedValue<Derived, Base, types::pure1105>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::resetMoveOptimizedValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetMoveOptimizedValue<DefaultConv, Derived, Base, types::pure1105>::value, DefaultConv>(
				"GJBaseGameLayer::resetMoveOptimizedValue", 
				(void*)addresses::address1105()
			);
		}

		if constexpr (compare::sectionForPos<Derived, Base, types::pure1106>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::sectionForPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sectionForPos<DefaultConv, Derived, Base, types::pure1106>::value, DefaultConv>(
				"GJBaseGameLayer::sectionForPos", 
				(void*)addresses::address1106()
			);
		}

		if constexpr (compare::setupLayers<Derived, Base, types::pure1107>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::setupLayers", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupLayers<DefaultConv, Derived, Base, types::pure1107>::value, DefaultConv>(
				"GJBaseGameLayer::setupLayers", 
				(void*)addresses::address1107()
			);
		}

		if constexpr (compare::shouldExitHackedLevel<Derived, Base, types::pure1108>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::shouldExitHackedLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::shouldExitHackedLevel<DefaultConv, Derived, Base, types::pure1108>::value, DefaultConv>(
				"GJBaseGameLayer::shouldExitHackedLevel", 
				(void*)addresses::address1108()
			);
		}

		if constexpr (compare::spawnGroupTriggered<Derived, Base, types::pure1109>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::spawnGroupTriggered", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnGroupTriggered<DefaultConv, Derived, Base, types::pure1109>::value, DefaultConv>(
				"GJBaseGameLayer::spawnGroupTriggered", 
				(void*)addresses::address1109()
			);
		}

		if constexpr (compare::staticObjectsInRect<Derived, Base, types::pure1110>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::staticObjectsInRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::staticObjectsInRect<DefaultConv, Derived, Base, types::pure1110>::value, DefaultConv>(
				"GJBaseGameLayer::staticObjectsInRect", 
				(void*)addresses::address1110()
			);
		}

		if constexpr (compare::testInstantCountTrigger<Derived, Base, types::pure1111>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::testInstantCountTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::testInstantCountTrigger<DefaultConv, Derived, Base, types::pure1111>::value, DefaultConv>(
				"GJBaseGameLayer::testInstantCountTrigger", 
				(void*)addresses::address1111()
			);
		}

		if constexpr (compare::toggleGroup<Derived, Base, types::pure1112>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::toggleGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleGroup<DefaultConv, Derived, Base, types::pure1112>::value, DefaultConv>(
				"GJBaseGameLayer::toggleGroup", 
				(void*)addresses::address1112()
			);
		}

		if constexpr (compare::togglePlayerVisibility<Derived, Base, types::pure1113>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::togglePlayerVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::togglePlayerVisibility<DefaultConv, Derived, Base, types::pure1113>::value, DefaultConv>(
				"GJBaseGameLayer::togglePlayerVisibility", 
				(void*)addresses::address1113()
			);
		}

		if constexpr (compare::triggerMoveCommand<Derived, Base, types::pure1114>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::triggerMoveCommand", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::triggerMoveCommand<DefaultConv, Derived, Base, types::pure1114>::value, DefaultConv>(
				"GJBaseGameLayer::triggerMoveCommand", 
				(void*)addresses::address1114()
			);
		}

		if constexpr (compare::updateCollisionBlocks<Derived, Base, types::pure1115>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateCollisionBlocks", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCollisionBlocks<DefaultConv, Derived, Base, types::pure1115>::value, DefaultConv>(
				"GJBaseGameLayer::updateCollisionBlocks", 
				(void*)addresses::address1115()
			);
		}

		if constexpr (compare::updateCounters<Derived, Base, types::pure1116>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateCounters", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCounters<DefaultConv, Derived, Base, types::pure1116>::value, DefaultConv>(
				"GJBaseGameLayer::updateCounters", 
				(void*)addresses::address1116()
			);
		}

		if constexpr (compare::updateDisabledObjectsLastPos<Derived, Base, types::pure1117>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateDisabledObjectsLastPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisabledObjectsLastPos<DefaultConv, Derived, Base, types::pure1117>::value, DefaultConv>(
				"GJBaseGameLayer::updateDisabledObjectsLastPos", 
				(void*)addresses::address1117()
			);
		}

		if constexpr (compare::updateLayerCapacity<Derived, Base, types::pure1118>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateLayerCapacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateLayerCapacity<DefaultConv, Derived, Base, types::pure1118>::value, DefaultConv>(
				"GJBaseGameLayer::updateLayerCapacity", 
				(void*)addresses::address1118()
			);
		}

		if constexpr (compare::updateLegacyLayerCapacity<Derived, Base, types::pure1119>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateLegacyLayerCapacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateLegacyLayerCapacity<DefaultConv, Derived, Base, types::pure1119>::value, DefaultConv>(
				"GJBaseGameLayer::updateLegacyLayerCapacity", 
				(void*)addresses::address1119()
			);
		}

		if constexpr (compare::updateOBB2<Derived, Base, types::pure1120>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateOBB2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateOBB2<DefaultConv, Derived, Base, types::pure1120>::value, DefaultConv>(
				"GJBaseGameLayer::updateOBB2", 
				(void*)addresses::address1120()
			);
		}

		if constexpr (compare::updateQueuedLabels<Derived, Base, types::pure1121>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateQueuedLabels", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateQueuedLabels<DefaultConv, Derived, Base, types::pure1121>::value, DefaultConv>(
				"GJBaseGameLayer::updateQueuedLabels", 
				(void*)addresses::address1121()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1122>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1122>::value, DefaultConv>(
				"GJBaseGameLayer::destructor", 
				(void*)addresses::address1122()
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
struct Modify<Derived, SongInfoLayer> : ModifyBase<Modify<Derived, SongInfoLayer>> {
	using ModifyBase<Modify<Derived, SongInfoLayer>>::ModifyBase;
	using Base = SongInfoLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, DrawGridLayer> : ModifyBase<Modify<Derived, DrawGridLayer>> {
	using ModifyBase<Modify<Derived, DrawGridLayer>>::ModifyBase;
	using Base = DrawGridLayer;
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
			Interface::get()->addHook<wrap::sharedEngine<DefaultConv, Derived, Base, types::pure1037>::value, DefaultConv>(
				"FMODAudioEngine::sharedEngine", 
				(void*)addresses::address1037()
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

		if constexpr (compare::createFromString<Derived, Base, types::pure2036>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PulseEffectAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createFromString<DefaultConv, Derived, Base, types::pure2036>::value, DefaultConv>(
				"PulseEffectAction::createFromString", 
				(void*)addresses::address2036()
			);
		}

		if constexpr (compare::getSaveString<Derived, Base, types::pure2037>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PulseEffectAction::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSaveString<DefaultConv, Derived, Base, types::pure2037>::value, DefaultConv>(
				"PulseEffectAction::getSaveString", 
				(void*)addresses::address2037()
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
struct Modify<Derived, EditorPauseLayer> : ModifyBase<Modify<Derived, EditorPauseLayer>> {
	using ModifyBase<Modify<Derived, EditorPauseLayer>>::ModifyBase;
	using Base = EditorPauseLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure909>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure909>::value, DefaultConv>(
				"EditorPauseLayer::destructor", 
				(void*)addresses::address909()
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure910>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure910>::value, DefaultConv>(
				"EditorPauseLayer::keyBackClicked", 
				(void*)addresses::address910()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure911>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure911>::value, DefaultConv>(
				"EditorPauseLayer::keyDown", 
				(void*)addresses::address911()
			);
		}

		if constexpr (compare::customSetup<Derived, Base, types::pure912>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::customSetup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::customSetup<DefaultConv, Derived, Base, types::pure912>::value, DefaultConv>(
				"EditorPauseLayer::customSetup", 
				(void*)addresses::address912()
			);
		}

		if constexpr (compare::FLAlert_Clicked<Derived, Base, types::pure913>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::FLAlert_Clicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::FLAlert_Clicked<DefaultConv, Derived, Base, types::pure913>::value, DefaultConv>(
				"EditorPauseLayer::FLAlert_Clicked", 
				(void*)addresses::address913()
			);
		}

		if constexpr (compare::saveLevel<Derived, Base, types::pure914>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::saveLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::saveLevel<DefaultConv, Derived, Base, types::pure914>::value, DefaultConv>(
				"EditorPauseLayer::saveLevel", 
				(void*)addresses::address914()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure915>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure915>::value, DefaultConv>(
				"EditorPauseLayer::init", 
				(void*)addresses::address915()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure98>::value, DefaultConv>(
				"cocos2d::CCEaseOut::create", 
				(void*)addresses::address98()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure906>::value, DefaultConv>(
				"EditLevelLayer::create", 
				(void*)addresses::address906()
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
			Interface::get()->addHook<wrap::loadFromItems<DefaultConv, Derived, Base, types::pure904>::value, DefaultConv>(
				"EditButtonBar::loadFromItems", 
				(void*)addresses::address904()
			);
		}

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1656>::value, DefaultConv>(
				"LoadingLayer::create", 
				(void*)addresses::address1656()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1657>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1657>::value, DefaultConv>(
				"LoadingLayer::init", 
				(void*)addresses::address1657()
			);
		}

		if constexpr (compare::loadAssets<Derived, Base, types::pure1659>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::loadAssets", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadAssets<DefaultConv, Derived, Base, types::pure1659>::value, DefaultConv>(
				"LoadingLayer::loadAssets", 
				(void*)addresses::address1659()
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
struct Modify<Derived, SetIDLayer> : ModifyBase<Modify<Derived, SetIDLayer>> {
	using ModifyBase<Modify<Derived, SetIDLayer>>::ModifyBase;
	using Base = SetIDLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2048>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetIDLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2048>::value, DefaultConv>(
				"SetIDLayer::create", 
				(void*)addresses::address2048()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2>::value, DefaultConv>(
				"cocos2d::CCAnimate::create", 
				(void*)addresses::address2()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, HardStreak> : ModifyBase<Modify<Derived, HardStreak>> {
	using ModifyBase<Modify<Derived, HardStreak>>::ModifyBase;
	using Base = HardStreak;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure1533>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1533>::value, DefaultConv>(
				"HardStreak::destructor", 
				(void*)addresses::address1533()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1534>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1534>::value, DefaultConv>(
				"HardStreak::init", 
				(void*)addresses::address1534()
			);
		}

		if constexpr (compare::addPoint<Derived, Base, types::pure1535>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::addPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addPoint<DefaultConv, Derived, Base, types::pure1535>::value, DefaultConv>(
				"HardStreak::addPoint", 
				(void*)addresses::address1535()
			);
		}

		if constexpr (compare::clearBehindXPos<Derived, Base, types::pure1536>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::clearBehindXPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::clearBehindXPos<DefaultConv, Derived, Base, types::pure1536>::value, DefaultConv>(
				"HardStreak::clearBehindXPos", 
				(void*)addresses::address1536()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1537>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1537>::value, DefaultConv>(
				"HardStreak::create", 
				(void*)addresses::address1537()
			);
		}

		if constexpr (compare::firstSetup<Derived, Base, types::pure1538>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::firstSetup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::firstSetup<DefaultConv, Derived, Base, types::pure1538>::value, DefaultConv>(
				"HardStreak::firstSetup", 
				(void*)addresses::address1538()
			);
		}

		if constexpr (compare::normalizeAngle<Derived, Base, types::pure1539>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::normalizeAngle", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::normalizeAngle<DefaultConv, Derived, Base, types::pure1539>::value, DefaultConv>(
				"HardStreak::normalizeAngle", 
				(void*)addresses::address1539()
			);
		}

		if constexpr (compare::quadCornerOffset<Derived, Base, types::pure1540>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::quadCornerOffset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::quadCornerOffset<DefaultConv, Derived, Base, types::pure1540>::value, DefaultConv>(
				"HardStreak::quadCornerOffset", 
				(void*)addresses::address1540()
			);
		}

		if constexpr (compare::reset<Derived, Base, types::pure1541>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::reset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reset<DefaultConv, Derived, Base, types::pure1541>::value, DefaultConv>(
				"HardStreak::reset", 
				(void*)addresses::address1541()
			);
		}

		if constexpr (compare::resumeStroke<Derived, Base, types::pure1542>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::resumeStroke", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resumeStroke<DefaultConv, Derived, Base, types::pure1542>::value, DefaultConv>(
				"HardStreak::resumeStroke", 
				(void*)addresses::address1542()
			);
		}

		if constexpr (compare::stopStroke<Derived, Base, types::pure1543>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::stopStroke", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopStroke<DefaultConv, Derived, Base, types::pure1543>::value, DefaultConv>(
				"HardStreak::stopStroke", 
				(void*)addresses::address1543()
			);
		}

		if constexpr (compare::updateStroke<Derived, Base, types::pure1544>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::updateStroke", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateStroke<DefaultConv, Derived, Base, types::pure1544>::value, DefaultConv>(
				"HardStreak::updateStroke", 
				(void*)addresses::address1544()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CustomSongCell> : ModifyBase<Modify<Derived, CustomSongCell>> {
	using ModifyBase<Modify<Derived, CustomSongCell>>::ModifyBase;
	using Base = CustomSongCell;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::loadFromObject<Derived, Base, types::pure870>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomSongCell::loadFromObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadFromObject<DefaultConv, Derived, Base, types::pure870>::value, DefaultConv>(
				"CustomSongCell::loadFromObject", 
				(void*)addresses::address870()
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

		if constexpr (compare::onMyLevels<Derived, Base, types::pure859>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CreatorLayer::onMyLevels", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onMyLevels<DefaultConv, Derived, Base, types::pure859>::value, DefaultConv>(
				"CreatorLayer::onMyLevels", 
				(void*)addresses::address859()
			);
		}

		if constexpr (compare::onSavedLevels<Derived, Base, types::pure860>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CreatorLayer::onSavedLevels", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onSavedLevels<DefaultConv, Derived, Base, types::pure860>::value, DefaultConv>(
				"CreatorLayer::onSavedLevels", 
				(void*)addresses::address860()
			);
		}

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
struct Modify<Derived, CreateGuidelinesLayer> : ModifyBase<Modify<Derived, CreateGuidelinesLayer>> {
	using ModifyBase<Modify<Derived, CreateGuidelinesLayer>>::ModifyBase;
	using Base = CreateGuidelinesLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
struct Modify<Derived, CountTriggerAction> : ModifyBase<Modify<Derived, CountTriggerAction>> {
	using ModifyBase<Modify<Derived, CountTriggerAction>>::ModifyBase;
	using Base = CountTriggerAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::createFromString<Derived, Base, types::pure856>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CountTriggerAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createFromString<DefaultConv, Derived, Base, types::pure856>::value, DefaultConv>(
				"CountTriggerAction::createFromString", 
				(void*)addresses::address856()
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

		if constexpr (compare::loadFromComment<Derived, Base, types::pure855>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CommentCell::loadFromComment", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadFromComment<DefaultConv, Derived, Base, types::pure855>::value, DefaultConv>(
				"CommentCell::loadFromComment", 
				(void*)addresses::address855()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, MoreOptionsLayer> : ModifyBase<Modify<Derived, MoreOptionsLayer>> {
	using ModifyBase<Modify<Derived, MoreOptionsLayer>>::ModifyBase;
	using Base = MoreOptionsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, GJRotationControl> : ModifyBase<Modify<Derived, GJRotationControl>> {
	using ModifyBase<Modify<Derived, GJRotationControl>>::ModifyBase;
	using Base = GJRotationControl;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
			Interface::get()->addHook<wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure802>::value, DefaultConv>(
				"CCSpritePlus::initWithSpriteFrameName", 
				(void*)addresses::address802()
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
			Interface::get()->addHook<wrap::updateBlending<DefaultConv, Derived, Base, types::pure849>::value, DefaultConv>(
				"ColorChannelSprite::updateBlending", 
				(void*)addresses::address849()
			);
		}

		if constexpr (compare::updateCopyLabel<Derived, Base, types::pure850>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateCopyLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCopyLabel<DefaultConv, Derived, Base, types::pure850>::value, DefaultConv>(
				"ColorChannelSprite::updateCopyLabel", 
				(void*)addresses::address850()
			);
		}

		if constexpr (compare::updateOpacity<Derived, Base, types::pure851>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateOpacity<DefaultConv, Derived, Base, types::pure851>::value, DefaultConv>(
				"ColorChannelSprite::updateOpacity", 
				(void*)addresses::address851()
			);
		}

		if constexpr (compare::updateValues<Derived, Base, types::pure852>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateValues<DefaultConv, Derived, Base, types::pure852>::value, DefaultConv>(
				"ColorChannelSprite::updateValues", 
				(void*)addresses::address852()
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
struct Modify<Derived, ColorAction> : ModifyBase<Modify<Derived, ColorAction>> {
	using ModifyBase<Modify<Derived, ColorAction>>::ModifyBase;
	using Base = ColorAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::getSaveString<Derived, Base, types::pure846>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorAction::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSaveString<DefaultConv, Derived, Base, types::pure846>::value, DefaultConv>(
				"ColorAction::getSaveString", 
				(void*)addresses::address846()
			);
		}

		if constexpr (compare::setupFromDict<Derived, Base, types::pure847>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorAction::setupFromDict", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupFromDict<DefaultConv, Derived, Base, types::pure847>::value, DefaultConv>(
				"ColorAction::setupFromDict", 
				(void*)addresses::address847()
			);
		}

		if constexpr (compare::setupFromString<Derived, Base, types::pure848>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorAction::setupFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupFromString<DefaultConv, Derived, Base, types::pure848>::value, DefaultConv>(
				"ColorAction::setupFromString", 
				(void*)addresses::address848()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CollisionTriggerAction> : ModifyBase<Modify<Derived, CollisionTriggerAction>> {
	using ModifyBase<Modify<Derived, CollisionTriggerAction>>::ModifyBase;
	using Base = CollisionTriggerAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::createFromString<Derived, Base, types::pure845>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CollisionTriggerAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createFromString<DefaultConv, Derived, Base, types::pure845>::value, DefaultConv>(
				"CollisionTriggerAction::createFromString", 
				(void*)addresses::address845()
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

		if constexpr (compare::constrainGameLayerPosition<Derived, Base, types::pure926>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::constrainGameLayerPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constrainGameLayerPosition<DefaultConv, Derived, Base, types::pure926>::value, DefaultConv>(
				"EditorUI::constrainGameLayerPosition", 
				(void*)addresses::address926()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure927>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure927>::value, DefaultConv>(
				"EditorUI::create", 
				(void*)addresses::address927()
			);
		}

		if constexpr (compare::deselectAll<Derived, Base, types::pure928>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::deselectAll", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::deselectAll<DefaultConv, Derived, Base, types::pure928>::value, DefaultConv>(
				"EditorUI::deselectAll", 
				(void*)addresses::address928()
			);
		}

		if constexpr (compare::onDeselectAll<Derived, Base, types::pure929>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onDeselectAll", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onDeselectAll<DefaultConv, Derived, Base, types::pure929>::value, DefaultConv>(
				"EditorUI::onDeselectAll", 
				(void*)addresses::address929()
			);
		}

		if constexpr (compare::disableButton<Derived, Base, types::pure930>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::disableButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::disableButton<DefaultConv, Derived, Base, types::pure930>::value, DefaultConv>(
				"EditorUI::disableButton", 
				(void*)addresses::address930()
			);
		}

		if constexpr (compare::editButtonUsable<Derived, Base, types::pure931>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editButtonUsable", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::editButtonUsable<DefaultConv, Derived, Base, types::pure931>::value, DefaultConv>(
				"EditorUI::editButtonUsable", 
				(void*)addresses::address931()
			);
		}

		if constexpr (compare::editObject<Derived, Base, types::pure932>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::editObject<DefaultConv, Derived, Base, types::pure932>::value, DefaultConv>(
				"EditorUI::editObject", 
				(void*)addresses::address932()
			);
		}

		if constexpr (compare::enableButton<Derived, Base, types::pure933>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::enableButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enableButton<DefaultConv, Derived, Base, types::pure933>::value, DefaultConv>(
				"EditorUI::enableButton", 
				(void*)addresses::address933()
			);
		}

		if constexpr (compare::getCreateBtn<Derived, Base, types::pure934>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getCreateBtn", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCreateBtn<DefaultConv, Derived, Base, types::pure934>::value, DefaultConv>(
				"EditorUI::getCreateBtn", 
				(void*)addresses::address934()
			);
		}

		if constexpr (compare::getGroupCenter<Derived, Base, types::pure935>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getGroupCenter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGroupCenter<DefaultConv, Derived, Base, types::pure935>::value, DefaultConv>(
				"EditorUI::getGroupCenter", 
				(void*)addresses::address935()
			);
		}

		if constexpr (compare::getSelectedObjects<Derived, Base, types::pure936>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::getSelectedObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSelectedObjects<DefaultConv, Derived, Base, types::pure936>::value, DefaultConv>(
				"EditorUI::getSelectedObjects", 
				(void*)addresses::address936()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure937>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure937>::value, DefaultConv>(
				"EditorUI::init", 
				(void*)addresses::address937()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure938>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure938>::value, DefaultConv>(
				"EditorUI::ccTouchBegan", 
				(void*)addresses::address938()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure939>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure939>::value, DefaultConv>(
				"EditorUI::ccTouchMoved", 
				(void*)addresses::address939()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure940>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure940>::value, DefaultConv>(
				"EditorUI::ccTouchEnded", 
				(void*)addresses::address940()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure941>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure941>::value, DefaultConv>(
				"EditorUI::keyDown", 
				(void*)addresses::address941()
			);
		}

		if constexpr (compare::moveObject<Derived, Base, types::pure942>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::moveObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveObject<DefaultConv, Derived, Base, types::pure942>::value, DefaultConv>(
				"EditorUI::moveObject", 
				(void*)addresses::address942()
			);
		}

		if constexpr (compare::onDuplicate<Derived, Base, types::pure943>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onDuplicate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onDuplicate<DefaultConv, Derived, Base, types::pure943>::value, DefaultConv>(
				"EditorUI::onDuplicate", 
				(void*)addresses::address943()
			);
		}

		if constexpr (compare::pasteObjects<Derived, Base, types::pure944>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::pasteObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pasteObjects<DefaultConv, Derived, Base, types::pure944>::value, DefaultConv>(
				"EditorUI::pasteObjects", 
				(void*)addresses::address944()
			);
		}

		if constexpr (compare::playerTouchBegan<Derived, Base, types::pure945>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::playerTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playerTouchBegan<DefaultConv, Derived, Base, types::pure945>::value, DefaultConv>(
				"EditorUI::playerTouchBegan", 
				(void*)addresses::address945()
			);
		}

		if constexpr (compare::playtestStopped<Derived, Base, types::pure946>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::playtestStopped", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playtestStopped<DefaultConv, Derived, Base, types::pure946>::value, DefaultConv>(
				"EditorUI::playtestStopped", 
				(void*)addresses::address946()
			);
		}

		if constexpr (compare::redoLastAction<Derived, Base, types::pure947>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::redoLastAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::redoLastAction<DefaultConv, Derived, Base, types::pure947>::value, DefaultConv>(
				"EditorUI::redoLastAction", 
				(void*)addresses::address947()
			);
		}

		if constexpr (compare::replaceGroupID<Derived, Base, types::pure948>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::replaceGroupID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::replaceGroupID<DefaultConv, Derived, Base, types::pure948>::value, DefaultConv>(
				"EditorUI::replaceGroupID", 
				(void*)addresses::address948()
			);
		}

		if constexpr (compare::scaleChanged<Derived, Base, types::pure949>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::scaleChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scaleChanged<DefaultConv, Derived, Base, types::pure949>::value, DefaultConv>(
				"EditorUI::scaleChanged", 
				(void*)addresses::address949()
			);
		}

		if constexpr (compare::scaleObjects<Derived, Base, types::pure950>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::scaleObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scaleObjects<DefaultConv, Derived, Base, types::pure950>::value, DefaultConv>(
				"EditorUI::scaleObjects", 
				(void*)addresses::address950()
			);
		}

		if constexpr (compare::selectObjects<Derived, Base, types::pure951>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selectObjects<DefaultConv, Derived, Base, types::pure951>::value, DefaultConv>(
				"EditorUI::selectObjects", 
				(void*)addresses::address951()
			);
		}

		if constexpr (compare::setupCreateMenu<Derived, Base, types::pure952>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::setupCreateMenu", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupCreateMenu<DefaultConv, Derived, Base, types::pure952>::value, DefaultConv>(
				"EditorUI::setupCreateMenu", 
				(void*)addresses::address952()
			);
		}

		if constexpr (compare::undoLastAction<Derived, Base, types::pure953>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::undoLastAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::undoLastAction<DefaultConv, Derived, Base, types::pure953>::value, DefaultConv>(
				"EditorUI::undoLastAction", 
				(void*)addresses::address953()
			);
		}

		if constexpr (compare::updateButtons<Derived, Base, types::pure954>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateButtons", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateButtons<DefaultConv, Derived, Base, types::pure954>::value, DefaultConv>(
				"EditorUI::updateButtons", 
				(void*)addresses::address954()
			);
		}

		if constexpr (compare::updateObjectInfoLabel<Derived, Base, types::pure955>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateObjectInfoLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateObjectInfoLabel<DefaultConv, Derived, Base, types::pure955>::value, DefaultConv>(
				"EditorUI::updateObjectInfoLabel", 
				(void*)addresses::address955()
			);
		}

		if constexpr (compare::updateSlider<Derived, Base, types::pure956>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateSlider", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSlider<DefaultConv, Derived, Base, types::pure956>::value, DefaultConv>(
				"EditorUI::updateSlider", 
				(void*)addresses::address956()
			);
		}

		if constexpr (compare::updateZoom<Derived, Base, types::pure957>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateZoom", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateZoom<DefaultConv, Derived, Base, types::pure957>::value, DefaultConv>(
				"EditorUI::updateZoom", 
				(void*)addresses::address957()
			);
		}

		if constexpr (compare::selectObject<Derived, Base, types::pure958>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selectObject<DefaultConv, Derived, Base, types::pure958>::value, DefaultConv>(
				"EditorUI::selectObject", 
				(void*)addresses::address958()
			);
		}

		if constexpr (compare::updateCreateMenu<Derived, Base, types::pure967>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateCreateMenu", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCreateMenu<DefaultConv, Derived, Base, types::pure967>::value, DefaultConv>(
				"EditorUI::updateCreateMenu", 
				(void*)addresses::address967()
			);
		}

		if constexpr (compare::toggleMode<Derived, Base, types::pure968>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleMode<DefaultConv, Derived, Base, types::pure968>::value, DefaultConv>(
				"EditorUI::toggleMode", 
				(void*)addresses::address968()
			);
		}

		if constexpr (compare::zoomIn<Derived, Base, types::pure969>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::zoomIn", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::zoomIn<DefaultConv, Derived, Base, types::pure969>::value, DefaultConv>(
				"EditorUI::zoomIn", 
				(void*)addresses::address969()
			);
		}

		if constexpr (compare::zoomOut<Derived, Base, types::pure970>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::zoomOut", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::zoomOut<DefaultConv, Derived, Base, types::pure970>::value, DefaultConv>(
				"EditorUI::zoomOut", 
				(void*)addresses::address970()
			);
		}

		if constexpr (compare::updateGridNodeSize<Derived, Base, types::pure972>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::updateGridNodeSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateGridNodeSize<DefaultConv, Derived, Base, types::pure972>::value, DefaultConv>(
				"EditorUI::updateGridNodeSize", 
				(void*)addresses::address972()
			);
		}

		if constexpr (compare::constrainGameLayerPosition<Derived, Base, types::pure974>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::constrainGameLayerPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constrainGameLayerPosition<DefaultConv, Derived, Base, types::pure974>::value, DefaultConv>(
				"EditorUI::constrainGameLayerPosition", 
				(void*)addresses::address974()
			);
		}

		if constexpr (compare::moveGameLayer<Derived, Base, types::pure975>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::moveGameLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveGameLayer<DefaultConv, Derived, Base, types::pure975>::value, DefaultConv>(
				"EditorUI::moveGameLayer", 
				(void*)addresses::address975()
			);
		}

		if constexpr (compare::showUI<Derived, Base, types::pure976>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::showUI", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showUI<DefaultConv, Derived, Base, types::pure976>::value, DefaultConv>(
				"EditorUI::showUI", 
				(void*)addresses::address976()
			);
		}

		if constexpr (compare::moveObjectCall<Derived, Base, types::pure979>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::moveObjectCall", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveObjectCall<DefaultConv, Derived, Base, types::pure979>::value, DefaultConv>(
				"EditorUI::moveObjectCall", 
				(void*)addresses::address979()
			);
		}

		if constexpr (compare::transformObjectCall<Derived, Base, types::pure980>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::transformObjectCall", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::transformObjectCall<DefaultConv, Derived, Base, types::pure980>::value, DefaultConv>(
				"EditorUI::transformObjectCall", 
				(void*)addresses::address980()
			);
		}

		if constexpr (compare::onDeleteSelected<Derived, Base, types::pure981>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onDeleteSelected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onDeleteSelected<DefaultConv, Derived, Base, types::pure981>::value, DefaultConv>(
				"EditorUI::onDeleteSelected", 
				(void*)addresses::address981()
			);
		}

		if constexpr (compare::onCopy<Derived, Base, types::pure982>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onCopy", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onCopy<DefaultConv, Derived, Base, types::pure982>::value, DefaultConv>(
				"EditorUI::onCopy", 
				(void*)addresses::address982()
			);
		}

		if constexpr (compare::onPaste<Derived, Base, types::pure983>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPaste", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPaste<DefaultConv, Derived, Base, types::pure983>::value, DefaultConv>(
				"EditorUI::onPaste", 
				(void*)addresses::address983()
			);
		}

		if constexpr (compare::toggleEnableRotate<Derived, Base, types::pure984>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleEnableRotate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleEnableRotate<DefaultConv, Derived, Base, types::pure984>::value, DefaultConv>(
				"EditorUI::toggleEnableRotate", 
				(void*)addresses::address984()
			);
		}

		if constexpr (compare::toggleFreeMove<Derived, Base, types::pure985>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleFreeMove", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleFreeMove<DefaultConv, Derived, Base, types::pure985>::value, DefaultConv>(
				"EditorUI::toggleFreeMove", 
				(void*)addresses::address985()
			);
		}

		if constexpr (compare::toggleSwipe<Derived, Base, types::pure986>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleSwipe", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleSwipe<DefaultConv, Derived, Base, types::pure986>::value, DefaultConv>(
				"EditorUI::toggleSwipe", 
				(void*)addresses::address986()
			);
		}

		if constexpr (compare::toggleSnap<Derived, Base, types::pure987>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::toggleSnap", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleSnap<DefaultConv, Derived, Base, types::pure987>::value, DefaultConv>(
				"EditorUI::toggleSnap", 
				(void*)addresses::address987()
			);
		}

		if constexpr (compare::onPlayback<Derived, Base, types::pure988>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPlayback", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPlayback<DefaultConv, Derived, Base, types::pure988>::value, DefaultConv>(
				"EditorUI::onPlayback", 
				(void*)addresses::address988()
			);
		}

		if constexpr (compare::onPlaytest<Derived, Base, types::pure989>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPlaytest", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPlaytest<DefaultConv, Derived, Base, types::pure989>::value, DefaultConv>(
				"EditorUI::onPlaytest", 
				(void*)addresses::address989()
			);
		}

		if constexpr (compare::onStopPlaytest<Derived, Base, types::pure990>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onStopPlaytest", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onStopPlaytest<DefaultConv, Derived, Base, types::pure990>::value, DefaultConv>(
				"EditorUI::onStopPlaytest", 
				(void*)addresses::address990()
			);
		}

		if constexpr (compare::onGroupUp<Derived, Base, types::pure991>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGroupUp", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onGroupUp<DefaultConv, Derived, Base, types::pure991>::value, DefaultConv>(
				"EditorUI::onGroupUp", 
				(void*)addresses::address991()
			);
		}

		if constexpr (compare::onGroupDown<Derived, Base, types::pure992>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onGroupDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onGroupDown<DefaultConv, Derived, Base, types::pure992>::value, DefaultConv>(
				"EditorUI::onGroupDown", 
				(void*)addresses::address992()
			);
		}

		if constexpr (compare::selectBuildTab<Derived, Base, types::pure993>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::selectBuildTab", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selectBuildTab<DefaultConv, Derived, Base, types::pure993>::value, DefaultConv>(
				"EditorUI::selectBuildTab", 
				(void*)addresses::address993()
			);
		}

		if constexpr (compare::onPause<Derived, Base, types::pure994>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onPause", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPause<DefaultConv, Derived, Base, types::pure994>::value, DefaultConv>(
				"EditorUI::onPause", 
				(void*)addresses::address994()
			);
		}

		if constexpr (compare::keyUp<Derived, Base, types::pure1011>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::keyUp", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyUp<DefaultConv, Derived, Base, types::pure1011>::value, DefaultConv>(
				"EditorUI::keyUp", 
				(void*)addresses::address1011()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CollisionBlockPopup> : ModifyBase<Modify<Derived, CollisionBlockPopup>> {
	using ModifyBase<Modify<Derived, CollisionBlockPopup>>::ModifyBase;
	using Base = CollisionBlockPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure843>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CollisionBlockPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure843>::value, DefaultConv>(
				"CollisionBlockPopup::create", 
				(void*)addresses::address843()
			);
		}

		if constexpr (compare::onNextItemID<Derived, Base, types::pure844>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CollisionBlockPopup::onNextItemID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onNextItemID<DefaultConv, Derived, Base, types::pure844>::value, DefaultConv>(
				"CollisionBlockPopup::onNextItemID", 
				(void*)addresses::address844()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CheckpointObject> : ModifyBase<Modify<Derived, CheckpointObject>> {
	using ModifyBase<Modify<Derived, CheckpointObject>>::ModifyBase;
	using Base = CheckpointObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure841>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CheckpointObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure841>::value, DefaultConv>(
				"CheckpointObject::create", 
				(void*)addresses::address841()
			);
		}

		if constexpr (compare::getObject<Derived, Base, types::pure842>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CheckpointObject::getObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObject<DefaultConv, Derived, Base, types::pure842>::value, DefaultConv>(
				"CheckpointObject::getObject", 
				(void*)addresses::address842()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LevelSettingsLayer> : ModifyBase<Modify<Derived, LevelSettingsLayer>> {
	using ModifyBase<Modify<Derived, LevelSettingsLayer>>::ModifyBase;
	using Base = LevelSettingsLayer;
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
struct Modify<Derived, LevelDeleteDelegate> : ModifyBase<Modify<Derived, LevelDeleteDelegate>> {
	using ModifyBase<Modify<Derived, LevelDeleteDelegate>>::ModifyBase;
	using Base = LevelDeleteDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
			Interface::get()->addHook<wrap::begin<DefaultConv, Derived, Base, types::pure409>::value, DefaultConv>(
				"cocos2d::CCRenderTexture::begin", 
				(void*)addresses::address409()
			);
		}

		if constexpr (compare::end<Derived, Base, types::pure410>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::end", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::end<DefaultConv, Derived, Base, types::pure410>::value, DefaultConv>(
				"cocos2d::CCRenderTexture::end", 
				(void*)addresses::address410()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure411>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure411>::value, DefaultConv>(
				"cocos2d::CCRenderTexture::create", 
				(void*)addresses::address411()
			);
		}

		if constexpr (compare::newCCImage<Derived, Base, types::pure412>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::newCCImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::newCCImage<DefaultConv, Derived, Base, types::pure412>::value, DefaultConv>(
				"cocos2d::CCRenderTexture::newCCImage", 
				(void*)addresses::address412()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ChallengesPage> : ModifyBase<Modify<Derived, ChallengesPage>> {
	using ModifyBase<Modify<Derived, ChallengesPage>>::ModifyBase;
	using Base = ChallengesPage;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

	}
};

template<class Derived>
struct Modify<Derived, CreateMenuItem> : ModifyBase<Modify<Derived, CreateMenuItem>> {
	using ModifyBase<Modify<Derived, CreateMenuItem>>::ModifyBase;
	using Base = CreateMenuItem;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure858>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CreateMenuItem::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure858>::value, DefaultConv>(
				"CreateMenuItem::create", 
				(void*)addresses::address858()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, LocalLevelManager> : ModifyBase<Modify<Derived, LocalLevelManager>> {
	using ModifyBase<Modify<Derived, LocalLevelManager>>::ModifyBase;
	using Base = LocalLevelManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::sharedState<Derived, Base, types::pure1662>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LocalLevelManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1662>::value, DefaultConv>(
				"LocalLevelManager::sharedState", 
				(void*)addresses::address1662()
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
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure784>::value, DefaultConv>(
				"CCScrollLayerExt::visit", 
				(void*)addresses::address784()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure785>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure785>::value, DefaultConv>(
				"CCScrollLayerExt::ccTouchBegan", 
				(void*)addresses::address785()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure786>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure786>::value, DefaultConv>(
				"CCScrollLayerExt::ccTouchMoved", 
				(void*)addresses::address786()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure787>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure787>::value, DefaultConv>(
				"CCScrollLayerExt::ccTouchEnded", 
				(void*)addresses::address787()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure788>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure788>::value, DefaultConv>(
				"CCScrollLayerExt::ccTouchCancelled", 
				(void*)addresses::address788()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure789>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure789>::value, DefaultConv>(
				"CCScrollLayerExt::registerWithTouchDispatcher", 
				(void*)addresses::address789()
			);
		}

		if constexpr (compare::preVisitWithClippingRect<Derived, Base, types::pure790>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::preVisitWithClippingRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::preVisitWithClippingRect<DefaultConv, Derived, Base, types::pure790>::value, DefaultConv>(
				"CCScrollLayerExt::preVisitWithClippingRect", 
				(void*)addresses::address790()
			);
		}

		if constexpr (compare::postVisit<Derived, Base, types::pure791>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::postVisit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::postVisit<DefaultConv, Derived, Base, types::pure791>::value, DefaultConv>(
				"CCScrollLayerExt::postVisit", 
				(void*)addresses::address791()
			);
		}

		if constexpr (compare::moveToTop<Derived, Base, types::pure792>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::moveToTop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveToTop<DefaultConv, Derived, Base, types::pure792>::value, DefaultConv>(
				"CCScrollLayerExt::moveToTop", 
				(void*)addresses::address792()
			);
		}

		if constexpr (compare::moveToTopWithOffset<Derived, Base, types::pure793>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::moveToTopWithOffset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::moveToTopWithOffset<DefaultConv, Derived, Base, types::pure793>::value, DefaultConv>(
				"CCScrollLayerExt::moveToTopWithOffset", 
				(void*)addresses::address793()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure794>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure794>::value, DefaultConv>(
				"CCScrollLayerExt::constructor", 
				(void*)addresses::address794()
			);
		}

		if constexpr (compare::scrollLayer<Derived, Base, types::pure795>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::scrollLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scrollLayer<DefaultConv, Derived, Base, types::pure795>::value, DefaultConv>(
				"CCScrollLayerExt::scrollLayer", 
				(void*)addresses::address795()
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
			Interface::get()->addHook<wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure499>::value, DefaultConv>(
				"cocos2d::CCStandardTouchHandler::handlerWithDelegate", 
				(void*)addresses::address499()
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure500>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCStandardTouchHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure500>::value, DefaultConv>(
				"cocos2d::CCStandardTouchHandler::initWithDelegate", 
				(void*)addresses::address500()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure501>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCStandardTouchHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure501>::value, DefaultConv>(
				"cocos2d::CCStandardTouchHandler::destructor", 
				(void*)addresses::address501()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, CCMoveCNode> : ModifyBase<Modify<Derived, CCMoveCNode>> {
	using ModifyBase<Modify<Derived, CCMoveCNode>>::ModifyBase;
	using Base = CCMoveCNode;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure775>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMoveCNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure775>::value, DefaultConv>(
				"CCMoveCNode::create", 
				(void*)addresses::address775()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure776>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMoveCNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure776>::value, DefaultConv>(
				"CCMoveCNode::init", 
				(void*)addresses::address776()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure777>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMoveCNode::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure777>::value, DefaultConv>(
				"CCMoveCNode::destructor", 
				(void*)addresses::address777()
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

		if constexpr (compare::destructor<Derived, Base, types::pure230>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure230>::value, DefaultConv>(
				"cocos2d::CCMenuItemLabel::destructor", 
				(void*)addresses::address230()
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure231>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::activate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activate<DefaultConv, Derived, Base, types::pure231>::value, DefaultConv>(
				"cocos2d::CCMenuItemLabel::activate", 
				(void*)addresses::address231()
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure232>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::selected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selected<DefaultConv, Derived, Base, types::pure232>::value, DefaultConv>(
				"cocos2d::CCMenuItemLabel::selected", 
				(void*)addresses::address232()
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure233>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unselected<DefaultConv, Derived, Base, types::pure233>::value, DefaultConv>(
				"cocos2d::CCMenuItemLabel::unselected", 
				(void*)addresses::address233()
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure234>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setEnabled<DefaultConv, Derived, Base, types::pure234>::value, DefaultConv>(
				"cocos2d::CCMenuItemLabel::setEnabled", 
				(void*)addresses::address234()
			);
		}

		if constexpr (compare::getDisabledColor<Derived, Base, types::pure235>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::getDisabledColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisabledColor<DefaultConv, Derived, Base, types::pure235>::value, DefaultConv>(
				"cocos2d::CCMenuItemLabel::getDisabledColor", 
				(void*)addresses::address235()
			);
		}

		if constexpr (compare::setDisabledColor<Derived, Base, types::pure236>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::setDisabledColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDisabledColor<DefaultConv, Derived, Base, types::pure236>::value, DefaultConv>(
				"cocos2d::CCMenuItemLabel::setDisabledColor", 
				(void*)addresses::address236()
			);
		}

		if constexpr (compare::getLabel<Derived, Base, types::pure237>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::getLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLabel<DefaultConv, Derived, Base, types::pure237>::value, DefaultConv>(
				"cocos2d::CCMenuItemLabel::getLabel", 
				(void*)addresses::address237()
			);
		}

		if constexpr (compare::setLabel<Derived, Base, types::pure238>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::setLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setLabel<DefaultConv, Derived, Base, types::pure238>::value, DefaultConv>(
				"cocos2d::CCMenuItemLabel::setLabel", 
				(void*)addresses::address238()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure104>::value, DefaultConv>(
				"cocos2d::CCFadeOut::create", 
				(void*)addresses::address104()
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

	}
};

template<class Derived>
struct Modify<Derived, GameStatsManager> : ModifyBase<Modify<Derived, GameStatsManager>> {
	using ModifyBase<Modify<Derived, GameStatsManager>>::ModifyBase;
	using Base = GameStatsManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::awardCurrencyForLevel<Derived, Base, types::pure1510>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::awardCurrencyForLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::awardCurrencyForLevel<DefaultConv, Derived, Base, types::pure1510>::value, DefaultConv>(
				"GameStatsManager::awardCurrencyForLevel", 
				(void*)addresses::address1510()
			);
		}

		if constexpr (compare::awardDiamondsForLevel<Derived, Base, types::pure1511>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::awardDiamondsForLevel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::awardDiamondsForLevel<DefaultConv, Derived, Base, types::pure1511>::value, DefaultConv>(
				"GameStatsManager::awardDiamondsForLevel", 
				(void*)addresses::address1511()
			);
		}

		if constexpr (compare::awardSecretKey<Derived, Base, types::pure1512>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::awardSecretKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::awardSecretKey<DefaultConv, Derived, Base, types::pure1512>::value, DefaultConv>(
				"GameStatsManager::awardSecretKey", 
				(void*)addresses::address1512()
			);
		}

		if constexpr (compare::getSecretCoinKey<Derived, Base, types::pure1513>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::getSecretCoinKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSecretCoinKey<DefaultConv, Derived, Base, types::pure1513>::value, DefaultConv>(
				"GameStatsManager::getSecretCoinKey", 
				(void*)addresses::address1513()
			);
		}

		if constexpr (compare::getStat<Derived, Base, types::pure1514>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::getStat", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getStat<DefaultConv, Derived, Base, types::pure1514>::value, DefaultConv>(
				"GameStatsManager::getStat", 
				(void*)addresses::address1514()
			);
		}

		if constexpr (compare::hasPendingUserCoin<Derived, Base, types::pure1515>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::hasPendingUserCoin", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasPendingUserCoin<DefaultConv, Derived, Base, types::pure1515>::value, DefaultConv>(
				"GameStatsManager::hasPendingUserCoin", 
				(void*)addresses::address1515()
			);
		}

		if constexpr (compare::hasSecretCoin<Derived, Base, types::pure1516>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::hasSecretCoin", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasSecretCoin<DefaultConv, Derived, Base, types::pure1516>::value, DefaultConv>(
				"GameStatsManager::hasSecretCoin", 
				(void*)addresses::address1516()
			);
		}

		if constexpr (compare::hasUserCoin<Derived, Base, types::pure1517>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::hasUserCoin", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasUserCoin<DefaultConv, Derived, Base, types::pure1517>::value, DefaultConv>(
				"GameStatsManager::hasUserCoin", 
				(void*)addresses::address1517()
			);
		}

		if constexpr (compare::incrementStat<Derived, Base, types::pure1518>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::incrementStat", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::incrementStat<DefaultConv, Derived, Base, types::pure1518>::value, DefaultConv>(
				"GameStatsManager::incrementStat", 
				(void*)addresses::address1518()
			);
		}

		if constexpr (compare::incrementStat<Derived, Base, types::pure1519>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::incrementStat", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::incrementStat<DefaultConv, Derived, Base, types::pure1519>::value, DefaultConv>(
				"GameStatsManager::incrementStat", 
				(void*)addresses::address1519()
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1520>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure1520>::value, DefaultConv>(
				"GameStatsManager::sharedState", 
				(void*)addresses::address1520()
			);
		}

		if constexpr (compare::storePendingUserCoin<Derived, Base, types::pure1521>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::storePendingUserCoin", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::storePendingUserCoin<DefaultConv, Derived, Base, types::pure1521>::value, DefaultConv>(
				"GameStatsManager::storePendingUserCoin", 
				(void*)addresses::address1521()
			);
		}

		if constexpr (compare::storeSecretCoin<Derived, Base, types::pure1522>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::storeSecretCoin", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::storeSecretCoin<DefaultConv, Derived, Base, types::pure1522>::value, DefaultConv>(
				"GameStatsManager::storeSecretCoin", 
				(void*)addresses::address1522()
			);
		}

		if constexpr (compare::storeUserCoin<Derived, Base, types::pure1523>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::storeUserCoin", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::storeUserCoin<DefaultConv, Derived, Base, types::pure1523>::value, DefaultConv>(
				"GameStatsManager::storeUserCoin", 
				(void*)addresses::address1523()
			);
		}

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
struct Modify<Derived, LevelBrowserLayer> : ModifyBase<Modify<Derived, LevelBrowserLayer>> {
	using ModifyBase<Modify<Derived, LevelBrowserLayer>>::ModifyBase;
	using Base = LevelBrowserLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1563>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelBrowserLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1563>::value, DefaultConv>(
				"LevelBrowserLayer::create", 
				(void*)addresses::address1563()
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

		if constexpr (compare::disableUI<Derived, Base, types::pure721>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::disableUI", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::disableUI<DefaultConv, Derived, Base, types::pure721>::value, DefaultConv>(
				"CCBlockLayer::disableUI", 
				(void*)addresses::address721()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure722>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure722>::value, DefaultConv>(
				"CCBlockLayer::draw", 
				(void*)addresses::address722()
			);
		}

		if constexpr (compare::enableUI<Derived, Base, types::pure723>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::enableUI", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enableUI<DefaultConv, Derived, Base, types::pure723>::value, DefaultConv>(
				"CCBlockLayer::enableUI", 
				(void*)addresses::address723()
			);
		}

		if constexpr (compare::enterAnimFinished<Derived, Base, types::pure724>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::enterAnimFinished", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enterAnimFinished<DefaultConv, Derived, Base, types::pure724>::value, DefaultConv>(
				"CCBlockLayer::enterAnimFinished", 
				(void*)addresses::address724()
			);
		}

		if constexpr (compare::enterLayer<Derived, Base, types::pure725>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::enterLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::enterLayer<DefaultConv, Derived, Base, types::pure725>::value, DefaultConv>(
				"CCBlockLayer::enterLayer", 
				(void*)addresses::address725()
			);
		}

		if constexpr (compare::exitLayer<Derived, Base, types::pure726>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::exitLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::exitLayer<DefaultConv, Derived, Base, types::pure726>::value, DefaultConv>(
				"CCBlockLayer::exitLayer", 
				(void*)addresses::address726()
			);
		}

		if constexpr (compare::hideLayer<Derived, Base, types::pure727>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::hideLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hideLayer<DefaultConv, Derived, Base, types::pure727>::value, DefaultConv>(
				"CCBlockLayer::hideLayer", 
				(void*)addresses::address727()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure728>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure728>::value, DefaultConv>(
				"CCBlockLayer::init", 
				(void*)addresses::address728()
			);
		}

		if constexpr (compare::layerHidden<Derived, Base, types::pure729>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::layerHidden", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::layerHidden<DefaultConv, Derived, Base, types::pure729>::value, DefaultConv>(
				"CCBlockLayer::layerHidden", 
				(void*)addresses::address729()
			);
		}

		if constexpr (compare::layerVisible<Derived, Base, types::pure730>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::layerVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::layerVisible<DefaultConv, Derived, Base, types::pure730>::value, DefaultConv>(
				"CCBlockLayer::layerVisible", 
				(void*)addresses::address730()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure731>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure731>::value, DefaultConv>(
				"CCBlockLayer::registerWithTouchDispatcher", 
				(void*)addresses::address731()
			);
		}

		if constexpr (compare::showLayer<Derived, Base, types::pure732>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::showLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showLayer<DefaultConv, Derived, Base, types::pure732>::value, DefaultConv>(
				"CCBlockLayer::showLayer", 
				(void*)addresses::address732()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ArtistCell> : ModifyBase<Modify<Derived, ArtistCell>> {
	using ModifyBase<Modify<Derived, ArtistCell>>::ModifyBase;
	using Base = ArtistCell;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::draw<Derived, Base, types::pure686>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ArtistCell::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure686>::value, DefaultConv>(
				"ArtistCell::draw", 
				(void*)addresses::address686()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure687>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ArtistCell::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure687>::value, DefaultConv>(
				"ArtistCell::init", 
				(void*)addresses::address687()
			);
		}

		if constexpr (compare::loadFromObject<Derived, Base, types::pure688>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ArtistCell::loadFromObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadFromObject<DefaultConv, Derived, Base, types::pure688>::value, DefaultConv>(
				"ArtistCell::loadFromObject", 
				(void*)addresses::address688()
			);
		}

		if constexpr (compare::onNewgrounds<Derived, Base, types::pure689>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ArtistCell::onNewgrounds", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onNewgrounds<DefaultConv, Derived, Base, types::pure689>::value, DefaultConv>(
				"ArtistCell::onNewgrounds", 
				(void*)addresses::address689()
			);
		}

		if constexpr (compare::updateBGColor<Derived, Base, types::pure690>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ArtistCell::updateBGColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateBGColor<DefaultConv, Derived, Base, types::pure690>::value, DefaultConv>(
				"ArtistCell::updateBGColor", 
				(void*)addresses::address690()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure490>::value, DefaultConv>(
				"cocos2d::CCSpriteBatchNode::create", 
				(void*)addresses::address490()
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure491>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithTexture<DefaultConv, Derived, Base, types::pure491>::value, DefaultConv>(
				"cocos2d::CCSpriteBatchNode::createWithTexture", 
				(void*)addresses::address491()
			);
		}

		if constexpr (compare::getUsedAtlasCapacity<Derived, Base, types::pure492>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::getUsedAtlasCapacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getUsedAtlasCapacity<DefaultConv, Derived, Base, types::pure492>::value, DefaultConv>(
				"cocos2d::CCSpriteBatchNode::getUsedAtlasCapacity", 
				(void*)addresses::address492()
			);
		}

		if constexpr (compare::increaseAtlasCapacity<Derived, Base, types::pure493>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteBatchNode::increaseAtlasCapacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::increaseAtlasCapacity<DefaultConv, Derived, Base, types::pure493>::value, DefaultConv>(
				"cocos2d::CCSpriteBatchNode::increaseAtlasCapacity", 
				(void*)addresses::address493()
			);
		}

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
			Interface::get()->addHook<wrap::createToggleButton<DefaultConv, Derived, Base, types::pure1525>::value, DefaultConv>(
				"GameToolbox::createToggleButton", 
				(void*)addresses::address1525()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, AchievementsLayer> : ModifyBase<Modify<Derived, AchievementsLayer>> {
	using ModifyBase<Modify<Derived, AchievementsLayer>>::ModifyBase;
	using Base = AchievementsLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::customSetup<Derived, Base, types::pure670>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementsLayer::customSetup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::customSetup<DefaultConv, Derived, Base, types::pure670>::value, DefaultConv>(
				"AchievementsLayer::customSetup", 
				(void*)addresses::address670()
			);
		}

		if constexpr (compare::loadPage<Derived, Base, types::pure671>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementsLayer::loadPage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadPage<DefaultConv, Derived, Base, types::pure671>::value, DefaultConv>(
				"AchievementsLayer::loadPage", 
				(void*)addresses::address671()
			);
		}

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
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure667>::value, DefaultConv>(
				"AchievementNotifier::sharedState", 
				(void*)addresses::address667()
			);
		}

		if constexpr (compare::willSwitchToScene<Derived, Base, types::pure668>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementNotifier::willSwitchToScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::willSwitchToScene<DefaultConv, Derived, Base, types::pure668>::value, DefaultConv>(
				"AchievementNotifier::willSwitchToScene", 
				(void*)addresses::address668()
			);
		}

		if constexpr (compare::showNextAchievement<Derived, Base, types::pure669>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementNotifier::showNextAchievement", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showNextAchievement<DefaultConv, Derived, Base, types::pure669>::value, DefaultConv>(
				"AchievementNotifier::showNextAchievement", 
				(void*)addresses::address669()
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

		if constexpr (compare::destructor<Derived, Base, types::pure565>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlColourPicker::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure565>::value, DefaultConv>(
				"cocos2d::extension::CCControlColourPicker::destructor", 
				(void*)addresses::address565()
			);
		}

		if constexpr (compare::setColorValue<Derived, Base, types::pure566>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlColourPicker::setColorValue", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColorValue<DefaultConv, Derived, Base, types::pure566>::value, DefaultConv>(
				"cocos2d::extension::CCControlColourPicker::setColorValue", 
				(void*)addresses::address566()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure567>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlColourPicker::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure567>::value, DefaultConv>(
				"cocos2d::extension::CCControlColourPicker::ccTouchBegan", 
				(void*)addresses::address567()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure568>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlColourPicker::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure568>::value, DefaultConv>(
				"cocos2d::extension::CCControlColourPicker::init", 
				(void*)addresses::address568()
			);
		}

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
struct Modify<Derived, AchievementCell> : ModifyBase<Modify<Derived, AchievementCell>> {
	using ModifyBase<Modify<Derived, AchievementCell>>::ModifyBase;
	using Base = AchievementCell;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::loadFromDict<Derived, Base, types::pure663>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementCell::loadFromDict", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadFromDict<DefaultConv, Derived, Base, types::pure663>::value, DefaultConv>(
				"AchievementCell::loadFromDict", 
				(void*)addresses::address663()
			);
		}

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure662>::value, DefaultConv>(
				"AchievementBar::create", 
				(void*)addresses::address662()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1>::value, DefaultConv>(
				"cocos2d::CCActionTween::create", 
				(void*)addresses::address1()
			);
		}

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
			Interface::get()->addHook<wrap::getCurrentLanguage<DefaultConv, Derived, Base, types::pure4>::value, DefaultConv>(
				"cocos2d::CCApplication::getCurrentLanguage", 
				(void*)addresses::address4()
			);
		}

		if constexpr (compare::getTargetPlatform<Derived, Base, types::pure5>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::getTargetPlatform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTargetPlatform<DefaultConv, Derived, Base, types::pure5>::value, DefaultConv>(
				"cocos2d::CCApplication::getTargetPlatform", 
				(void*)addresses::address5()
			);
		}

		if constexpr (compare::openURL<Derived, Base, types::pure6>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::openURL", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::openURL<DefaultConv, Derived, Base, types::pure6>::value, DefaultConv>(
				"cocos2d::CCApplication::openURL", 
				(void*)addresses::address6()
			);
		}

		if constexpr (compare::setAnimationInterval<Derived, Base, types::pure7>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::setAnimationInterval", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAnimationInterval<DefaultConv, Derived, Base, types::pure7>::value, DefaultConv>(
				"cocos2d::CCApplication::setAnimationInterval", 
				(void*)addresses::address7()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure8>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure8>::value, DefaultConv>(
				"cocos2d::CCApplication::destructor", 
				(void*)addresses::address8()
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

		if constexpr (compare::constructor<Derived, Base, types::pure610>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure610>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::constructor", 
				(void*)addresses::address610()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure611>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure611>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::destructor", 
				(void*)addresses::address611()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure612>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure612>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::init", 
				(void*)addresses::address612()
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure613>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setContentSize<DefaultConv, Derived, Base, types::pure613>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::setContentSize", 
				(void*)addresses::address613()
			);
		}

		if constexpr (compare::getContentSize<Derived, Base, types::pure614>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::getContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getContentSize<DefaultConv, Derived, Base, types::pure614>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::getContentSize", 
				(void*)addresses::address614()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure615>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure615>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::addChild", 
				(void*)addresses::address615()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure616>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure616>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::addChild", 
				(void*)addresses::address616()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure617>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure617>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::addChild", 
				(void*)addresses::address617()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure618>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure618>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::visit", 
				(void*)addresses::address618()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure619>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure619>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::ccTouchBegan", 
				(void*)addresses::address619()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure620>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure620>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::ccTouchMoved", 
				(void*)addresses::address620()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure621>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure621>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::ccTouchEnded", 
				(void*)addresses::address621()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure622>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure622>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::ccTouchCancelled", 
				(void*)addresses::address622()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure623>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure623>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::registerWithTouchDispatcher", 
				(void*)addresses::address623()
			);
		}

		if constexpr (compare::setTouchEnabled<Derived, Base, types::pure624>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::setTouchEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTouchEnabled<DefaultConv, Derived, Base, types::pure624>::value, DefaultConv>(
				"cocos2d::extension::CCScrollView::setTouchEnabled", 
				(void*)addresses::address624()
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

		if constexpr (compare::destructor<Derived, Base, types::pure862>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CurrencyRewardLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure862>::value, DefaultConv>(
				"CurrencyRewardLayer::destructor", 
				(void*)addresses::address862()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure863>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CurrencyRewardLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure863>::value, DefaultConv>(
				"CurrencyRewardLayer::update", 
				(void*)addresses::address863()
			);
		}

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure414>::value, DefaultConv>(
				"cocos2d::CCRotateBy::create", 
				(void*)addresses::address414()
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

		if constexpr (compare::constructor<Derived, Base, types::pure423>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSet::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure423>::value, DefaultConv>(
				"cocos2d::CCSet::constructor", 
				(void*)addresses::address423()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure424>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSet::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure424>::value, DefaultConv>(
				"cocos2d::CCSet::destructor", 
				(void*)addresses::address424()
			);
		}

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure425>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSet::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::acceptVisitor<DefaultConv, Derived, Base, types::pure425>::value, DefaultConv>(
				"cocos2d::CCSet::acceptVisitor", 
				(void*)addresses::address425()
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
			Interface::get()->addHook<wrap::HSVfromRGB<DefaultConv, Derived, Base, types::pure569>::value, DefaultConv>(
				"cocos2d::extension::CCControlUtils::HSVfromRGB", 
				(void*)addresses::address569()
			);
		}

		if constexpr (compare::RGBfromHSV<Derived, Base, types::pure570>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControlUtils::RGBfromHSV", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::RGBfromHSV<DefaultConv, Derived, Base, types::pure570>::value, DefaultConv>(
				"cocos2d::extension::CCControlUtils::RGBfromHSV", 
				(void*)addresses::address570()
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
			Interface::get()->addHook<wrap::createWithSpriteFrames<DefaultConv, Derived, Base, types::pure3>::value, DefaultConv>(
				"cocos2d::CCAnimation::createWithSpriteFrames", 
				(void*)addresses::address3()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, AchievementManager> : ModifyBase<Modify<Derived, AchievementManager>> {
	using ModifyBase<Modify<Derived, AchievementManager>>::ModifyBase;
	using Base = AchievementManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::getAllAchievements<Derived, Base, types::pure664>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementManager::getAllAchievements", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAllAchievements<DefaultConv, Derived, Base, types::pure664>::value, DefaultConv>(
				"AchievementManager::getAllAchievements", 
				(void*)addresses::address664()
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure665>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedState<DefaultConv, Derived, Base, types::pure665>::value, DefaultConv>(
				"AchievementManager::sharedState", 
				(void*)addresses::address665()
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
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure543>::value, DefaultConv>(
				"cocos2d::CCTouchHandler::initWithDelegate", 
				(void*)addresses::address543()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure544>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure544>::value, DefaultConv>(
				"cocos2d::CCTouchHandler::destructor", 
				(void*)addresses::address544()
			);
		}

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
struct Modify<Derived, SetupInteractObjectPopup> : ModifyBase<Modify<Derived, SetupInteractObjectPopup>> {
	using ModifyBase<Modify<Derived, SetupInteractObjectPopup>>::ModifyBase;
	using Base = SetupInteractObjectPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2070>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInteractObjectPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2070>::value, DefaultConv>(
				"SetupInteractObjectPopup::create", 
				(void*)addresses::address2070()
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2071>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInteractObjectPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2071>::value, DefaultConv>(
				"SetupInteractObjectPopup::onTargetIDArrow", 
				(void*)addresses::address2071()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2072>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInteractObjectPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2072>::value, DefaultConv>(
				"SetupInteractObjectPopup::textChanged", 
				(void*)addresses::address2072()
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2073>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInteractObjectPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2073>::value, DefaultConv>(
				"SetupInteractObjectPopup::updateTargetID", 
				(void*)addresses::address2073()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSprite> : ModifyBase<Modify<Derived, cocos2d::CCSprite>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSprite>>::ModifyBase;
	using Base = cocos2d::CCSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure426>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure426>::value, DefaultConv>(
				"cocos2d::CCSprite::destructor", 
				(void*)addresses::address426()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure427>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure427>::value, DefaultConv>(
				"cocos2d::CCSprite::init", 
				(void*)addresses::address427()
			);
		}

		if constexpr (compare::setVertexZ<Derived, Base, types::pure428>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setVertexZ", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVertexZ<DefaultConv, Derived, Base, types::pure428>::value, DefaultConv>(
				"cocos2d::CCSprite::setVertexZ", 
				(void*)addresses::address428()
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure429>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleX<DefaultConv, Derived, Base, types::pure429>::value, DefaultConv>(
				"cocos2d::CCSprite::setScaleX", 
				(void*)addresses::address429()
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure430>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleY<DefaultConv, Derived, Base, types::pure430>::value, DefaultConv>(
				"cocos2d::CCSprite::setScaleY", 
				(void*)addresses::address430()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure431>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure431>::value, DefaultConv>(
				"cocos2d::CCSprite::setScale", 
				(void*)addresses::address431()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure432>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure432>::value, DefaultConv>(
				"cocos2d::CCSprite::setPosition", 
				(void*)addresses::address432()
			);
		}

		if constexpr (compare::setSkewX<Derived, Base, types::pure433>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setSkewX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSkewX<DefaultConv, Derived, Base, types::pure433>::value, DefaultConv>(
				"cocos2d::CCSprite::setSkewX", 
				(void*)addresses::address433()
			);
		}

		if constexpr (compare::setSkewY<Derived, Base, types::pure434>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setSkewY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSkewY<DefaultConv, Derived, Base, types::pure434>::value, DefaultConv>(
				"cocos2d::CCSprite::setSkewY", 
				(void*)addresses::address434()
			);
		}

		if constexpr (compare::setAnchorPoint<Derived, Base, types::pure435>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAnchorPoint<DefaultConv, Derived, Base, types::pure435>::value, DefaultConv>(
				"cocos2d::CCSprite::setAnchorPoint", 
				(void*)addresses::address435()
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure436>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVisible<DefaultConv, Derived, Base, types::pure436>::value, DefaultConv>(
				"cocos2d::CCSprite::setVisible", 
				(void*)addresses::address436()
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure437>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotation<DefaultConv, Derived, Base, types::pure437>::value, DefaultConv>(
				"cocos2d::CCSprite::setRotation", 
				(void*)addresses::address437()
			);
		}

		if constexpr (compare::setRotationX<Derived, Base, types::pure438>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setRotationX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotationX<DefaultConv, Derived, Base, types::pure438>::value, DefaultConv>(
				"cocos2d::CCSprite::setRotationX", 
				(void*)addresses::address438()
			);
		}

		if constexpr (compare::setRotationY<Derived, Base, types::pure439>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setRotationY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotationY<DefaultConv, Derived, Base, types::pure439>::value, DefaultConv>(
				"cocos2d::CCSprite::setRotationY", 
				(void*)addresses::address439()
			);
		}

		if constexpr (compare::ignoreAnchorPointForPosition<Derived, Base, types::pure440>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::ignoreAnchorPointForPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ignoreAnchorPointForPosition<DefaultConv, Derived, Base, types::pure440>::value, DefaultConv>(
				"cocos2d::CCSprite::ignoreAnchorPointForPosition", 
				(void*)addresses::address440()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure441>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure441>::value, DefaultConv>(
				"cocos2d::CCSprite::addChild", 
				(void*)addresses::address441()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure442>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure442>::value, DefaultConv>(
				"cocos2d::CCSprite::addChild", 
				(void*)addresses::address442()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure443>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure443>::value, DefaultConv>(
				"cocos2d::CCSprite::addChild", 
				(void*)addresses::address443()
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure444>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChild<DefaultConv, Derived, Base, types::pure444>::value, DefaultConv>(
				"cocos2d::CCSprite::removeChild", 
				(void*)addresses::address444()
			);
		}

		if constexpr (compare::removeAllChildrenWithCleanup<Derived, Base, types::pure445>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::removeAllChildrenWithCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllChildrenWithCleanup<DefaultConv, Derived, Base, types::pure445>::value, DefaultConv>(
				"cocos2d::CCSprite::removeAllChildrenWithCleanup", 
				(void*)addresses::address445()
			);
		}

		if constexpr (compare::reorderChild<Derived, Base, types::pure446>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::reorderChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reorderChild<DefaultConv, Derived, Base, types::pure446>::value, DefaultConv>(
				"cocos2d::CCSprite::reorderChild", 
				(void*)addresses::address446()
			);
		}

		if constexpr (compare::sortAllChildren<Derived, Base, types::pure447>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::sortAllChildren", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sortAllChildren<DefaultConv, Derived, Base, types::pure447>::value, DefaultConv>(
				"cocos2d::CCSprite::sortAllChildren", 
				(void*)addresses::address447()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure448>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure448>::value, DefaultConv>(
				"cocos2d::CCSprite::draw", 
				(void*)addresses::address448()
			);
		}

		if constexpr (compare::updateTransform<Derived, Base, types::pure449>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTransform<DefaultConv, Derived, Base, types::pure449>::value, DefaultConv>(
				"cocos2d::CCSprite::updateTransform", 
				(void*)addresses::address449()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure450>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure450>::value, DefaultConv>(
				"cocos2d::CCSprite::setOpacity", 
				(void*)addresses::address450()
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure451>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure451>::value, DefaultConv>(
				"cocos2d::CCSprite::updateDisplayedOpacity", 
				(void*)addresses::address451()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure452>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure452>::value, DefaultConv>(
				"cocos2d::CCSprite::setColor", 
				(void*)addresses::address452()
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure453>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure453>::value, DefaultConv>(
				"cocos2d::CCSprite::updateDisplayedColor", 
				(void*)addresses::address453()
			);
		}

		if constexpr (compare::setOpacityModifyRGB<Derived, Base, types::pure454>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacityModifyRGB<DefaultConv, Derived, Base, types::pure454>::value, DefaultConv>(
				"cocos2d::CCSprite::setOpacityModifyRGB", 
				(void*)addresses::address454()
			);
		}

		if constexpr (compare::isOpacityModifyRGB<Derived, Base, types::pure455>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::isOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isOpacityModifyRGB<DefaultConv, Derived, Base, types::pure455>::value, DefaultConv>(
				"cocos2d::CCSprite::isOpacityModifyRGB", 
				(void*)addresses::address455()
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure456>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithTexture<DefaultConv, Derived, Base, types::pure456>::value, DefaultConv>(
				"cocos2d::CCSprite::initWithTexture", 
				(void*)addresses::address456()
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure457>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithTexture<DefaultConv, Derived, Base, types::pure457>::value, DefaultConv>(
				"cocos2d::CCSprite::initWithTexture", 
				(void*)addresses::address457()
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure458>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithTexture<DefaultConv, Derived, Base, types::pure458>::value, DefaultConv>(
				"cocos2d::CCSprite::initWithTexture", 
				(void*)addresses::address458()
			);
		}

		if constexpr (compare::initWithSpriteFrame<Derived, Base, types::pure459>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrame<DefaultConv, Derived, Base, types::pure459>::value, DefaultConv>(
				"cocos2d::CCSprite::initWithSpriteFrame", 
				(void*)addresses::address459()
			);
		}

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure460>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure460>::value, DefaultConv>(
				"cocos2d::CCSprite::initWithSpriteFrameName", 
				(void*)addresses::address460()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure461>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure461>::value, DefaultConv>(
				"cocos2d::CCSprite::initWithFile", 
				(void*)addresses::address461()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure462>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure462>::value, DefaultConv>(
				"cocos2d::CCSprite::initWithFile", 
				(void*)addresses::address462()
			);
		}

		if constexpr (compare::setTexture<Derived, Base, types::pure463>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTexture<DefaultConv, Derived, Base, types::pure463>::value, DefaultConv>(
				"cocos2d::CCSprite::setTexture", 
				(void*)addresses::address463()
			);
		}

		if constexpr (compare::getTexture<Derived, Base, types::pure464>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::getTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTexture<DefaultConv, Derived, Base, types::pure464>::value, DefaultConv>(
				"cocos2d::CCSprite::getTexture", 
				(void*)addresses::address464()
			);
		}

		if constexpr (compare::setChildColor<Derived, Base, types::pure465>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setChildColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setChildColor<DefaultConv, Derived, Base, types::pure465>::value, DefaultConv>(
				"cocos2d::CCSprite::setChildColor", 
				(void*)addresses::address465()
			);
		}

		if constexpr (compare::setChildOpacity<Derived, Base, types::pure466>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setChildOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setChildOpacity<DefaultConv, Derived, Base, types::pure466>::value, DefaultConv>(
				"cocos2d::CCSprite::setChildOpacity", 
				(void*)addresses::address466()
			);
		}

		if constexpr (compare::getBatchNode<Derived, Base, types::pure467>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::getBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBatchNode<DefaultConv, Derived, Base, types::pure467>::value, DefaultConv>(
				"cocos2d::CCSprite::getBatchNode", 
				(void*)addresses::address467()
			);
		}

		if constexpr (compare::setBatchNode<Derived, Base, types::pure468>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setBatchNode<DefaultConv, Derived, Base, types::pure468>::value, DefaultConv>(
				"cocos2d::CCSprite::setBatchNode", 
				(void*)addresses::address468()
			);
		}

		if constexpr (compare::refreshTextureRect<Derived, Base, types::pure469>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::refreshTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::refreshTextureRect<DefaultConv, Derived, Base, types::pure469>::value, DefaultConv>(
				"cocos2d::CCSprite::refreshTextureRect", 
				(void*)addresses::address469()
			);
		}

		if constexpr (compare::setTextureRect<Derived, Base, types::pure470>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTextureRect<DefaultConv, Derived, Base, types::pure470>::value, DefaultConv>(
				"cocos2d::CCSprite::setTextureRect", 
				(void*)addresses::address470()
			);
		}

		if constexpr (compare::setTextureRect<Derived, Base, types::pure471>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTextureRect<DefaultConv, Derived, Base, types::pure471>::value, DefaultConv>(
				"cocos2d::CCSprite::setTextureRect", 
				(void*)addresses::address471()
			);
		}

		if constexpr (compare::setVertexRect<Derived, Base, types::pure472>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setVertexRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVertexRect<DefaultConv, Derived, Base, types::pure472>::value, DefaultConv>(
				"cocos2d::CCSprite::setVertexRect", 
				(void*)addresses::address472()
			);
		}

		if constexpr (compare::setDisplayFrame<Derived, Base, types::pure473>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setDisplayFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDisplayFrame<DefaultConv, Derived, Base, types::pure473>::value, DefaultConv>(
				"cocos2d::CCSprite::setDisplayFrame", 
				(void*)addresses::address473()
			);
		}

		if constexpr (compare::isFrameDisplayed<Derived, Base, types::pure474>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::isFrameDisplayed", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isFrameDisplayed<DefaultConv, Derived, Base, types::pure474>::value, DefaultConv>(
				"cocos2d::CCSprite::isFrameDisplayed", 
				(void*)addresses::address474()
			);
		}

		if constexpr (compare::displayFrame<Derived, Base, types::pure475>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::displayFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::displayFrame<DefaultConv, Derived, Base, types::pure475>::value, DefaultConv>(
				"cocos2d::CCSprite::displayFrame", 
				(void*)addresses::address475()
			);
		}

		if constexpr (compare::setDisplayFrameWithAnimationName<Derived, Base, types::pure476>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setDisplayFrameWithAnimationName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDisplayFrameWithAnimationName<DefaultConv, Derived, Base, types::pure476>::value, DefaultConv>(
				"cocos2d::CCSprite::setDisplayFrameWithAnimationName", 
				(void*)addresses::address476()
			);
		}

		if constexpr (compare::setTextureCoords<Derived, Base, types::pure477>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setTextureCoords", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTextureCoords<DefaultConv, Derived, Base, types::pure477>::value, DefaultConv>(
				"cocos2d::CCSprite::setTextureCoords", 
				(void*)addresses::address477()
			);
		}

		if constexpr (compare::updateBlendFunc<Derived, Base, types::pure478>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::updateBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateBlendFunc<DefaultConv, Derived, Base, types::pure478>::value, DefaultConv>(
				"cocos2d::CCSprite::updateBlendFunc", 
				(void*)addresses::address478()
			);
		}

		if constexpr (compare::setReorderChildDirtyRecursively<Derived, Base, types::pure479>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setReorderChildDirtyRecursively", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setReorderChildDirtyRecursively<DefaultConv, Derived, Base, types::pure479>::value, DefaultConv>(
				"cocos2d::CCSprite::setReorderChildDirtyRecursively", 
				(void*)addresses::address479()
			);
		}

		if constexpr (compare::setDirtyRecursively<Derived, Base, types::pure480>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setDirtyRecursively", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDirtyRecursively<DefaultConv, Derived, Base, types::pure480>::value, DefaultConv>(
				"cocos2d::CCSprite::setDirtyRecursively", 
				(void*)addresses::address480()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure481>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure481>::value, DefaultConv>(
				"cocos2d::CCSprite::constructor", 
				(void*)addresses::address481()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure482>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure482>::value, DefaultConv>(
				"cocos2d::CCSprite::create", 
				(void*)addresses::address482()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure483>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure483>::value, DefaultConv>(
				"cocos2d::CCSprite::create", 
				(void*)addresses::address483()
			);
		}

		if constexpr (compare::createWithSpriteFrame<Derived, Base, types::pure484>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithSpriteFrame<DefaultConv, Derived, Base, types::pure484>::value, DefaultConv>(
				"cocos2d::CCSprite::createWithSpriteFrame", 
				(void*)addresses::address484()
			);
		}

		if constexpr (compare::createWithSpriteFrameName<Derived, Base, types::pure485>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithSpriteFrameName<DefaultConv, Derived, Base, types::pure485>::value, DefaultConv>(
				"cocos2d::CCSprite::createWithSpriteFrameName", 
				(void*)addresses::address485()
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure486>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithTexture<DefaultConv, Derived, Base, types::pure486>::value, DefaultConv>(
				"cocos2d::CCSprite::createWithTexture", 
				(void*)addresses::address486()
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure487>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithTexture<DefaultConv, Derived, Base, types::pure487>::value, DefaultConv>(
				"cocos2d::CCSprite::createWithTexture", 
				(void*)addresses::address487()
			);
		}

		if constexpr (compare::setFlipX<Derived, Base, types::pure488>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipX<DefaultConv, Derived, Base, types::pure488>::value, DefaultConv>(
				"cocos2d::CCSprite::setFlipX", 
				(void*)addresses::address488()
			);
		}

		if constexpr (compare::setFlipY<Derived, Base, types::pure489>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::setFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipY<DefaultConv, Derived, Base, types::pure489>::value, DefaultConv>(
				"cocos2d::CCSprite::setFlipY", 
				(void*)addresses::address489()
			);
		}

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
			Interface::get()->addHook<wrap::decrementForcePrio<DefaultConv, Derived, Base, types::pure540>::value, DefaultConv>(
				"cocos2d::CCTouchDispatcher::decrementForcePrio", 
				(void*)addresses::address540()
			);
		}

		if constexpr (compare::incrementForcePrio<Derived, Base, types::pure541>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchDispatcher::incrementForcePrio", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::incrementForcePrio<DefaultConv, Derived, Base, types::pure541>::value, DefaultConv>(
				"cocos2d::CCTouchDispatcher::incrementForcePrio", 
				(void*)addresses::address541()
			);
		}

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
struct Modify<Derived, EndLevelLayer> : ModifyBase<Modify<Derived, EndLevelLayer>> {
	using ModifyBase<Modify<Derived, EndLevelLayer>>::ModifyBase;
	using Base = EndLevelLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1017>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EndLevelLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1017>::value, DefaultConv>(
				"EndLevelLayer::create", 
				(void*)addresses::address1017()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, AnimatedGameObject> : ModifyBase<Modify<Derived, AnimatedGameObject>> {
	using ModifyBase<Modify<Derived, AnimatedGameObject>>::ModifyBase;
	using Base = AnimatedGameObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::playAnimation<Derived, Base, types::pure672>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AnimatedGameObject::playAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playAnimation<DefaultConv, Derived, Base, types::pure672>::value, DefaultConv>(
				"AnimatedGameObject::playAnimation", 
				(void*)addresses::address672()
			);
		}

		if constexpr (compare::updateChildSpriteColor<Derived, Base, types::pure673>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AnimatedGameObject::updateChildSpriteColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateChildSpriteColor<DefaultConv, Derived, Base, types::pure673>::value, DefaultConv>(
				"AnimatedGameObject::updateChildSpriteColor", 
				(void*)addresses::address673()
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
			Interface::get()->addHook<wrap::gettimeofdayCocos2d<DefaultConv, Derived, Base, types::pure534>::value, DefaultConv>(
				"cocos2d::CCTime::gettimeofdayCocos2d", 
				(void*)addresses::address534()
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

		if constexpr (compare::destructor<Derived, Base, types::pure2174>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure2174>::value, DefaultConv>(
				"UndoObject::destructor", 
				(void*)addresses::address2174()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure2175>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2175>::value, DefaultConv>(
				"UndoObject::create", 
				(void*)addresses::address2175()
			);
		}

		if constexpr (compare::createWithArray<Derived, Base, types::pure2176>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::createWithArray", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithArray<DefaultConv, Derived, Base, types::pure2176>::value, DefaultConv>(
				"UndoObject::createWithArray", 
				(void*)addresses::address2176()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJSearchObject> : ModifyBase<Modify<Derived, GJSearchObject>> {
	using ModifyBase<Modify<Derived, GJSearchObject>>::ModifyBase;
	using Base = GJSearchObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
			Interface::get()->addHook<wrap::reset<DefaultConv, Derived, Base, types::pure253>::value, DefaultConv>(
				"cocos2d::CCMotionStreak::reset", 
				(void*)addresses::address253()
			);
		}

		if constexpr (compare::resumeStroke<Derived, Base, types::pure254>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::resumeStroke", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resumeStroke<DefaultConv, Derived, Base, types::pure254>::value, DefaultConv>(
				"cocos2d::CCMotionStreak::resumeStroke", 
				(void*)addresses::address254()
			);
		}

		if constexpr (compare::stopStroke<Derived, Base, types::pure255>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::stopStroke", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopStroke<DefaultConv, Derived, Base, types::pure255>::value, DefaultConv>(
				"cocos2d::CCMotionStreak::stopStroke", 
				(void*)addresses::address255()
			);
		}

		if constexpr (compare::initWithFade<Derived, Base, types::pure256>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::initWithFade", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFade<DefaultConv, Derived, Base, types::pure256>::value, DefaultConv>(
				"cocos2d::CCMotionStreak::initWithFade", 
				(void*)addresses::address256()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure535>::value, DefaultConv>(
				"cocos2d::CCTintTo::create", 
				(void*)addresses::address535()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure105>::value, DefaultConv>(
				"cocos2d::CCFadeTo::create", 
				(void*)addresses::address105()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure125>::value, DefaultConv>(
				"cocos2d::CCLabelBMFont::create", 
				(void*)addresses::address125()
			);
		}

		if constexpr (compare::limitLabelWidth<Derived, Base, types::pure126>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::limitLabelWidth", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::limitLabelWidth<DefaultConv, Derived, Base, types::pure126>::value, DefaultConv>(
				"cocos2d::CCLabelBMFont::limitLabelWidth", 
				(void*)addresses::address126()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure127>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure127>::value, DefaultConv>(
				"cocos2d::CCLabelBMFont::setScale", 
				(void*)addresses::address127()
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure128>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::setString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setString<DefaultConv, Derived, Base, types::pure128>::value, DefaultConv>(
				"cocos2d::CCLabelBMFont::setString", 
				(void*)addresses::address128()
			);
		}

		if constexpr (compare::setAnchorPoint<Derived, Base, types::pure129>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelBMFont::setAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAnchorPoint<DefaultConv, Derived, Base, types::pure129>::value, DefaultConv>(
				"cocos2d::CCLabelBMFont::setAnchorPoint", 
				(void*)addresses::address129()
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

		if constexpr (compare::create<Derived, Base, types::pure694>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure694>::value, DefaultConv>(
				"BoomListView::create", 
				(void*)addresses::address694()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure695>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure695>::value, DefaultConv>(
				"BoomListView::init", 
				(void*)addresses::address695()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure696>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure696>::value, DefaultConv>(
				"BoomListView::draw", 
				(void*)addresses::address696()
			);
		}

		if constexpr (compare::setupList<Derived, Base, types::pure697>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::setupList", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupList<DefaultConv, Derived, Base, types::pure697>::value, DefaultConv>(
				"BoomListView::setupList", 
				(void*)addresses::address697()
			);
		}

		if constexpr (compare::TableViewWillDisplayCellForRowAtIndexPath<Derived, Base, types::pure698>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::TableViewWillDisplayCellForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::TableViewWillDisplayCellForRowAtIndexPath<DefaultConv, Derived, Base, types::pure698>::value, DefaultConv>(
				"BoomListView::TableViewWillDisplayCellForRowAtIndexPath", 
				(void*)addresses::address698()
			);
		}

		if constexpr (compare::cellHeightForRowAtIndexPath<Derived, Base, types::pure699>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::cellHeightForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::cellHeightForRowAtIndexPath<DefaultConv, Derived, Base, types::pure699>::value, DefaultConv>(
				"BoomListView::cellHeightForRowAtIndexPath", 
				(void*)addresses::address699()
			);
		}

		if constexpr (compare::numberOfRowsInSection<Derived, Base, types::pure701>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::numberOfRowsInSection", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::numberOfRowsInSection<DefaultConv, Derived, Base, types::pure701>::value, DefaultConv>(
				"BoomListView::numberOfRowsInSection", 
				(void*)addresses::address701()
			);
		}

		if constexpr (compare::numberOfSectionsInTableView<Derived, Base, types::pure702>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::numberOfSectionsInTableView", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::numberOfSectionsInTableView<DefaultConv, Derived, Base, types::pure702>::value, DefaultConv>(
				"BoomListView::numberOfSectionsInTableView", 
				(void*)addresses::address702()
			);
		}

		if constexpr (compare::cellForRowAtIndexPath<Derived, Base, types::pure703>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::cellForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::cellForRowAtIndexPath<DefaultConv, Derived, Base, types::pure703>::value, DefaultConv>(
				"BoomListView::cellForRowAtIndexPath", 
				(void*)addresses::address703()
			);
		}

		if constexpr (compare::TableViewCommitCellEditingStyleForRowAtIndexPath<Derived, Base, types::pure704>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::TableViewCommitCellEditingStyleForRowAtIndexPath<DefaultConv, Derived, Base, types::pure704>::value, DefaultConv>(
				"BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath", 
				(void*)addresses::address704()
			);
		}

		if constexpr (compare::TableViewWillReloadCellForRowAtIndexPath<Derived, Base, types::pure705>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::TableViewWillReloadCellForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::TableViewWillReloadCellForRowAtIndexPath<DefaultConv, Derived, Base, types::pure705>::value, DefaultConv>(
				"BoomListView::TableViewWillReloadCellForRowAtIndexPath", 
				(void*)addresses::address705()
			);
		}

		if constexpr (compare::getListCell<Derived, Base, types::pure706>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::getListCell", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getListCell<DefaultConv, Derived, Base, types::pure706>::value, DefaultConv>(
				"BoomListView::getListCell", 
				(void*)addresses::address706()
			);
		}

		if constexpr (compare::loadCell<Derived, Base, types::pure707>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::loadCell", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadCell<DefaultConv, Derived, Base, types::pure707>::value, DefaultConv>(
				"BoomListView::loadCell", 
				(void*)addresses::address707()
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
			Interface::get()->addHook<wrap::setString<DefaultConv, Derived, Base, types::pure819>::value, DefaultConv>(
				"CCTextInputNode::setString", 
				(void*)addresses::address819()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure824>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure824>::value, DefaultConv>(
				"CCTextInputNode::init", 
				(void*)addresses::address824()
			);
		}

		if constexpr (compare::refreshLabel<Derived, Base, types::pure825>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::refreshLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::refreshLabel<DefaultConv, Derived, Base, types::pure825>::value, DefaultConv>(
				"CCTextInputNode::refreshLabel", 
				(void*)addresses::address825()
			);
		}

		if constexpr (compare::updateLabel<Derived, Base, types::pure826>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::updateLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateLabel<DefaultConv, Derived, Base, types::pure826>::value, DefaultConv>(
				"CCTextInputNode::updateLabel", 
				(void*)addresses::address826()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure827>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure827>::value, DefaultConv>(
				"CCTextInputNode::registerWithTouchDispatcher", 
				(void*)addresses::address827()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure828>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure828>::value, DefaultConv>(
				"CCTextInputNode::visit", 
				(void*)addresses::address828()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure829>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure829>::value, DefaultConv>(
				"CCTextInputNode::ccTouchBegan", 
				(void*)addresses::address829()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure830>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure830>::value, DefaultConv>(
				"CCTextInputNode::ccTouchCancelled", 
				(void*)addresses::address830()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure831>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure831>::value, DefaultConv>(
				"CCTextInputNode::ccTouchEnded", 
				(void*)addresses::address831()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure832>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure832>::value, DefaultConv>(
				"CCTextInputNode::ccTouchMoved", 
				(void*)addresses::address832()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure833>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure833>::value, DefaultConv>(
				"CCTextInputNode::textChanged", 
				(void*)addresses::address833()
			);
		}

		if constexpr (compare::onClickTrackNode<Derived, Base, types::pure834>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onClickTrackNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onClickTrackNode<DefaultConv, Derived, Base, types::pure834>::value, DefaultConv>(
				"CCTextInputNode::onClickTrackNode", 
				(void*)addresses::address834()
			);
		}

		if constexpr (compare::keyboardWillShow<Derived, Base, types::pure835>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::keyboardWillShow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyboardWillShow<DefaultConv, Derived, Base, types::pure835>::value, DefaultConv>(
				"CCTextInputNode::keyboardWillShow", 
				(void*)addresses::address835()
			);
		}

		if constexpr (compare::keyboardWillHide<Derived, Base, types::pure836>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::keyboardWillHide", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyboardWillHide<DefaultConv, Derived, Base, types::pure836>::value, DefaultConv>(
				"CCTextInputNode::keyboardWillHide", 
				(void*)addresses::address836()
			);
		}

		if constexpr (compare::onTextFieldInsertText<Derived, Base, types::pure837>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onTextFieldInsertText", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTextFieldInsertText<DefaultConv, Derived, Base, types::pure837>::value, DefaultConv>(
				"CCTextInputNode::onTextFieldInsertText", 
				(void*)addresses::address837()
			);
		}

		if constexpr (compare::onTextFieldAttachWithIME<Derived, Base, types::pure838>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onTextFieldAttachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTextFieldAttachWithIME<DefaultConv, Derived, Base, types::pure838>::value, DefaultConv>(
				"CCTextInputNode::onTextFieldAttachWithIME", 
				(void*)addresses::address838()
			);
		}

		if constexpr (compare::onTextFieldDetachWithIME<Derived, Base, types::pure839>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onTextFieldDetachWithIME", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTextFieldDetachWithIME<DefaultConv, Derived, Base, types::pure839>::value, DefaultConv>(
				"CCTextInputNode::onTextFieldDetachWithIME", 
				(void*)addresses::address839()
			);
		}

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
			Interface::get()->addHook<wrap::createWithTexture<DefaultConv, Derived, Base, types::pure494>::value, DefaultConv>(
				"cocos2d::CCSpriteFrame::createWithTexture", 
				(void*)addresses::address494()
			);
		}

		if constexpr (compare::createWithTexture<Derived, Base, types::pure495>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrame::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithTexture<DefaultConv, Derived, Base, types::pure495>::value, DefaultConv>(
				"cocos2d::CCSpriteFrame::createWithTexture", 
				(void*)addresses::address495()
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

		if constexpr (compare::destructor<Derived, Base, types::pure1644>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1644>::value, DefaultConv>(
				"LevelSettingsObject::destructor", 
				(void*)addresses::address1644()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1645>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1645>::value, DefaultConv>(
				"LevelSettingsObject::init", 
				(void*)addresses::address1645()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1646>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1646>::value, DefaultConv>(
				"LevelSettingsObject::create", 
				(void*)addresses::address1646()
			);
		}

		if constexpr (compare::objectFromDict<Derived, Base, types::pure1647>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::objectFromDict", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectFromDict<DefaultConv, Derived, Base, types::pure1647>::value, DefaultConv>(
				"LevelSettingsObject::objectFromDict", 
				(void*)addresses::address1647()
			);
		}

		if constexpr (compare::objectFromString<Derived, Base, types::pure1648>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::objectFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectFromString<DefaultConv, Derived, Base, types::pure1648>::value, DefaultConv>(
				"LevelSettingsObject::objectFromString", 
				(void*)addresses::address1648()
			);
		}

		if constexpr (compare::setupColorsFromLegacyMode<Derived, Base, types::pure1649>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::setupColorsFromLegacyMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupColorsFromLegacyMode<DefaultConv, Derived, Base, types::pure1649>::value, DefaultConv>(
				"LevelSettingsObject::setupColorsFromLegacyMode", 
				(void*)addresses::address1649()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTexture2D> : ModifyBase<Modify<Derived, cocos2d::CCTexture2D>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTexture2D>>::ModifyBase;
	using Base = cocos2d::CCTexture2D;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure513>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure513>::value, DefaultConv>(
				"cocos2d::CCTexture2D::destructor", 
				(void*)addresses::address513()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure514>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure514>::value, DefaultConv>(
				"cocos2d::CCTexture2D::constructor", 
				(void*)addresses::address514()
			);
		}

		if constexpr (compare::getContentSize<Derived, Base, types::pure515>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getContentSize<DefaultConv, Derived, Base, types::pure515>::value, DefaultConv>(
				"cocos2d::CCTexture2D::getContentSize", 
				(void*)addresses::address515()
			);
		}

		if constexpr (compare::getMaxS<Derived, Base, types::pure516>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getMaxS", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMaxS<DefaultConv, Derived, Base, types::pure516>::value, DefaultConv>(
				"cocos2d::CCTexture2D::getMaxS", 
				(void*)addresses::address516()
			);
		}

		if constexpr (compare::getMaxT<Derived, Base, types::pure517>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getMaxT", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMaxT<DefaultConv, Derived, Base, types::pure517>::value, DefaultConv>(
				"cocos2d::CCTexture2D::getMaxT", 
				(void*)addresses::address517()
			);
		}

		if constexpr (compare::getName<Derived, Base, types::pure518>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getName<DefaultConv, Derived, Base, types::pure518>::value, DefaultConv>(
				"cocos2d::CCTexture2D::getName", 
				(void*)addresses::address518()
			);
		}

		if constexpr (compare::getPixelFormat<Derived, Base, types::pure519>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getPixelFormat", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPixelFormat<DefaultConv, Derived, Base, types::pure519>::value, DefaultConv>(
				"cocos2d::CCTexture2D::getPixelFormat", 
				(void*)addresses::address519()
			);
		}

		if constexpr (compare::getPixelsHigh<Derived, Base, types::pure520>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getPixelsHigh", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPixelsHigh<DefaultConv, Derived, Base, types::pure520>::value, DefaultConv>(
				"cocos2d::CCTexture2D::getPixelsHigh", 
				(void*)addresses::address520()
			);
		}

		if constexpr (compare::getPixelsWide<Derived, Base, types::pure521>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getPixelsWide", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPixelsWide<DefaultConv, Derived, Base, types::pure521>::value, DefaultConv>(
				"cocos2d::CCTexture2D::getPixelsWide", 
				(void*)addresses::address521()
			);
		}

		if constexpr (compare::getShaderProgram<Derived, Base, types::pure522>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getShaderProgram<DefaultConv, Derived, Base, types::pure522>::value, DefaultConv>(
				"cocos2d::CCTexture2D::getShaderProgram", 
				(void*)addresses::address522()
			);
		}

		if constexpr (compare::initPremultipliedATextureWithImage<Derived, Base, types::pure523>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::initPremultipliedATextureWithImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initPremultipliedATextureWithImage<DefaultConv, Derived, Base, types::pure523>::value, DefaultConv>(
				"cocos2d::CCTexture2D::initPremultipliedATextureWithImage", 
				(void*)addresses::address523()
			);
		}

		if constexpr (compare::initWithData<Derived, Base, types::pure524>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::initWithData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithData<DefaultConv, Derived, Base, types::pure524>::value, DefaultConv>(
				"cocos2d::CCTexture2D::initWithData", 
				(void*)addresses::address524()
			);
		}

		if constexpr (compare::setAliasTexParameters<Derived, Base, types::pure525>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setAliasTexParameters", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAliasTexParameters<DefaultConv, Derived, Base, types::pure525>::value, DefaultConv>(
				"cocos2d::CCTexture2D::setAliasTexParameters", 
				(void*)addresses::address525()
			);
		}

		if constexpr (compare::setAntiAliasTexParameters<Derived, Base, types::pure526>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setAntiAliasTexParameters", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAntiAliasTexParameters<DefaultConv, Derived, Base, types::pure526>::value, DefaultConv>(
				"cocos2d::CCTexture2D::setAntiAliasTexParameters", 
				(void*)addresses::address526()
			);
		}

		if constexpr (compare::setMaxS<Derived, Base, types::pure527>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setMaxS", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setMaxS<DefaultConv, Derived, Base, types::pure527>::value, DefaultConv>(
				"cocos2d::CCTexture2D::setMaxS", 
				(void*)addresses::address527()
			);
		}

		if constexpr (compare::setMaxT<Derived, Base, types::pure528>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setMaxT", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setMaxT<DefaultConv, Derived, Base, types::pure528>::value, DefaultConv>(
				"cocos2d::CCTexture2D::setMaxT", 
				(void*)addresses::address528()
			);
		}

		if constexpr (compare::setShaderProgram<Derived, Base, types::pure529>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setShaderProgram<DefaultConv, Derived, Base, types::pure529>::value, DefaultConv>(
				"cocos2d::CCTexture2D::setShaderProgram", 
				(void*)addresses::address529()
			);
		}

		if constexpr (compare::initWithImage<Derived, Base, types::pure530>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::initWithImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithImage<DefaultConv, Derived, Base, types::pure530>::value, DefaultConv>(
				"cocos2d::CCTexture2D::initWithImage", 
				(void*)addresses::address530()
			);
		}

		if constexpr (compare::setTexParameters<Derived, Base, types::pure531>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::setTexParameters", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTexParameters<DefaultConv, Derived, Base, types::pure531>::value, DefaultConv>(
				"cocos2d::CCTexture2D::setTexParameters", 
				(void*)addresses::address531()
			);
		}

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
			Interface::get()->addHook<wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure510>::value, DefaultConv>(
				"cocos2d::CCTargetedTouchHandler::handlerWithDelegate", 
				(void*)addresses::address510()
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure511>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTargetedTouchHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure511>::value, DefaultConv>(
				"cocos2d::CCTargetedTouchHandler::initWithDelegate", 
				(void*)addresses::address511()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure512>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTargetedTouchHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure512>::value, DefaultConv>(
				"cocos2d::CCTargetedTouchHandler::destructor", 
				(void*)addresses::address512()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJRobotSprite> : ModifyBase<Modify<Derived, GJRobotSprite>> {
	using ModifyBase<Modify<Derived, GJRobotSprite>>::ModifyBase;
	using Base = GJRobotSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure1266>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1266>::value, DefaultConv>(
				"GJRobotSprite::destructor", 
				(void*)addresses::address1266()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1267>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1267>::value, DefaultConv>(
				"GJRobotSprite::init", 
				(void*)addresses::address1267()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure1268>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure1268>::value, DefaultConv>(
				"GJRobotSprite::setOpacity", 
				(void*)addresses::address1268()
			);
		}

		if constexpr (compare::hideSecondary<Derived, Base, types::pure1269>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::hideSecondary", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hideSecondary<DefaultConv, Derived, Base, types::pure1269>::value, DefaultConv>(
				"GJRobotSprite::hideSecondary", 
				(void*)addresses::address1269()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1270>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1270>::value, DefaultConv>(
				"GJRobotSprite::create", 
				(void*)addresses::address1270()
			);
		}

		if constexpr (compare::updateColor02<Derived, Base, types::pure1271>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::updateColor02", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColor02<DefaultConv, Derived, Base, types::pure1271>::value, DefaultConv>(
				"GJRobotSprite::updateColor02", 
				(void*)addresses::address1271()
			);
		}

		if constexpr (compare::updateFrame<Derived, Base, types::pure1272>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::updateFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateFrame<DefaultConv, Derived, Base, types::pure1272>::value, DefaultConv>(
				"GJRobotSprite::updateFrame", 
				(void*)addresses::address1272()
			);
		}

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
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure1021>::value, DefaultConv>(
				"FLAlertLayer::onEnter", 
				(void*)addresses::address1021()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure1022>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure1022>::value, DefaultConv>(
				"FLAlertLayer::ccTouchBegan", 
				(void*)addresses::address1022()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure1023>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure1023>::value, DefaultConv>(
				"FLAlertLayer::ccTouchMoved", 
				(void*)addresses::address1023()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure1024>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure1024>::value, DefaultConv>(
				"FLAlertLayer::ccTouchEnded", 
				(void*)addresses::address1024()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure1025>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure1025>::value, DefaultConv>(
				"FLAlertLayer::ccTouchCancelled", 
				(void*)addresses::address1025()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure1026>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure1026>::value, DefaultConv>(
				"FLAlertLayer::registerWithTouchDispatcher", 
				(void*)addresses::address1026()
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure1027>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure1027>::value, DefaultConv>(
				"FLAlertLayer::keyBackClicked", 
				(void*)addresses::address1027()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure1028>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure1028>::value, DefaultConv>(
				"FLAlertLayer::keyDown", 
				(void*)addresses::address1028()
			);
		}

		if constexpr (compare::show<Derived, Base, types::pure1029>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::show", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::show<DefaultConv, Derived, Base, types::pure1029>::value, DefaultConv>(
				"FLAlertLayer::show", 
				(void*)addresses::address1029()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1030>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1030>::value, DefaultConv>(
				"FLAlertLayer::init", 
				(void*)addresses::address1030()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1031>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1031>::value, DefaultConv>(
				"FLAlertLayer::create", 
				(void*)addresses::address1031()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1032>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1032>::value, DefaultConv>(
				"FLAlertLayer::create", 
				(void*)addresses::address1032()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1033>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1033>::value, DefaultConv>(
				"FLAlertLayer::create", 
				(void*)addresses::address1033()
			);
		}

		if constexpr (compare::onBtn1<Derived, Base, types::pure1034>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::onBtn1", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onBtn1<DefaultConv, Derived, Base, types::pure1034>::value, DefaultConv>(
				"FLAlertLayer::onBtn1", 
				(void*)addresses::address1034()
			);
		}

		if constexpr (compare::onBtn2<Derived, Base, types::pure1035>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::onBtn2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onBtn2<DefaultConv, Derived, Base, types::pure1035>::value, DefaultConv>(
				"FLAlertLayer::onBtn2", 
				(void*)addresses::address1035()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, InfoAlertButton> : ModifyBase<Modify<Derived, InfoAlertButton>> {
	using ModifyBase<Modify<Derived, InfoAlertButton>>::ModifyBase;
	using Base = InfoAlertButton;
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

	}
};

template<class Derived>
struct Modify<Derived, BoomScrollLayer> : ModifyBase<Modify<Derived, BoomScrollLayer>> {
	using ModifyBase<Modify<Derived, BoomScrollLayer>>::ModifyBase;
	using Base = BoomScrollLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::constructor<Derived, Base, types::pure708>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomScrollLayer::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure708>::value, DefaultConv>(
				"BoomScrollLayer::constructor", 
				(void*)addresses::address708()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure417>::value, DefaultConv>(
				"cocos2d::CCScene::create", 
				(void*)addresses::address417()
			);
		}

		if constexpr (compare::getHighestChildZ<Derived, Base, types::pure418>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScene::getHighestChildZ", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getHighestChildZ<DefaultConv, Derived, Base, types::pure418>::value, DefaultConv>(
				"cocos2d::CCScene::getHighestChildZ", 
				(void*)addresses::address418()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure415>::value, DefaultConv>(
				"cocos2d::CCScaleTo::create", 
				(void*)addresses::address415()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure416>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScaleTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure416>::value, DefaultConv>(
				"cocos2d::CCScaleTo::create", 
				(void*)addresses::address416()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, TouchToggleAction> : ModifyBase<Modify<Derived, TouchToggleAction>> {
	using ModifyBase<Modify<Derived, TouchToggleAction>>::ModifyBase;
	using Base = TouchToggleAction;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::createFromString<Derived, Base, types::pure2159>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TouchToggleAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createFromString<DefaultConv, Derived, Base, types::pure2159>::value, DefaultConv>(
				"TouchToggleAction::createFromString", 
				(void*)addresses::address2159()
			);
		}

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
			Interface::get()->addHook<wrap::allKeys<DefaultConv, Derived, Base, types::pure43>::value, DefaultConv>(
				"cocos2d::CCDictionary::allKeys", 
				(void*)addresses::address43()
			);
		}

		if constexpr (compare::count<Derived, Base, types::pure44>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::count", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::count<DefaultConv, Derived, Base, types::pure44>::value, DefaultConv>(
				"cocos2d::CCDictionary::count", 
				(void*)addresses::address44()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure45>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure45>::value, DefaultConv>(
				"cocos2d::CCDictionary::create", 
				(void*)addresses::address45()
			);
		}

		if constexpr (compare::objectForKey<Derived, Base, types::pure46>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::objectForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectForKey<DefaultConv, Derived, Base, types::pure46>::value, DefaultConv>(
				"cocos2d::CCDictionary::objectForKey", 
				(void*)addresses::address46()
			);
		}

		if constexpr (compare::objectForKey<Derived, Base, types::pure47>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::objectForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectForKey<DefaultConv, Derived, Base, types::pure47>::value, DefaultConv>(
				"cocos2d::CCDictionary::objectForKey", 
				(void*)addresses::address47()
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure48>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure48>::value, DefaultConv>(
				"cocos2d::CCDictionary::removeAllObjects", 
				(void*)addresses::address48()
			);
		}

		if constexpr (compare::removeObjectForKey<Derived, Base, types::pure49>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::removeObjectForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeObjectForKey<DefaultConv, Derived, Base, types::pure49>::value, DefaultConv>(
				"cocos2d::CCDictionary::removeObjectForKey", 
				(void*)addresses::address49()
			);
		}

		if constexpr (compare::setObject<Derived, Base, types::pure50>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::setObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setObject<DefaultConv, Derived, Base, types::pure50>::value, DefaultConv>(
				"cocos2d::CCDictionary::setObject", 
				(void*)addresses::address50()
			);
		}

		if constexpr (compare::setObject<Derived, Base, types::pure51>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::setObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setObject<DefaultConv, Derived, Base, types::pure51>::value, DefaultConv>(
				"cocos2d::CCDictionary::setObject", 
				(void*)addresses::address51()
			);
		}

		if constexpr (compare::valueForKey<Derived, Base, types::pure52>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::valueForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::valueForKey<DefaultConv, Derived, Base, types::pure52>::value, DefaultConv>(
				"cocos2d::CCDictionary::valueForKey", 
				(void*)addresses::address52()
			);
		}

		if constexpr (compare::valueForKey<Derived, Base, types::pure53>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDictionary::valueForKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::valueForKey<DefaultConv, Derived, Base, types::pure53>::value, DefaultConv>(
				"cocos2d::CCDictionary::valueForKey", 
				(void*)addresses::address53()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure413>::value, DefaultConv>(
				"cocos2d::CCRepeatForever::create", 
				(void*)addresses::address413()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1263>::value, DefaultConv>(
				"GJItemIcon::create", 
				(void*)addresses::address1263()
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

		if constexpr (compare::audioStep<Derived, Base, types::pure691>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AudioEffectsLayer::audioStep", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::audioStep<DefaultConv, Derived, Base, types::pure691>::value, DefaultConv>(
				"AudioEffectsLayer::audioStep", 
				(void*)addresses::address691()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure692>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AudioEffectsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure692>::value, DefaultConv>(
				"AudioEffectsLayer::create", 
				(void*)addresses::address692()
			);
		}

		if constexpr (compare::resetAudioVars<Derived, Base, types::pure693>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AudioEffectsLayer::resetAudioVars", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetAudioVars<DefaultConv, Derived, Base, types::pure693>::value, DefaultConv>(
				"AudioEffectsLayer::resetAudioVars", 
				(void*)addresses::address693()
			);
		}

	}
};

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
			Interface::get()->addHook<wrap::pop<DefaultConv, Derived, Base, types::pure407>::value, DefaultConv>(
				"cocos2d::CCPoolManager::pop", 
				(void*)addresses::address407()
			);
		}

		if constexpr (compare::sharedPoolManager<Derived, Base, types::pure408>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCPoolManager::sharedPoolManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedPoolManager<DefaultConv, Derived, Base, types::pure408>::value, DefaultConv>(
				"cocos2d::CCPoolManager::sharedPoolManager", 
				(void*)addresses::address408()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure406>::value, DefaultConv>(
				"cocos2d::CCParticleSystemQuad::create", 
				(void*)addresses::address406()
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
			Interface::get()->addHook<wrap::resetSystem<DefaultConv, Derived, Base, types::pure403>::value, DefaultConv>(
				"cocos2d::CCParticleSystem::resetSystem", 
				(void*)addresses::address403()
			);
		}

		if constexpr (compare::resumeSystem<Derived, Base, types::pure404>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCParticleSystem::resumeSystem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resumeSystem<DefaultConv, Derived, Base, types::pure404>::value, DefaultConv>(
				"cocos2d::CCParticleSystem::resumeSystem", 
				(void*)addresses::address404()
			);
		}

		if constexpr (compare::stopSystem<Derived, Base, types::pure405>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCParticleSystem::stopSystem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopSystem<DefaultConv, Derived, Base, types::pure405>::value, DefaultConv>(
				"cocos2d::CCParticleSystem::stopSystem", 
				(void*)addresses::address405()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetupCollisionTriggerPopup> : ModifyBase<Modify<Derived, SetupCollisionTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupCollisionTriggerPopup>>::ModifyBase;
	using Base = SetupCollisionTriggerPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2058>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCollisionTriggerPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2058>::value, DefaultConv>(
				"SetupCollisionTriggerPopup::create", 
				(void*)addresses::address2058()
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2059>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCollisionTriggerPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2059>::value, DefaultConv>(
				"SetupCollisionTriggerPopup::onTargetIDArrow", 
				(void*)addresses::address2059()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2060>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCollisionTriggerPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2060>::value, DefaultConv>(
				"SetupCollisionTriggerPopup::textChanged", 
				(void*)addresses::address2060()
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2061>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCollisionTriggerPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2061>::value, DefaultConv>(
				"SetupCollisionTriggerPopup::updateTargetID", 
				(void*)addresses::address2061()
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
struct Modify<Derived, TeleportPortalObject> : ModifyBase<Modify<Derived, TeleportPortalObject>> {
	using ModifyBase<Modify<Derived, TeleportPortalObject>>::ModifyBase;
	using Base = TeleportPortalObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure261>::value, DefaultConv>(
				"cocos2d::CCMoveTo::create", 
				(void*)addresses::address261()
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

		if constexpr (compare::constructor<Derived, Base, types::pure134>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure134>::value, DefaultConv>(
				"cocos2d::CCLayer::constructor", 
				(void*)addresses::address134()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure135>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure135>::value, DefaultConv>(
				"cocos2d::CCLayer::ccTouchBegan", 
				(void*)addresses::address135()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure136>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure136>::value, DefaultConv>(
				"cocos2d::CCLayer::ccTouchCancelled", 
				(void*)addresses::address136()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure137>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure137>::value, DefaultConv>(
				"cocos2d::CCLayer::ccTouchEnded", 
				(void*)addresses::address137()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure138>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure138>::value, DefaultConv>(
				"cocos2d::CCLayer::ccTouchMoved", 
				(void*)addresses::address138()
			);
		}

		if constexpr (compare::ccTouchesBegan<Derived, Base, types::pure139>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchesBegan<DefaultConv, Derived, Base, types::pure139>::value, DefaultConv>(
				"cocos2d::CCLayer::ccTouchesBegan", 
				(void*)addresses::address139()
			);
		}

		if constexpr (compare::ccTouchesCancelled<Derived, Base, types::pure140>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchesCancelled<DefaultConv, Derived, Base, types::pure140>::value, DefaultConv>(
				"cocos2d::CCLayer::ccTouchesCancelled", 
				(void*)addresses::address140()
			);
		}

		if constexpr (compare::ccTouchesEnded<Derived, Base, types::pure141>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchesEnded<DefaultConv, Derived, Base, types::pure141>::value, DefaultConv>(
				"cocos2d::CCLayer::ccTouchesEnded", 
				(void*)addresses::address141()
			);
		}

		if constexpr (compare::ccTouchesMoved<Derived, Base, types::pure142>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchesMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchesMoved<DefaultConv, Derived, Base, types::pure142>::value, DefaultConv>(
				"cocos2d::CCLayer::ccTouchesMoved", 
				(void*)addresses::address142()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure143>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure143>::value, DefaultConv>(
				"cocos2d::CCLayer::create", 
				(void*)addresses::address143()
			);
		}

		if constexpr (compare::didAccelerate<Derived, Base, types::pure144>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::didAccelerate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::didAccelerate<DefaultConv, Derived, Base, types::pure144>::value, DefaultConv>(
				"cocos2d::CCLayer::didAccelerate", 
				(void*)addresses::address144()
			);
		}

		if constexpr (compare::getTouchMode<Derived, Base, types::pure145>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::getTouchMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTouchMode<DefaultConv, Derived, Base, types::pure145>::value, DefaultConv>(
				"cocos2d::CCLayer::getTouchMode", 
				(void*)addresses::address145()
			);
		}

		if constexpr (compare::getTouchPriority<Derived, Base, types::pure146>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::getTouchPriority", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTouchPriority<DefaultConv, Derived, Base, types::pure146>::value, DefaultConv>(
				"cocos2d::CCLayer::getTouchPriority", 
				(void*)addresses::address146()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure147>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure147>::value, DefaultConv>(
				"cocos2d::CCLayer::init", 
				(void*)addresses::address147()
			);
		}

		if constexpr (compare::isAccelerometerEnabled<Derived, Base, types::pure148>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isAccelerometerEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isAccelerometerEnabled<DefaultConv, Derived, Base, types::pure148>::value, DefaultConv>(
				"cocos2d::CCLayer::isAccelerometerEnabled", 
				(void*)addresses::address148()
			);
		}

		if constexpr (compare::isKeyboardEnabled<Derived, Base, types::pure149>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isKeyboardEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isKeyboardEnabled<DefaultConv, Derived, Base, types::pure149>::value, DefaultConv>(
				"cocos2d::CCLayer::isKeyboardEnabled", 
				(void*)addresses::address149()
			);
		}

		if constexpr (compare::isKeypadEnabled<Derived, Base, types::pure150>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isKeypadEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isKeypadEnabled<DefaultConv, Derived, Base, types::pure150>::value, DefaultConv>(
				"cocos2d::CCLayer::isKeypadEnabled", 
				(void*)addresses::address150()
			);
		}

		if constexpr (compare::isMouseEnabled<Derived, Base, types::pure151>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isMouseEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isMouseEnabled<DefaultConv, Derived, Base, types::pure151>::value, DefaultConv>(
				"cocos2d::CCLayer::isMouseEnabled", 
				(void*)addresses::address151()
			);
		}

		if constexpr (compare::isTouchEnabled<Derived, Base, types::pure152>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::isTouchEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isTouchEnabled<DefaultConv, Derived, Base, types::pure152>::value, DefaultConv>(
				"cocos2d::CCLayer::isTouchEnabled", 
				(void*)addresses::address152()
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure153>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure153>::value, DefaultConv>(
				"cocos2d::CCLayer::keyBackClicked", 
				(void*)addresses::address153()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure154>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure154>::value, DefaultConv>(
				"cocos2d::CCLayer::keyDown", 
				(void*)addresses::address154()
			);
		}

		if constexpr (compare::keyMenuClicked<Derived, Base, types::pure155>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::keyMenuClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyMenuClicked<DefaultConv, Derived, Base, types::pure155>::value, DefaultConv>(
				"cocos2d::CCLayer::keyMenuClicked", 
				(void*)addresses::address155()
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure156>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure156>::value, DefaultConv>(
				"cocos2d::CCLayer::onEnter", 
				(void*)addresses::address156()
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure157>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure157>::value, DefaultConv>(
				"cocos2d::CCLayer::onEnterTransitionDidFinish", 
				(void*)addresses::address157()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure158>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure158>::value, DefaultConv>(
				"cocos2d::CCLayer::onExit", 
				(void*)addresses::address158()
			);
		}

		if constexpr (compare::registerScriptTouchHandler<Derived, Base, types::pure159>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::registerScriptTouchHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerScriptTouchHandler<DefaultConv, Derived, Base, types::pure159>::value, DefaultConv>(
				"cocos2d::CCLayer::registerScriptTouchHandler", 
				(void*)addresses::address159()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure160>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure160>::value, DefaultConv>(
				"cocos2d::CCLayer::registerWithTouchDispatcher", 
				(void*)addresses::address160()
			);
		}

		if constexpr (compare::setAccelerometerEnabled<Derived, Base, types::pure161>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setAccelerometerEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAccelerometerEnabled<DefaultConv, Derived, Base, types::pure161>::value, DefaultConv>(
				"cocos2d::CCLayer::setAccelerometerEnabled", 
				(void*)addresses::address161()
			);
		}

		if constexpr (compare::setAccelerometerInterval<Derived, Base, types::pure162>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setAccelerometerInterval", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAccelerometerInterval<DefaultConv, Derived, Base, types::pure162>::value, DefaultConv>(
				"cocos2d::CCLayer::setAccelerometerInterval", 
				(void*)addresses::address162()
			);
		}

		if constexpr (compare::setKeyboardEnabled<Derived, Base, types::pure163>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setKeyboardEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setKeyboardEnabled<DefaultConv, Derived, Base, types::pure163>::value, DefaultConv>(
				"cocos2d::CCLayer::setKeyboardEnabled", 
				(void*)addresses::address163()
			);
		}

		if constexpr (compare::setKeypadEnabled<Derived, Base, types::pure164>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setKeypadEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setKeypadEnabled<DefaultConv, Derived, Base, types::pure164>::value, DefaultConv>(
				"cocos2d::CCLayer::setKeypadEnabled", 
				(void*)addresses::address164()
			);
		}

		if constexpr (compare::setMouseEnabled<Derived, Base, types::pure165>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setMouseEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setMouseEnabled<DefaultConv, Derived, Base, types::pure165>::value, DefaultConv>(
				"cocos2d::CCLayer::setMouseEnabled", 
				(void*)addresses::address165()
			);
		}

		if constexpr (compare::setTouchEnabled<Derived, Base, types::pure166>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setTouchEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTouchEnabled<DefaultConv, Derived, Base, types::pure166>::value, DefaultConv>(
				"cocos2d::CCLayer::setTouchEnabled", 
				(void*)addresses::address166()
			);
		}

		if constexpr (compare::setTouchMode<Derived, Base, types::pure167>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setTouchMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTouchMode<DefaultConv, Derived, Base, types::pure167>::value, DefaultConv>(
				"cocos2d::CCLayer::setTouchMode", 
				(void*)addresses::address167()
			);
		}

		if constexpr (compare::setTouchPriority<Derived, Base, types::pure168>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::setTouchPriority", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTouchPriority<DefaultConv, Derived, Base, types::pure168>::value, DefaultConv>(
				"cocos2d::CCLayer::setTouchPriority", 
				(void*)addresses::address168()
			);
		}

		if constexpr (compare::unregisterScriptTouchHandler<Derived, Base, types::pure169>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::unregisterScriptTouchHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unregisterScriptTouchHandler<DefaultConv, Derived, Base, types::pure169>::value, DefaultConv>(
				"cocos2d::CCLayer::unregisterScriptTouchHandler", 
				(void*)addresses::address169()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure170>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure170>::value, DefaultConv>(
				"cocos2d::CCLayer::destructor", 
				(void*)addresses::address170()
			);
		}

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
			Interface::get()->addHook<wrap::textForColorIdx<DefaultConv, Derived, Base, types::pure1279>::value, DefaultConv>(
				"GJSpecialColorSelect::textForColorIdx", 
				(void*)addresses::address1279()
			);
		}

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure260>::value, DefaultConv>(
				"cocos2d::CCMoveBy::create", 
				(void*)addresses::address260()
			);
		}

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
			Interface::get()->addHook<wrap::selected<DefaultConv, Derived, Base, types::pure239>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::selected", 
				(void*)addresses::address239()
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure240>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unselected<DefaultConv, Derived, Base, types::pure240>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::unselected", 
				(void*)addresses::address240()
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure241>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setEnabled<DefaultConv, Derived, Base, types::pure241>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::setEnabled", 
				(void*)addresses::address241()
			);
		}

		if constexpr (compare::getNormalImage<Derived, Base, types::pure242>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::getNormalImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getNormalImage<DefaultConv, Derived, Base, types::pure242>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::getNormalImage", 
				(void*)addresses::address242()
			);
		}

		if constexpr (compare::setNormalImage<Derived, Base, types::pure243>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setNormalImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setNormalImage<DefaultConv, Derived, Base, types::pure243>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::setNormalImage", 
				(void*)addresses::address243()
			);
		}

		if constexpr (compare::getSelectedImage<Derived, Base, types::pure244>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::getSelectedImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSelectedImage<DefaultConv, Derived, Base, types::pure244>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::getSelectedImage", 
				(void*)addresses::address244()
			);
		}

		if constexpr (compare::setSelectedImage<Derived, Base, types::pure245>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setSelectedImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSelectedImage<DefaultConv, Derived, Base, types::pure245>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::setSelectedImage", 
				(void*)addresses::address245()
			);
		}

		if constexpr (compare::getDisabledImage<Derived, Base, types::pure246>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::getDisabledImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisabledImage<DefaultConv, Derived, Base, types::pure246>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::getDisabledImage", 
				(void*)addresses::address246()
			);
		}

		if constexpr (compare::setDisabledImage<Derived, Base, types::pure247>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::setDisabledImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDisabledImage<DefaultConv, Derived, Base, types::pure247>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::setDisabledImage", 
				(void*)addresses::address247()
			);
		}

		if constexpr (compare::updateImagesVisibility<Derived, Base, types::pure248>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::updateImagesVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateImagesVisibility<DefaultConv, Derived, Base, types::pure248>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::updateImagesVisibility", 
				(void*)addresses::address248()
			);
		}

		if constexpr (compare::initWithNormalSprite<Derived, Base, types::pure249>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::initWithNormalSprite", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithNormalSprite<DefaultConv, Derived, Base, types::pure249>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::initWithNormalSprite", 
				(void*)addresses::address249()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure250>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure250>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::create", 
				(void*)addresses::address250()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure251>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure251>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::create", 
				(void*)addresses::address251()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure252>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure252>::value, DefaultConv>(
				"cocos2d::CCMenuItemSprite::create", 
				(void*)addresses::address252()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJSpiderSprite> : ModifyBase<Modify<Derived, GJSpiderSprite>> {
	using ModifyBase<Modify<Derived, GJSpiderSprite>>::ModifyBase;
	using Base = GJSpiderSprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure1280>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSpiderSprite::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1280>::value, DefaultConv>(
				"GJSpiderSprite::destructor", 
				(void*)addresses::address1280()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1281>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSpiderSprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1281>::value, DefaultConv>(
				"GJSpiderSprite::init", 
				(void*)addresses::address1281()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1282>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSpiderSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1282>::value, DefaultConv>(
				"GJSpiderSprite::create", 
				(void*)addresses::address1282()
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

		if constexpr (compare::destructor<Derived, Base, types::pure1264>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJListLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1264>::value, DefaultConv>(
				"GJListLayer::destructor", 
				(void*)addresses::address1264()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1265>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJListLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1265>::value, DefaultConv>(
				"GJListLayer::create", 
				(void*)addresses::address1265()
			);
		}

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
			Interface::get()->addHook<wrap::dispatchKeyboardMSG<DefaultConv, Derived, Base, types::pure116>::value, DefaultConv>(
				"cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG", 
				(void*)addresses::address116()
			);
		}

		if constexpr (compare::keyToString<Derived, Base, types::pure117>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardDispatcher::keyToString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyToString<DefaultConv, Derived, Base, types::pure117>::value, DefaultConv>(
				"cocos2d::CCKeyboardDispatcher::keyToString", 
				(void*)addresses::address117()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJComment> : ModifyBase<Modify<Derived, GJComment>> {
	using ModifyBase<Modify<Derived, GJComment>>::ModifyBase;
	using Base = GJComment;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure1123>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJComment::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1123>::value, DefaultConv>(
				"GJComment::destructor", 
				(void*)addresses::address1123()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1124>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJComment::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1124>::value, DefaultConv>(
				"GJComment::init", 
				(void*)addresses::address1124()
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
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure229>::value, DefaultConv>(
				"cocos2d::CCMenuItemImage::init", 
				(void*)addresses::address229()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetupTouchTogglePopup> : ModifyBase<Modify<Derived, SetupTouchTogglePopup>> {
	using ModifyBase<Modify<Derived, SetupTouchTogglePopup>>::ModifyBase;
	using Base = SetupTouchTogglePopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2095>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupTouchTogglePopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2095>::value, DefaultConv>(
				"SetupTouchTogglePopup::create", 
				(void*)addresses::address2095()
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2096>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupTouchTogglePopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2096>::value, DefaultConv>(
				"SetupTouchTogglePopup::onTargetIDArrow", 
				(void*)addresses::address2096()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2097>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupTouchTogglePopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2097>::value, DefaultConv>(
				"SetupTouchTogglePopup::textChanged", 
				(void*)addresses::address2097()
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2098>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupTouchTogglePopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2098>::value, DefaultConv>(
				"SetupTouchTogglePopup::updateTargetID", 
				(void*)addresses::address2098()
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
			Interface::get()->addHook<wrap::sharedFileUtils<DefaultConv, Derived, Base, types::pure106>::value, DefaultConv>(
				"cocos2d::CCFileUtils::sharedFileUtils", 
				(void*)addresses::address106()
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

		if constexpr (compare::constructor<Derived, Base, types::pure262>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure262>::value, DefaultConv>(
				"cocos2d::CCNode::constructor", 
				(void*)addresses::address262()
			);
		}

		if constexpr (compare::_setZOrder<Derived, Base, types::pure263>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::_setZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::_setZOrder<DefaultConv, Derived, Base, types::pure263>::value, DefaultConv>(
				"cocos2d::CCNode::_setZOrder", 
				(void*)addresses::address263()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure264>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure264>::value, DefaultConv>(
				"cocos2d::CCNode::addChild", 
				(void*)addresses::address264()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure265>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure265>::value, DefaultConv>(
				"cocos2d::CCNode::addChild", 
				(void*)addresses::address265()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure266>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure266>::value, DefaultConv>(
				"cocos2d::CCNode::addChild", 
				(void*)addresses::address266()
			);
		}

		if constexpr (compare::addComponent<Derived, Base, types::pure267>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::addComponent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addComponent<DefaultConv, Derived, Base, types::pure267>::value, DefaultConv>(
				"cocos2d::CCNode::addComponent", 
				(void*)addresses::address267()
			);
		}

		if constexpr (compare::cleanup<Derived, Base, types::pure268>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::cleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::cleanup<DefaultConv, Derived, Base, types::pure268>::value, DefaultConv>(
				"cocos2d::CCNode::cleanup", 
				(void*)addresses::address268()
			);
		}

		if constexpr (compare::convertToNodeSpace<Derived, Base, types::pure269>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::convertToNodeSpace", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::convertToNodeSpace<DefaultConv, Derived, Base, types::pure269>::value, DefaultConv>(
				"cocos2d::CCNode::convertToNodeSpace", 
				(void*)addresses::address269()
			);
		}

		if constexpr (compare::convertToWorldSpace<Derived, Base, types::pure270>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::convertToWorldSpace", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::convertToWorldSpace<DefaultConv, Derived, Base, types::pure270>::value, DefaultConv>(
				"cocos2d::CCNode::convertToWorldSpace", 
				(void*)addresses::address270()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure271>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure271>::value, DefaultConv>(
				"cocos2d::CCNode::create", 
				(void*)addresses::address271()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure272>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure272>::value, DefaultConv>(
				"cocos2d::CCNode::draw", 
				(void*)addresses::address272()
			);
		}

		if constexpr (compare::getActionByTag<Derived, Base, types::pure273>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getActionByTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getActionByTag<DefaultConv, Derived, Base, types::pure273>::value, DefaultConv>(
				"cocos2d::CCNode::getActionByTag", 
				(void*)addresses::address273()
			);
		}

		if constexpr (compare::getActionManager<Derived, Base, types::pure274>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getActionManager<DefaultConv, Derived, Base, types::pure274>::value, DefaultConv>(
				"cocos2d::CCNode::getActionManager", 
				(void*)addresses::address274()
			);
		}

		if constexpr (compare::getAnchorPoint<Derived, Base, types::pure275>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAnchorPoint<DefaultConv, Derived, Base, types::pure275>::value, DefaultConv>(
				"cocos2d::CCNode::getAnchorPoint", 
				(void*)addresses::address275()
			);
		}

		if constexpr (compare::getAnchorPointInPoints<Derived, Base, types::pure276>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getAnchorPointInPoints", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAnchorPointInPoints<DefaultConv, Derived, Base, types::pure276>::value, DefaultConv>(
				"cocos2d::CCNode::getAnchorPointInPoints", 
				(void*)addresses::address276()
			);
		}

		if constexpr (compare::getCamera<Derived, Base, types::pure277>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getCamera", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCamera<DefaultConv, Derived, Base, types::pure277>::value, DefaultConv>(
				"cocos2d::CCNode::getCamera", 
				(void*)addresses::address277()
			);
		}

		if constexpr (compare::getChildByTag<Derived, Base, types::pure278>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getChildByTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getChildByTag<DefaultConv, Derived, Base, types::pure278>::value, DefaultConv>(
				"cocos2d::CCNode::getChildByTag", 
				(void*)addresses::address278()
			);
		}

		if constexpr (compare::getChildren<Derived, Base, types::pure279>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getChildren", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getChildren<DefaultConv, Derived, Base, types::pure279>::value, DefaultConv>(
				"cocos2d::CCNode::getChildren", 
				(void*)addresses::address279()
			);
		}

		if constexpr (compare::getChildrenCount<Derived, Base, types::pure280>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getChildrenCount", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getChildrenCount<DefaultConv, Derived, Base, types::pure280>::value, DefaultConv>(
				"cocos2d::CCNode::getChildrenCount", 
				(void*)addresses::address280()
			);
		}

		if constexpr (compare::getContentSize<Derived, Base, types::pure281>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getContentSize<DefaultConv, Derived, Base, types::pure281>::value, DefaultConv>(
				"cocos2d::CCNode::getContentSize", 
				(void*)addresses::address281()
			);
		}

		if constexpr (compare::getGLServerState<Derived, Base, types::pure282>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getGLServerState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGLServerState<DefaultConv, Derived, Base, types::pure282>::value, DefaultConv>(
				"cocos2d::CCNode::getGLServerState", 
				(void*)addresses::address282()
			);
		}

		if constexpr (compare::getGrid<Derived, Base, types::pure283>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getGrid", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getGrid<DefaultConv, Derived, Base, types::pure283>::value, DefaultConv>(
				"cocos2d::CCNode::getGrid", 
				(void*)addresses::address283()
			);
		}

		if constexpr (compare::getOrderOfArrival<Derived, Base, types::pure284>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getOrderOfArrival", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOrderOfArrival<DefaultConv, Derived, Base, types::pure284>::value, DefaultConv>(
				"cocos2d::CCNode::getOrderOfArrival", 
				(void*)addresses::address284()
			);
		}

		if constexpr (compare::getParent<Derived, Base, types::pure285>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getParent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getParent<DefaultConv, Derived, Base, types::pure285>::value, DefaultConv>(
				"cocos2d::CCNode::getParent", 
				(void*)addresses::address285()
			);
		}

		if constexpr (compare::getPosition<Derived, Base, types::pure286>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPosition<DefaultConv, Derived, Base, types::pure286>::value, DefaultConv>(
				"cocos2d::CCNode::getPosition", 
				(void*)addresses::address286()
			);
		}

		if constexpr (compare::getPosition<Derived, Base, types::pure287>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPosition<DefaultConv, Derived, Base, types::pure287>::value, DefaultConv>(
				"cocos2d::CCNode::getPosition", 
				(void*)addresses::address287()
			);
		}

		if constexpr (compare::getPositionX<Derived, Base, types::pure288>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPositionX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPositionX<DefaultConv, Derived, Base, types::pure288>::value, DefaultConv>(
				"cocos2d::CCNode::getPositionX", 
				(void*)addresses::address288()
			);
		}

		if constexpr (compare::getPositionY<Derived, Base, types::pure289>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getPositionY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPositionY<DefaultConv, Derived, Base, types::pure289>::value, DefaultConv>(
				"cocos2d::CCNode::getPositionY", 
				(void*)addresses::address289()
			);
		}

		if constexpr (compare::getRotation<Derived, Base, types::pure290>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRotation<DefaultConv, Derived, Base, types::pure290>::value, DefaultConv>(
				"cocos2d::CCNode::getRotation", 
				(void*)addresses::address290()
			);
		}

		if constexpr (compare::getRotationX<Derived, Base, types::pure291>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getRotationX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRotationX<DefaultConv, Derived, Base, types::pure291>::value, DefaultConv>(
				"cocos2d::CCNode::getRotationX", 
				(void*)addresses::address291()
			);
		}

		if constexpr (compare::getRotationY<Derived, Base, types::pure292>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getRotationY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRotationY<DefaultConv, Derived, Base, types::pure292>::value, DefaultConv>(
				"cocos2d::CCNode::getRotationY", 
				(void*)addresses::address292()
			);
		}

		if constexpr (compare::getScale<Derived, Base, types::pure293>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScale<DefaultConv, Derived, Base, types::pure293>::value, DefaultConv>(
				"cocos2d::CCNode::getScale", 
				(void*)addresses::address293()
			);
		}

		if constexpr (compare::getScaleX<Derived, Base, types::pure294>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScaleX<DefaultConv, Derived, Base, types::pure294>::value, DefaultConv>(
				"cocos2d::CCNode::getScaleX", 
				(void*)addresses::address294()
			);
		}

		if constexpr (compare::getScaleY<Derived, Base, types::pure295>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScaleY<DefaultConv, Derived, Base, types::pure295>::value, DefaultConv>(
				"cocos2d::CCNode::getScaleY", 
				(void*)addresses::address295()
			);
		}

		if constexpr (compare::getScaledContentSize<Derived, Base, types::pure296>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScaledContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScaledContentSize<DefaultConv, Derived, Base, types::pure296>::value, DefaultConv>(
				"cocos2d::CCNode::getScaledContentSize", 
				(void*)addresses::address296()
			);
		}

		if constexpr (compare::getScheduler<Derived, Base, types::pure297>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScheduler<DefaultConv, Derived, Base, types::pure297>::value, DefaultConv>(
				"cocos2d::CCNode::getScheduler", 
				(void*)addresses::address297()
			);
		}

		if constexpr (compare::getShaderProgram<Derived, Base, types::pure298>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getShaderProgram<DefaultConv, Derived, Base, types::pure298>::value, DefaultConv>(
				"cocos2d::CCNode::getShaderProgram", 
				(void*)addresses::address298()
			);
		}

		if constexpr (compare::getSkewX<Derived, Base, types::pure299>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getSkewX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSkewX<DefaultConv, Derived, Base, types::pure299>::value, DefaultConv>(
				"cocos2d::CCNode::getSkewX", 
				(void*)addresses::address299()
			);
		}

		if constexpr (compare::getSkewY<Derived, Base, types::pure300>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getSkewY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSkewY<DefaultConv, Derived, Base, types::pure300>::value, DefaultConv>(
				"cocos2d::CCNode::getSkewY", 
				(void*)addresses::address300()
			);
		}

		if constexpr (compare::getUserData<Derived, Base, types::pure301>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getUserData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getUserData<DefaultConv, Derived, Base, types::pure301>::value, DefaultConv>(
				"cocos2d::CCNode::getUserData", 
				(void*)addresses::address301()
			);
		}

		if constexpr (compare::getUserObject<Derived, Base, types::pure302>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getUserObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getUserObject<DefaultConv, Derived, Base, types::pure302>::value, DefaultConv>(
				"cocos2d::CCNode::getUserObject", 
				(void*)addresses::address302()
			);
		}

		if constexpr (compare::getVertexZ<Derived, Base, types::pure303>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getVertexZ", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getVertexZ<DefaultConv, Derived, Base, types::pure303>::value, DefaultConv>(
				"cocos2d::CCNode::getVertexZ", 
				(void*)addresses::address303()
			);
		}

		if constexpr (compare::getZOrder<Derived, Base, types::pure304>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::getZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getZOrder<DefaultConv, Derived, Base, types::pure304>::value, DefaultConv>(
				"cocos2d::CCNode::getZOrder", 
				(void*)addresses::address304()
			);
		}

		if constexpr (compare::ignoreAnchorPointForPosition<Derived, Base, types::pure305>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::ignoreAnchorPointForPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ignoreAnchorPointForPosition<DefaultConv, Derived, Base, types::pure305>::value, DefaultConv>(
				"cocos2d::CCNode::ignoreAnchorPointForPosition", 
				(void*)addresses::address305()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure306>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure306>::value, DefaultConv>(
				"cocos2d::CCNode::init", 
				(void*)addresses::address306()
			);
		}

		if constexpr (compare::isIgnoreAnchorPointForPosition<Derived, Base, types::pure307>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::isIgnoreAnchorPointForPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isIgnoreAnchorPointForPosition<DefaultConv, Derived, Base, types::pure307>::value, DefaultConv>(
				"cocos2d::CCNode::isIgnoreAnchorPointForPosition", 
				(void*)addresses::address307()
			);
		}

		if constexpr (compare::isRunning<Derived, Base, types::pure308>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::isRunning", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isRunning<DefaultConv, Derived, Base, types::pure308>::value, DefaultConv>(
				"cocos2d::CCNode::isRunning", 
				(void*)addresses::address308()
			);
		}

		if constexpr (compare::isVisible<Derived, Base, types::pure309>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::isVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isVisible<DefaultConv, Derived, Base, types::pure309>::value, DefaultConv>(
				"cocos2d::CCNode::isVisible", 
				(void*)addresses::address309()
			);
		}

		if constexpr (compare::nodeToParentTransform<Derived, Base, types::pure310>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::nodeToParentTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::nodeToParentTransform<DefaultConv, Derived, Base, types::pure310>::value, DefaultConv>(
				"cocos2d::CCNode::nodeToParentTransform", 
				(void*)addresses::address310()
			);
		}

		if constexpr (compare::nodeToWorldTransform<Derived, Base, types::pure311>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::nodeToWorldTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::nodeToWorldTransform<DefaultConv, Derived, Base, types::pure311>::value, DefaultConv>(
				"cocos2d::CCNode::nodeToWorldTransform", 
				(void*)addresses::address311()
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure312>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure312>::value, DefaultConv>(
				"cocos2d::CCNode::onEnter", 
				(void*)addresses::address312()
			);
		}

		if constexpr (compare::onEnterTransitionDidFinish<Derived, Base, types::pure313>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onEnterTransitionDidFinish", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure313>::value, DefaultConv>(
				"cocos2d::CCNode::onEnterTransitionDidFinish", 
				(void*)addresses::address313()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure314>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure314>::value, DefaultConv>(
				"cocos2d::CCNode::onExit", 
				(void*)addresses::address314()
			);
		}

		if constexpr (compare::onExitTransitionDidStart<Derived, Base, types::pure315>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::onExitTransitionDidStart", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExitTransitionDidStart<DefaultConv, Derived, Base, types::pure315>::value, DefaultConv>(
				"cocos2d::CCNode::onExitTransitionDidStart", 
				(void*)addresses::address315()
			);
		}

		if constexpr (compare::parentToNodeTransform<Derived, Base, types::pure316>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::parentToNodeTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::parentToNodeTransform<DefaultConv, Derived, Base, types::pure316>::value, DefaultConv>(
				"cocos2d::CCNode::parentToNodeTransform", 
				(void*)addresses::address316()
			);
		}

		if constexpr (compare::pauseSchedulerAndActions<Derived, Base, types::pure317>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::pauseSchedulerAndActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pauseSchedulerAndActions<DefaultConv, Derived, Base, types::pure317>::value, DefaultConv>(
				"cocos2d::CCNode::pauseSchedulerAndActions", 
				(void*)addresses::address317()
			);
		}

		if constexpr (compare::registerScriptHandler<Derived, Base, types::pure318>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::registerScriptHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerScriptHandler<DefaultConv, Derived, Base, types::pure318>::value, DefaultConv>(
				"cocos2d::CCNode::registerScriptHandler", 
				(void*)addresses::address318()
			);
		}

		if constexpr (compare::removeAllChildren<Derived, Base, types::pure319>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeAllChildren", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllChildren<DefaultConv, Derived, Base, types::pure319>::value, DefaultConv>(
				"cocos2d::CCNode::removeAllChildren", 
				(void*)addresses::address319()
			);
		}

		if constexpr (compare::removeAllChildrenWithCleanup<Derived, Base, types::pure320>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeAllChildrenWithCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllChildrenWithCleanup<DefaultConv, Derived, Base, types::pure320>::value, DefaultConv>(
				"cocos2d::CCNode::removeAllChildrenWithCleanup", 
				(void*)addresses::address320()
			);
		}

		if constexpr (compare::removeAllComponents<Derived, Base, types::pure321>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeAllComponents", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllComponents<DefaultConv, Derived, Base, types::pure321>::value, DefaultConv>(
				"cocos2d::CCNode::removeAllComponents", 
				(void*)addresses::address321()
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure322>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChild<DefaultConv, Derived, Base, types::pure322>::value, DefaultConv>(
				"cocos2d::CCNode::removeChild", 
				(void*)addresses::address322()
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure323>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChild<DefaultConv, Derived, Base, types::pure323>::value, DefaultConv>(
				"cocos2d::CCNode::removeChild", 
				(void*)addresses::address323()
			);
		}

		if constexpr (compare::removeChildByTag<Derived, Base, types::pure324>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChildByTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChildByTag<DefaultConv, Derived, Base, types::pure324>::value, DefaultConv>(
				"cocos2d::CCNode::removeChildByTag", 
				(void*)addresses::address324()
			);
		}

		if constexpr (compare::removeChildByTag<Derived, Base, types::pure325>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeChildByTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChildByTag<DefaultConv, Derived, Base, types::pure325>::value, DefaultConv>(
				"cocos2d::CCNode::removeChildByTag", 
				(void*)addresses::address325()
			);
		}

		if constexpr (compare::removeComponent<Derived, Base, types::pure326>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeComponent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeComponent<DefaultConv, Derived, Base, types::pure326>::value, DefaultConv>(
				"cocos2d::CCNode::removeComponent", 
				(void*)addresses::address326()
			);
		}

		if constexpr (compare::removeComponent<Derived, Base, types::pure327>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeComponent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeComponent<DefaultConv, Derived, Base, types::pure327>::value, DefaultConv>(
				"cocos2d::CCNode::removeComponent", 
				(void*)addresses::address327()
			);
		}

		if constexpr (compare::removeFromParent<Derived, Base, types::pure328>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeFromParent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeFromParent<DefaultConv, Derived, Base, types::pure328>::value, DefaultConv>(
				"cocos2d::CCNode::removeFromParent", 
				(void*)addresses::address328()
			);
		}

		if constexpr (compare::removeFromParentAndCleanup<Derived, Base, types::pure329>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeFromParentAndCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeFromParentAndCleanup<DefaultConv, Derived, Base, types::pure329>::value, DefaultConv>(
				"cocos2d::CCNode::removeFromParentAndCleanup", 
				(void*)addresses::address329()
			);
		}

		if constexpr (compare::removeMeAndCleanup<Derived, Base, types::pure330>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::removeMeAndCleanup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeMeAndCleanup<DefaultConv, Derived, Base, types::pure330>::value, DefaultConv>(
				"cocos2d::CCNode::removeMeAndCleanup", 
				(void*)addresses::address330()
			);
		}

		if constexpr (compare::reorderChild<Derived, Base, types::pure331>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::reorderChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reorderChild<DefaultConv, Derived, Base, types::pure331>::value, DefaultConv>(
				"cocos2d::CCNode::reorderChild", 
				(void*)addresses::address331()
			);
		}

		if constexpr (compare::resumeSchedulerAndActions<Derived, Base, types::pure332>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::resumeSchedulerAndActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resumeSchedulerAndActions<DefaultConv, Derived, Base, types::pure332>::value, DefaultConv>(
				"cocos2d::CCNode::resumeSchedulerAndActions", 
				(void*)addresses::address332()
			);
		}

		if constexpr (compare::runAction<Derived, Base, types::pure333>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::runAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runAction<DefaultConv, Derived, Base, types::pure333>::value, DefaultConv>(
				"cocos2d::CCNode::runAction", 
				(void*)addresses::address333()
			);
		}

		if constexpr (compare::schedule<Derived, Base, types::pure334>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::schedule", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::schedule<DefaultConv, Derived, Base, types::pure334>::value, DefaultConv>(
				"cocos2d::CCNode::schedule", 
				(void*)addresses::address334()
			);
		}

		if constexpr (compare::schedule<Derived, Base, types::pure335>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::schedule", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::schedule<DefaultConv, Derived, Base, types::pure335>::value, DefaultConv>(
				"cocos2d::CCNode::schedule", 
				(void*)addresses::address335()
			);
		}

		if constexpr (compare::scheduleUpdate<Derived, Base, types::pure336>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::scheduleUpdate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scheduleUpdate<DefaultConv, Derived, Base, types::pure336>::value, DefaultConv>(
				"cocos2d::CCNode::scheduleUpdate", 
				(void*)addresses::address336()
			);
		}

		if constexpr (compare::setActionManager<Derived, Base, types::pure337>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setActionManager<DefaultConv, Derived, Base, types::pure337>::value, DefaultConv>(
				"cocos2d::CCNode::setActionManager", 
				(void*)addresses::address337()
			);
		}

		if constexpr (compare::setAnchorPoint<Derived, Base, types::pure338>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setAnchorPoint", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAnchorPoint<DefaultConv, Derived, Base, types::pure338>::value, DefaultConv>(
				"cocos2d::CCNode::setAnchorPoint", 
				(void*)addresses::address338()
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure339>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setContentSize<DefaultConv, Derived, Base, types::pure339>::value, DefaultConv>(
				"cocos2d::CCNode::setContentSize", 
				(void*)addresses::address339()
			);
		}

		if constexpr (compare::setGLServerState<Derived, Base, types::pure340>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setGLServerState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setGLServerState<DefaultConv, Derived, Base, types::pure340>::value, DefaultConv>(
				"cocos2d::CCNode::setGLServerState", 
				(void*)addresses::address340()
			);
		}

		if constexpr (compare::setGrid<Derived, Base, types::pure341>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setGrid", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setGrid<DefaultConv, Derived, Base, types::pure341>::value, DefaultConv>(
				"cocos2d::CCNode::setGrid", 
				(void*)addresses::address341()
			);
		}

		if constexpr (compare::setOrderOfArrival<Derived, Base, types::pure342>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setOrderOfArrival", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOrderOfArrival<DefaultConv, Derived, Base, types::pure342>::value, DefaultConv>(
				"cocos2d::CCNode::setOrderOfArrival", 
				(void*)addresses::address342()
			);
		}

		if constexpr (compare::setParent<Derived, Base, types::pure343>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setParent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setParent<DefaultConv, Derived, Base, types::pure343>::value, DefaultConv>(
				"cocos2d::CCNode::setParent", 
				(void*)addresses::address343()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure344>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure344>::value, DefaultConv>(
				"cocos2d::CCNode::setPosition", 
				(void*)addresses::address344()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure345>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure345>::value, DefaultConv>(
				"cocos2d::CCNode::setPosition", 
				(void*)addresses::address345()
			);
		}

		if constexpr (compare::setPositionX<Derived, Base, types::pure346>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPositionX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPositionX<DefaultConv, Derived, Base, types::pure346>::value, DefaultConv>(
				"cocos2d::CCNode::setPositionX", 
				(void*)addresses::address346()
			);
		}

		if constexpr (compare::setPositionY<Derived, Base, types::pure347>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setPositionY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPositionY<DefaultConv, Derived, Base, types::pure347>::value, DefaultConv>(
				"cocos2d::CCNode::setPositionY", 
				(void*)addresses::address347()
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure348>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotation<DefaultConv, Derived, Base, types::pure348>::value, DefaultConv>(
				"cocos2d::CCNode::setRotation", 
				(void*)addresses::address348()
			);
		}

		if constexpr (compare::setRotationX<Derived, Base, types::pure349>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setRotationX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotationX<DefaultConv, Derived, Base, types::pure349>::value, DefaultConv>(
				"cocos2d::CCNode::setRotationX", 
				(void*)addresses::address349()
			);
		}

		if constexpr (compare::setRotationY<Derived, Base, types::pure350>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setRotationY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotationY<DefaultConv, Derived, Base, types::pure350>::value, DefaultConv>(
				"cocos2d::CCNode::setRotationY", 
				(void*)addresses::address350()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure351>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure351>::value, DefaultConv>(
				"cocos2d::CCNode::setScale", 
				(void*)addresses::address351()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure352>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure352>::value, DefaultConv>(
				"cocos2d::CCNode::setScale", 
				(void*)addresses::address352()
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure353>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleX<DefaultConv, Derived, Base, types::pure353>::value, DefaultConv>(
				"cocos2d::CCNode::setScaleX", 
				(void*)addresses::address353()
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure354>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleY<DefaultConv, Derived, Base, types::pure354>::value, DefaultConv>(
				"cocos2d::CCNode::setScaleY", 
				(void*)addresses::address354()
			);
		}

		if constexpr (compare::setScheduler<Derived, Base, types::pure355>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScheduler<DefaultConv, Derived, Base, types::pure355>::value, DefaultConv>(
				"cocos2d::CCNode::setScheduler", 
				(void*)addresses::address355()
			);
		}

		if constexpr (compare::setShaderProgram<Derived, Base, types::pure356>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setShaderProgram", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setShaderProgram<DefaultConv, Derived, Base, types::pure356>::value, DefaultConv>(
				"cocos2d::CCNode::setShaderProgram", 
				(void*)addresses::address356()
			);
		}

		if constexpr (compare::setSkewX<Derived, Base, types::pure357>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setSkewX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSkewX<DefaultConv, Derived, Base, types::pure357>::value, DefaultConv>(
				"cocos2d::CCNode::setSkewX", 
				(void*)addresses::address357()
			);
		}

		if constexpr (compare::setSkewY<Derived, Base, types::pure358>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setSkewY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSkewY<DefaultConv, Derived, Base, types::pure358>::value, DefaultConv>(
				"cocos2d::CCNode::setSkewY", 
				(void*)addresses::address358()
			);
		}

		if constexpr (compare::setUserData<Derived, Base, types::pure359>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setUserData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setUserData<DefaultConv, Derived, Base, types::pure359>::value, DefaultConv>(
				"cocos2d::CCNode::setUserData", 
				(void*)addresses::address359()
			);
		}

		if constexpr (compare::setUserObject<Derived, Base, types::pure360>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setUserObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setUserObject<DefaultConv, Derived, Base, types::pure360>::value, DefaultConv>(
				"cocos2d::CCNode::setUserObject", 
				(void*)addresses::address360()
			);
		}

		if constexpr (compare::setVertexZ<Derived, Base, types::pure361>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setVertexZ", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVertexZ<DefaultConv, Derived, Base, types::pure361>::value, DefaultConv>(
				"cocos2d::CCNode::setVertexZ", 
				(void*)addresses::address361()
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure362>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVisible<DefaultConv, Derived, Base, types::pure362>::value, DefaultConv>(
				"cocos2d::CCNode::setVisible", 
				(void*)addresses::address362()
			);
		}

		if constexpr (compare::setZOrder<Derived, Base, types::pure363>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::setZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setZOrder<DefaultConv, Derived, Base, types::pure363>::value, DefaultConv>(
				"cocos2d::CCNode::setZOrder", 
				(void*)addresses::address363()
			);
		}

		if constexpr (compare::sortAllChildren<Derived, Base, types::pure364>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::sortAllChildren", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sortAllChildren<DefaultConv, Derived, Base, types::pure364>::value, DefaultConv>(
				"cocos2d::CCNode::sortAllChildren", 
				(void*)addresses::address364()
			);
		}

		if constexpr (compare::stopActionByTag<Derived, Base, types::pure365>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::stopActionByTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopActionByTag<DefaultConv, Derived, Base, types::pure365>::value, DefaultConv>(
				"cocos2d::CCNode::stopActionByTag", 
				(void*)addresses::address365()
			);
		}

		if constexpr (compare::stopAllActions<Derived, Base, types::pure366>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::stopAllActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopAllActions<DefaultConv, Derived, Base, types::pure366>::value, DefaultConv>(
				"cocos2d::CCNode::stopAllActions", 
				(void*)addresses::address366()
			);
		}

		if constexpr (compare::unregisterScriptHandler<Derived, Base, types::pure367>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unregisterScriptHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unregisterScriptHandler<DefaultConv, Derived, Base, types::pure367>::value, DefaultConv>(
				"cocos2d::CCNode::unregisterScriptHandler", 
				(void*)addresses::address367()
			);
		}

		if constexpr (compare::unschedule<Derived, Base, types::pure368>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unschedule", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unschedule<DefaultConv, Derived, Base, types::pure368>::value, DefaultConv>(
				"cocos2d::CCNode::unschedule", 
				(void*)addresses::address368()
			);
		}

		if constexpr (compare::unscheduleAllSelectors<Derived, Base, types::pure369>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unscheduleAllSelectors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unscheduleAllSelectors<DefaultConv, Derived, Base, types::pure369>::value, DefaultConv>(
				"cocos2d::CCNode::unscheduleAllSelectors", 
				(void*)addresses::address369()
			);
		}

		if constexpr (compare::unscheduleUpdate<Derived, Base, types::pure370>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::unscheduleUpdate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unscheduleUpdate<DefaultConv, Derived, Base, types::pure370>::value, DefaultConv>(
				"cocos2d::CCNode::unscheduleUpdate", 
				(void*)addresses::address370()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure371>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure371>::value, DefaultConv>(
				"cocos2d::CCNode::update", 
				(void*)addresses::address371()
			);
		}

		if constexpr (compare::updateTransform<Derived, Base, types::pure372>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::updateTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTransform<DefaultConv, Derived, Base, types::pure372>::value, DefaultConv>(
				"cocos2d::CCNode::updateTransform", 
				(void*)addresses::address372()
			);
		}

		if constexpr (compare::updateTweenAction<Derived, Base, types::pure373>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::updateTweenAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTweenAction<DefaultConv, Derived, Base, types::pure373>::value, DefaultConv>(
				"cocos2d::CCNode::updateTweenAction", 
				(void*)addresses::address373()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure374>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure374>::value, DefaultConv>(
				"cocos2d::CCNode::visit", 
				(void*)addresses::address374()
			);
		}

		if constexpr (compare::worldToNodeTransform<Derived, Base, types::pure375>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::worldToNodeTransform", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::worldToNodeTransform<DefaultConv, Derived, Base, types::pure375>::value, DefaultConv>(
				"cocos2d::CCNode::worldToNodeTransform", 
				(void*)addresses::address375()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure376>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure376>::value, DefaultConv>(
				"cocos2d::CCNode::destructor", 
				(void*)addresses::address376()
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

		if constexpr (compare::onButtonsPerRow<Derived, Base, types::pure907>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorOptionsLayer::onButtonsPerRow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onButtonsPerRow<DefaultConv, Derived, Base, types::pure907>::value, DefaultConv>(
				"EditorOptionsLayer::onButtonsPerRow", 
				(void*)addresses::address907()
			);
		}

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
			Interface::get()->addHook<wrap::runAnimation<DefaultConv, Derived, Base, types::pure718>::value, DefaultConv>(
				"CCAnimatedSprite::runAnimation", 
				(void*)addresses::address718()
			);
		}

		if constexpr (compare::tweenToAnimation<Derived, Base, types::pure719>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCAnimatedSprite::tweenToAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::tweenToAnimation<DefaultConv, Derived, Base, types::pure719>::value, DefaultConv>(
				"CCAnimatedSprite::tweenToAnimation", 
				(void*)addresses::address719()
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

		if constexpr (compare::constructor<Derived, Base, types::pure392>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure392>::value, DefaultConv>(
				"cocos2d::CCObject::constructor", 
				(void*)addresses::address392()
			);
		}

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure393>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::acceptVisitor<DefaultConv, Derived, Base, types::pure393>::value, DefaultConv>(
				"cocos2d::CCObject::acceptVisitor", 
				(void*)addresses::address393()
			);
		}

		if constexpr (compare::autorelease<Derived, Base, types::pure394>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::autorelease", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::autorelease<DefaultConv, Derived, Base, types::pure394>::value, DefaultConv>(
				"cocos2d::CCObject::autorelease", 
				(void*)addresses::address394()
			);
		}

		if constexpr (compare::canEncode<Derived, Base, types::pure395>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::canEncode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::canEncode<DefaultConv, Derived, Base, types::pure395>::value, DefaultConv>(
				"cocos2d::CCObject::canEncode", 
				(void*)addresses::address395()
			);
		}

		if constexpr (compare::encodeWithCoder<Derived, Base, types::pure396>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::encodeWithCoder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::encodeWithCoder<DefaultConv, Derived, Base, types::pure396>::value, DefaultConv>(
				"cocos2d::CCObject::encodeWithCoder", 
				(void*)addresses::address396()
			);
		}

		if constexpr (compare::getTag<Derived, Base, types::pure397>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::getTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTag<DefaultConv, Derived, Base, types::pure397>::value, DefaultConv>(
				"cocos2d::CCObject::getTag", 
				(void*)addresses::address397()
			);
		}

		if constexpr (compare::isEqual<Derived, Base, types::pure398>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::isEqual", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isEqual<DefaultConv, Derived, Base, types::pure398>::value, DefaultConv>(
				"cocos2d::CCObject::isEqual", 
				(void*)addresses::address398()
			);
		}

		if constexpr (compare::release<Derived, Base, types::pure399>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::release", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::release<DefaultConv, Derived, Base, types::pure399>::value, DefaultConv>(
				"cocos2d::CCObject::release", 
				(void*)addresses::address399()
			);
		}

		if constexpr (compare::retain<Derived, Base, types::pure400>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::retain", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::retain<DefaultConv, Derived, Base, types::pure400>::value, DefaultConv>(
				"cocos2d::CCObject::retain", 
				(void*)addresses::address400()
			);
		}

		if constexpr (compare::setTag<Derived, Base, types::pure401>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::setTag", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTag<DefaultConv, Derived, Base, types::pure401>::value, DefaultConv>(
				"cocos2d::CCObject::setTag", 
				(void*)addresses::address401()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure402>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure402>::value, DefaultConv>(
				"cocos2d::CCObject::destructor", 
				(void*)addresses::address402()
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
			Interface::get()->addHook<wrap::scheduleSelector<DefaultConv, Derived, Base, types::pure419>::value, DefaultConv>(
				"cocos2d::CCScheduler::scheduleSelector", 
				(void*)addresses::address419()
			);
		}

		if constexpr (compare::scheduleUpdateForTarget<Derived, Base, types::pure420>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::scheduleUpdateForTarget", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::scheduleUpdateForTarget<DefaultConv, Derived, Base, types::pure420>::value, DefaultConv>(
				"cocos2d::CCScheduler::scheduleUpdateForTarget", 
				(void*)addresses::address420()
			);
		}

		if constexpr (compare::unscheduleAllForTarget<Derived, Base, types::pure421>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::unscheduleAllForTarget", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unscheduleAllForTarget<DefaultConv, Derived, Base, types::pure421>::value, DefaultConv>(
				"cocos2d::CCScheduler::unscheduleAllForTarget", 
				(void*)addresses::address421()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure422>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScheduler::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure422>::value, DefaultConv>(
				"cocos2d::CCScheduler::update", 
				(void*)addresses::address422()
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

		if constexpr (compare::destructor<Derived, Base, types::pure1385>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1385>::value, DefaultConv>(
				"GameObject::destructor", 
				(void*)addresses::address1385()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1386>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure1386>::value, DefaultConv>(
				"GameObject::update", 
				(void*)addresses::address1386()
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure1387>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleX<DefaultConv, Derived, Base, types::pure1387>::value, DefaultConv>(
				"GameObject::setScaleX", 
				(void*)addresses::address1387()
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure1388>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScaleY<DefaultConv, Derived, Base, types::pure1388>::value, DefaultConv>(
				"GameObject::setScaleY", 
				(void*)addresses::address1388()
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure1389>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScale<DefaultConv, Derived, Base, types::pure1389>::value, DefaultConv>(
				"GameObject::setScale", 
				(void*)addresses::address1389()
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure1390>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPosition<DefaultConv, Derived, Base, types::pure1390>::value, DefaultConv>(
				"GameObject::setPosition", 
				(void*)addresses::address1390()
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure1391>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setVisible<DefaultConv, Derived, Base, types::pure1391>::value, DefaultConv>(
				"GameObject::setVisible", 
				(void*)addresses::address1391()
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure1392>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRotation<DefaultConv, Derived, Base, types::pure1392>::value, DefaultConv>(
				"GameObject::setRotation", 
				(void*)addresses::address1392()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure1393>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure1393>::value, DefaultConv>(
				"GameObject::setOpacity", 
				(void*)addresses::address1393()
			);
		}

		if constexpr (compare::initWithTexture<Derived, Base, types::pure1394>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::initWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithTexture<DefaultConv, Derived, Base, types::pure1394>::value, DefaultConv>(
				"GameObject::initWithTexture", 
				(void*)addresses::address1394()
			);
		}

		if constexpr (compare::setChildColor<Derived, Base, types::pure1395>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setChildColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setChildColor<DefaultConv, Derived, Base, types::pure1395>::value, DefaultConv>(
				"GameObject::setChildColor", 
				(void*)addresses::address1395()
			);
		}

		if constexpr (compare::setFlipX<Derived, Base, types::pure1396>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipX<DefaultConv, Derived, Base, types::pure1396>::value, DefaultConv>(
				"GameObject::setFlipX", 
				(void*)addresses::address1396()
			);
		}

		if constexpr (compare::setFlipY<Derived, Base, types::pure1397>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFlipY<DefaultConv, Derived, Base, types::pure1397>::value, DefaultConv>(
				"GameObject::setFlipY", 
				(void*)addresses::address1397()
			);
		}

		if constexpr (compare::customSetup<Derived, Base, types::pure1398>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::customSetup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::customSetup<DefaultConv, Derived, Base, types::pure1398>::value, DefaultConv>(
				"GameObject::customSetup", 
				(void*)addresses::address1398()
			);
		}

		if constexpr (compare::setupCustomSprites<Derived, Base, types::pure1399>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setupCustomSprites", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupCustomSprites<DefaultConv, Derived, Base, types::pure1399>::value, DefaultConv>(
				"GameObject::setupCustomSprites", 
				(void*)addresses::address1399()
			);
		}

		if constexpr (compare::addMainSpriteToParent<Derived, Base, types::pure1400>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addMainSpriteToParent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addMainSpriteToParent<DefaultConv, Derived, Base, types::pure1400>::value, DefaultConv>(
				"GameObject::addMainSpriteToParent", 
				(void*)addresses::address1400()
			);
		}

		if constexpr (compare::resetObject<Derived, Base, types::pure1401>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::resetObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetObject<DefaultConv, Derived, Base, types::pure1401>::value, DefaultConv>(
				"GameObject::resetObject", 
				(void*)addresses::address1401()
			);
		}

		if constexpr (compare::triggerObject<Derived, Base, types::pure1402>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::triggerObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::triggerObject<DefaultConv, Derived, Base, types::pure1402>::value, DefaultConv>(
				"GameObject::triggerObject", 
				(void*)addresses::address1402()
			);
		}

		if constexpr (compare::activateObject<Derived, Base, types::pure1403>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::activateObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activateObject<DefaultConv, Derived, Base, types::pure1403>::value, DefaultConv>(
				"GameObject::activateObject", 
				(void*)addresses::address1403()
			);
		}

		if constexpr (compare::deactivateObject<Derived, Base, types::pure1404>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::deactivateObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::deactivateObject<DefaultConv, Derived, Base, types::pure1404>::value, DefaultConv>(
				"GameObject::deactivateObject", 
				(void*)addresses::address1404()
			);
		}

		if constexpr (compare::getObjectRect<Derived, Base, types::pure1405>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectRect<DefaultConv, Derived, Base, types::pure1405>::value, DefaultConv>(
				"GameObject::getObjectRect", 
				(void*)addresses::address1405()
			);
		}

		if constexpr (compare::getObjectRect<Derived, Base, types::pure1406>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectRect<DefaultConv, Derived, Base, types::pure1406>::value, DefaultConv>(
				"GameObject::getObjectRect", 
				(void*)addresses::address1406()
			);
		}

		if constexpr (compare::getObjectRect2<Derived, Base, types::pure1407>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRect2", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectRect2<DefaultConv, Derived, Base, types::pure1407>::value, DefaultConv>(
				"GameObject::getObjectRect2", 
				(void*)addresses::address1407()
			);
		}

		if constexpr (compare::getObjectTextureRect<Derived, Base, types::pure1408>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectTextureRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectTextureRect<DefaultConv, Derived, Base, types::pure1408>::value, DefaultConv>(
				"GameObject::getObjectTextureRect", 
				(void*)addresses::address1408()
			);
		}

		if constexpr (compare::getRealPosition<Derived, Base, types::pure1409>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getRealPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRealPosition<DefaultConv, Derived, Base, types::pure1409>::value, DefaultConv>(
				"GameObject::getRealPosition", 
				(void*)addresses::address1409()
			);
		}

		if constexpr (compare::setStartPos<Derived, Base, types::pure1410>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setStartPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setStartPos<DefaultConv, Derived, Base, types::pure1410>::value, DefaultConv>(
				"GameObject::setStartPos", 
				(void*)addresses::address1410()
			);
		}

		if constexpr (compare::updateStartValues<Derived, Base, types::pure1411>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateStartValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateStartValues<DefaultConv, Derived, Base, types::pure1411>::value, DefaultConv>(
				"GameObject::updateStartValues", 
				(void*)addresses::address1411()
			);
		}

		if constexpr (compare::customObjectSetup<Derived, Base, types::pure1412>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::customObjectSetup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::customObjectSetup<DefaultConv, Derived, Base, types::pure1412>::value, DefaultConv>(
				"GameObject::customObjectSetup", 
				(void*)addresses::address1412()
			);
		}

		if constexpr (compare::getSaveString<Derived, Base, types::pure1413>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSaveString<DefaultConv, Derived, Base, types::pure1413>::value, DefaultConv>(
				"GameObject::getSaveString", 
				(void*)addresses::address1413()
			);
		}

		if constexpr (compare::isFlipX<Derived, Base, types::pure1414>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isFlipX<DefaultConv, Derived, Base, types::pure1414>::value, DefaultConv>(
				"GameObject::isFlipX", 
				(void*)addresses::address1414()
			);
		}

		if constexpr (compare::isFlipY<Derived, Base, types::pure1415>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isFlipY<DefaultConv, Derived, Base, types::pure1415>::value, DefaultConv>(
				"GameObject::isFlipY", 
				(void*)addresses::address1415()
			);
		}

		if constexpr (compare::setRScaleX<Derived, Base, types::pure1416>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRScaleX<DefaultConv, Derived, Base, types::pure1416>::value, DefaultConv>(
				"GameObject::setRScaleX", 
				(void*)addresses::address1416()
			);
		}

		if constexpr (compare::setRScaleY<Derived, Base, types::pure1417>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRScaleY<DefaultConv, Derived, Base, types::pure1417>::value, DefaultConv>(
				"GameObject::setRScaleY", 
				(void*)addresses::address1417()
			);
		}

		if constexpr (compare::setRScale<Derived, Base, types::pure1418>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setRScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setRScale<DefaultConv, Derived, Base, types::pure1418>::value, DefaultConv>(
				"GameObject::setRScale", 
				(void*)addresses::address1418()
			);
		}

		if constexpr (compare::getRScaleX<Derived, Base, types::pure1419>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getRScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRScaleX<DefaultConv, Derived, Base, types::pure1419>::value, DefaultConv>(
				"GameObject::getRScaleX", 
				(void*)addresses::address1419()
			);
		}

		if constexpr (compare::getRScaleY<Derived, Base, types::pure1420>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getRScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRScaleY<DefaultConv, Derived, Base, types::pure1420>::value, DefaultConv>(
				"GameObject::getRScaleY", 
				(void*)addresses::address1420()
			);
		}

		if constexpr (compare::calculateSpawnXPos<Derived, Base, types::pure1421>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::calculateSpawnXPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateSpawnXPos<DefaultConv, Derived, Base, types::pure1421>::value, DefaultConv>(
				"GameObject::calculateSpawnXPos", 
				(void*)addresses::address1421()
			);
		}

		if constexpr (compare::triggerActivated<Derived, Base, types::pure1422>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::triggerActivated", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::triggerActivated<DefaultConv, Derived, Base, types::pure1422>::value, DefaultConv>(
				"GameObject::triggerActivated", 
				(void*)addresses::address1422()
			);
		}

		if constexpr (compare::powerOnObject<Derived, Base, types::pure1423>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::powerOnObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::powerOnObject<DefaultConv, Derived, Base, types::pure1423>::value, DefaultConv>(
				"GameObject::powerOnObject", 
				(void*)addresses::address1423()
			);
		}

		if constexpr (compare::powerOffObject<Derived, Base, types::pure1424>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::powerOffObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::powerOffObject<DefaultConv, Derived, Base, types::pure1424>::value, DefaultConv>(
				"GameObject::powerOffObject", 
				(void*)addresses::address1424()
			);
		}

		if constexpr (compare::setObjectColor<Derived, Base, types::pure1425>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setObjectColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setObjectColor<DefaultConv, Derived, Base, types::pure1425>::value, DefaultConv>(
				"GameObject::setObjectColor", 
				(void*)addresses::address1425()
			);
		}

		if constexpr (compare::setGlowColor<Derived, Base, types::pure1426>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setGlowColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setGlowColor<DefaultConv, Derived, Base, types::pure1426>::value, DefaultConv>(
				"GameObject::setGlowColor", 
				(void*)addresses::address1426()
			);
		}

		if constexpr (compare::getOrientedBox<Derived, Base, types::pure1427>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getOrientedBox", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOrientedBox<DefaultConv, Derived, Base, types::pure1427>::value, DefaultConv>(
				"GameObject::getOrientedBox", 
				(void*)addresses::address1427()
			);
		}

		if constexpr (compare::addToGroup<Derived, Base, types::pure1428>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addToGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToGroup<DefaultConv, Derived, Base, types::pure1428>::value, DefaultConv>(
				"GameObject::addToGroup", 
				(void*)addresses::address1428()
			);
		}

		if constexpr (compare::removeFromGroup<Derived, Base, types::pure1429>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::removeFromGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeFromGroup<DefaultConv, Derived, Base, types::pure1429>::value, DefaultConv>(
				"GameObject::removeFromGroup", 
				(void*)addresses::address1429()
			);
		}

		if constexpr (compare::spawnXPosition<Derived, Base, types::pure1430>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::spawnXPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnXPosition<DefaultConv, Derived, Base, types::pure1430>::value, DefaultConv>(
				"GameObject::spawnXPosition", 
				(void*)addresses::address1430()
			);
		}

		if constexpr (compare::getObjectRectDirty<Derived, Base, types::pure1431>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRectDirty", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectRectDirty<DefaultConv, Derived, Base, types::pure1431>::value, DefaultConv>(
				"GameObject::getObjectRectDirty", 
				(void*)addresses::address1431()
			);
		}

		if constexpr (compare::setObjectRectDirty<Derived, Base, types::pure1432>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setObjectRectDirty", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setObjectRectDirty<DefaultConv, Derived, Base, types::pure1432>::value, DefaultConv>(
				"GameObject::setObjectRectDirty", 
				(void*)addresses::address1432()
			);
		}

		if constexpr (compare::getOrientedRectDirty<Derived, Base, types::pure1433>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getOrientedRectDirty", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOrientedRectDirty<DefaultConv, Derived, Base, types::pure1433>::value, DefaultConv>(
				"GameObject::getOrientedRectDirty", 
				(void*)addresses::address1433()
			);
		}

		if constexpr (compare::setOrientedRectDirty<Derived, Base, types::pure1434>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setOrientedRectDirty", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOrientedRectDirty<DefaultConv, Derived, Base, types::pure1434>::value, DefaultConv>(
				"GameObject::setOrientedRectDirty", 
				(void*)addresses::address1434()
			);
		}

		if constexpr (compare::getType<Derived, Base, types::pure1435>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getType", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getType<DefaultConv, Derived, Base, types::pure1435>::value, DefaultConv>(
				"GameObject::getType", 
				(void*)addresses::address1435()
			);
		}

		if constexpr (compare::setType<Derived, Base, types::pure1436>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setType", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setType<DefaultConv, Derived, Base, types::pure1436>::value, DefaultConv>(
				"GameObject::setType", 
				(void*)addresses::address1436()
			);
		}

		if constexpr (compare::getStartPos<Derived, Base, types::pure1437>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getStartPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getStartPos<DefaultConv, Derived, Base, types::pure1437>::value, DefaultConv>(
				"GameObject::getStartPos", 
				(void*)addresses::address1437()
			);
		}

		if constexpr (compare::activatedByPlayer<Derived, Base, types::pure1438>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::activatedByPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activatedByPlayer<DefaultConv, Derived, Base, types::pure1438>::value, DefaultConv>(
				"GameObject::activatedByPlayer", 
				(void*)addresses::address1438()
			);
		}

		if constexpr (compare::addColorSprite<Derived, Base, types::pure1439>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addColorSprite", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addColorSprite<DefaultConv, Derived, Base, types::pure1439>::value, DefaultConv>(
				"GameObject::addColorSprite", 
				(void*)addresses::address1439()
			);
		}

		if constexpr (compare::addColorSpriteToParent<Derived, Base, types::pure1440>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addColorSpriteToParent", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addColorSpriteToParent<DefaultConv, Derived, Base, types::pure1440>::value, DefaultConv>(
				"GameObject::addColorSpriteToParent", 
				(void*)addresses::address1440()
			);
		}

		if constexpr (compare::addToTempOffset<Derived, Base, types::pure1441>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addToTempOffset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToTempOffset<DefaultConv, Derived, Base, types::pure1441>::value, DefaultConv>(
				"GameObject::addToTempOffset", 
				(void*)addresses::address1441()
			);
		}

		if constexpr (compare::calculateOrientedBox<Derived, Base, types::pure1442>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::calculateOrientedBox", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateOrientedBox<DefaultConv, Derived, Base, types::pure1442>::value, DefaultConv>(
				"GameObject::calculateOrientedBox", 
				(void*)addresses::address1442()
			);
		}

		if constexpr (compare::canChangeCustomColor<Derived, Base, types::pure1443>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::canChangeCustomColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::canChangeCustomColor<DefaultConv, Derived, Base, types::pure1443>::value, DefaultConv>(
				"GameObject::canChangeCustomColor", 
				(void*)addresses::address1443()
			);
		}

		if constexpr (compare::colorForMode<Derived, Base, types::pure1444>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::colorForMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorForMode<DefaultConv, Derived, Base, types::pure1444>::value, DefaultConv>(
				"GameObject::colorForMode", 
				(void*)addresses::address1444()
			);
		}

		if constexpr (compare::commonSetup<Derived, Base, types::pure1445>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::commonSetup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::commonSetup<DefaultConv, Derived, Base, types::pure1445>::value, DefaultConv>(
				"GameObject::commonSetup", 
				(void*)addresses::address1445()
			);
		}

		if constexpr (compare::copyGroups<Derived, Base, types::pure1446>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::copyGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::copyGroups<DefaultConv, Derived, Base, types::pure1446>::value, DefaultConv>(
				"GameObject::copyGroups", 
				(void*)addresses::address1446()
			);
		}

		if constexpr (compare::createWithFrame<Derived, Base, types::pure1447>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::createWithFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithFrame<DefaultConv, Derived, Base, types::pure1447>::value, DefaultConv>(
				"GameObject::createWithFrame", 
				(void*)addresses::address1447()
			);
		}

		if constexpr (compare::createWithKey<Derived, Base, types::pure1448>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::createWithKey", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithKey<DefaultConv, Derived, Base, types::pure1448>::value, DefaultConv>(
				"GameObject::createWithKey", 
				(void*)addresses::address1448()
			);
		}

		if constexpr (compare::destroyObject<Derived, Base, types::pure1449>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::destroyObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destroyObject<DefaultConv, Derived, Base, types::pure1449>::value, DefaultConv>(
				"GameObject::destroyObject", 
				(void*)addresses::address1449()
			);
		}

		if constexpr (compare::determineSlopeDirection<Derived, Base, types::pure1450>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::determineSlopeDirection", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::determineSlopeDirection<DefaultConv, Derived, Base, types::pure1450>::value, DefaultConv>(
				"GameObject::determineSlopeDirection", 
				(void*)addresses::address1450()
			);
		}

		if constexpr (compare::getActiveColorForMode<Derived, Base, types::pure1451>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getActiveColorForMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getActiveColorForMode<DefaultConv, Derived, Base, types::pure1451>::value, DefaultConv>(
				"GameObject::getActiveColorForMode", 
				(void*)addresses::address1451()
			);
		}

		if constexpr (compare::getBallFrame<Derived, Base, types::pure1452>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getBallFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBallFrame<DefaultConv, Derived, Base, types::pure1452>::value, DefaultConv>(
				"GameObject::getBallFrame", 
				(void*)addresses::address1452()
			);
		}

		if constexpr (compare::getBoxOffset<Derived, Base, types::pure1453>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getBoxOffset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBoxOffset<DefaultConv, Derived, Base, types::pure1453>::value, DefaultConv>(
				"GameObject::getBoxOffset", 
				(void*)addresses::address1453()
			);
		}

		if constexpr (compare::getColorIndex<Derived, Base, types::pure1454>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getColorIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getColorIndex<DefaultConv, Derived, Base, types::pure1454>::value, DefaultConv>(
				"GameObject::getColorIndex", 
				(void*)addresses::address1454()
			);
		}

		if constexpr (compare::getDidUpdateLastPosition<Derived, Base, types::pure1455>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getDidUpdateLastPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDidUpdateLastPosition<DefaultConv, Derived, Base, types::pure1455>::value, DefaultConv>(
				"GameObject::getDidUpdateLastPosition", 
				(void*)addresses::address1455()
			);
		}

		if constexpr (compare::getLastPosition<Derived, Base, types::pure1456>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getLastPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLastPosition<DefaultConv, Derived, Base, types::pure1456>::value, DefaultConv>(
				"GameObject::getLastPosition", 
				(void*)addresses::address1456()
			);
		}

		if constexpr (compare::getMainColorMode<Derived, Base, types::pure1457>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getMainColorMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMainColorMode<DefaultConv, Derived, Base, types::pure1457>::value, DefaultConv>(
				"GameObject::getMainColorMode", 
				(void*)addresses::address1457()
			);
		}

		if constexpr (compare::getObjectZOrder<Derived, Base, types::pure1458>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectZOrder<DefaultConv, Derived, Base, types::pure1458>::value, DefaultConv>(
				"GameObject::getObjectZOrder", 
				(void*)addresses::address1458()
			);
		}

		if constexpr (compare::getObjectRadius<Derived, Base, types::pure1459>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRadius", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectRadius<DefaultConv, Derived, Base, types::pure1459>::value, DefaultConv>(
				"GameObject::getObjectRadius", 
				(void*)addresses::address1459()
			);
		}

		if constexpr (compare::getSecondaryColorMode<Derived, Base, types::pure1460>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getSecondaryColorMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSecondaryColorMode<DefaultConv, Derived, Base, types::pure1460>::value, DefaultConv>(
				"GameObject::getSecondaryColorMode", 
				(void*)addresses::address1460()
			);
		}

		if constexpr (compare::getSectionIdx<Derived, Base, types::pure1461>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getSectionIdx", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSectionIdx<DefaultConv, Derived, Base, types::pure1461>::value, DefaultConv>(
				"GameObject::getSectionIdx", 
				(void*)addresses::address1461()
			);
		}

		if constexpr (compare::groupWasDisabled<Derived, Base, types::pure1462>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::groupWasDisabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::groupWasDisabled<DefaultConv, Derived, Base, types::pure1462>::value, DefaultConv>(
				"GameObject::groupWasDisabled", 
				(void*)addresses::address1462()
			);
		}

		if constexpr (compare::groupWasEnabled<Derived, Base, types::pure1463>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::groupWasEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::groupWasEnabled<DefaultConv, Derived, Base, types::pure1463>::value, DefaultConv>(
				"GameObject::groupWasEnabled", 
				(void*)addresses::address1463()
			);
		}

		if constexpr (compare::hasBeenActivated<Derived, Base, types::pure1464>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::hasBeenActivated", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasBeenActivated<DefaultConv, Derived, Base, types::pure1464>::value, DefaultConv>(
				"GameObject::hasBeenActivated", 
				(void*)addresses::address1464()
			);
		}

		if constexpr (compare::hasBeenActivatedByPlayer<Derived, Base, types::pure1465>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::hasBeenActivatedByPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasBeenActivatedByPlayer<DefaultConv, Derived, Base, types::pure1465>::value, DefaultConv>(
				"GameObject::hasBeenActivatedByPlayer", 
				(void*)addresses::address1465()
			);
		}

		if constexpr (compare::hasSecondaryColor<Derived, Base, types::pure1466>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::hasSecondaryColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasSecondaryColor<DefaultConv, Derived, Base, types::pure1466>::value, DefaultConv>(
				"GameObject::hasSecondaryColor", 
				(void*)addresses::address1466()
			);
		}

		if constexpr (compare::ignoreEnter<Derived, Base, types::pure1467>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::ignoreEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ignoreEnter<DefaultConv, Derived, Base, types::pure1467>::value, DefaultConv>(
				"GameObject::ignoreEnter", 
				(void*)addresses::address1467()
			);
		}

		if constexpr (compare::ignoreFade<Derived, Base, types::pure1468>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::ignoreFade", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ignoreFade<DefaultConv, Derived, Base, types::pure1468>::value, DefaultConv>(
				"GameObject::ignoreFade", 
				(void*)addresses::address1468()
			);
		}

		if constexpr (compare::isBasicTrigger<Derived, Base, types::pure1469>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isBasicTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isBasicTrigger<DefaultConv, Derived, Base, types::pure1469>::value, DefaultConv>(
				"GameObject::isBasicTrigger", 
				(void*)addresses::address1469()
			);
		}

		if constexpr (compare::isColorTrigger<Derived, Base, types::pure1470>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isColorTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isColorTrigger<DefaultConv, Derived, Base, types::pure1470>::value, DefaultConv>(
				"GameObject::isColorTrigger", 
				(void*)addresses::address1470()
			);
		}

		if constexpr (compare::isSpawnableTrigger<Derived, Base, types::pure1471>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isSpawnableTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isSpawnableTrigger<DefaultConv, Derived, Base, types::pure1471>::value, DefaultConv>(
				"GameObject::isSpawnableTrigger", 
				(void*)addresses::address1471()
			);
		}

		if constexpr (compare::isSpecialObject<Derived, Base, types::pure1472>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isSpecialObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isSpecialObject<DefaultConv, Derived, Base, types::pure1472>::value, DefaultConv>(
				"GameObject::isSpecialObject", 
				(void*)addresses::address1472()
			);
		}

		if constexpr (compare::objectFromString<Derived, Base, types::pure1473>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::objectFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectFromString<DefaultConv, Derived, Base, types::pure1473>::value, DefaultConv>(
				"GameObject::objectFromString", 
				(void*)addresses::address1473()
			);
		}

		if constexpr (compare::playShineEffect<Derived, Base, types::pure1474>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::playShineEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playShineEffect<DefaultConv, Derived, Base, types::pure1474>::value, DefaultConv>(
				"GameObject::playShineEffect", 
				(void*)addresses::address1474()
			);
		}

		if constexpr (compare::quickUpdatePosition<Derived, Base, types::pure1475>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::quickUpdatePosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::quickUpdatePosition<DefaultConv, Derived, Base, types::pure1475>::value, DefaultConv>(
				"GameObject::quickUpdatePosition", 
				(void*)addresses::address1475()
			);
		}

		if constexpr (compare::removeGlow<Derived, Base, types::pure1476>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::removeGlow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeGlow<DefaultConv, Derived, Base, types::pure1476>::value, DefaultConv>(
				"GameObject::removeGlow", 
				(void*)addresses::address1476()
			);
		}

		if constexpr (compare::resetGroupDisabled<Derived, Base, types::pure1477>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::resetGroupDisabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetGroupDisabled<DefaultConv, Derived, Base, types::pure1477>::value, DefaultConv>(
				"GameObject::resetGroupDisabled", 
				(void*)addresses::address1477()
			);
		}

		if constexpr (compare::saveActiveColors<Derived, Base, types::pure1478>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::saveActiveColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::saveActiveColors<DefaultConv, Derived, Base, types::pure1478>::value, DefaultConv>(
				"GameObject::saveActiveColors", 
				(void*)addresses::address1478()
			);
		}

		if constexpr (compare::selectObject<Derived, Base, types::pure1479>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::selectObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selectObject<DefaultConv, Derived, Base, types::pure1479>::value, DefaultConv>(
				"GameObject::selectObject", 
				(void*)addresses::address1479()
			);
		}

		if constexpr (compare::setDefaultMainColorMode<Derived, Base, types::pure1480>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setDefaultMainColorMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDefaultMainColorMode<DefaultConv, Derived, Base, types::pure1480>::value, DefaultConv>(
				"GameObject::setDefaultMainColorMode", 
				(void*)addresses::address1480()
			);
		}

		if constexpr (compare::setDidUpdateLastPosition<Derived, Base, types::pure1481>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setDidUpdateLastPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setDidUpdateLastPosition<DefaultConv, Derived, Base, types::pure1481>::value, DefaultConv>(
				"GameObject::setDidUpdateLastPosition", 
				(void*)addresses::address1481()
			);
		}

		if constexpr (compare::setGlowOpacity<Derived, Base, types::pure1482>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setGlowOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setGlowOpacity<DefaultConv, Derived, Base, types::pure1482>::value, DefaultConv>(
				"GameObject::setGlowOpacity", 
				(void*)addresses::address1482()
			);
		}

		if constexpr (compare::setLastPosition<Derived, Base, types::pure1483>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setLastPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setLastPosition<DefaultConv, Derived, Base, types::pure1483>::value, DefaultConv>(
				"GameObject::setLastPosition", 
				(void*)addresses::address1483()
			);
		}

		if constexpr (compare::setMainColorMode<Derived, Base, types::pure1484>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setMainColorMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setMainColorMode<DefaultConv, Derived, Base, types::pure1484>::value, DefaultConv>(
				"GameObject::setMainColorMode", 
				(void*)addresses::address1484()
			);
		}

		if constexpr (compare::setSectionIdx<Derived, Base, types::pure1485>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setSectionIdx", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSectionIdx<DefaultConv, Derived, Base, types::pure1485>::value, DefaultConv>(
				"GameObject::setSectionIdx", 
				(void*)addresses::address1485()
			);
		}

		if constexpr (compare::setupCoinArt<Derived, Base, types::pure1486>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setupCoinArt", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupCoinArt<DefaultConv, Derived, Base, types::pure1486>::value, DefaultConv>(
				"GameObject::setupCoinArt", 
				(void*)addresses::address1486()
			);
		}

		if constexpr (compare::slopeFloorTop<Derived, Base, types::pure1487>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::slopeFloorTop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::slopeFloorTop<DefaultConv, Derived, Base, types::pure1487>::value, DefaultConv>(
				"GameObject::slopeFloorTop", 
				(void*)addresses::address1487()
			);
		}

		if constexpr (compare::slopeWallLeft<Derived, Base, types::pure1488>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::slopeWallLeft", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::slopeWallLeft<DefaultConv, Derived, Base, types::pure1488>::value, DefaultConv>(
				"GameObject::slopeWallLeft", 
				(void*)addresses::address1488()
			);
		}

		if constexpr (compare::updateCustomScale<Derived, Base, types::pure1489>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateCustomScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateCustomScale<DefaultConv, Derived, Base, types::pure1489>::value, DefaultConv>(
				"GameObject::updateCustomScale", 
				(void*)addresses::address1489()
			);
		}

		if constexpr (compare::updateMainColor<Derived, Base, types::pure1490>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateMainColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateMainColor<DefaultConv, Derived, Base, types::pure1490>::value, DefaultConv>(
				"GameObject::updateMainColor", 
				(void*)addresses::address1490()
			);
		}

		if constexpr (compare::updateOrientedBox<Derived, Base, types::pure1491>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateOrientedBox", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateOrientedBox<DefaultConv, Derived, Base, types::pure1491>::value, DefaultConv>(
				"GameObject::updateOrientedBox", 
				(void*)addresses::address1491()
			);
		}

		if constexpr (compare::updateSecondaryColor<Derived, Base, types::pure1492>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateSecondaryColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSecondaryColor<DefaultConv, Derived, Base, types::pure1492>::value, DefaultConv>(
				"GameObject::updateSecondaryColor", 
				(void*)addresses::address1492()
			);
		}

		if constexpr (compare::updateStartPos<Derived, Base, types::pure1493>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateStartPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateStartPos<DefaultConv, Derived, Base, types::pure1493>::value, DefaultConv>(
				"GameObject::updateStartPos", 
				(void*)addresses::address1493()
			);
		}

		if constexpr (compare::updateState<Derived, Base, types::pure1494>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateState<DefaultConv, Derived, Base, types::pure1494>::value, DefaultConv>(
				"GameObject::updateState", 
				(void*)addresses::address1494()
			);
		}

		if constexpr (compare::updateSyncedAnimation<Derived, Base, types::pure1495>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateSyncedAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSyncedAnimation<DefaultConv, Derived, Base, types::pure1495>::value, DefaultConv>(
				"GameObject::updateSyncedAnimation", 
				(void*)addresses::address1495()
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
			Interface::get()->addHook<wrap::alignItemsHorizontallyWithPadding<DefaultConv, Derived, Base, types::pure199>::value, DefaultConv>(
				"cocos2d::CCMenu::alignItemsHorizontallyWithPadding", 
				(void*)addresses::address199()
			);
		}

		if constexpr (compare::alignItemsVerticallyWithPadding<Derived, Base, types::pure200>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::alignItemsVerticallyWithPadding", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::alignItemsVerticallyWithPadding<DefaultConv, Derived, Base, types::pure200>::value, DefaultConv>(
				"cocos2d::CCMenu::alignItemsVerticallyWithPadding", 
				(void*)addresses::address200()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure201>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure201>::value, DefaultConv>(
				"cocos2d::CCMenu::create", 
				(void*)addresses::address201()
			);
		}

		if constexpr (compare::createWithArray<Derived, Base, types::pure202>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::createWithArray", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithArray<DefaultConv, Derived, Base, types::pure202>::value, DefaultConv>(
				"cocos2d::CCMenu::createWithArray", 
				(void*)addresses::address202()
			);
		}

		if constexpr (compare::createWithItem<Derived, Base, types::pure203>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::createWithItem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithItem<DefaultConv, Derived, Base, types::pure203>::value, DefaultConv>(
				"cocos2d::CCMenu::createWithItem", 
				(void*)addresses::address203()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure204>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure204>::value, DefaultConv>(
				"cocos2d::CCMenu::addChild", 
				(void*)addresses::address204()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure205>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure205>::value, DefaultConv>(
				"cocos2d::CCMenu::addChild", 
				(void*)addresses::address205()
			);
		}

		if constexpr (compare::addChild<Derived, Base, types::pure206>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::addChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addChild<DefaultConv, Derived, Base, types::pure206>::value, DefaultConv>(
				"cocos2d::CCMenu::addChild", 
				(void*)addresses::address206()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure207>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure207>::value, DefaultConv>(
				"cocos2d::CCMenu::ccTouchBegan", 
				(void*)addresses::address207()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure208>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure208>::value, DefaultConv>(
				"cocos2d::CCMenu::ccTouchMoved", 
				(void*)addresses::address208()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure209>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure209>::value, DefaultConv>(
				"cocos2d::CCMenu::ccTouchEnded", 
				(void*)addresses::address209()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure210>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure210>::value, DefaultConv>(
				"cocos2d::CCMenu::ccTouchCancelled", 
				(void*)addresses::address210()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure211>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure211>::value, DefaultConv>(
				"cocos2d::CCMenu::init", 
				(void*)addresses::address211()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure212>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure212>::value, DefaultConv>(
				"cocos2d::CCMenu::registerWithTouchDispatcher", 
				(void*)addresses::address212()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure213>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure213>::value, DefaultConv>(
				"cocos2d::CCMenu::onExit", 
				(void*)addresses::address213()
			);
		}

		if constexpr (compare::removeChild<Derived, Base, types::pure214>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::removeChild", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeChild<DefaultConv, Derived, Base, types::pure214>::value, DefaultConv>(
				"cocos2d::CCMenu::removeChild", 
				(void*)addresses::address214()
			);
		}

		if constexpr (compare::initWithArray<Derived, Base, types::pure215>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenu::initWithArray", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithArray<DefaultConv, Derived, Base, types::pure215>::value, DefaultConv>(
				"cocos2d::CCMenu::initWithArray", 
				(void*)addresses::address215()
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

	}
};

template<class Derived>
struct Modify<Derived, SetGroupIDLayer> : ModifyBase<Modify<Derived, SetGroupIDLayer>> {
	using ModifyBase<Modify<Derived, SetGroupIDLayer>>::ModifyBase;
	using Base = SetGroupIDLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::onNextGroupID1<Derived, Base, types::pure2041>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::onNextGroupID1", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onNextGroupID1<DefaultConv, Derived, Base, types::pure2041>::value, DefaultConv>(
				"SetGroupIDLayer::onNextGroupID1", 
				(void*)addresses::address2041()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2042>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2042>::value, DefaultConv>(
				"SetGroupIDLayer::textChanged", 
				(void*)addresses::address2042()
			);
		}

		if constexpr (compare::updateGroupIDLabel<Derived, Base, types::pure2043>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::updateGroupIDLabel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateGroupIDLabel<DefaultConv, Derived, Base, types::pure2043>::value, DefaultConv>(
				"SetGroupIDLayer::updateGroupIDLabel", 
				(void*)addresses::address2043()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure2044>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure2044>::value, DefaultConv>(
				"SetGroupIDLayer::destructor", 
				(void*)addresses::address2044()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1013>::value, DefaultConv>(
				"EffectGameObject::create", 
				(void*)addresses::address1013()
			);
		}

		if constexpr (compare::getTargetColorIndex<Derived, Base, types::pure1014>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EffectGameObject::getTargetColorIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTargetColorIndex<DefaultConv, Derived, Base, types::pure1014>::value, DefaultConv>(
				"EffectGameObject::getTargetColorIndex", 
				(void*)addresses::address1014()
			);
		}

		if constexpr (compare::triggerObject<Derived, Base, types::pure1015>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EffectGameObject::triggerObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::triggerObject<DefaultConv, Derived, Base, types::pure1015>::value, DefaultConv>(
				"EffectGameObject::triggerObject", 
				(void*)addresses::address1015()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure97>::value, DefaultConv>(
				"cocos2d::CCEaseInOut::create", 
				(void*)addresses::address97()
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

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLayerRGBA> : ModifyBase<Modify<Derived, cocos2d::CCLayerRGBA>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLayerRGBA>>::ModifyBase;
	using Base = cocos2d::CCLayerRGBA;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::constructor<Derived, Base, types::pure184>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure184>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::constructor", 
				(void*)addresses::address184()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure185>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure185>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::init", 
				(void*)addresses::address185()
			);
		}

		if constexpr (compare::getOpacity<Derived, Base, types::pure186>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOpacity<DefaultConv, Derived, Base, types::pure186>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::getOpacity", 
				(void*)addresses::address186()
			);
		}

		if constexpr (compare::getDisplayedOpacity<Derived, Base, types::pure187>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisplayedOpacity<DefaultConv, Derived, Base, types::pure187>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::getDisplayedOpacity", 
				(void*)addresses::address187()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure188>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure188>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::setOpacity", 
				(void*)addresses::address188()
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure189>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure189>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::updateDisplayedOpacity", 
				(void*)addresses::address189()
			);
		}

		if constexpr (compare::isCascadeOpacityEnabled<Derived, Base, types::pure190>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::isCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure190>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::isCascadeOpacityEnabled", 
				(void*)addresses::address190()
			);
		}

		if constexpr (compare::setCascadeOpacityEnabled<Derived, Base, types::pure191>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure191>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::setCascadeOpacityEnabled", 
				(void*)addresses::address191()
			);
		}

		if constexpr (compare::getColor<Derived, Base, types::pure192>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getColor<DefaultConv, Derived, Base, types::pure192>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::getColor", 
				(void*)addresses::address192()
			);
		}

		if constexpr (compare::getDisplayedColor<Derived, Base, types::pure193>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::getDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisplayedColor<DefaultConv, Derived, Base, types::pure193>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::getDisplayedColor", 
				(void*)addresses::address193()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure194>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure194>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::setColor", 
				(void*)addresses::address194()
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure195>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure195>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::updateDisplayedColor", 
				(void*)addresses::address195()
			);
		}

		if constexpr (compare::isCascadeColorEnabled<Derived, Base, types::pure196>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::isCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isCascadeColorEnabled<DefaultConv, Derived, Base, types::pure196>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::isCascadeColorEnabled", 
				(void*)addresses::address196()
			);
		}

		if constexpr (compare::setCascadeColorEnabled<Derived, Base, types::pure197>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::setCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setCascadeColorEnabled<DefaultConv, Derived, Base, types::pure197>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::setCascadeColorEnabled", 
				(void*)addresses::address197()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure198>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure198>::value, DefaultConv>(
				"cocos2d::CCLayerRGBA::destructor", 
				(void*)addresses::address198()
			);
		}

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
			Interface::get()->addHook<wrap::getDelta<DefaultConv, Derived, Base, types::pure536>::value, DefaultConv>(
				"cocos2d::CCTouch::getDelta", 
				(void*)addresses::address536()
			);
		}

		if constexpr (compare::getLocationInView<Derived, Base, types::pure537>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getLocationInView", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLocationInView<DefaultConv, Derived, Base, types::pure537>::value, DefaultConv>(
				"cocos2d::CCTouch::getLocationInView", 
				(void*)addresses::address537()
			);
		}

		if constexpr (compare::getPreviousLocationInView<Derived, Base, types::pure538>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getPreviousLocationInView", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPreviousLocationInView<DefaultConv, Derived, Base, types::pure538>::value, DefaultConv>(
				"cocos2d::CCTouch::getPreviousLocationInView", 
				(void*)addresses::address538()
			);
		}

		if constexpr (compare::getLocation<Derived, Base, types::pure539>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getLocation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLocation<DefaultConv, Derived, Base, types::pure539>::value, DefaultConv>(
				"cocos2d::CCTouch::getLocation", 
				(void*)addresses::address539()
			);
		}

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
			Interface::get()->addHook<wrap::createDialogLayer<DefaultConv, Derived, Base, types::pure883>::value, DefaultConv>(
				"DialogLayer::createDialogLayer", 
				(void*)addresses::address883()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure886>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure886>::value, DefaultConv>(
				"DialogLayer::destructor", 
				(void*)addresses::address886()
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure887>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure887>::value, DefaultConv>(
				"DialogLayer::onEnter", 
				(void*)addresses::address887()
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure888>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure888>::value, DefaultConv>(
				"DialogLayer::ccTouchBegan", 
				(void*)addresses::address888()
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure889>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure889>::value, DefaultConv>(
				"DialogLayer::ccTouchMoved", 
				(void*)addresses::address889()
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure890>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure890>::value, DefaultConv>(
				"DialogLayer::ccTouchEnded", 
				(void*)addresses::address890()
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure891>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure891>::value, DefaultConv>(
				"DialogLayer::ccTouchCancelled", 
				(void*)addresses::address891()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure892>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure892>::value, DefaultConv>(
				"DialogLayer::registerWithTouchDispatcher", 
				(void*)addresses::address892()
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure893>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure893>::value, DefaultConv>(
				"DialogLayer::keyBackClicked", 
				(void*)addresses::address893()
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure894>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyDown<DefaultConv, Derived, Base, types::pure894>::value, DefaultConv>(
				"DialogLayer::keyDown", 
				(void*)addresses::address894()
			);
		}

		if constexpr (compare::fadeInTextFinished<Derived, Base, types::pure895>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::fadeInTextFinished", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fadeInTextFinished<DefaultConv, Derived, Base, types::pure895>::value, DefaultConv>(
				"DialogLayer::fadeInTextFinished", 
				(void*)addresses::address895()
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

		if constexpr (compare::constructor<Derived, Base, types::pure171>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure171>::value, DefaultConv>(
				"cocos2d::CCLayerColor::constructor", 
				(void*)addresses::address171()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure172>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure172>::value, DefaultConv>(
				"cocos2d::CCLayerColor::create", 
				(void*)addresses::address172()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure173>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure173>::value, DefaultConv>(
				"cocos2d::CCLayerColor::draw", 
				(void*)addresses::address173()
			);
		}

		if constexpr (compare::getBlendFunc<Derived, Base, types::pure174>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::getBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBlendFunc<DefaultConv, Derived, Base, types::pure174>::value, DefaultConv>(
				"cocos2d::CCLayerColor::getBlendFunc", 
				(void*)addresses::address174()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure175>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure175>::value, DefaultConv>(
				"cocos2d::CCLayerColor::init", 
				(void*)addresses::address175()
			);
		}

		if constexpr (compare::initWithColor<Derived, Base, types::pure176>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::initWithColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithColor<DefaultConv, Derived, Base, types::pure176>::value, DefaultConv>(
				"cocos2d::CCLayerColor::initWithColor", 
				(void*)addresses::address176()
			);
		}

		if constexpr (compare::initWithColor<Derived, Base, types::pure177>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::initWithColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithColor<DefaultConv, Derived, Base, types::pure177>::value, DefaultConv>(
				"cocos2d::CCLayerColor::initWithColor", 
				(void*)addresses::address177()
			);
		}

		if constexpr (compare::setBlendFunc<Derived, Base, types::pure178>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setBlendFunc<DefaultConv, Derived, Base, types::pure178>::value, DefaultConv>(
				"cocos2d::CCLayerColor::setBlendFunc", 
				(void*)addresses::address178()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure179>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure179>::value, DefaultConv>(
				"cocos2d::CCLayerColor::setColor", 
				(void*)addresses::address179()
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure180>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setContentSize<DefaultConv, Derived, Base, types::pure180>::value, DefaultConv>(
				"cocos2d::CCLayerColor::setContentSize", 
				(void*)addresses::address180()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure181>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure181>::value, DefaultConv>(
				"cocos2d::CCLayerColor::setOpacity", 
				(void*)addresses::address181()
			);
		}

		if constexpr (compare::updateColor<Derived, Base, types::pure182>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::updateColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColor<DefaultConv, Derived, Base, types::pure182>::value, DefaultConv>(
				"cocos2d::CCLayerColor::updateColor", 
				(void*)addresses::address182()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure183>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure183>::value, DefaultConv>(
				"cocos2d::CCLayerColor::destructor", 
				(void*)addresses::address183()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1637>::value, DefaultConv>(
				"LevelInfoLayer::create", 
				(void*)addresses::address1637()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure778>::value, DefaultConv>(
				"CCNodeContainer::create", 
				(void*)addresses::address778()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure779>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCNodeContainer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure779>::value, DefaultConv>(
				"CCNodeContainer::init", 
				(void*)addresses::address779()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure780>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCNodeContainer::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure780>::value, DefaultConv>(
				"CCNodeContainer::visit", 
				(void*)addresses::address780()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure130>::value, DefaultConv>(
				"cocos2d::CCLabelTTF::create", 
				(void*)addresses::address130()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure131>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelTTF::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure131>::value, DefaultConv>(
				"cocos2d::CCLabelTTF::create", 
				(void*)addresses::address131()
			);
		}

		if constexpr (compare::updateTexture<Derived, Base, types::pure132>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelTTF::updateTexture", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTexture<DefaultConv, Derived, Base, types::pure132>::value, DefaultConv>(
				"cocos2d::CCLabelTTF::updateTexture", 
				(void*)addresses::address132()
			);
		}

		if constexpr (compare::setString<Derived, Base, types::pure133>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLabelTTF::setString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setString<DefaultConv, Derived, Base, types::pure133>::value, DefaultConv>(
				"cocos2d::CCLabelTTF::setString", 
				(void*)addresses::address133()
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

		if constexpr (compare::destructor<Derived, Base, types::pure1126>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJCommentListLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1126>::value, DefaultConv>(
				"GJCommentListLayer::destructor", 
				(void*)addresses::address1126()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1127>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJCommentListLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1127>::value, DefaultConv>(
				"GJCommentListLayer::create", 
				(void*)addresses::address1127()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCNodeRGBA> : ModifyBase<Modify<Derived, cocos2d::CCNodeRGBA>> {
	using ModifyBase<Modify<Derived, cocos2d::CCNodeRGBA>>::ModifyBase;
	using Base = cocos2d::CCNodeRGBA;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::constructor<Derived, Base, types::pure377>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure377>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::constructor", 
				(void*)addresses::address377()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure378>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure378>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::destructor", 
				(void*)addresses::address378()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure379>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure379>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::init", 
				(void*)addresses::address379()
			);
		}

		if constexpr (compare::getOpacity<Derived, Base, types::pure380>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOpacity<DefaultConv, Derived, Base, types::pure380>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::getOpacity", 
				(void*)addresses::address380()
			);
		}

		if constexpr (compare::getDisplayedOpacity<Derived, Base, types::pure381>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisplayedOpacity<DefaultConv, Derived, Base, types::pure381>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::getDisplayedOpacity", 
				(void*)addresses::address381()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure382>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure382>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::setOpacity", 
				(void*)addresses::address382()
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure383>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure383>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::updateDisplayedOpacity", 
				(void*)addresses::address383()
			);
		}

		if constexpr (compare::isCascadeOpacityEnabled<Derived, Base, types::pure384>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::isCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure384>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::isCascadeOpacityEnabled", 
				(void*)addresses::address384()
			);
		}

		if constexpr (compare::setCascadeOpacityEnabled<Derived, Base, types::pure385>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setCascadeOpacityEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure385>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::setCascadeOpacityEnabled", 
				(void*)addresses::address385()
			);
		}

		if constexpr (compare::getColor<Derived, Base, types::pure386>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getColor<DefaultConv, Derived, Base, types::pure386>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::getColor", 
				(void*)addresses::address386()
			);
		}

		if constexpr (compare::getDisplayedColor<Derived, Base, types::pure387>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::getDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDisplayedColor<DefaultConv, Derived, Base, types::pure387>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::getDisplayedColor", 
				(void*)addresses::address387()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure388>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure388>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::setColor", 
				(void*)addresses::address388()
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure389>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure389>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::updateDisplayedColor", 
				(void*)addresses::address389()
			);
		}

		if constexpr (compare::isCascadeColorEnabled<Derived, Base, types::pure390>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::isCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isCascadeColorEnabled<DefaultConv, Derived, Base, types::pure390>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::isCascadeColorEnabled", 
				(void*)addresses::address390()
			);
		}

		if constexpr (compare::setCascadeColorEnabled<Derived, Base, types::pure391>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::setCascadeColorEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setCascadeColorEnabled<DefaultConv, Derived, Base, types::pure391>::value, DefaultConv>(
				"cocos2d::CCNodeRGBA::setCascadeColorEnabled", 
				(void*)addresses::address391()
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
			Interface::get()->addHook<wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure118>::value, DefaultConv>(
				"cocos2d::CCKeyboardHandler::handlerWithDelegate", 
				(void*)addresses::address118()
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure119>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure119>::value, DefaultConv>(
				"cocos2d::CCKeyboardHandler::initWithDelegate", 
				(void*)addresses::address119()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure120>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure120>::value, DefaultConv>(
				"cocos2d::CCKeyboardHandler::destructor", 
				(void*)addresses::address120()
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
			Interface::get()->addHook<wrap::addSpriteFramesWithFile<DefaultConv, Derived, Base, types::pure496>::value, DefaultConv>(
				"cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile", 
				(void*)addresses::address496()
			);
		}

		if constexpr (compare::sharedSpriteFrameCache<Derived, Base, types::pure497>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedSpriteFrameCache<DefaultConv, Derived, Base, types::pure497>::value, DefaultConv>(
				"cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache", 
				(void*)addresses::address497()
			);
		}

		if constexpr (compare::spriteFrameByName<Derived, Base, types::pure498>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrameCache::spriteFrameByName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spriteFrameByName<DefaultConv, Derived, Base, types::pure498>::value, DefaultConv>(
				"cocos2d::CCSpriteFrameCache::spriteFrameByName", 
				(void*)addresses::address498()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJAccountManager> : ModifyBase<Modify<Derived, GJAccountManager>> {
	using ModifyBase<Modify<Derived, GJAccountManager>>::ModifyBase;
	using Base = GJAccountManager;
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

		if constexpr (compare::destructor<Derived, Base, types::pure1566>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1566>::value, DefaultConv>(
				"LevelEditorLayer::destructor", 
				(void*)addresses::address1566()
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1567>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::update<DefaultConv, Derived, Base, types::pure1567>::value, DefaultConv>(
				"LevelEditorLayer::update", 
				(void*)addresses::address1567()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure1568>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure1568>::value, DefaultConv>(
				"LevelEditorLayer::draw", 
				(void*)addresses::address1568()
			);
		}

		if constexpr (compare::updateColor<Derived, Base, types::pure1569>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColor<DefaultConv, Derived, Base, types::pure1569>::value, DefaultConv>(
				"LevelEditorLayer::updateColor", 
				(void*)addresses::address1569()
			);
		}

		if constexpr (compare::flipGravity<Derived, Base, types::pure1570>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::flipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::flipGravity<DefaultConv, Derived, Base, types::pure1570>::value, DefaultConv>(
				"LevelEditorLayer::flipGravity", 
				(void*)addresses::address1570()
			);
		}

		if constexpr (compare::calculateColorValues<Derived, Base, types::pure1571>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::calculateColorValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateColorValues<DefaultConv, Derived, Base, types::pure1571>::value, DefaultConv>(
				"LevelEditorLayer::calculateColorValues", 
				(void*)addresses::address1571()
			);
		}

		if constexpr (compare::addToGroup<Derived, Base, types::pure1572>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addToGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToGroup<DefaultConv, Derived, Base, types::pure1572>::value, DefaultConv>(
				"LevelEditorLayer::addToGroup", 
				(void*)addresses::address1572()
			);
		}

		if constexpr (compare::removeFromGroup<Derived, Base, types::pure1573>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeFromGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeFromGroup<DefaultConv, Derived, Base, types::pure1573>::value, DefaultConv>(
				"LevelEditorLayer::removeFromGroup", 
				(void*)addresses::address1573()
			);
		}

		if constexpr (compare::timeForXPos<Derived, Base, types::pure1574>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::timeForXPos", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::timeForXPos<DefaultConv, Derived, Base, types::pure1574>::value, DefaultConv>(
				"LevelEditorLayer::timeForXPos", 
				(void*)addresses::address1574()
			);
		}

		if constexpr (compare::xPosForTime<Derived, Base, types::pure1575>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::xPosForTime", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::xPosForTime<DefaultConv, Derived, Base, types::pure1575>::value, DefaultConv>(
				"LevelEditorLayer::xPosForTime", 
				(void*)addresses::address1575()
			);
		}

		if constexpr (compare::levelSettingsUpdated<Derived, Base, types::pure1576>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::levelSettingsUpdated", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::levelSettingsUpdated<DefaultConv, Derived, Base, types::pure1576>::value, DefaultConv>(
				"LevelEditorLayer::levelSettingsUpdated", 
				(void*)addresses::address1576()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1577>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1577>::value, DefaultConv>(
				"LevelEditorLayer::create", 
				(void*)addresses::address1577()
			);
		}

		if constexpr (compare::activateTriggerEffect<Derived, Base, types::pure1578>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::activateTriggerEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activateTriggerEffect<DefaultConv, Derived, Base, types::pure1578>::value, DefaultConv>(
				"LevelEditorLayer::activateTriggerEffect", 
				(void*)addresses::address1578()
			);
		}

		if constexpr (compare::addObjectFromString<Derived, Base, types::pure1579>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addObjectFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addObjectFromString<DefaultConv, Derived, Base, types::pure1579>::value, DefaultConv>(
				"LevelEditorLayer::addObjectFromString", 
				(void*)addresses::address1579()
			);
		}

		if constexpr (compare::addSpecial<Derived, Base, types::pure1580>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addSpecial", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addSpecial<DefaultConv, Derived, Base, types::pure1580>::value, DefaultConv>(
				"LevelEditorLayer::addSpecial", 
				(void*)addresses::address1580()
			);
		}

		if constexpr (compare::addToRedoList<Derived, Base, types::pure1581>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addToRedoList", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToRedoList<DefaultConv, Derived, Base, types::pure1581>::value, DefaultConv>(
				"LevelEditorLayer::addToRedoList", 
				(void*)addresses::address1581()
			);
		}

		if constexpr (compare::addToUndoList<Derived, Base, types::pure1582>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addToUndoList", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addToUndoList<DefaultConv, Derived, Base, types::pure1582>::value, DefaultConv>(
				"LevelEditorLayer::addToUndoList", 
				(void*)addresses::address1582()
			);
		}

		if constexpr (compare::animateInDualGround<Derived, Base, types::pure1583>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::animateInDualGround", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::animateInDualGround<DefaultConv, Derived, Base, types::pure1583>::value, DefaultConv>(
				"LevelEditorLayer::animateInDualGround", 
				(void*)addresses::address1583()
			);
		}

		if constexpr (compare::checkCollisions<Derived, Base, types::pure1584>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::checkCollisions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::checkCollisions<DefaultConv, Derived, Base, types::pure1584>::value, DefaultConv>(
				"LevelEditorLayer::checkCollisions", 
				(void*)addresses::address1584()
			);
		}

		if constexpr (compare::createBackground<Derived, Base, types::pure1585>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createBackground", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createBackground<DefaultConv, Derived, Base, types::pure1585>::value, DefaultConv>(
				"LevelEditorLayer::createBackground", 
				(void*)addresses::address1585()
			);
		}

		if constexpr (compare::createGroundLayer<Derived, Base, types::pure1586>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createGroundLayer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createGroundLayer<DefaultConv, Derived, Base, types::pure1586>::value, DefaultConv>(
				"LevelEditorLayer::createGroundLayer", 
				(void*)addresses::address1586()
			);
		}

		if constexpr (compare::createObject<Derived, Base, types::pure1587>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createObject<DefaultConv, Derived, Base, types::pure1587>::value, DefaultConv>(
				"LevelEditorLayer::createObject", 
				(void*)addresses::address1587()
			);
		}

		if constexpr (compare::createObjectsFromSetup<Derived, Base, types::pure1588>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createObjectsFromSetup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createObjectsFromSetup<DefaultConv, Derived, Base, types::pure1588>::value, DefaultConv>(
				"LevelEditorLayer::createObjectsFromSetup", 
				(void*)addresses::address1588()
			);
		}

		if constexpr (compare::createObjectsFromString<Derived, Base, types::pure1589>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createObjectsFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createObjectsFromString<DefaultConv, Derived, Base, types::pure1589>::value, DefaultConv>(
				"LevelEditorLayer::createObjectsFromString", 
				(void*)addresses::address1589()
			);
		}

		if constexpr (compare::getLastObjectX<Derived, Base, types::pure1590>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getLastObjectX", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLastObjectX<DefaultConv, Derived, Base, types::pure1590>::value, DefaultConv>(
				"LevelEditorLayer::getLastObjectX", 
				(void*)addresses::address1590()
			);
		}

		if constexpr (compare::getLevelString<Derived, Base, types::pure1591>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getLevelString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLevelString<DefaultConv, Derived, Base, types::pure1591>::value, DefaultConv>(
				"LevelEditorLayer::getLevelString", 
				(void*)addresses::address1591()
			);
		}

		if constexpr (compare::getNextColorChannel<Derived, Base, types::pure1592>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getNextColorChannel", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getNextColorChannel<DefaultConv, Derived, Base, types::pure1592>::value, DefaultConv>(
				"LevelEditorLayer::getNextColorChannel", 
				(void*)addresses::address1592()
			);
		}

		if constexpr (compare::getNextFreeBlockID<Derived, Base, types::pure1593>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getNextFreeBlockID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getNextFreeBlockID<DefaultConv, Derived, Base, types::pure1593>::value, DefaultConv>(
				"LevelEditorLayer::getNextFreeBlockID", 
				(void*)addresses::address1593()
			);
		}

		if constexpr (compare::getNextFreeGroupID<Derived, Base, types::pure1594>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getNextFreeGroupID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getNextFreeGroupID<DefaultConv, Derived, Base, types::pure1594>::value, DefaultConv>(
				"LevelEditorLayer::getNextFreeGroupID", 
				(void*)addresses::address1594()
			);
		}

		if constexpr (compare::getNextFreeItemID<Derived, Base, types::pure1595>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getNextFreeItemID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getNextFreeItemID<DefaultConv, Derived, Base, types::pure1595>::value, DefaultConv>(
				"LevelEditorLayer::getNextFreeItemID", 
				(void*)addresses::address1595()
			);
		}

		if constexpr (compare::getObjectRect<Derived, Base, types::pure1596>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getObjectRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getObjectRect<DefaultConv, Derived, Base, types::pure1596>::value, DefaultConv>(
				"LevelEditorLayer::getObjectRect", 
				(void*)addresses::address1596()
			);
		}

		if constexpr (compare::getRelativeOffset<Derived, Base, types::pure1597>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getRelativeOffset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getRelativeOffset<DefaultConv, Derived, Base, types::pure1597>::value, DefaultConv>(
				"LevelEditorLayer::getRelativeOffset", 
				(void*)addresses::address1597()
			);
		}

		if constexpr (compare::handleAction<Derived, Base, types::pure1598>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::handleAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::handleAction<DefaultConv, Derived, Base, types::pure1598>::value, DefaultConv>(
				"LevelEditorLayer::handleAction", 
				(void*)addresses::address1598()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1599>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1599>::value, DefaultConv>(
				"LevelEditorLayer::init", 
				(void*)addresses::address1599()
			);
		}

		if constexpr (compare::objectAtPosition<Derived, Base, types::pure1600>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::objectAtPosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectAtPosition<DefaultConv, Derived, Base, types::pure1600>::value, DefaultConv>(
				"LevelEditorLayer::objectAtPosition", 
				(void*)addresses::address1600()
			);
		}

		if constexpr (compare::objectMoved<Derived, Base, types::pure1601>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::objectMoved", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectMoved<DefaultConv, Derived, Base, types::pure1601>::value, DefaultConv>(
				"LevelEditorLayer::objectMoved", 
				(void*)addresses::address1601()
			);
		}

		if constexpr (compare::objectsInRect<Derived, Base, types::pure1602>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::objectsInRect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectsInRect<DefaultConv, Derived, Base, types::pure1602>::value, DefaultConv>(
				"LevelEditorLayer::objectsInRect", 
				(void*)addresses::address1602()
			);
		}

		if constexpr (compare::onPlaytest<Derived, Base, types::pure1603>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::onPlaytest", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onPlaytest<DefaultConv, Derived, Base, types::pure1603>::value, DefaultConv>(
				"LevelEditorLayer::onPlaytest", 
				(void*)addresses::address1603()
			);
		}

		if constexpr (compare::onStopPlaytest<Derived, Base, types::pure1604>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::onStopPlaytest", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onStopPlaytest<DefaultConv, Derived, Base, types::pure1604>::value, DefaultConv>(
				"LevelEditorLayer::onStopPlaytest", 
				(void*)addresses::address1604()
			);
		}

		if constexpr (compare::playMusic<Derived, Base, types::pure1606>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::playMusic", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playMusic<DefaultConv, Derived, Base, types::pure1606>::value, DefaultConv>(
				"LevelEditorLayer::playMusic", 
				(void*)addresses::address1606()
			);
		}

		if constexpr (compare::recreateGroups<Derived, Base, types::pure1607>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::recreateGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::recreateGroups<DefaultConv, Derived, Base, types::pure1607>::value, DefaultConv>(
				"LevelEditorLayer::recreateGroups", 
				(void*)addresses::address1607()
			);
		}

		if constexpr (compare::redoLastAction<Derived, Base, types::pure1608>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::redoLastAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::redoLastAction<DefaultConv, Derived, Base, types::pure1608>::value, DefaultConv>(
				"LevelEditorLayer::redoLastAction", 
				(void*)addresses::address1608()
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure1609>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure1609>::value, DefaultConv>(
				"LevelEditorLayer::removeAllObjects", 
				(void*)addresses::address1609()
			);
		}

		if constexpr (compare::removeAllObjectsOfType<Derived, Base, types::pure1610>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeAllObjectsOfType", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllObjectsOfType<DefaultConv, Derived, Base, types::pure1610>::value, DefaultConv>(
				"LevelEditorLayer::removeAllObjectsOfType", 
				(void*)addresses::address1610()
			);
		}

		if constexpr (compare::removeObject<Derived, Base, types::pure1611>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeObject<DefaultConv, Derived, Base, types::pure1611>::value, DefaultConv>(
				"LevelEditorLayer::removeObject", 
				(void*)addresses::address1611()
			);
		}

		if constexpr (compare::removeSpecial<Derived, Base, types::pure1612>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeSpecial", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeSpecial<DefaultConv, Derived, Base, types::pure1612>::value, DefaultConv>(
				"LevelEditorLayer::removeSpecial", 
				(void*)addresses::address1612()
			);
		}

		if constexpr (compare::resetMovingObjects<Derived, Base, types::pure1613>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::resetMovingObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetMovingObjects<DefaultConv, Derived, Base, types::pure1613>::value, DefaultConv>(
				"LevelEditorLayer::resetMovingObjects", 
				(void*)addresses::address1613()
			);
		}

		if constexpr (compare::resetObjectVector<Derived, Base, types::pure1614>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::resetObjectVector", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetObjectVector<DefaultConv, Derived, Base, types::pure1614>::value, DefaultConv>(
				"LevelEditorLayer::resetObjectVector", 
				(void*)addresses::address1614()
			);
		}

		if constexpr (compare::resetToggledGroups<Derived, Base, types::pure1615>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::resetToggledGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetToggledGroups<DefaultConv, Derived, Base, types::pure1615>::value, DefaultConv>(
				"LevelEditorLayer::resetToggledGroups", 
				(void*)addresses::address1615()
			);
		}

		if constexpr (compare::resetToggledGroupsAndObjects<Derived, Base, types::pure1616>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::resetToggledGroupsAndObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetToggledGroupsAndObjects<DefaultConv, Derived, Base, types::pure1616>::value, DefaultConv>(
				"LevelEditorLayer::resetToggledGroupsAndObjects", 
				(void*)addresses::address1616()
			);
		}

		if constexpr (compare::resetUnusedColorChannels<Derived, Base, types::pure1617>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::resetUnusedColorChannels", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetUnusedColorChannels<DefaultConv, Derived, Base, types::pure1617>::value, DefaultConv>(
				"LevelEditorLayer::resetUnusedColorChannels", 
				(void*)addresses::address1617()
			);
		}

		if constexpr (compare::rotationForSlopeNearObject<Derived, Base, types::pure1618>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::rotationForSlopeNearObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::rotationForSlopeNearObject<DefaultConv, Derived, Base, types::pure1618>::value, DefaultConv>(
				"LevelEditorLayer::rotationForSlopeNearObject", 
				(void*)addresses::address1618()
			);
		}

		if constexpr (compare::runColorEffect<Derived, Base, types::pure1619>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::runColorEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runColorEffect<DefaultConv, Derived, Base, types::pure1619>::value, DefaultConv>(
				"LevelEditorLayer::runColorEffect", 
				(void*)addresses::address1619()
			);
		}

		if constexpr (compare::setupLevelStart<Derived, Base, types::pure1620>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::setupLevelStart", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupLevelStart<DefaultConv, Derived, Base, types::pure1620>::value, DefaultConv>(
				"LevelEditorLayer::setupLevelStart", 
				(void*)addresses::address1620()
			);
		}

		if constexpr (compare::sortStickyGroups<Derived, Base, types::pure1621>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::sortStickyGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sortStickyGroups<DefaultConv, Derived, Base, types::pure1621>::value, DefaultConv>(
				"LevelEditorLayer::sortStickyGroups", 
				(void*)addresses::address1621()
			);
		}

		if constexpr (compare::stopTriggersInGroup<Derived, Base, types::pure1622>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::stopTriggersInGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopTriggersInGroup<DefaultConv, Derived, Base, types::pure1622>::value, DefaultConv>(
				"LevelEditorLayer::stopTriggersInGroup", 
				(void*)addresses::address1622()
			);
		}

		if constexpr (compare::toggleDualMode<Derived, Base, types::pure1623>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::toggleDualMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleDualMode<DefaultConv, Derived, Base, types::pure1623>::value, DefaultConv>(
				"LevelEditorLayer::toggleDualMode", 
				(void*)addresses::address1623()
			);
		}

		if constexpr (compare::toggleGroupPreview<Derived, Base, types::pure1624>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::toggleGroupPreview", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleGroupPreview<DefaultConv, Derived, Base, types::pure1624>::value, DefaultConv>(
				"LevelEditorLayer::toggleGroupPreview", 
				(void*)addresses::address1624()
			);
		}

		if constexpr (compare::transferDefaultColors<Derived, Base, types::pure1625>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::transferDefaultColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::transferDefaultColors<DefaultConv, Derived, Base, types::pure1625>::value, DefaultConv>(
				"LevelEditorLayer::transferDefaultColors", 
				(void*)addresses::address1625()
			);
		}

		if constexpr (compare::undoLastAction<Derived, Base, types::pure1626>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::undoLastAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::undoLastAction<DefaultConv, Derived, Base, types::pure1626>::value, DefaultConv>(
				"LevelEditorLayer::undoLastAction", 
				(void*)addresses::address1626()
			);
		}

		if constexpr (compare::updateBGAndGColors<Derived, Base, types::pure1627>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateBGAndGColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateBGAndGColors<DefaultConv, Derived, Base, types::pure1627>::value, DefaultConv>(
				"LevelEditorLayer::updateBGAndGColors", 
				(void*)addresses::address1627()
			);
		}

		if constexpr (compare::updateBlendValues<Derived, Base, types::pure1628>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateBlendValues", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateBlendValues<DefaultConv, Derived, Base, types::pure1628>::value, DefaultConv>(
				"LevelEditorLayer::updateBlendValues", 
				(void*)addresses::address1628()
			);
		}

		if constexpr (compare::updateDualGround<Derived, Base, types::pure1629>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateDualGround", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDualGround<DefaultConv, Derived, Base, types::pure1629>::value, DefaultConv>(
				"LevelEditorLayer::updateDualGround", 
				(void*)addresses::address1629()
			);
		}

		if constexpr (compare::updateEditorMode<Derived, Base, types::pure1630>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateEditorMode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateEditorMode<DefaultConv, Derived, Base, types::pure1630>::value, DefaultConv>(
				"LevelEditorLayer::updateEditorMode", 
				(void*)addresses::address1630()
			);
		}

		if constexpr (compare::updateGameObjectsNew<Derived, Base, types::pure1631>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateGameObjectsNew", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateGameObjectsNew<DefaultConv, Derived, Base, types::pure1631>::value, DefaultConv>(
				"LevelEditorLayer::updateGameObjectsNew", 
				(void*)addresses::address1631()
			);
		}

		if constexpr (compare::updateGround<Derived, Base, types::pure1632>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateGround", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateGround<DefaultConv, Derived, Base, types::pure1632>::value, DefaultConv>(
				"LevelEditorLayer::updateGround", 
				(void*)addresses::address1632()
			);
		}

		if constexpr (compare::updateGroundWidth<Derived, Base, types::pure1633>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateGroundWidth", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateGroundWidth<DefaultConv, Derived, Base, types::pure1633>::value, DefaultConv>(
				"LevelEditorLayer::updateGroundWidth", 
				(void*)addresses::address1633()
			);
		}

		if constexpr (compare::updateOptions<Derived, Base, types::pure1634>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateOptions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateOptions<DefaultConv, Derived, Base, types::pure1634>::value, DefaultConv>(
				"LevelEditorLayer::updateOptions", 
				(void*)addresses::address1634()
			);
		}

		if constexpr (compare::updateToggledGroups<Derived, Base, types::pure1635>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateToggledGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateToggledGroups<DefaultConv, Derived, Base, types::pure1635>::value, DefaultConv>(
				"LevelEditorLayer::updateToggledGroups", 
				(void*)addresses::address1635()
			);
		}

		if constexpr (compare::updateVisibility<Derived, Base, types::pure1636>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateVisibility<DefaultConv, Derived, Base, types::pure1636>::value, DefaultConv>(
				"LevelEditorLayer::updateVisibility", 
				(void*)addresses::address1636()
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
			Interface::get()->addHook<wrap::sharedDispatcher<DefaultConv, Derived, Base, types::pure110>::value, DefaultConv>(
				"cocos2d::CCIMEDispatcher::sharedDispatcher", 
				(void*)addresses::address110()
			);
		}

		if constexpr (compare::addDelegate<Derived, Base, types::pure111>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDispatcher::addDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addDelegate<DefaultConv, Derived, Base, types::pure111>::value, DefaultConv>(
				"cocos2d::CCIMEDispatcher::addDelegate", 
				(void*)addresses::address111()
			);
		}

		if constexpr (compare::removeDelegate<Derived, Base, types::pure112>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCIMEDispatcher::removeDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeDelegate<DefaultConv, Derived, Base, types::pure112>::value, DefaultConv>(
				"cocos2d::CCIMEDispatcher::removeDelegate", 
				(void*)addresses::address112()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure752>::value, DefaultConv>(
				"CCMenuItemSpriteExtra::create", 
				(void*)addresses::address752()
			);
		}

		if constexpr (compare::setSizeMult<Derived, Base, types::pure753>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::setSizeMult", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSizeMult<DefaultConv, Derived, Base, types::pure753>::value, DefaultConv>(
				"CCMenuItemSpriteExtra::setSizeMult", 
				(void*)addresses::address753()
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure754>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure754>::value, DefaultConv>(
				"CCMenuItemSpriteExtra::constructor", 
				(void*)addresses::address754()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure756>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemSpriteExtra::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure756>::value, DefaultConv>(
				"CCMenuItemSpriteExtra::init", 
				(void*)addresses::address756()
			);
		}

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
			Interface::get()->addHook<wrap::addObject<DefaultConv, Derived, Base, types::pure9>::value, DefaultConv>(
				"cocos2d::CCArray::addObject", 
				(void*)addresses::address9()
			);
		}

		if constexpr (compare::addObjectNew<Derived, Base, types::pure10>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::addObjectNew", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addObjectNew<DefaultConv, Derived, Base, types::pure10>::value, DefaultConv>(
				"cocos2d::CCArray::addObjectNew", 
				(void*)addresses::address10()
			);
		}

		if constexpr (compare::addObjectsFromArray<Derived, Base, types::pure11>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::addObjectsFromArray", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addObjectsFromArray<DefaultConv, Derived, Base, types::pure11>::value, DefaultConv>(
				"cocos2d::CCArray::addObjectsFromArray", 
				(void*)addresses::address11()
			);
		}

		if constexpr (compare::containsObject<Derived, Base, types::pure12>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::containsObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::containsObject<DefaultConv, Derived, Base, types::pure12>::value, DefaultConv>(
				"cocos2d::CCArray::containsObject", 
				(void*)addresses::address12()
			);
		}

		if constexpr (compare::count<Derived, Base, types::pure13>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::count", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::count<DefaultConv, Derived, Base, types::pure13>::value, DefaultConv>(
				"cocos2d::CCArray::count", 
				(void*)addresses::address13()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure14>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure14>::value, DefaultConv>(
				"cocos2d::CCArray::create", 
				(void*)addresses::address14()
			);
		}

		if constexpr (compare::createWithObject<Derived, Base, types::pure15>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::createWithObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createWithObject<DefaultConv, Derived, Base, types::pure15>::value, DefaultConv>(
				"cocos2d::CCArray::createWithObject", 
				(void*)addresses::address15()
			);
		}

		if constexpr (compare::fastRemoveObject<Derived, Base, types::pure16>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::fastRemoveObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fastRemoveObject<DefaultConv, Derived, Base, types::pure16>::value, DefaultConv>(
				"cocos2d::CCArray::fastRemoveObject", 
				(void*)addresses::address16()
			);
		}

		if constexpr (compare::fastRemoveObjectAtIndex<Derived, Base, types::pure17>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::fastRemoveObjectAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fastRemoveObjectAtIndex<DefaultConv, Derived, Base, types::pure17>::value, DefaultConv>(
				"cocos2d::CCArray::fastRemoveObjectAtIndex", 
				(void*)addresses::address17()
			);
		}

		if constexpr (compare::fastRemoveObjectAtIndexNew<Derived, Base, types::pure18>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::fastRemoveObjectAtIndexNew", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::fastRemoveObjectAtIndexNew<DefaultConv, Derived, Base, types::pure18>::value, DefaultConv>(
				"cocos2d::CCArray::fastRemoveObjectAtIndexNew", 
				(void*)addresses::address18()
			);
		}

		if constexpr (compare::lastObject<Derived, Base, types::pure19>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::lastObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::lastObject<DefaultConv, Derived, Base, types::pure19>::value, DefaultConv>(
				"cocos2d::CCArray::lastObject", 
				(void*)addresses::address19()
			);
		}

		if constexpr (compare::objectAtIndex<Derived, Base, types::pure20>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::objectAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectAtIndex<DefaultConv, Derived, Base, types::pure20>::value, DefaultConv>(
				"cocos2d::CCArray::objectAtIndex", 
				(void*)addresses::address20()
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure21>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure21>::value, DefaultConv>(
				"cocos2d::CCArray::removeAllObjects", 
				(void*)addresses::address21()
			);
		}

		if constexpr (compare::removeLastObject<Derived, Base, types::pure22>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeLastObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeLastObject<DefaultConv, Derived, Base, types::pure22>::value, DefaultConv>(
				"cocos2d::CCArray::removeLastObject", 
				(void*)addresses::address22()
			);
		}

		if constexpr (compare::removeObject<Derived, Base, types::pure23>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeObject<DefaultConv, Derived, Base, types::pure23>::value, DefaultConv>(
				"cocos2d::CCArray::removeObject", 
				(void*)addresses::address23()
			);
		}

		if constexpr (compare::removeObjectAtIndex<Derived, Base, types::pure24>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::removeObjectAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeObjectAtIndex<DefaultConv, Derived, Base, types::pure24>::value, DefaultConv>(
				"cocos2d::CCArray::removeObjectAtIndex", 
				(void*)addresses::address24()
			);
		}

		if constexpr (compare::stringAtIndex<Derived, Base, types::pure25>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCArray::stringAtIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stringAtIndex<DefaultConv, Derived, Base, types::pure25>::value, DefaultConv>(
				"cocos2d::CCArray::stringAtIndex", 
				(void*)addresses::address25()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure711>::value, DefaultConv>(
				"ButtonSprite::create", 
				(void*)addresses::address711()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure713>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure713>::value, DefaultConv>(
				"ButtonSprite::create", 
				(void*)addresses::address713()
			);
		}

		if constexpr (compare::updateBGImage<Derived, Base, types::pure714>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::updateBGImage", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateBGImage<DefaultConv, Derived, Base, types::pure714>::value, DefaultConv>(
				"ButtonSprite::updateBGImage", 
				(void*)addresses::address714()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure715>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure715>::value, DefaultConv>(
				"ButtonSprite::create", 
				(void*)addresses::address715()
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

		if constexpr (compare::create<Derived, Base, types::pure746>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCLightFlash::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure746>::value, DefaultConv>(
				"CCLightFlash::create", 
				(void*)addresses::address746()
			);
		}

		if constexpr (compare::playEffect<Derived, Base, types::pure747>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCLightFlash::playEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playEffect<DefaultConv, Derived, Base, types::pure747>::value, DefaultConv>(
				"CCLightFlash::playEffect", 
				(void*)addresses::address747()
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
			Interface::get()->addHook<wrap::getValue<DefaultConv, Derived, Base, types::pure2112>::value, DefaultConv>(
				"Slider::getValue", 
				(void*)addresses::address2112()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure2114>::value) {
			Interface::get()->logInfo(
				"Adding hook at function Slider::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2114>::value, DefaultConv>(
				"Slider::create", 
				(void*)addresses::address2114()
			);
		}

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure96>::value, DefaultConv>(
				"cocos2d::CCEaseIn::create", 
				(void*)addresses::address96()
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
struct Modify<Derived, SetItemIDLayer> : ModifyBase<Modify<Derived, SetItemIDLayer>> {
	using ModifyBase<Modify<Derived, SetItemIDLayer>>::ModifyBase;
	using Base = SetItemIDLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2049>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetItemIDLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2049>::value, DefaultConv>(
				"SetItemIDLayer::create", 
				(void*)addresses::address2049()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure95>::value, DefaultConv>(
				"cocos2d::CCEaseElasticOut::create", 
				(void*)addresses::address95()
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

		if constexpr (compare::destructor<Derived, Base, types::pure54>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure54>::value, DefaultConv>(
				"cocos2d::CCDirector::destructor", 
				(void*)addresses::address54()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure55>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure55>::value, DefaultConv>(
				"cocos2d::CCDirector::init", 
				(void*)addresses::address55()
			);
		}

		if constexpr (compare::getScheduler<Derived, Base, types::pure56>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getScheduler<DefaultConv, Derived, Base, types::pure56>::value, DefaultConv>(
				"cocos2d::CCDirector::getScheduler", 
				(void*)addresses::address56()
			);
		}

		if constexpr (compare::setScheduler<Derived, Base, types::pure57>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setScheduler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setScheduler<DefaultConv, Derived, Base, types::pure57>::value, DefaultConv>(
				"cocos2d::CCDirector::setScheduler", 
				(void*)addresses::address57()
			);
		}

		if constexpr (compare::getActionManager<Derived, Base, types::pure58>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getActionManager<DefaultConv, Derived, Base, types::pure58>::value, DefaultConv>(
				"cocos2d::CCDirector::getActionManager", 
				(void*)addresses::address58()
			);
		}

		if constexpr (compare::setActionManager<Derived, Base, types::pure59>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setActionManager", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setActionManager<DefaultConv, Derived, Base, types::pure59>::value, DefaultConv>(
				"cocos2d::CCDirector::setActionManager", 
				(void*)addresses::address59()
			);
		}

		if constexpr (compare::getTouchDispatcher<Derived, Base, types::pure60>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTouchDispatcher<DefaultConv, Derived, Base, types::pure60>::value, DefaultConv>(
				"cocos2d::CCDirector::getTouchDispatcher", 
				(void*)addresses::address60()
			);
		}

		if constexpr (compare::setTouchDispatcher<Derived, Base, types::pure61>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setTouchDispatcher<DefaultConv, Derived, Base, types::pure61>::value, DefaultConv>(
				"cocos2d::CCDirector::setTouchDispatcher", 
				(void*)addresses::address61()
			);
		}

		if constexpr (compare::getKeypadDispatcher<Derived, Base, types::pure62>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getKeypadDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getKeypadDispatcher<DefaultConv, Derived, Base, types::pure62>::value, DefaultConv>(
				"cocos2d::CCDirector::getKeypadDispatcher", 
				(void*)addresses::address62()
			);
		}

		if constexpr (compare::setKeypadDispatcher<Derived, Base, types::pure63>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setKeypadDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setKeypadDispatcher<DefaultConv, Derived, Base, types::pure63>::value, DefaultConv>(
				"cocos2d::CCDirector::setKeypadDispatcher", 
				(void*)addresses::address63()
			);
		}

		if constexpr (compare::getKeyboardDispatcher<Derived, Base, types::pure64>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getKeyboardDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getKeyboardDispatcher<DefaultConv, Derived, Base, types::pure64>::value, DefaultConv>(
				"cocos2d::CCDirector::getKeyboardDispatcher", 
				(void*)addresses::address64()
			);
		}

		if constexpr (compare::setKeyboardDispatcher<Derived, Base, types::pure65>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setKeyboardDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setKeyboardDispatcher<DefaultConv, Derived, Base, types::pure65>::value, DefaultConv>(
				"cocos2d::CCDirector::setKeyboardDispatcher", 
				(void*)addresses::address65()
			);
		}

		if constexpr (compare::getMouseDispatcher<Derived, Base, types::pure66>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getMouseDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMouseDispatcher<DefaultConv, Derived, Base, types::pure66>::value, DefaultConv>(
				"cocos2d::CCDirector::getMouseDispatcher", 
				(void*)addresses::address66()
			);
		}

		if constexpr (compare::setMouseDispatcher<Derived, Base, types::pure67>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setMouseDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setMouseDispatcher<DefaultConv, Derived, Base, types::pure67>::value, DefaultConv>(
				"cocos2d::CCDirector::setMouseDispatcher", 
				(void*)addresses::address67()
			);
		}

		if constexpr (compare::getAccelerometer<Derived, Base, types::pure68>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getAccelerometer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAccelerometer<DefaultConv, Derived, Base, types::pure68>::value, DefaultConv>(
				"cocos2d::CCDirector::getAccelerometer", 
				(void*)addresses::address68()
			);
		}

		if constexpr (compare::setAccelerometer<Derived, Base, types::pure69>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setAccelerometer", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setAccelerometer<DefaultConv, Derived, Base, types::pure69>::value, DefaultConv>(
				"cocos2d::CCDirector::setAccelerometer", 
				(void*)addresses::address69()
			);
		}

		if constexpr (compare::getDeltaTime<Derived, Base, types::pure70>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getDeltaTime", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDeltaTime<DefaultConv, Derived, Base, types::pure70>::value, DefaultConv>(
				"cocos2d::CCDirector::getDeltaTime", 
				(void*)addresses::address70()
			);
		}

		if constexpr (compare::getSceneDelegate<Derived, Base, types::pure71>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getSceneDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSceneDelegate<DefaultConv, Derived, Base, types::pure71>::value, DefaultConv>(
				"cocos2d::CCDirector::getSceneDelegate", 
				(void*)addresses::address71()
			);
		}

		if constexpr (compare::setSceneDelegate<Derived, Base, types::pure72>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setSceneDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSceneDelegate<DefaultConv, Derived, Base, types::pure72>::value, DefaultConv>(
				"cocos2d::CCDirector::setSceneDelegate", 
				(void*)addresses::address72()
			);
		}

		if constexpr (compare::getWinSize<Derived, Base, types::pure73>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::getWinSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getWinSize<DefaultConv, Derived, Base, types::pure73>::value, DefaultConv>(
				"cocos2d::CCDirector::getWinSize", 
				(void*)addresses::address73()
			);
		}

		if constexpr (compare::pushScene<Derived, Base, types::pure74>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::pushScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::pushScene<DefaultConv, Derived, Base, types::pure74>::value, DefaultConv>(
				"cocos2d::CCDirector::pushScene", 
				(void*)addresses::address74()
			);
		}

		if constexpr (compare::replaceScene<Derived, Base, types::pure75>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::replaceScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::replaceScene<DefaultConv, Derived, Base, types::pure75>::value, DefaultConv>(
				"cocos2d::CCDirector::replaceScene", 
				(void*)addresses::address75()
			);
		}

		if constexpr (compare::resetSmoothFixCounter<Derived, Base, types::pure76>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::resetSmoothFixCounter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetSmoothFixCounter<DefaultConv, Derived, Base, types::pure76>::value, DefaultConv>(
				"cocos2d::CCDirector::resetSmoothFixCounter", 
				(void*)addresses::address76()
			);
		}

		if constexpr (compare::sharedDirector<Derived, Base, types::pure77>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::sharedDirector", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedDirector<DefaultConv, Derived, Base, types::pure77>::value, DefaultConv>(
				"cocos2d::CCDirector::sharedDirector", 
				(void*)addresses::address77()
			);
		}

		if constexpr (compare::calculateDeltaTime<Derived, Base, types::pure78>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::calculateDeltaTime", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateDeltaTime<DefaultConv, Derived, Base, types::pure78>::value, DefaultConv>(
				"cocos2d::CCDirector::calculateDeltaTime", 
				(void*)addresses::address78()
			);
		}

		if constexpr (compare::calculateMPF<Derived, Base, types::pure79>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::calculateMPF", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateMPF<DefaultConv, Derived, Base, types::pure79>::value, DefaultConv>(
				"cocos2d::CCDirector::calculateMPF", 
				(void*)addresses::address79()
			);
		}

		if constexpr (compare::convertToGL<Derived, Base, types::pure80>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::convertToGL", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::convertToGL<DefaultConv, Derived, Base, types::pure80>::value, DefaultConv>(
				"cocos2d::CCDirector::convertToGL", 
				(void*)addresses::address80()
			);
		}

		if constexpr (compare::drawScene<Derived, Base, types::pure81>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::drawScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::drawScene<DefaultConv, Derived, Base, types::pure81>::value, DefaultConv>(
				"cocos2d::CCDirector::drawScene", 
				(void*)addresses::address81()
			);
		}

		if constexpr (compare::setNextScene<Derived, Base, types::pure82>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::setNextScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setNextScene<DefaultConv, Derived, Base, types::pure82>::value, DefaultConv>(
				"cocos2d::CCDirector::setNextScene", 
				(void*)addresses::address82()
			);
		}

		if constexpr (compare::showStats<Derived, Base, types::pure83>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::showStats", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::showStats<DefaultConv, Derived, Base, types::pure83>::value, DefaultConv>(
				"cocos2d::CCDirector::showStats", 
				(void*)addresses::address83()
			);
		}

		if constexpr (compare::updateContentScale<Derived, Base, types::pure84>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::updateContentScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateContentScale<DefaultConv, Derived, Base, types::pure84>::value, DefaultConv>(
				"cocos2d::CCDirector::updateContentScale", 
				(void*)addresses::address84()
			);
		}

		if constexpr (compare::popSceneWithTransition<Derived, Base, types::pure85>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::popSceneWithTransition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::popSceneWithTransition<DefaultConv, Derived, Base, types::pure85>::value, DefaultConv>(
				"cocos2d::CCDirector::popSceneWithTransition", 
				(void*)addresses::address85()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, ColorSelectPopup> : ModifyBase<Modify<Derived, ColorSelectPopup>> {
	using ModifyBase<Modify<Derived, ColorSelectPopup>>::ModifyBase;
	using Base = ColorSelectPopup;
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
			Interface::get()->addHook<wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure121>::value, DefaultConv>(
				"cocos2d::CCKeypadHandler::handlerWithDelegate", 
				(void*)addresses::address121()
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure122>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure122>::value, DefaultConv>(
				"cocos2d::CCKeypadHandler::initWithDelegate", 
				(void*)addresses::address122()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure123>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure123>::value, DefaultConv>(
				"cocos2d::CCKeypadHandler::destructor", 
				(void*)addresses::address123()
			);
		}

		if constexpr (compare::getDelegate<Derived, Base, types::pure124>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::getDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getDelegate<DefaultConv, Derived, Base, types::pure124>::value, DefaultConv>(
				"cocos2d::CCKeypadHandler::getDelegate", 
				(void*)addresses::address124()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCScale9Sprite> : ModifyBase<Modify<Derived, cocos2d::extension::CCScale9Sprite>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCScale9Sprite>>::ModifyBase;
	using Base = cocos2d::extension::CCScale9Sprite;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::constructor<Derived, Base, types::pure571>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure571>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::constructor", 
				(void*)addresses::address571()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure572>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure572>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::create", 
				(void*)addresses::address572()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure573>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure573>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::create", 
				(void*)addresses::address573()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure574>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure574>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::destructor", 
				(void*)addresses::address574()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure575>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure575>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::init", 
				(void*)addresses::address575()
			);
		}

		if constexpr (compare::setContentSize<Derived, Base, types::pure576>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setContentSize<DefaultConv, Derived, Base, types::pure576>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setContentSize", 
				(void*)addresses::address576()
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure577>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::visit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::visit<DefaultConv, Derived, Base, types::pure577>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::visit", 
				(void*)addresses::address577()
			);
		}

		if constexpr (compare::getOpacity<Derived, Base, types::pure578>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOpacity<DefaultConv, Derived, Base, types::pure578>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::getOpacity", 
				(void*)addresses::address578()
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure579>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacity<DefaultConv, Derived, Base, types::pure579>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setOpacity", 
				(void*)addresses::address579()
			);
		}

		if constexpr (compare::updateDisplayedOpacity<Derived, Base, types::pure580>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::updateDisplayedOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure580>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::updateDisplayedOpacity", 
				(void*)addresses::address580()
			);
		}

		if constexpr (compare::getColor<Derived, Base, types::pure581>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getColor<DefaultConv, Derived, Base, types::pure581>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::getColor", 
				(void*)addresses::address581()
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure582>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColor<DefaultConv, Derived, Base, types::pure582>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setColor", 
				(void*)addresses::address582()
			);
		}

		if constexpr (compare::updateDisplayedColor<Derived, Base, types::pure583>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::updateDisplayedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure583>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::updateDisplayedColor", 
				(void*)addresses::address583()
			);
		}

		if constexpr (compare::setOpacityModifyRGB<Derived, Base, types::pure584>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacityModifyRGB<DefaultConv, Derived, Base, types::pure584>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setOpacityModifyRGB", 
				(void*)addresses::address584()
			);
		}

		if constexpr (compare::isOpacityModifyRGB<Derived, Base, types::pure585>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::isOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isOpacityModifyRGB<DefaultConv, Derived, Base, types::pure585>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::isOpacityModifyRGB", 
				(void*)addresses::address585()
			);
		}

		if constexpr (compare::getPreferredSize<Derived, Base, types::pure586>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getPreferredSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getPreferredSize<DefaultConv, Derived, Base, types::pure586>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::getPreferredSize", 
				(void*)addresses::address586()
			);
		}

		if constexpr (compare::setPreferredSize<Derived, Base, types::pure587>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setPreferredSize", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setPreferredSize<DefaultConv, Derived, Base, types::pure587>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setPreferredSize", 
				(void*)addresses::address587()
			);
		}

		if constexpr (compare::getCapInsets<Derived, Base, types::pure588>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getCapInsets", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCapInsets<DefaultConv, Derived, Base, types::pure588>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::getCapInsets", 
				(void*)addresses::address588()
			);
		}

		if constexpr (compare::setCapInsets<Derived, Base, types::pure589>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setCapInsets", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setCapInsets<DefaultConv, Derived, Base, types::pure589>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setCapInsets", 
				(void*)addresses::address589()
			);
		}

		if constexpr (compare::getInsetLeft<Derived, Base, types::pure590>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetLeft", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getInsetLeft<DefaultConv, Derived, Base, types::pure590>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::getInsetLeft", 
				(void*)addresses::address590()
			);
		}

		if constexpr (compare::setInsetLeft<Derived, Base, types::pure591>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetLeft", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setInsetLeft<DefaultConv, Derived, Base, types::pure591>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setInsetLeft", 
				(void*)addresses::address591()
			);
		}

		if constexpr (compare::getInsetTop<Derived, Base, types::pure592>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetTop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getInsetTop<DefaultConv, Derived, Base, types::pure592>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::getInsetTop", 
				(void*)addresses::address592()
			);
		}

		if constexpr (compare::setInsetTop<Derived, Base, types::pure593>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetTop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setInsetTop<DefaultConv, Derived, Base, types::pure593>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setInsetTop", 
				(void*)addresses::address593()
			);
		}

		if constexpr (compare::getInsetRight<Derived, Base, types::pure594>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetRight", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getInsetRight<DefaultConv, Derived, Base, types::pure594>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::getInsetRight", 
				(void*)addresses::address594()
			);
		}

		if constexpr (compare::setInsetRight<Derived, Base, types::pure595>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetRight", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setInsetRight<DefaultConv, Derived, Base, types::pure595>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setInsetRight", 
				(void*)addresses::address595()
			);
		}

		if constexpr (compare::getInsetBottom<Derived, Base, types::pure596>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::getInsetBottom", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getInsetBottom<DefaultConv, Derived, Base, types::pure596>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::getInsetBottom", 
				(void*)addresses::address596()
			);
		}

		if constexpr (compare::setInsetBottom<Derived, Base, types::pure597>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setInsetBottom", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setInsetBottom<DefaultConv, Derived, Base, types::pure597>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setInsetBottom", 
				(void*)addresses::address597()
			);
		}

		if constexpr (compare::initWithBatchNode<Derived, Base, types::pure598>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithBatchNode<DefaultConv, Derived, Base, types::pure598>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				(void*)addresses::address598()
			);
		}

		if constexpr (compare::initWithBatchNode<Derived, Base, types::pure599>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithBatchNode<DefaultConv, Derived, Base, types::pure599>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::initWithBatchNode", 
				(void*)addresses::address599()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure600>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure600>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address600()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure601>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure601>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address601()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure602>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure602>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address602()
			);
		}

		if constexpr (compare::initWithFile<Derived, Base, types::pure603>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithFile", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithFile<DefaultConv, Derived, Base, types::pure603>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::initWithFile", 
				(void*)addresses::address603()
			);
		}

		if constexpr (compare::initWithSpriteFrame<Derived, Base, types::pure604>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrame<DefaultConv, Derived, Base, types::pure604>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				(void*)addresses::address604()
			);
		}

		if constexpr (compare::initWithSpriteFrame<Derived, Base, types::pure605>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrame<DefaultConv, Derived, Base, types::pure605>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrame", 
				(void*)addresses::address605()
			);
		}

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure606>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure606>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				(void*)addresses::address606()
			);
		}

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure607>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure607>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::initWithSpriteFrameName", 
				(void*)addresses::address607()
			);
		}

		if constexpr (compare::updateWithBatchNode<Derived, Base, types::pure608>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::updateWithBatchNode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateWithBatchNode<DefaultConv, Derived, Base, types::pure608>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::updateWithBatchNode", 
				(void*)addresses::address608()
			);
		}

		if constexpr (compare::setSpriteFrame<Derived, Base, types::pure609>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::setSpriteFrame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSpriteFrame<DefaultConv, Derived, Base, types::pure609>::value, DefaultConv>(
				"cocos2d::extension::CCScale9Sprite::setSpriteFrame", 
				(void*)addresses::address609()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GJScaleControl> : ModifyBase<Modify<Derived, GJScaleControl>> {
	using ModifyBase<Modify<Derived, GJScaleControl>>::ModifyBase;
	using Base = GJScaleControl;
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

		if constexpr (compare::init<Derived, Base, types::pure1147>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1147>::value, DefaultConv>(
				"GJEffectManager::init", 
				(void*)addresses::address1147()
			);
		}

		if constexpr (compare::activeColorForIndex<Derived, Base, types::pure1148>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::activeColorForIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activeColorForIndex<DefaultConv, Derived, Base, types::pure1148>::value, DefaultConv>(
				"GJEffectManager::activeColorForIndex", 
				(void*)addresses::address1148()
			);
		}

		if constexpr (compare::activeOpacityForIndex<Derived, Base, types::pure1149>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::activeOpacityForIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activeOpacityForIndex<DefaultConv, Derived, Base, types::pure1149>::value, DefaultConv>(
				"GJEffectManager::activeOpacityForIndex", 
				(void*)addresses::address1149()
			);
		}

		if constexpr (compare::addAllInheritedColorActions<Derived, Base, types::pure1150>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::addAllInheritedColorActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addAllInheritedColorActions<DefaultConv, Derived, Base, types::pure1150>::value, DefaultConv>(
				"GJEffectManager::addAllInheritedColorActions", 
				(void*)addresses::address1150()
			);
		}

		if constexpr (compare::addGroupPulseEffect<Derived, Base, types::pure1151>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::addGroupPulseEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addGroupPulseEffect<DefaultConv, Derived, Base, types::pure1151>::value, DefaultConv>(
				"GJEffectManager::addGroupPulseEffect", 
				(void*)addresses::address1151()
			);
		}

		if constexpr (compare::calculateBaseActiveColors<Derived, Base, types::pure1152>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::calculateBaseActiveColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateBaseActiveColors<DefaultConv, Derived, Base, types::pure1152>::value, DefaultConv>(
				"GJEffectManager::calculateBaseActiveColors", 
				(void*)addresses::address1152()
			);
		}

		if constexpr (compare::calculateInheritedColor<Derived, Base, types::pure1153>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::calculateInheritedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateInheritedColor<DefaultConv, Derived, Base, types::pure1153>::value, DefaultConv>(
				"GJEffectManager::calculateInheritedColor", 
				(void*)addresses::address1153()
			);
		}

		if constexpr (compare::calculateLightBGColor<Derived, Base, types::pure1154>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::calculateLightBGColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::calculateLightBGColor<DefaultConv, Derived, Base, types::pure1154>::value, DefaultConv>(
				"GJEffectManager::calculateLightBGColor", 
				(void*)addresses::address1154()
			);
		}

		if constexpr (compare::colorActionChanged<Derived, Base, types::pure1155>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorActionChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorActionChanged<DefaultConv, Derived, Base, types::pure1155>::value, DefaultConv>(
				"GJEffectManager::colorActionChanged", 
				(void*)addresses::address1155()
			);
		}

		if constexpr (compare::colorExists<Derived, Base, types::pure1156>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorExists", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorExists<DefaultConv, Derived, Base, types::pure1156>::value, DefaultConv>(
				"GJEffectManager::colorExists", 
				(void*)addresses::address1156()
			);
		}

		if constexpr (compare::colorForEffect<Derived, Base, types::pure1157>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorForEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorForEffect<DefaultConv, Derived, Base, types::pure1157>::value, DefaultConv>(
				"GJEffectManager::colorForEffect", 
				(void*)addresses::address1157()
			);
		}

		if constexpr (compare::colorForGroupID<Derived, Base, types::pure1158>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorForGroupID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorForGroupID<DefaultConv, Derived, Base, types::pure1158>::value, DefaultConv>(
				"GJEffectManager::colorForGroupID", 
				(void*)addresses::address1158()
			);
		}

		if constexpr (compare::colorForIndex<Derived, Base, types::pure1159>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorForIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorForIndex<DefaultConv, Derived, Base, types::pure1159>::value, DefaultConv>(
				"GJEffectManager::colorForIndex", 
				(void*)addresses::address1159()
			);
		}

		if constexpr (compare::colorForPulseEffect<Derived, Base, types::pure1160>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorForPulseEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::colorForPulseEffect<DefaultConv, Derived, Base, types::pure1160>::value, DefaultConv>(
				"GJEffectManager::colorForPulseEffect", 
				(void*)addresses::address1160()
			);
		}

		if constexpr (compare::countChangedForItem<Derived, Base, types::pure1161>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::countChangedForItem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::countChangedForItem<DefaultConv, Derived, Base, types::pure1161>::value, DefaultConv>(
				"GJEffectManager::countChangedForItem", 
				(void*)addresses::address1161()
			);
		}

		if constexpr (compare::countForItem<Derived, Base, types::pure1162>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::countForItem", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::countForItem<DefaultConv, Derived, Base, types::pure1162>::value, DefaultConv>(
				"GJEffectManager::countForItem", 
				(void*)addresses::address1162()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1163>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1163>::value, DefaultConv>(
				"GJEffectManager::create", 
				(void*)addresses::address1163()
			);
		}

		if constexpr (compare::createFollowCommand<Derived, Base, types::pure1164>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::createFollowCommand", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createFollowCommand<DefaultConv, Derived, Base, types::pure1164>::value, DefaultConv>(
				"GJEffectManager::createFollowCommand", 
				(void*)addresses::address1164()
			);
		}

		if constexpr (compare::createMoveCommand<Derived, Base, types::pure1165>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::createMoveCommand", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createMoveCommand<DefaultConv, Derived, Base, types::pure1165>::value, DefaultConv>(
				"GJEffectManager::createMoveCommand", 
				(void*)addresses::address1165()
			);
		}

		if constexpr (compare::createPlayerFollowCommand<Derived, Base, types::pure1166>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::createPlayerFollowCommand", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createPlayerFollowCommand<DefaultConv, Derived, Base, types::pure1166>::value, DefaultConv>(
				"GJEffectManager::createPlayerFollowCommand", 
				(void*)addresses::address1166()
			);
		}

		if constexpr (compare::createRotateCommand<Derived, Base, types::pure1167>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::createRotateCommand", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::createRotateCommand<DefaultConv, Derived, Base, types::pure1167>::value, DefaultConv>(
				"GJEffectManager::createRotateCommand", 
				(void*)addresses::address1167()
			);
		}

		if constexpr (compare::getAllColorActions<Derived, Base, types::pure1168>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getAllColorActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAllColorActions<DefaultConv, Derived, Base, types::pure1168>::value, DefaultConv>(
				"GJEffectManager::getAllColorActions", 
				(void*)addresses::address1168()
			);
		}

		if constexpr (compare::getAllColorSprites<Derived, Base, types::pure1169>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getAllColorSprites", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getAllColorSprites<DefaultConv, Derived, Base, types::pure1169>::value, DefaultConv>(
				"GJEffectManager::getAllColorSprites", 
				(void*)addresses::address1169()
			);
		}

		if constexpr (compare::getColorAction<Derived, Base, types::pure1170>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getColorAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getColorAction<DefaultConv, Derived, Base, types::pure1170>::value, DefaultConv>(
				"GJEffectManager::getColorAction", 
				(void*)addresses::address1170()
			);
		}

		if constexpr (compare::getColorSprite<Derived, Base, types::pure1171>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getColorSprite", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getColorSprite<DefaultConv, Derived, Base, types::pure1171>::value, DefaultConv>(
				"GJEffectManager::getColorSprite", 
				(void*)addresses::address1171()
			);
		}

		if constexpr (compare::getCurrentStateString<Derived, Base, types::pure1172>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getCurrentStateString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getCurrentStateString<DefaultConv, Derived, Base, types::pure1172>::value, DefaultConv>(
				"GJEffectManager::getCurrentStateString", 
				(void*)addresses::address1172()
			);
		}

		if constexpr (compare::getLoadedMoveOffset<Derived, Base, types::pure1173>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getLoadedMoveOffset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getLoadedMoveOffset<DefaultConv, Derived, Base, types::pure1173>::value, DefaultConv>(
				"GJEffectManager::getLoadedMoveOffset", 
				(void*)addresses::address1173()
			);
		}

		if constexpr (compare::getMixedColor<Derived, Base, types::pure1174>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getMixedColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getMixedColor<DefaultConv, Derived, Base, types::pure1174>::value, DefaultConv>(
				"GJEffectManager::getMixedColor", 
				(void*)addresses::address1174()
			);
		}

		if constexpr (compare::getOpacityActionForGroup<Derived, Base, types::pure1175>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getOpacityActionForGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getOpacityActionForGroup<DefaultConv, Derived, Base, types::pure1175>::value, DefaultConv>(
				"GJEffectManager::getOpacityActionForGroup", 
				(void*)addresses::address1175()
			);
		}

		if constexpr (compare::getSaveString<Derived, Base, types::pure1176>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getSaveString<DefaultConv, Derived, Base, types::pure1176>::value, DefaultConv>(
				"GJEffectManager::getSaveString", 
				(void*)addresses::address1176()
			);
		}

		if constexpr (compare::handleObjectCollision<Derived, Base, types::pure1177>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::handleObjectCollision", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::handleObjectCollision<DefaultConv, Derived, Base, types::pure1177>::value, DefaultConv>(
				"GJEffectManager::handleObjectCollision", 
				(void*)addresses::address1177()
			);
		}

		if constexpr (compare::hasActiveDualTouch<Derived, Base, types::pure1178>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::hasActiveDualTouch", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasActiveDualTouch<DefaultConv, Derived, Base, types::pure1178>::value, DefaultConv>(
				"GJEffectManager::hasActiveDualTouch", 
				(void*)addresses::address1178()
			);
		}

		if constexpr (compare::hasBeenTriggered<Derived, Base, types::pure1179>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::hasBeenTriggered", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasBeenTriggered<DefaultConv, Derived, Base, types::pure1179>::value, DefaultConv>(
				"GJEffectManager::hasBeenTriggered", 
				(void*)addresses::address1179()
			);
		}

		if constexpr (compare::hasPulseEffectForGroupID<Derived, Base, types::pure1180>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::hasPulseEffectForGroupID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::hasPulseEffectForGroupID<DefaultConv, Derived, Base, types::pure1180>::value, DefaultConv>(
				"GJEffectManager::hasPulseEffectForGroupID", 
				(void*)addresses::address1180()
			);
		}

		if constexpr (compare::isGroupEnabled<Derived, Base, types::pure1181>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::isGroupEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isGroupEnabled<DefaultConv, Derived, Base, types::pure1181>::value, DefaultConv>(
				"GJEffectManager::isGroupEnabled", 
				(void*)addresses::address1181()
			);
		}

		if constexpr (compare::keyForGroupIDColor<Derived, Base, types::pure1182>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::keyForGroupIDColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::keyForGroupIDColor<DefaultConv, Derived, Base, types::pure1182>::value, DefaultConv>(
				"GJEffectManager::keyForGroupIDColor", 
				(void*)addresses::address1182()
			);
		}

		if constexpr (compare::loadState<Derived, Base, types::pure1183>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::loadState", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadState<DefaultConv, Derived, Base, types::pure1183>::value, DefaultConv>(
				"GJEffectManager::loadState", 
				(void*)addresses::address1183()
			);
		}

		if constexpr (compare::objectsCollided<Derived, Base, types::pure1184>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::objectsCollided", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::objectsCollided<DefaultConv, Derived, Base, types::pure1184>::value, DefaultConv>(
				"GJEffectManager::objectsCollided", 
				(void*)addresses::address1184()
			);
		}

		if constexpr (compare::opacityForIndex<Derived, Base, types::pure1185>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::opacityForIndex", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::opacityForIndex<DefaultConv, Derived, Base, types::pure1185>::value, DefaultConv>(
				"GJEffectManager::opacityForIndex", 
				(void*)addresses::address1185()
			);
		}

		if constexpr (compare::opacityModForGroup<Derived, Base, types::pure1186>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::opacityModForGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::opacityModForGroup<DefaultConv, Derived, Base, types::pure1186>::value, DefaultConv>(
				"GJEffectManager::opacityModForGroup", 
				(void*)addresses::address1186()
			);
		}

		if constexpr (compare::playerButton<Derived, Base, types::pure1187>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::playerButton", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playerButton<DefaultConv, Derived, Base, types::pure1187>::value, DefaultConv>(
				"GJEffectManager::playerButton", 
				(void*)addresses::address1187()
			);
		}

		if constexpr (compare::playerDied<Derived, Base, types::pure1188>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::playerDied", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::playerDied<DefaultConv, Derived, Base, types::pure1188>::value, DefaultConv>(
				"GJEffectManager::playerDied", 
				(void*)addresses::address1188()
			);
		}

		if constexpr (compare::postCollisionCheck<Derived, Base, types::pure1189>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::postCollisionCheck", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::postCollisionCheck<DefaultConv, Derived, Base, types::pure1189>::value, DefaultConv>(
				"GJEffectManager::postCollisionCheck", 
				(void*)addresses::address1189()
			);
		}

		if constexpr (compare::preCollisionCheck<Derived, Base, types::pure1190>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::preCollisionCheck", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::preCollisionCheck<DefaultConv, Derived, Base, types::pure1190>::value, DefaultConv>(
				"GJEffectManager::preCollisionCheck", 
				(void*)addresses::address1190()
			);
		}

		if constexpr (compare::prepareMoveActions<Derived, Base, types::pure1191>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::prepareMoveActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::prepareMoveActions<DefaultConv, Derived, Base, types::pure1191>::value, DefaultConv>(
				"GJEffectManager::prepareMoveActions", 
				(void*)addresses::address1191()
			);
		}

		if constexpr (compare::processColors<Derived, Base, types::pure1192>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::processColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processColors<DefaultConv, Derived, Base, types::pure1192>::value, DefaultConv>(
				"GJEffectManager::processColors", 
				(void*)addresses::address1192()
			);
		}

		if constexpr (compare::processCopyColorPulseActions<Derived, Base, types::pure1193>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::processCopyColorPulseActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processCopyColorPulseActions<DefaultConv, Derived, Base, types::pure1193>::value, DefaultConv>(
				"GJEffectManager::processCopyColorPulseActions", 
				(void*)addresses::address1193()
			);
		}

		if constexpr (compare::processInheritedColors<Derived, Base, types::pure1194>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::processInheritedColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processInheritedColors<DefaultConv, Derived, Base, types::pure1194>::value, DefaultConv>(
				"GJEffectManager::processInheritedColors", 
				(void*)addresses::address1194()
			);
		}

		if constexpr (compare::processPulseActions<Derived, Base, types::pure1195>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::processPulseActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::processPulseActions<DefaultConv, Derived, Base, types::pure1195>::value, DefaultConv>(
				"GJEffectManager::processPulseActions", 
				(void*)addresses::address1195()
			);
		}

		if constexpr (compare::registerCollisionTrigger<Derived, Base, types::pure1196>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::registerCollisionTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerCollisionTrigger<DefaultConv, Derived, Base, types::pure1196>::value, DefaultConv>(
				"GJEffectManager::registerCollisionTrigger", 
				(void*)addresses::address1196()
			);
		}

		if constexpr (compare::removeAllPulseActions<Derived, Base, types::pure1197>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::removeAllPulseActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeAllPulseActions<DefaultConv, Derived, Base, types::pure1197>::value, DefaultConv>(
				"GJEffectManager::removeAllPulseActions", 
				(void*)addresses::address1197()
			);
		}

		if constexpr (compare::removeColorAction<Derived, Base, types::pure1198>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::removeColorAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeColorAction<DefaultConv, Derived, Base, types::pure1198>::value, DefaultConv>(
				"GJEffectManager::removeColorAction", 
				(void*)addresses::address1198()
			);
		}

		if constexpr (compare::reset<Derived, Base, types::pure1199>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::reset", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::reset<DefaultConv, Derived, Base, types::pure1199>::value, DefaultConv>(
				"GJEffectManager::reset", 
				(void*)addresses::address1199()
			);
		}

		if constexpr (compare::resetColorCache<Derived, Base, types::pure1200>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::resetColorCache", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetColorCache<DefaultConv, Derived, Base, types::pure1200>::value, DefaultConv>(
				"GJEffectManager::resetColorCache", 
				(void*)addresses::address1200()
			);
		}

		if constexpr (compare::resetEffects<Derived, Base, types::pure1201>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::resetEffects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetEffects<DefaultConv, Derived, Base, types::pure1201>::value, DefaultConv>(
				"GJEffectManager::resetEffects", 
				(void*)addresses::address1201()
			);
		}

		if constexpr (compare::resetMoveActions<Derived, Base, types::pure1202>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::resetMoveActions", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetMoveActions<DefaultConv, Derived, Base, types::pure1202>::value, DefaultConv>(
				"GJEffectManager::resetMoveActions", 
				(void*)addresses::address1202()
			);
		}

		if constexpr (compare::resetToggledGroups<Derived, Base, types::pure1203>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::resetToggledGroups", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetToggledGroups<DefaultConv, Derived, Base, types::pure1203>::value, DefaultConv>(
				"GJEffectManager::resetToggledGroups", 
				(void*)addresses::address1203()
			);
		}

		if constexpr (compare::resetTriggeredIDs<Derived, Base, types::pure1204>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::resetTriggeredIDs", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::resetTriggeredIDs<DefaultConv, Derived, Base, types::pure1204>::value, DefaultConv>(
				"GJEffectManager::resetTriggeredIDs", 
				(void*)addresses::address1204()
			);
		}

		if constexpr (compare::runCountTrigger<Derived, Base, types::pure1205>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::runCountTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runCountTrigger<DefaultConv, Derived, Base, types::pure1205>::value, DefaultConv>(
				"GJEffectManager::runCountTrigger", 
				(void*)addresses::address1205()
			);
		}

		if constexpr (compare::runDeathTrigger<Derived, Base, types::pure1206>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::runDeathTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runDeathTrigger<DefaultConv, Derived, Base, types::pure1206>::value, DefaultConv>(
				"GJEffectManager::runDeathTrigger", 
				(void*)addresses::address1206()
			);
		}

		if constexpr (compare::runOpacityActionOnGroup<Derived, Base, types::pure1207>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::runOpacityActionOnGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runOpacityActionOnGroup<DefaultConv, Derived, Base, types::pure1207>::value, DefaultConv>(
				"GJEffectManager::runOpacityActionOnGroup", 
				(void*)addresses::address1207()
			);
		}

		if constexpr (compare::runPulseEffect<Derived, Base, types::pure1208>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::runPulseEffect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runPulseEffect<DefaultConv, Derived, Base, types::pure1208>::value, DefaultConv>(
				"GJEffectManager::runPulseEffect", 
				(void*)addresses::address1208()
			);
		}

		if constexpr (compare::runTouchTriggerCommand<Derived, Base, types::pure1209>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::runTouchTriggerCommand", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::runTouchTriggerCommand<DefaultConv, Derived, Base, types::pure1209>::value, DefaultConv>(
				"GJEffectManager::runTouchTriggerCommand", 
				(void*)addresses::address1209()
			);
		}

		if constexpr (compare::setColorAction<Derived, Base, types::pure1210>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::setColorAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setColorAction<DefaultConv, Derived, Base, types::pure1210>::value, DefaultConv>(
				"GJEffectManager::setColorAction", 
				(void*)addresses::address1210()
			);
		}

		if constexpr (compare::setFollowing<Derived, Base, types::pure1211>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::setFollowing", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setFollowing<DefaultConv, Derived, Base, types::pure1211>::value, DefaultConv>(
				"GJEffectManager::setFollowing", 
				(void*)addresses::address1211()
			);
		}

		if constexpr (compare::setupFromString<Derived, Base, types::pure1212>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::setupFromString", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupFromString<DefaultConv, Derived, Base, types::pure1212>::value, DefaultConv>(
				"GJEffectManager::setupFromString", 
				(void*)addresses::address1212()
			);
		}

		if constexpr (compare::shouldBlend<Derived, Base, types::pure1213>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::shouldBlend", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::shouldBlend<DefaultConv, Derived, Base, types::pure1213>::value, DefaultConv>(
				"GJEffectManager::shouldBlend", 
				(void*)addresses::address1213()
			);
		}

		if constexpr (compare::spawnGroup<Derived, Base, types::pure1214>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::spawnGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::spawnGroup<DefaultConv, Derived, Base, types::pure1214>::value, DefaultConv>(
				"GJEffectManager::spawnGroup", 
				(void*)addresses::address1214()
			);
		}

		if constexpr (compare::stopActionsForTrigger<Derived, Base, types::pure1215>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::stopActionsForTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopActionsForTrigger<DefaultConv, Derived, Base, types::pure1215>::value, DefaultConv>(
				"GJEffectManager::stopActionsForTrigger", 
				(void*)addresses::address1215()
			);
		}

		if constexpr (compare::stopMoveActionsForGroup<Derived, Base, types::pure1216>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::stopMoveActionsForGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::stopMoveActionsForGroup<DefaultConv, Derived, Base, types::pure1216>::value, DefaultConv>(
				"GJEffectManager::stopMoveActionsForGroup", 
				(void*)addresses::address1216()
			);
		}

		if constexpr (compare::storeTriggeredID<Derived, Base, types::pure1217>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::storeTriggeredID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::storeTriggeredID<DefaultConv, Derived, Base, types::pure1217>::value, DefaultConv>(
				"GJEffectManager::storeTriggeredID", 
				(void*)addresses::address1217()
			);
		}

		if constexpr (compare::toggleGroup<Derived, Base, types::pure1218>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::toggleGroup", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::toggleGroup<DefaultConv, Derived, Base, types::pure1218>::value, DefaultConv>(
				"GJEffectManager::toggleGroup", 
				(void*)addresses::address1218()
			);
		}

		if constexpr (compare::traverseInheritanceChain<Derived, Base, types::pure1219>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::traverseInheritanceChain", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::traverseInheritanceChain<DefaultConv, Derived, Base, types::pure1219>::value, DefaultConv>(
				"GJEffectManager::traverseInheritanceChain", 
				(void*)addresses::address1219()
			);
		}

		if constexpr (compare::updateActiveOpacityEffects<Derived, Base, types::pure1220>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateActiveOpacityEffects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateActiveOpacityEffects<DefaultConv, Derived, Base, types::pure1220>::value, DefaultConv>(
				"GJEffectManager::updateActiveOpacityEffects", 
				(void*)addresses::address1220()
			);
		}

		if constexpr (compare::updateColorAction<Derived, Base, types::pure1221>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateColorAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColorAction<DefaultConv, Derived, Base, types::pure1221>::value, DefaultConv>(
				"GJEffectManager::updateColorAction", 
				(void*)addresses::address1221()
			);
		}

		if constexpr (compare::updateColorEffects<Derived, Base, types::pure1222>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateColorEffects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColorEffects<DefaultConv, Derived, Base, types::pure1222>::value, DefaultConv>(
				"GJEffectManager::updateColorEffects", 
				(void*)addresses::address1222()
			);
		}

		if constexpr (compare::updateColors<Derived, Base, types::pure1223>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateColors", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateColors<DefaultConv, Derived, Base, types::pure1223>::value, DefaultConv>(
				"GJEffectManager::updateColors", 
				(void*)addresses::address1223()
			);
		}

		if constexpr (compare::updateEffects<Derived, Base, types::pure1224>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateEffects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateEffects<DefaultConv, Derived, Base, types::pure1224>::value, DefaultConv>(
				"GJEffectManager::updateEffects", 
				(void*)addresses::address1224()
			);
		}

		if constexpr (compare::updateOpacityAction<Derived, Base, types::pure1225>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateOpacityAction", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateOpacityAction<DefaultConv, Derived, Base, types::pure1225>::value, DefaultConv>(
				"GJEffectManager::updateOpacityAction", 
				(void*)addresses::address1225()
			);
		}

		if constexpr (compare::updateOpacityEffects<Derived, Base, types::pure1226>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateOpacityEffects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateOpacityEffects<DefaultConv, Derived, Base, types::pure1226>::value, DefaultConv>(
				"GJEffectManager::updateOpacityEffects", 
				(void*)addresses::address1226()
			);
		}

		if constexpr (compare::updatePulseEffects<Derived, Base, types::pure1227>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updatePulseEffects", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePulseEffects<DefaultConv, Derived, Base, types::pure1227>::value, DefaultConv>(
				"GJEffectManager::updatePulseEffects", 
				(void*)addresses::address1227()
			);
		}

		if constexpr (compare::updateSpawnTriggers<Derived, Base, types::pure1228>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateSpawnTriggers", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateSpawnTriggers<DefaultConv, Derived, Base, types::pure1228>::value, DefaultConv>(
				"GJEffectManager::updateSpawnTriggers", 
				(void*)addresses::address1228()
			);
		}

		if constexpr (compare::wasFollowing<Derived, Base, types::pure1229>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::wasFollowing", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::wasFollowing<DefaultConv, Derived, Base, types::pure1229>::value, DefaultConv>(
				"GJEffectManager::wasFollowing", 
				(void*)addresses::address1229()
			);
		}

		if constexpr (compare::wouldCreateLoop<Derived, Base, types::pure1230>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::wouldCreateLoop", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::wouldCreateLoop<DefaultConv, Derived, Base, types::pure1230>::value, DefaultConv>(
				"GJEffectManager::wouldCreateLoop", 
				(void*)addresses::address1230()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1231>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure1231>::value, DefaultConv>(
				"GJEffectManager::destructor", 
				(void*)addresses::address1231()
			);
		}

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
			Interface::get()->addHook<wrap::addImage<DefaultConv, Derived, Base, types::pure532>::value, DefaultConv>(
				"cocos2d::CCTextureCache::addImage", 
				(void*)addresses::address532()
			);
		}

		if constexpr (compare::sharedTextureCache<Derived, Base, types::pure533>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTextureCache::sharedTextureCache", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sharedTextureCache<DefaultConv, Derived, Base, types::pure533>::value, DefaultConv>(
				"cocos2d::CCTextureCache::sharedTextureCache", 
				(void*)addresses::address533()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure107>::value, DefaultConv>(
				"cocos2d::CCHide::create", 
				(void*)addresses::address107()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure27>::value, DefaultConv>(
				"cocos2d::CCBMFontConfiguration::create", 
				(void*)addresses::address27()
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

		if constexpr (compare::create<Derived, Base, types::pure733>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure733>::value, DefaultConv>(
				"CCCircleWave::create", 
				(void*)addresses::address733()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure734>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure734>::value, DefaultConv>(
				"CCCircleWave::create", 
				(void*)addresses::address734()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure735>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure735>::value, DefaultConv>(
				"CCCircleWave::init", 
				(void*)addresses::address735()
			);
		}

		if constexpr (compare::followObject<Derived, Base, types::pure736>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::followObject", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::followObject<DefaultConv, Derived, Base, types::pure736>::value, DefaultConv>(
				"CCCircleWave::followObject", 
				(void*)addresses::address736()
			);
		}

		if constexpr (compare::updatePosition<Derived, Base, types::pure737>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::updatePosition", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updatePosition<DefaultConv, Derived, Base, types::pure737>::value, DefaultConv>(
				"CCCircleWave::updatePosition", 
				(void*)addresses::address737()
			);
		}

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

template<class Derived>
struct Modify<Derived, PauseLayer> : ModifyBase<Modify<Derived, PauseLayer>> {
	using ModifyBase<Modify<Derived, PauseLayer>>::ModifyBase;
	using Base = PauseLayer;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure1719>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PauseLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure1719>::value, DefaultConv>(
				"PauseLayer::create", 
				(void*)addresses::address1719()
			);
		}

		if constexpr (compare::onEdit<Derived, Base, types::pure1720>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PauseLayer::onEdit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEdit<DefaultConv, Derived, Base, types::pure1720>::value, DefaultConv>(
				"PauseLayer::onEdit", 
				(void*)addresses::address1720()
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

		if constexpr (compare::destructor<Derived, Base, types::pure219>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure219>::value, DefaultConv>(
				"cocos2d::CCMenuItem::destructor", 
				(void*)addresses::address219()
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure220>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::activate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::activate<DefaultConv, Derived, Base, types::pure220>::value, DefaultConv>(
				"cocos2d::CCMenuItem::activate", 
				(void*)addresses::address220()
			);
		}

		if constexpr (compare::selected<Derived, Base, types::pure221>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::selected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::selected<DefaultConv, Derived, Base, types::pure221>::value, DefaultConv>(
				"cocos2d::CCMenuItem::selected", 
				(void*)addresses::address221()
			);
		}

		if constexpr (compare::unselected<Derived, Base, types::pure222>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::unselected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unselected<DefaultConv, Derived, Base, types::pure222>::value, DefaultConv>(
				"cocos2d::CCMenuItem::unselected", 
				(void*)addresses::address222()
			);
		}

		if constexpr (compare::registerScriptTapHandler<Derived, Base, types::pure223>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::registerScriptTapHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerScriptTapHandler<DefaultConv, Derived, Base, types::pure223>::value, DefaultConv>(
				"cocos2d::CCMenuItem::registerScriptTapHandler", 
				(void*)addresses::address223()
			);
		}

		if constexpr (compare::unregisterScriptTapHandler<Derived, Base, types::pure224>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::unregisterScriptTapHandler", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::unregisterScriptTapHandler<DefaultConv, Derived, Base, types::pure224>::value, DefaultConv>(
				"cocos2d::CCMenuItem::unregisterScriptTapHandler", 
				(void*)addresses::address224()
			);
		}

		if constexpr (compare::isEnabled<Derived, Base, types::pure225>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::isEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isEnabled<DefaultConv, Derived, Base, types::pure225>::value, DefaultConv>(
				"cocos2d::CCMenuItem::isEnabled", 
				(void*)addresses::address225()
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure226>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setEnabled<DefaultConv, Derived, Base, types::pure226>::value, DefaultConv>(
				"cocos2d::CCMenuItem::setEnabled", 
				(void*)addresses::address226()
			);
		}

		if constexpr (compare::isSelected<Derived, Base, types::pure227>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::isSelected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isSelected<DefaultConv, Derived, Base, types::pure227>::value, DefaultConv>(
				"cocos2d::CCMenuItem::isSelected", 
				(void*)addresses::address227()
			);
		}

		if constexpr (compare::rect<Derived, Base, types::pure228>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::rect", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::rect<DefaultConv, Derived, Base, types::pure228>::value, DefaultConv>(
				"cocos2d::CCMenuItem::rect", 
				(void*)addresses::address228()
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
			Interface::get()->addHook<wrap::clear<DefaultConv, Derived, Base, types::pure86>::value, DefaultConv>(
				"cocos2d::CCDrawNode::clear", 
				(void*)addresses::address86()
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure87>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure87>::value, DefaultConv>(
				"cocos2d::CCDrawNode::create", 
				(void*)addresses::address87()
			);
		}

		if constexpr (compare::drawPolygon<Derived, Base, types::pure88>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::drawPolygon", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::drawPolygon<DefaultConv, Derived, Base, types::pure88>::value, DefaultConv>(
				"cocos2d::CCDrawNode::drawPolygon", 
				(void*)addresses::address88()
			);
		}

		if constexpr (compare::drawSegment<Derived, Base, types::pure89>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::drawSegment", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::drawSegment<DefaultConv, Derived, Base, types::pure89>::value, DefaultConv>(
				"cocos2d::CCDrawNode::drawSegment", 
				(void*)addresses::address89()
			);
		}

		if constexpr (compare::getBlendFunc<Derived, Base, types::pure90>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::getBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getBlendFunc<DefaultConv, Derived, Base, types::pure90>::value, DefaultConv>(
				"cocos2d::CCDrawNode::getBlendFunc", 
				(void*)addresses::address90()
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure91>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure91>::value, DefaultConv>(
				"cocos2d::CCDrawNode::init", 
				(void*)addresses::address91()
			);
		}

		if constexpr (compare::setBlendFunc<Derived, Base, types::pure92>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::setBlendFunc", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setBlendFunc<DefaultConv, Derived, Base, types::pure92>::value, DefaultConv>(
				"cocos2d::CCDrawNode::setBlendFunc", 
				(void*)addresses::address92()
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure93>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::draw", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::draw<DefaultConv, Derived, Base, types::pure93>::value, DefaultConv>(
				"cocos2d::CCDrawNode::draw", 
				(void*)addresses::address93()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure94>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure94>::value, DefaultConv>(
				"cocos2d::CCDrawNode::destructor", 
				(void*)addresses::address94()
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, SetupOpacityPopup> : ModifyBase<Modify<Derived, SetupOpacityPopup>> {
	using ModifyBase<Modify<Derived, SetupOpacityPopup>>::ModifyBase;
	using Base = SetupOpacityPopup;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::create<Derived, Base, types::pure2079>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupOpacityPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure2079>::value, DefaultConv>(
				"SetupOpacityPopup::create", 
				(void*)addresses::address2079()
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2080>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupOpacityPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2080>::value, DefaultConv>(
				"SetupOpacityPopup::onTargetIDArrow", 
				(void*)addresses::address2080()
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2081>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupOpacityPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::textChanged<DefaultConv, Derived, Base, types::pure2081>::value, DefaultConv>(
				"SetupOpacityPopup::textChanged", 
				(void*)addresses::address2081()
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2082>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupOpacityPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2082>::value, DefaultConv>(
				"SetupOpacityPopup::updateTargetID", 
				(void*)addresses::address2082()
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
struct Modify<Derived, cocos2d::CCImage> : ModifyBase<Modify<Derived, cocos2d::CCImage>> {
	using ModifyBase<Modify<Derived, cocos2d::CCImage>>::ModifyBase;
	using Base = cocos2d::CCImage;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::constructor<Derived, Base, types::pure113>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCImage::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::constructor<DefaultConv, Derived, Base, types::pure113>::value, DefaultConv>(
				"cocos2d::CCImage::constructor", 
				(void*)addresses::address113()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure114>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCImage::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure114>::value, DefaultConv>(
				"cocos2d::CCImage::destructor", 
				(void*)addresses::address114()
			);
		}

		if constexpr (compare::initWithImageData<Derived, Base, types::pure115>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCImage::initWithImageData", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithImageData<DefaultConv, Derived, Base, types::pure115>::value, DefaultConv>(
				"cocos2d::CCImage::initWithImageData", 
				(void*)addresses::address115()
			);
		}

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
struct Modify<Derived, LabelGameObject> : ModifyBase<Modify<Derived, LabelGameObject>> {
	using ModifyBase<Modify<Derived, LabelGameObject>>::ModifyBase;
	using Base = LabelGameObject;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::init<Derived, Base, types::pure1557>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LabelGameObject::init", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure1557>::value, DefaultConv>(
				"LabelGameObject::init", 
				(void*)addresses::address1557()
			);
		}

		if constexpr (compare::setObjectColor<Derived, Base, types::pure1558>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LabelGameObject::setObjectColor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setObjectColor<DefaultConv, Derived, Base, types::pure1558>::value, DefaultConv>(
				"LabelGameObject::setObjectColor", 
				(void*)addresses::address1558()
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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure28>::value, DefaultConv>(
				"cocos2d::CCCallFunc::create", 
				(void*)addresses::address28()
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

		if constexpr (compare::destructor<Derived, Base, types::pure2120>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SongInfoObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure2120>::value, DefaultConv>(
				"SongInfoObject::destructor", 
				(void*)addresses::address2120()
			);
		}

		if constexpr (compare::encodeWithCoder<Derived, Base, types::pure2121>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SongInfoObject::encodeWithCoder", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::encodeWithCoder<DefaultConv, Derived, Base, types::pure2121>::value, DefaultConv>(
				"SongInfoObject::encodeWithCoder", 
				(void*)addresses::address2121()
			);
		}

		if constexpr (compare::canEncode<Derived, Base, types::pure2122>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SongInfoObject::canEncode", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::canEncode<DefaultConv, Derived, Base, types::pure2122>::value, DefaultConv>(
				"SongInfoObject::canEncode", 
				(void*)addresses::address2122()
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

		if constexpr (compare::bgScale<Derived, Base, types::pure677>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::bgScale", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::bgScale<DefaultConv, Derived, Base, types::pure677>::value, DefaultConv>(
				"AppDelegate::bgScale", 
				(void*)addresses::address677()
			);
		}

		if constexpr (compare::applicationDidFinishLaunching<Derived, Base, types::pure678>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationDidFinishLaunching", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applicationDidFinishLaunching<DefaultConv, Derived, Base, types::pure678>::value, DefaultConv>(
				"AppDelegate::applicationDidFinishLaunching", 
				(void*)addresses::address678()
			);
		}

		if constexpr (compare::applicationDidEnterBackground<Derived, Base, types::pure679>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationDidEnterBackground", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applicationDidEnterBackground<DefaultConv, Derived, Base, types::pure679>::value, DefaultConv>(
				"AppDelegate::applicationDidEnterBackground", 
				(void*)addresses::address679()
			);
		}

		if constexpr (compare::applicationWillEnterForeground<Derived, Base, types::pure680>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationWillEnterForeground", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applicationWillEnterForeground<DefaultConv, Derived, Base, types::pure680>::value, DefaultConv>(
				"AppDelegate::applicationWillEnterForeground", 
				(void*)addresses::address680()
			);
		}

		if constexpr (compare::applicationWillBecomeActive<Derived, Base, types::pure681>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationWillBecomeActive", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applicationWillBecomeActive<DefaultConv, Derived, Base, types::pure681>::value, DefaultConv>(
				"AppDelegate::applicationWillBecomeActive", 
				(void*)addresses::address681()
			);
		}

		if constexpr (compare::applicationWillResignActive<Derived, Base, types::pure682>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationWillResignActive", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::applicationWillResignActive<DefaultConv, Derived, Base, types::pure682>::value, DefaultConv>(
				"AppDelegate::applicationWillResignActive", 
				(void*)addresses::address682()
			);
		}

		if constexpr (compare::trySaveGame<Derived, Base, types::pure683>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::trySaveGame", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::trySaveGame<DefaultConv, Derived, Base, types::pure683>::value, DefaultConv>(
				"AppDelegate::trySaveGame", 
				(void*)addresses::address683()
			);
		}

		if constexpr (compare::willSwitchToScene<Derived, Base, types::pure684>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::willSwitchToScene", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::willSwitchToScene<DefaultConv, Derived, Base, types::pure684>::value, DefaultConv>(
				"AppDelegate::willSwitchToScene", 
				(void*)addresses::address684()
			);
		}

		if constexpr (compare::get<Derived, Base, types::pure685>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::get", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::get<DefaultConv, Derived, Base, types::pure685>::value, DefaultConv>(
				"AppDelegate::get", 
				(void*)addresses::address685()
			);
		}

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure42>::value, DefaultConv>(
				"cocos2d::CCDelayTime::create", 
				(void*)addresses::address42()
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
			Interface::get()->addHook<wrap::init<DefaultConv, Derived, Base, types::pure546>::value, DefaultConv>(
				"cocos2d::extension::CCControl::init", 
				(void*)addresses::address546()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure547>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure547>::value, DefaultConv>(
				"cocos2d::extension::CCControl::destructor", 
				(void*)addresses::address547()
			);
		}

		if constexpr (compare::sendActionsForControlEvents<Derived, Base, types::pure548>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::sendActionsForControlEvents", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::sendActionsForControlEvents<DefaultConv, Derived, Base, types::pure548>::value, DefaultConv>(
				"cocos2d::extension::CCControl::sendActionsForControlEvents", 
				(void*)addresses::address548()
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure549>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure549>::value, DefaultConv>(
				"cocos2d::extension::CCControl::registerWithTouchDispatcher", 
				(void*)addresses::address549()
			);
		}

		if constexpr (compare::setOpacityModifyRGB<Derived, Base, types::pure550>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::setOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setOpacityModifyRGB<DefaultConv, Derived, Base, types::pure550>::value, DefaultConv>(
				"cocos2d::extension::CCControl::setOpacityModifyRGB", 
				(void*)addresses::address550()
			);
		}

		if constexpr (compare::onExit<Derived, Base, types::pure551>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::onExit", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onExit<DefaultConv, Derived, Base, types::pure551>::value, DefaultConv>(
				"cocos2d::extension::CCControl::onExit", 
				(void*)addresses::address551()
			);
		}

		if constexpr (compare::isTouchInside<Derived, Base, types::pure552>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::isTouchInside", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isTouchInside<DefaultConv, Derived, Base, types::pure552>::value, DefaultConv>(
				"cocos2d::extension::CCControl::isTouchInside", 
				(void*)addresses::address552()
			);
		}

		if constexpr (compare::setEnabled<Derived, Base, types::pure553>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::setEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setEnabled<DefaultConv, Derived, Base, types::pure553>::value, DefaultConv>(
				"cocos2d::extension::CCControl::setEnabled", 
				(void*)addresses::address553()
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure554>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::onEnter<DefaultConv, Derived, Base, types::pure554>::value, DefaultConv>(
				"cocos2d::extension::CCControl::onEnter", 
				(void*)addresses::address554()
			);
		}

		if constexpr (compare::isEnabled<Derived, Base, types::pure555>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::isEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isEnabled<DefaultConv, Derived, Base, types::pure555>::value, DefaultConv>(
				"cocos2d::extension::CCControl::isEnabled", 
				(void*)addresses::address555()
			);
		}

		if constexpr (compare::setSelected<Derived, Base, types::pure556>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::setSelected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setSelected<DefaultConv, Derived, Base, types::pure556>::value, DefaultConv>(
				"cocos2d::extension::CCControl::setSelected", 
				(void*)addresses::address556()
			);
		}

		if constexpr (compare::isOpacityModifyRGB<Derived, Base, types::pure557>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::isOpacityModifyRGB", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isOpacityModifyRGB<DefaultConv, Derived, Base, types::pure557>::value, DefaultConv>(
				"cocos2d::extension::CCControl::isOpacityModifyRGB", 
				(void*)addresses::address557()
			);
		}

		if constexpr (compare::setHighlighted<Derived, Base, types::pure558>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::setHighlighted", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setHighlighted<DefaultConv, Derived, Base, types::pure558>::value, DefaultConv>(
				"cocos2d::extension::CCControl::setHighlighted", 
				(void*)addresses::address558()
			);
		}

		if constexpr (compare::needsLayout<Derived, Base, types::pure559>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::needsLayout", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::needsLayout<DefaultConv, Derived, Base, types::pure559>::value, DefaultConv>(
				"cocos2d::extension::CCControl::needsLayout", 
				(void*)addresses::address559()
			);
		}

		if constexpr (compare::getTouchLocation<Derived, Base, types::pure560>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::getTouchLocation", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getTouchLocation<DefaultConv, Derived, Base, types::pure560>::value, DefaultConv>(
				"cocos2d::extension::CCControl::getTouchLocation", 
				(void*)addresses::address560()
			);
		}

		if constexpr (compare::isHighlighted<Derived, Base, types::pure561>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::isHighlighted", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isHighlighted<DefaultConv, Derived, Base, types::pure561>::value, DefaultConv>(
				"cocos2d::extension::CCControl::isHighlighted", 
				(void*)addresses::address561()
			);
		}

		if constexpr (compare::addTargetWithActionForControlEvents<Derived, Base, types::pure562>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::addTargetWithActionForControlEvents", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::addTargetWithActionForControlEvents<DefaultConv, Derived, Base, types::pure562>::value, DefaultConv>(
				"cocos2d::extension::CCControl::addTargetWithActionForControlEvents", 
				(void*)addresses::address562()
			);
		}

		if constexpr (compare::removeTargetWithActionForControlEvents<Derived, Base, types::pure563>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::removeTargetWithActionForControlEvents", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::removeTargetWithActionForControlEvents<DefaultConv, Derived, Base, types::pure563>::value, DefaultConv>(
				"cocos2d::extension::CCControl::removeTargetWithActionForControlEvents", 
				(void*)addresses::address563()
			);
		}

		if constexpr (compare::isSelected<Derived, Base, types::pure564>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCControl::isSelected", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::isSelected<DefaultConv, Derived, Base, types::pure564>::value, DefaultConv>(
				"cocos2d::extension::CCControl::isSelected", 
				(void*)addresses::address564()
			);
		}

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure26>::value, DefaultConv>(
				"cocos2d::CCBezierTo::create", 
				(void*)addresses::address26()
			);
		}

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
			Interface::get()->addHook<wrap::create<DefaultConv, Derived, Base, types::pure865>::value, DefaultConv>(
				"CustomListView::create", 
				(void*)addresses::address865()
			);
		}

		if constexpr (compare::getListCell<Derived, Base, types::pure866>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::getListCell", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::getListCell<DefaultConv, Derived, Base, types::pure866>::value, DefaultConv>(
				"CustomListView::getListCell", 
				(void*)addresses::address866()
			);
		}

		if constexpr (compare::loadCell<Derived, Base, types::pure867>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::loadCell", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::loadCell<DefaultConv, Derived, Base, types::pure867>::value, DefaultConv>(
				"CustomListView::loadCell", 
				(void*)addresses::address867()
			);
		}

		if constexpr (compare::setupList<Derived, Base, types::pure868>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::setupList", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::setupList<DefaultConv, Derived, Base, types::pure868>::value, DefaultConv>(
				"CustomListView::setupList", 
				(void*)addresses::address868()
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
			Interface::get()->addHook<wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure257>::value, DefaultConv>(
				"cocos2d::CCMouseHandler::handlerWithDelegate", 
				(void*)addresses::address257()
			);
		}

		if constexpr (compare::initWithDelegate<Derived, Base, types::pure258>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMouseHandler::initWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure258>::value, DefaultConv>(
				"cocos2d::CCMouseHandler::initWithDelegate", 
				(void*)addresses::address258()
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure259>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMouseHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook<wrap::destructor<DefaultConv, Derived, Base, types::pure259>::value, DefaultConv>(
				"cocos2d::CCMouseHandler::destructor", 
				(void*)addresses::address259()
			);
		}

	}
};
