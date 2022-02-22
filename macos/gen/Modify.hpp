
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2099>::value
			);
		}

		if constexpr (compare::disableMenu<Derived, Base, types::pure2100>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::disableMenu", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::disableMenu", 
				(void*)addresses::address2100(), 
				(void*)wrap::disableMenu<DefaultConv, Derived, Base, types::pure2100>::value
			);
		}

		if constexpr (compare::enableMenu<Derived, Base, types::pure2101>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::enableMenu", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::enableMenu", 
				(void*)addresses::address2101(), 
				(void*)wrap::enableMenu<DefaultConv, Derived, Base, types::pure2101>::value
			);
		}

		if constexpr (compare::pCommand<Derived, Base, types::pure2102>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::pCommand", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::pCommand", 
				(void*)addresses::address2102(), 
				(void*)wrap::pCommand<DefaultConv, Derived, Base, types::pure2102>::value
			);
		}

		if constexpr (compare::toggleCheckpointsMenu<Derived, Base, types::pure2103>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UILayer::toggleCheckpointsMenu", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UILayer::toggleCheckpointsMenu", 
				(void*)addresses::address2103(), 
				(void*)wrap::toggleCheckpointsMenu<DefaultConv, Derived, Base, types::pure2103>::value
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
				(void*)wrap::onCheck<DefaultConv, Derived, Base, types::pure2104>::value
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
				(void*)wrap::onDeleteCheck<DefaultConv, Derived, Base, types::pure2105>::value
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
				(void*)wrap::onPause<DefaultConv, Derived, Base, types::pure2106>::value
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
				(void*)wrap::keyDown<DefaultConv, Derived, Base, types::pure2107>::value
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
				(void*)wrap::keyUp<DefaultConv, Derived, Base, types::pure2108>::value
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

		if constexpr (compare::createFromString<Derived, Base, types::pure2092>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ToggleTriggerAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ToggleTriggerAction::createFromString", 
				(void*)addresses::address2092(), 
				(void*)wrap::createFromString<DefaultConv, Derived, Base, types::pure2092>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure2079>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TextArea::constructor", 
				(void*)addresses::address2079(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure2079>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure2080>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TextArea::draw", 
				(void*)addresses::address2080(), 
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure2080>::value
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure2081>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TextArea::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TextArea::setOpacity", 
				(void*)addresses::address2081(), 
				(void*)wrap::setOpacity<DefaultConv, Derived, Base, types::pure2081>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure2082>::value
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
				(void*)wrap::setString<DefaultConv, Derived, Base, types::pure2085>::value
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

		if constexpr (compare::draw<Derived, Base, types::pure2064>::value) {
			Interface::get()->logInfo(
				"Adding hook at function StatsCell::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"StatsCell::draw", 
				(void*)addresses::address2064(), 
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure2064>::value
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

		if constexpr (compare::setValue<Derived, Base, types::pure2055>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SliderThumb::setValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SliderThumb::setValue", 
				(void*)addresses::address2055(), 
				(void*)wrap::setValue<DefaultConv, Derived, Base, types::pure2055>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2043>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SimplePlayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SimplePlayer::create", 
				(void*)addresses::address2043(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2043>::value
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
				(void*)wrap::updatePlayerFrame<DefaultConv, Derived, Base, types::pure2044>::value
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
				(void*)wrap::updateColors<DefaultConv, Derived, Base, types::pure2045>::value
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

		if constexpr (compare::createFromString<Derived, Base, types::pure2062>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SpawnTriggerAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SpawnTriggerAction::createFromString", 
				(void*)addresses::address2062(), 
				(void*)wrap::createFromString<DefaultConv, Derived, Base, types::pure2062>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2030>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupSpawnPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupSpawnPopup::create", 
				(void*)addresses::address2030(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2030>::value
			);
		}

		if constexpr (compare::createToggleButton<Derived, Base, types::pure2031>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupSpawnPopup::createToggleButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupSpawnPopup::createToggleButton", 
				(void*)addresses::address2031(), 
				(void*)wrap::createToggleButton<DefaultConv, Derived, Base, types::pure2031>::value
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2032>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupSpawnPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupSpawnPopup::onTargetIDArrow", 
				(void*)addresses::address2032(), 
				(void*)wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2032>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2033>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupSpawnPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupSpawnPopup::textChanged", 
				(void*)addresses::address2033(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure2033>::value
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2034>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupSpawnPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupSpawnPopup::updateTargetID", 
				(void*)addresses::address2034(), 
				(void*)wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2034>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2029>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupShakePopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupShakePopup::create", 
				(void*)addresses::address2029(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2029>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2014>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupObjectTogglePopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupObjectTogglePopup::create", 
				(void*)addresses::address2014(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2014>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure2015>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupObjectTogglePopup::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupObjectTogglePopup::init", 
				(void*)addresses::address2015(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure2015>::value
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2016>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupObjectTogglePopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupObjectTogglePopup::onTargetIDArrow", 
				(void*)addresses::address2016(), 
				(void*)wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2016>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2017>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupObjectTogglePopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupObjectTogglePopup::textChanged", 
				(void*)addresses::address2017(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure2017>::value
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2018>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupObjectTogglePopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupObjectTogglePopup::updateTargetID", 
				(void*)addresses::address2018(), 
				(void*)wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2018>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2002>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCountTriggerPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupCountTriggerPopup::create", 
				(void*)addresses::address2002(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2002>::value
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2003>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCountTriggerPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupCountTriggerPopup::onTargetIDArrow", 
				(void*)addresses::address2003(), 
				(void*)wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2003>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2004>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCountTriggerPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupCountTriggerPopup::textChanged", 
				(void*)addresses::address2004(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure2004>::value
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2005>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCountTriggerPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupCountTriggerPopup::updateTargetID", 
				(void*)addresses::address2005(), 
				(void*)wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2005>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1994>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupAnimationPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupAnimationPopup::create", 
				(void*)addresses::address1994(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1994>::value
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure1995>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupAnimationPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupAnimationPopup::onTargetIDArrow", 
				(void*)addresses::address1995(), 
				(void*)wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure1995>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure1996>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupAnimationPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupAnimationPopup::textChanged", 
				(void*)addresses::address1996(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure1996>::value
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure1997>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupAnimationPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupAnimationPopup::updateTargetID", 
				(void*)addresses::address1997(), 
				(void*)wrap::updateTargetID<DefaultConv, Derived, Base, types::pure1997>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1990>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetTargetIDLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetTargetIDLayer::create", 
				(void*)addresses::address1990(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1990>::value
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure1991>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetTargetIDLayer::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetTargetIDLayer::onTargetIDArrow", 
				(void*)addresses::address1991(), 
				(void*)wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure1991>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure1992>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetTargetIDLayer::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetTargetIDLayer::textChanged", 
				(void*)addresses::address1992(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure1992>::value
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure1993>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetTargetIDLayer::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetTargetIDLayer::updateTargetID", 
				(void*)addresses::address1993(), 
				(void*)wrap::updateTargetID<DefaultConv, Derived, Base, types::pure1993>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1979>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ScrollingLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ScrollingLayer::create", 
				(void*)addresses::address1979(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1979>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1978>::value) {
			Interface::get()->logInfo(
				"Adding hook at function RetryLevelLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"RetryLevelLayer::create", 
				(void*)addresses::address1978(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1978>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2023>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupPickupTriggerPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupPickupTriggerPopup::create", 
				(void*)addresses::address2023(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2023>::value
			);
		}

		if constexpr (compare::onItemIDArrow<Derived, Base, types::pure2024>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupPickupTriggerPopup::onItemIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupPickupTriggerPopup::onItemIDArrow", 
				(void*)addresses::address2024(), 
				(void*)wrap::onItemIDArrow<DefaultConv, Derived, Base, types::pure2024>::value
			);
		}

		if constexpr (compare::onNextItemID<Derived, Base, types::pure2025>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupPickupTriggerPopup::onNextItemID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupPickupTriggerPopup::onNextItemID", 
				(void*)addresses::address2025(), 
				(void*)wrap::onNextItemID<DefaultConv, Derived, Base, types::pure2025>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2026>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupPickupTriggerPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupPickupTriggerPopup::textChanged", 
				(void*)addresses::address2026(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure2026>::value
			);
		}

		if constexpr (compare::updateItemID<Derived, Base, types::pure2027>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupPickupTriggerPopup::updateItemID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupPickupTriggerPopup::updateItemID", 
				(void*)addresses::address2027(), 
				(void*)wrap::updateItemID<DefaultConv, Derived, Base, types::pure2027>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1823>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::destructor", 
				(void*)addresses::address1823(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1823>::value
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1824>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::update", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::update", 
				(void*)addresses::address1824(), 
				(void*)wrap::update<DefaultConv, Derived, Base, types::pure1824>::value
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure1825>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setScaleX", 
				(void*)addresses::address1825(), 
				(void*)wrap::setScaleX<DefaultConv, Derived, Base, types::pure1825>::value
			);
		}

		if constexpr (compare::setScaleY<Derived, Base, types::pure1826>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setScaleY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setScaleY", 
				(void*)addresses::address1826(), 
				(void*)wrap::setScaleY<DefaultConv, Derived, Base, types::pure1826>::value
			);
		}

		if constexpr (compare::setScale<Derived, Base, types::pure1827>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setScale", 
				(void*)addresses::address1827(), 
				(void*)wrap::setScale<DefaultConv, Derived, Base, types::pure1827>::value
			);
		}

		if constexpr (compare::setPosition<Derived, Base, types::pure1828>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setPosition", 
				(void*)addresses::address1828(), 
				(void*)wrap::setPosition<DefaultConv, Derived, Base, types::pure1828>::value
			);
		}

		if constexpr (compare::setVisible<Derived, Base, types::pure1829>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setVisible", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setVisible", 
				(void*)addresses::address1829(), 
				(void*)wrap::setVisible<DefaultConv, Derived, Base, types::pure1829>::value
			);
		}

		if constexpr (compare::setRotation<Derived, Base, types::pure1830>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setRotation", 
				(void*)addresses::address1830(), 
				(void*)wrap::setRotation<DefaultConv, Derived, Base, types::pure1830>::value
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure1831>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setOpacity", 
				(void*)addresses::address1831(), 
				(void*)wrap::setOpacity<DefaultConv, Derived, Base, types::pure1831>::value
			);
		}

		if constexpr (compare::setColor<Derived, Base, types::pure1832>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setColor", 
				(void*)addresses::address1832(), 
				(void*)wrap::setColor<DefaultConv, Derived, Base, types::pure1832>::value
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
				(void*)wrap::setFlipX<DefaultConv, Derived, Base, types::pure1833>::value
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
				(void*)wrap::setFlipY<DefaultConv, Derived, Base, types::pure1834>::value
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
				(void*)wrap::resetObject<DefaultConv, Derived, Base, types::pure1835>::value
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
				(void*)wrap::getRealPosition<DefaultConv, Derived, Base, types::pure1836>::value
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
				(void*)wrap::getOrientedBox<DefaultConv, Derived, Base, types::pure1837>::value
			);
		}

		if constexpr (compare::animationFinished<Derived, Base, types::pure1838>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::animationFinished", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::animationFinished", 
				(void*)addresses::address1838(), 
				(void*)wrap::animationFinished<DefaultConv, Derived, Base, types::pure1838>::value
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
				(void*)wrap::activateStreak<DefaultConv, Derived, Base, types::pure1839>::value
			);
		}

		if constexpr (compare::addAllParticles<Derived, Base, types::pure1840>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::addAllParticles", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::addAllParticles", 
				(void*)addresses::address1840(), 
				(void*)wrap::addAllParticles<DefaultConv, Derived, Base, types::pure1840>::value
			);
		}

		if constexpr (compare::addToTouchedRings<Derived, Base, types::pure1841>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::addToTouchedRings", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::addToTouchedRings", 
				(void*)addresses::address1841(), 
				(void*)wrap::addToTouchedRings<DefaultConv, Derived, Base, types::pure1841>::value
			);
		}

		if constexpr (compare::boostPlayer<Derived, Base, types::pure1842>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::boostPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::boostPlayer", 
				(void*)addresses::address1842(), 
				(void*)wrap::boostPlayer<DefaultConv, Derived, Base, types::pure1842>::value
			);
		}

		if constexpr (compare::bumpPlayer<Derived, Base, types::pure1843>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::bumpPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::bumpPlayer", 
				(void*)addresses::address1843(), 
				(void*)wrap::bumpPlayer<DefaultConv, Derived, Base, types::pure1843>::value
			);
		}

		if constexpr (compare::buttonDown<Derived, Base, types::pure1844>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::buttonDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::buttonDown", 
				(void*)addresses::address1844(), 
				(void*)wrap::buttonDown<DefaultConv, Derived, Base, types::pure1844>::value
			);
		}

		if constexpr (compare::checkSnapJumpToObject<Derived, Base, types::pure1845>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::checkSnapJumpToObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::checkSnapJumpToObject", 
				(void*)addresses::address1845(), 
				(void*)wrap::checkSnapJumpToObject<DefaultConv, Derived, Base, types::pure1845>::value
			);
		}

		if constexpr (compare::collidedWithObject<Derived, Base, types::pure1846>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::collidedWithObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::collidedWithObject", 
				(void*)addresses::address1846(), 
				(void*)wrap::collidedWithObject<DefaultConv, Derived, Base, types::pure1846>::value
			);
		}

		if constexpr (compare::collidedWithObject<Derived, Base, types::pure1847>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::collidedWithObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::collidedWithObject", 
				(void*)addresses::address1847(), 
				(void*)wrap::collidedWithObject<DefaultConv, Derived, Base, types::pure1847>::value
			);
		}

		if constexpr (compare::collidedWithSlope<Derived, Base, types::pure1848>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::collidedWithSlope", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::collidedWithSlope", 
				(void*)addresses::address1848(), 
				(void*)wrap::collidedWithSlope<DefaultConv, Derived, Base, types::pure1848>::value
			);
		}

		if constexpr (compare::convertToClosestRotation<Derived, Base, types::pure1849>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::convertToClosestRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::convertToClosestRotation", 
				(void*)addresses::address1849(), 
				(void*)wrap::convertToClosestRotation<DefaultConv, Derived, Base, types::pure1849>::value
			);
		}

		if constexpr (compare::copyAttributes<Derived, Base, types::pure1850>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::copyAttributes", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::copyAttributes", 
				(void*)addresses::address1850(), 
				(void*)wrap::copyAttributes<DefaultConv, Derived, Base, types::pure1850>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1851>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::create", 
				(void*)addresses::address1851(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1851>::value
			);
		}

		if constexpr (compare::deactivateParticle<Derived, Base, types::pure1852>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::deactivateParticle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::deactivateParticle", 
				(void*)addresses::address1852(), 
				(void*)wrap::deactivateParticle<DefaultConv, Derived, Base, types::pure1852>::value
			);
		}

		if constexpr (compare::deactivateStreak<Derived, Base, types::pure1853>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::deactivateStreak", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::deactivateStreak", 
				(void*)addresses::address1853(), 
				(void*)wrap::deactivateStreak<DefaultConv, Derived, Base, types::pure1853>::value
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
				(void*)wrap::fadeOutStreak2<DefaultConv, Derived, Base, types::pure1854>::value
			);
		}

		if constexpr (compare::flashPlayer<Derived, Base, types::pure1855>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::flashPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::flashPlayer", 
				(void*)addresses::address1855(), 
				(void*)wrap::flashPlayer<DefaultConv, Derived, Base, types::pure1855>::value
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
				(void*)wrap::flipGravity<DefaultConv, Derived, Base, types::pure1856>::value
			);
		}

		if constexpr (compare::flipMod<Derived, Base, types::pure1857>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::flipMod", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::flipMod", 
				(void*)addresses::address1857(), 
				(void*)wrap::flipMod<DefaultConv, Derived, Base, types::pure1857>::value
			);
		}

		if constexpr (compare::getActiveMode<Derived, Base, types::pure1858>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getActiveMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::getActiveMode", 
				(void*)addresses::address1858(), 
				(void*)wrap::getActiveMode<DefaultConv, Derived, Base, types::pure1858>::value
			);
		}

		if constexpr (compare::getModifiedSlopeYVel<Derived, Base, types::pure1859>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getModifiedSlopeYVel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::getModifiedSlopeYVel", 
				(void*)addresses::address1859(), 
				(void*)wrap::getModifiedSlopeYVel<DefaultConv, Derived, Base, types::pure1859>::value
			);
		}

		if constexpr (compare::getOldPosition<Derived, Base, types::pure1860>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getOldPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::getOldPosition", 
				(void*)addresses::address1860(), 
				(void*)wrap::getOldPosition<DefaultConv, Derived, Base, types::pure1860>::value
			);
		}

		if constexpr (compare::getSecondColor<Derived, Base, types::pure1861>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::getSecondColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::getSecondColor", 
				(void*)addresses::address1861(), 
				(void*)wrap::getSecondColor<DefaultConv, Derived, Base, types::pure1861>::value
			);
		}

		if constexpr (compare::gravityDown<Derived, Base, types::pure1862>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::gravityDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::gravityDown", 
				(void*)addresses::address1862(), 
				(void*)wrap::gravityDown<DefaultConv, Derived, Base, types::pure1862>::value
			);
		}

		if constexpr (compare::gravityUp<Derived, Base, types::pure1863>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::gravityUp", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::gravityUp", 
				(void*)addresses::address1863(), 
				(void*)wrap::gravityUp<DefaultConv, Derived, Base, types::pure1863>::value
			);
		}

		if constexpr (compare::hardFlipGravity<Derived, Base, types::pure1864>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::hardFlipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::hardFlipGravity", 
				(void*)addresses::address1864(), 
				(void*)wrap::hardFlipGravity<DefaultConv, Derived, Base, types::pure1864>::value
			);
		}

		if constexpr (compare::hitGround<Derived, Base, types::pure1865>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::hitGround", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::hitGround", 
				(void*)addresses::address1865(), 
				(void*)wrap::hitGround<DefaultConv, Derived, Base, types::pure1865>::value
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
				(void*)wrap::incrementJumps<DefaultConv, Derived, Base, types::pure1866>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1867>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::init", 
				(void*)addresses::address1867(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1867>::value
			);
		}

		if constexpr (compare::isBoostValid<Derived, Base, types::pure1868>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::isBoostValid", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::isBoostValid", 
				(void*)addresses::address1868(), 
				(void*)wrap::isBoostValid<DefaultConv, Derived, Base, types::pure1868>::value
			);
		}

		if constexpr (compare::isFlying<Derived, Base, types::pure1869>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::isFlying", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::isFlying", 
				(void*)addresses::address1869(), 
				(void*)wrap::isFlying<DefaultConv, Derived, Base, types::pure1869>::value
			);
		}

		if constexpr (compare::isSafeFlip<Derived, Base, types::pure1870>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::isSafeFlip", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::isSafeFlip", 
				(void*)addresses::address1870(), 
				(void*)wrap::isSafeFlip<DefaultConv, Derived, Base, types::pure1870>::value
			);
		}

		if constexpr (compare::isSafeMode<Derived, Base, types::pure1871>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::isSafeMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::isSafeMode", 
				(void*)addresses::address1871(), 
				(void*)wrap::isSafeMode<DefaultConv, Derived, Base, types::pure1871>::value
			);
		}

		if constexpr (compare::isSafeSpiderFlip<Derived, Base, types::pure1872>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::isSafeSpiderFlip", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::isSafeSpiderFlip", 
				(void*)addresses::address1872(), 
				(void*)wrap::isSafeSpiderFlip<DefaultConv, Derived, Base, types::pure1872>::value
			);
		}

		if constexpr (compare::levelFlipFinished<Derived, Base, types::pure1873>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::levelFlipFinished", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::levelFlipFinished", 
				(void*)addresses::address1873(), 
				(void*)wrap::levelFlipFinished<DefaultConv, Derived, Base, types::pure1873>::value
			);
		}

		if constexpr (compare::levelFlipping<Derived, Base, types::pure1874>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::levelFlipping", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::levelFlipping", 
				(void*)addresses::address1874(), 
				(void*)wrap::levelFlipping<DefaultConv, Derived, Base, types::pure1874>::value
			);
		}

		if constexpr (compare::levelWillFlip<Derived, Base, types::pure1875>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::levelWillFlip", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::levelWillFlip", 
				(void*)addresses::address1875(), 
				(void*)wrap::levelWillFlip<DefaultConv, Derived, Base, types::pure1875>::value
			);
		}

		if constexpr (compare::loadFromCheckpoint<Derived, Base, types::pure1876>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::loadFromCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::loadFromCheckpoint", 
				(void*)addresses::address1876(), 
				(void*)wrap::loadFromCheckpoint<DefaultConv, Derived, Base, types::pure1876>::value
			);
		}

		if constexpr (compare::lockPlayer<Derived, Base, types::pure1877>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::lockPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::lockPlayer", 
				(void*)addresses::address1877(), 
				(void*)wrap::lockPlayer<DefaultConv, Derived, Base, types::pure1877>::value
			);
		}

		if constexpr (compare::logValues<Derived, Base, types::pure1878>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::logValues", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::logValues", 
				(void*)addresses::address1878(), 
				(void*)wrap::logValues<DefaultConv, Derived, Base, types::pure1878>::value
			);
		}

		if constexpr (compare::modeDidChange<Derived, Base, types::pure1879>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::modeDidChange", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::modeDidChange", 
				(void*)addresses::address1879(), 
				(void*)wrap::modeDidChange<DefaultConv, Derived, Base, types::pure1879>::value
			);
		}

		if constexpr (compare::placeStreakPoint<Derived, Base, types::pure1880>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::placeStreakPoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::placeStreakPoint", 
				(void*)addresses::address1880(), 
				(void*)wrap::placeStreakPoint<DefaultConv, Derived, Base, types::pure1880>::value
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
				(void*)wrap::playBurstEffect<DefaultConv, Derived, Base, types::pure1881>::value
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
				(void*)wrap::playDeathEffect<DefaultConv, Derived, Base, types::pure1882>::value
			);
		}

		if constexpr (compare::playDynamicSpiderRun<Derived, Base, types::pure1883>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playDynamicSpiderRun", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::playDynamicSpiderRun", 
				(void*)addresses::address1883(), 
				(void*)wrap::playDynamicSpiderRun<DefaultConv, Derived, Base, types::pure1883>::value
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
				(void*)wrap::playerDestroyed<DefaultConv, Derived, Base, types::pure1884>::value
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
				(void*)wrap::playerIsFalling<DefaultConv, Derived, Base, types::pure1885>::value
			);
		}

		if constexpr (compare::playerTeleported<Derived, Base, types::pure1886>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playerTeleported", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::playerTeleported", 
				(void*)addresses::address1886(), 
				(void*)wrap::playerTeleported<DefaultConv, Derived, Base, types::pure1886>::value
			);
		}

		if constexpr (compare::playingEndEffect<Derived, Base, types::pure1887>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::playingEndEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::playingEndEffect", 
				(void*)addresses::address1887(), 
				(void*)wrap::playingEndEffect<DefaultConv, Derived, Base, types::pure1887>::value
			);
		}

		if constexpr (compare::postCollision<Derived, Base, types::pure1888>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::postCollision", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::postCollision", 
				(void*)addresses::address1888(), 
				(void*)wrap::postCollision<DefaultConv, Derived, Base, types::pure1888>::value
			);
		}

		if constexpr (compare::preCollision<Derived, Base, types::pure1889>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::preCollision", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::preCollision", 
				(void*)addresses::address1889(), 
				(void*)wrap::preCollision<DefaultConv, Derived, Base, types::pure1889>::value
			);
		}

		if constexpr (compare::preSlopeCollision<Derived, Base, types::pure1890>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::preSlopeCollision", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::preSlopeCollision", 
				(void*)addresses::address1890(), 
				(void*)wrap::preSlopeCollision<DefaultConv, Derived, Base, types::pure1890>::value
			);
		}

		if constexpr (compare::propellPlayer<Derived, Base, types::pure1891>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::propellPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::propellPlayer", 
				(void*)addresses::address1891(), 
				(void*)wrap::propellPlayer<DefaultConv, Derived, Base, types::pure1891>::value
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
				(void*)wrap::pushButton<DefaultConv, Derived, Base, types::pure1892>::value
			);
		}

		if constexpr (compare::pushDown<Derived, Base, types::pure1893>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::pushDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::pushDown", 
				(void*)addresses::address1893(), 
				(void*)wrap::pushDown<DefaultConv, Derived, Base, types::pure1893>::value
			);
		}

		if constexpr (compare::pushPlayer<Derived, Base, types::pure1894>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::pushPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::pushPlayer", 
				(void*)addresses::address1894(), 
				(void*)wrap::pushPlayer<DefaultConv, Derived, Base, types::pure1894>::value
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
				(void*)wrap::releaseButton<DefaultConv, Derived, Base, types::pure1895>::value
			);
		}

		if constexpr (compare::removeAllParticles<Derived, Base, types::pure1896>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::removeAllParticles", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::removeAllParticles", 
				(void*)addresses::address1896(), 
				(void*)wrap::removeAllParticles<DefaultConv, Derived, Base, types::pure1896>::value
			);
		}

		if constexpr (compare::removePendingCheckpoint<Derived, Base, types::pure1897>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::removePendingCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::removePendingCheckpoint", 
				(void*)addresses::address1897(), 
				(void*)wrap::removePendingCheckpoint<DefaultConv, Derived, Base, types::pure1897>::value
			);
		}

		if constexpr (compare::resetAllParticles<Derived, Base, types::pure1898>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetAllParticles", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::resetAllParticles", 
				(void*)addresses::address1898(), 
				(void*)wrap::resetAllParticles<DefaultConv, Derived, Base, types::pure1898>::value
			);
		}

		if constexpr (compare::resetCollisionLog<Derived, Base, types::pure1899>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetCollisionLog", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::resetCollisionLog", 
				(void*)addresses::address1899(), 
				(void*)wrap::resetCollisionLog<DefaultConv, Derived, Base, types::pure1899>::value
			);
		}

		if constexpr (compare::resetPlayerIcon<Derived, Base, types::pure1900>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetPlayerIcon", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::resetPlayerIcon", 
				(void*)addresses::address1900(), 
				(void*)wrap::resetPlayerIcon<DefaultConv, Derived, Base, types::pure1900>::value
			);
		}

		if constexpr (compare::resetStateVariables<Derived, Base, types::pure1901>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetStateVariables", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::resetStateVariables", 
				(void*)addresses::address1901(), 
				(void*)wrap::resetStateVariables<DefaultConv, Derived, Base, types::pure1901>::value
			);
		}

		if constexpr (compare::resetStreak<Derived, Base, types::pure1902>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::resetStreak", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::resetStreak", 
				(void*)addresses::address1902(), 
				(void*)wrap::resetStreak<DefaultConv, Derived, Base, types::pure1902>::value
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
				(void*)wrap::ringJump<DefaultConv, Derived, Base, types::pure1903>::value
			);
		}

		if constexpr (compare::runBallRotation<Derived, Base, types::pure1904>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runBallRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::runBallRotation", 
				(void*)addresses::address1904(), 
				(void*)wrap::runBallRotation<DefaultConv, Derived, Base, types::pure1904>::value
			);
		}

		if constexpr (compare::runBallRotation2<Derived, Base, types::pure1905>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runBallRotation2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::runBallRotation2", 
				(void*)addresses::address1905(), 
				(void*)wrap::runBallRotation2<DefaultConv, Derived, Base, types::pure1905>::value
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
				(void*)wrap::runNormalRotation<DefaultConv, Derived, Base, types::pure1906>::value
			);
		}

		if constexpr (compare::runRotateAction<Derived, Base, types::pure1907>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::runRotateAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::runRotateAction", 
				(void*)addresses::address1907(), 
				(void*)wrap::runRotateAction<DefaultConv, Derived, Base, types::pure1907>::value
			);
		}

		if constexpr (compare::saveToCheckpoint<Derived, Base, types::pure1908>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::saveToCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::saveToCheckpoint", 
				(void*)addresses::address1908(), 
				(void*)wrap::saveToCheckpoint<DefaultConv, Derived, Base, types::pure1908>::value
			);
		}

		if constexpr (compare::setSecondColor<Derived, Base, types::pure1909>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setSecondColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setSecondColor", 
				(void*)addresses::address1909(), 
				(void*)wrap::setSecondColor<DefaultConv, Derived, Base, types::pure1909>::value
			);
		}

		if constexpr (compare::setupStreak<Derived, Base, types::pure1910>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::setupStreak", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::setupStreak", 
				(void*)addresses::address1910(), 
				(void*)wrap::setupStreak<DefaultConv, Derived, Base, types::pure1910>::value
			);
		}

		if constexpr (compare::spawnCircle<Derived, Base, types::pure1911>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnCircle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::spawnCircle", 
				(void*)addresses::address1911(), 
				(void*)wrap::spawnCircle<DefaultConv, Derived, Base, types::pure1911>::value
			);
		}

		if constexpr (compare::spawnCircle2<Derived, Base, types::pure1912>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnCircle2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::spawnCircle2", 
				(void*)addresses::address1912(), 
				(void*)wrap::spawnCircle2<DefaultConv, Derived, Base, types::pure1912>::value
			);
		}

		if constexpr (compare::spawnDualCircle<Derived, Base, types::pure1913>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnDualCircle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::spawnDualCircle", 
				(void*)addresses::address1913(), 
				(void*)wrap::spawnDualCircle<DefaultConv, Derived, Base, types::pure1913>::value
			);
		}

		if constexpr (compare::spawnFromPlayer<Derived, Base, types::pure1914>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnFromPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::spawnFromPlayer", 
				(void*)addresses::address1914(), 
				(void*)wrap::spawnFromPlayer<DefaultConv, Derived, Base, types::pure1914>::value
			);
		}

		if constexpr (compare::spawnPortalCircle<Derived, Base, types::pure1915>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnPortalCircle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::spawnPortalCircle", 
				(void*)addresses::address1915(), 
				(void*)wrap::spawnPortalCircle<DefaultConv, Derived, Base, types::pure1915>::value
			);
		}

		if constexpr (compare::spawnScaleCircle<Derived, Base, types::pure1916>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::spawnScaleCircle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::spawnScaleCircle", 
				(void*)addresses::address1916(), 
				(void*)wrap::spawnScaleCircle<DefaultConv, Derived, Base, types::pure1916>::value
			);
		}

		if constexpr (compare::specialGroundHit<Derived, Base, types::pure1917>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::specialGroundHit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::specialGroundHit", 
				(void*)addresses::address1917(), 
				(void*)wrap::specialGroundHit<DefaultConv, Derived, Base, types::pure1917>::value
			);
		}

		if constexpr (compare::speedDown<Derived, Base, types::pure1918>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::speedDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::speedDown", 
				(void*)addresses::address1918(), 
				(void*)wrap::speedDown<DefaultConv, Derived, Base, types::pure1918>::value
			);
		}

		if constexpr (compare::speedUp<Derived, Base, types::pure1919>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::speedUp", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::speedUp", 
				(void*)addresses::address1919(), 
				(void*)wrap::speedUp<DefaultConv, Derived, Base, types::pure1919>::value
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
				(void*)wrap::spiderTestJump<DefaultConv, Derived, Base, types::pure1920>::value
			);
		}

		if constexpr (compare::startDashing<Derived, Base, types::pure1921>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::startDashing", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::startDashing", 
				(void*)addresses::address1921(), 
				(void*)wrap::startDashing<DefaultConv, Derived, Base, types::pure1921>::value
			);
		}

		if constexpr (compare::stopBurstEffect<Derived, Base, types::pure1922>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::stopBurstEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::stopBurstEffect", 
				(void*)addresses::address1922(), 
				(void*)wrap::stopBurstEffect<DefaultConv, Derived, Base, types::pure1922>::value
			);
		}

		if constexpr (compare::stopDashing<Derived, Base, types::pure1923>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::stopDashing", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::stopDashing", 
				(void*)addresses::address1923(), 
				(void*)wrap::stopDashing<DefaultConv, Derived, Base, types::pure1923>::value
			);
		}

		if constexpr (compare::stopRotation<Derived, Base, types::pure1924>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::stopRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::stopRotation", 
				(void*)addresses::address1924(), 
				(void*)wrap::stopRotation<DefaultConv, Derived, Base, types::pure1924>::value
			);
		}

		if constexpr (compare::storeCollision<Derived, Base, types::pure1925>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::storeCollision", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::storeCollision", 
				(void*)addresses::address1925(), 
				(void*)wrap::storeCollision<DefaultConv, Derived, Base, types::pure1925>::value
			);
		}

		if constexpr (compare::switchedToMode<Derived, Base, types::pure1926>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::switchedToMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::switchedToMode", 
				(void*)addresses::address1926(), 
				(void*)wrap::switchedToMode<DefaultConv, Derived, Base, types::pure1926>::value
			);
		}

		if constexpr (compare::testForMoving<Derived, Base, types::pure1927>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::testForMoving", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::testForMoving", 
				(void*)addresses::address1927(), 
				(void*)wrap::testForMoving<DefaultConv, Derived, Base, types::pure1927>::value
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
				(void*)wrap::toggleBirdMode<DefaultConv, Derived, Base, types::pure1928>::value
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
				(void*)wrap::toggleDartMode<DefaultConv, Derived, Base, types::pure1929>::value
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
				(void*)wrap::toggleFlyMode<DefaultConv, Derived, Base, types::pure1930>::value
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
				(void*)wrap::toggleGhostEffect<DefaultConv, Derived, Base, types::pure1931>::value
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
				(void*)wrap::togglePlayerScale<DefaultConv, Derived, Base, types::pure1932>::value
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
				(void*)wrap::toggleRobotMode<DefaultConv, Derived, Base, types::pure1933>::value
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
				(void*)wrap::toggleRollMode<DefaultConv, Derived, Base, types::pure1934>::value
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
				(void*)wrap::toggleSpiderMode<DefaultConv, Derived, Base, types::pure1935>::value
			);
		}

		if constexpr (compare::toggleVisibility<Derived, Base, types::pure1936>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::toggleVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::toggleVisibility", 
				(void*)addresses::address1936(), 
				(void*)wrap::toggleVisibility<DefaultConv, Derived, Base, types::pure1936>::value
			);
		}

		if constexpr (compare::touchedObject<Derived, Base, types::pure1937>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::touchedObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::touchedObject", 
				(void*)addresses::address1937(), 
				(void*)wrap::touchedObject<DefaultConv, Derived, Base, types::pure1937>::value
			);
		}

		if constexpr (compare::tryPlaceCheckpoint<Derived, Base, types::pure1938>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::tryPlaceCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::tryPlaceCheckpoint", 
				(void*)addresses::address1938(), 
				(void*)wrap::tryPlaceCheckpoint<DefaultConv, Derived, Base, types::pure1938>::value
			);
		}

		if constexpr (compare::updateCheckpointMode<Derived, Base, types::pure1939>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateCheckpointMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateCheckpointMode", 
				(void*)addresses::address1939(), 
				(void*)wrap::updateCheckpointMode<DefaultConv, Derived, Base, types::pure1939>::value
			);
		}

		if constexpr (compare::updateCheckpointTest<Derived, Base, types::pure1940>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateCheckpointTest", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateCheckpointTest", 
				(void*)addresses::address1940(), 
				(void*)wrap::updateCheckpointTest<DefaultConv, Derived, Base, types::pure1940>::value
			);
		}

		if constexpr (compare::updateCollide<Derived, Base, types::pure1941>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateCollide", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateCollide", 
				(void*)addresses::address1941(), 
				(void*)wrap::updateCollide<DefaultConv, Derived, Base, types::pure1941>::value
			);
		}

		if constexpr (compare::updateCollideBottom<Derived, Base, types::pure1942>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateCollideBottom", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateCollideBottom", 
				(void*)addresses::address1942(), 
				(void*)wrap::updateCollideBottom<DefaultConv, Derived, Base, types::pure1942>::value
			);
		}

		if constexpr (compare::updateCollideTop<Derived, Base, types::pure1943>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateCollideTop", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateCollideTop", 
				(void*)addresses::address1943(), 
				(void*)wrap::updateCollideTop<DefaultConv, Derived, Base, types::pure1943>::value
			);
		}

		if constexpr (compare::updateDashAnimation<Derived, Base, types::pure1944>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateDashAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateDashAnimation", 
				(void*)addresses::address1944(), 
				(void*)wrap::updateDashAnimation<DefaultConv, Derived, Base, types::pure1944>::value
			);
		}

		if constexpr (compare::updateDashArt<Derived, Base, types::pure1945>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateDashArt", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateDashArt", 
				(void*)addresses::address1945(), 
				(void*)wrap::updateDashArt<DefaultConv, Derived, Base, types::pure1945>::value
			);
		}

		if constexpr (compare::updateGlowColor<Derived, Base, types::pure1946>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateGlowColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateGlowColor", 
				(void*)addresses::address1946(), 
				(void*)wrap::updateGlowColor<DefaultConv, Derived, Base, types::pure1946>::value
			);
		}

		if constexpr (compare::updateJump<Derived, Base, types::pure1947>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateJump", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateJump", 
				(void*)addresses::address1947(), 
				(void*)wrap::updateJump<DefaultConv, Derived, Base, types::pure1947>::value
			);
		}

		if constexpr (compare::updateJumpVariables<Derived, Base, types::pure1948>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateJumpVariables", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateJumpVariables", 
				(void*)addresses::address1948(), 
				(void*)wrap::updateJumpVariables<DefaultConv, Derived, Base, types::pure1948>::value
			);
		}

		if constexpr (compare::updatePlayerBirdFrame<Derived, Base, types::pure1949>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerBirdFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updatePlayerBirdFrame", 
				(void*)addresses::address1949(), 
				(void*)wrap::updatePlayerBirdFrame<DefaultConv, Derived, Base, types::pure1949>::value
			);
		}

		if constexpr (compare::updatePlayerDartFrame<Derived, Base, types::pure1950>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerDartFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updatePlayerDartFrame", 
				(void*)addresses::address1950(), 
				(void*)wrap::updatePlayerDartFrame<DefaultConv, Derived, Base, types::pure1950>::value
			);
		}

		if constexpr (compare::updatePlayerFrame<Derived, Base, types::pure1951>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updatePlayerFrame", 
				(void*)addresses::address1951(), 
				(void*)wrap::updatePlayerFrame<DefaultConv, Derived, Base, types::pure1951>::value
			);
		}

		if constexpr (compare::updatePlayerGlow<Derived, Base, types::pure1952>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerGlow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updatePlayerGlow", 
				(void*)addresses::address1952(), 
				(void*)wrap::updatePlayerGlow<DefaultConv, Derived, Base, types::pure1952>::value
			);
		}

		if constexpr (compare::updatePlayerRobotFrame<Derived, Base, types::pure1953>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerRobotFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updatePlayerRobotFrame", 
				(void*)addresses::address1953(), 
				(void*)wrap::updatePlayerRobotFrame<DefaultConv, Derived, Base, types::pure1953>::value
			);
		}

		if constexpr (compare::updatePlayerRollFrame<Derived, Base, types::pure1954>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerRollFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updatePlayerRollFrame", 
				(void*)addresses::address1954(), 
				(void*)wrap::updatePlayerRollFrame<DefaultConv, Derived, Base, types::pure1954>::value
			);
		}

		if constexpr (compare::updatePlayerScale<Derived, Base, types::pure1955>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updatePlayerScale", 
				(void*)addresses::address1955(), 
				(void*)wrap::updatePlayerScale<DefaultConv, Derived, Base, types::pure1955>::value
			);
		}

		if constexpr (compare::updatePlayerShipFrame<Derived, Base, types::pure1956>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerShipFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updatePlayerShipFrame", 
				(void*)addresses::address1956(), 
				(void*)wrap::updatePlayerShipFrame<DefaultConv, Derived, Base, types::pure1956>::value
			);
		}

		if constexpr (compare::updatePlayerSpiderFrame<Derived, Base, types::pure1957>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerSpiderFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updatePlayerSpiderFrame", 
				(void*)addresses::address1957(), 
				(void*)wrap::updatePlayerSpiderFrame<DefaultConv, Derived, Base, types::pure1957>::value
			);
		}

		if constexpr (compare::updatePlayerSpriteExtra<Derived, Base, types::pure1958>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updatePlayerSpriteExtra", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updatePlayerSpriteExtra", 
				(void*)addresses::address1958(), 
				(void*)wrap::updatePlayerSpriteExtra<DefaultConv, Derived, Base, types::pure1958>::value
			);
		}

		if constexpr (compare::updateRobotAnimationSpeed<Derived, Base, types::pure1959>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateRobotAnimationSpeed", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateRobotAnimationSpeed", 
				(void*)addresses::address1959(), 
				(void*)wrap::updateRobotAnimationSpeed<DefaultConv, Derived, Base, types::pure1959>::value
			);
		}

		if constexpr (compare::updateRotation<Derived, Base, types::pure1960>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateRotation", 
				(void*)addresses::address1960(), 
				(void*)wrap::updateRotation<DefaultConv, Derived, Base, types::pure1960>::value
			);
		}

		if constexpr (compare::updateRotation<Derived, Base, types::pure1961>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateRotation", 
				(void*)addresses::address1961(), 
				(void*)wrap::updateRotation<DefaultConv, Derived, Base, types::pure1961>::value
			);
		}

		if constexpr (compare::updateShipRotation<Derived, Base, types::pure1962>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateShipRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateShipRotation", 
				(void*)addresses::address1962(), 
				(void*)wrap::updateShipRotation<DefaultConv, Derived, Base, types::pure1962>::value
			);
		}

		if constexpr (compare::updateShipSpriteExtra<Derived, Base, types::pure1963>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateShipSpriteExtra", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateShipSpriteExtra", 
				(void*)addresses::address1963(), 
				(void*)wrap::updateShipSpriteExtra<DefaultConv, Derived, Base, types::pure1963>::value
			);
		}

		if constexpr (compare::updateSlopeRotation<Derived, Base, types::pure1964>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateSlopeRotation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateSlopeRotation", 
				(void*)addresses::address1964(), 
				(void*)wrap::updateSlopeRotation<DefaultConv, Derived, Base, types::pure1964>::value
			);
		}

		if constexpr (compare::updateSlopeYVelocity<Derived, Base, types::pure1965>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateSlopeYVelocity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateSlopeYVelocity", 
				(void*)addresses::address1965(), 
				(void*)wrap::updateSlopeYVelocity<DefaultConv, Derived, Base, types::pure1965>::value
			);
		}

		if constexpr (compare::updateSpecial<Derived, Base, types::pure1966>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateSpecial", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateSpecial", 
				(void*)addresses::address1966(), 
				(void*)wrap::updateSpecial<DefaultConv, Derived, Base, types::pure1966>::value
			);
		}

		if constexpr (compare::updateStateVariables<Derived, Base, types::pure1967>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::updateStateVariables", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::updateStateVariables", 
				(void*)addresses::address1967(), 
				(void*)wrap::updateStateVariables<DefaultConv, Derived, Base, types::pure1967>::value
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
				(void*)wrap::updateTimeMod<DefaultConv, Derived, Base, types::pure1968>::value
			);
		}

		if constexpr (compare::usingWallLimitedMode<Derived, Base, types::pure1969>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::usingWallLimitedMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::usingWallLimitedMode", 
				(void*)addresses::address1969(), 
				(void*)wrap::usingWallLimitedMode<DefaultConv, Derived, Base, types::pure1969>::value
			);
		}

		if constexpr (compare::yStartDown<Derived, Base, types::pure1970>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::yStartDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::yStartDown", 
				(void*)addresses::address1970(), 
				(void*)wrap::yStartDown<DefaultConv, Derived, Base, types::pure1970>::value
			);
		}

		if constexpr (compare::yStartUp<Derived, Base, types::pure1971>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerObject::yStartUp", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerObject::yStartUp", 
				(void*)addresses::address1971(), 
				(void*)wrap::yStartUp<DefaultConv, Derived, Base, types::pure1971>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1820>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerCheckpoint::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerCheckpoint::destructor", 
				(void*)addresses::address1820(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1820>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1821>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerCheckpoint::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerCheckpoint::init", 
				(void*)addresses::address1821(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1821>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1822>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayerCheckpoint::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayerCheckpoint::create", 
				(void*)addresses::address1822(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1822>::value
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

		if constexpr (compare::addCircle<Derived, Base, types::pure1668>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::addCircle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::addCircle", 
				(void*)addresses::address1668(), 
				(void*)wrap::addCircle<DefaultConv, Derived, Base, types::pure1668>::value
			);
		}

		if constexpr (compare::addObject<Derived, Base, types::pure1669>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::addObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::addObject", 
				(void*)addresses::address1669(), 
				(void*)wrap::addObject<DefaultConv, Derived, Base, types::pure1669>::value
			);
		}

		if constexpr (compare::addToGroupOld<Derived, Base, types::pure1670>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::addToGroupOld", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::addToGroupOld", 
				(void*)addresses::address1670(), 
				(void*)wrap::addToGroupOld<DefaultConv, Derived, Base, types::pure1670>::value
			);
		}

		if constexpr (compare::addToSpeedObjects<Derived, Base, types::pure1671>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::addToSpeedObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::addToSpeedObjects", 
				(void*)addresses::address1671(), 
				(void*)wrap::addToSpeedObjects<DefaultConv, Derived, Base, types::pure1671>::value
			);
		}

		if constexpr (compare::animateInDualGround<Derived, Base, types::pure1672>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::animateInDualGround", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::animateInDualGround", 
				(void*)addresses::address1672(), 
				(void*)wrap::animateInDualGround<DefaultConv, Derived, Base, types::pure1672>::value
			);
		}

		if constexpr (compare::animateInGround<Derived, Base, types::pure1673>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::animateInGround", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::animateInGround", 
				(void*)addresses::address1673(), 
				(void*)wrap::animateInGround<DefaultConv, Derived, Base, types::pure1673>::value
			);
		}

		if constexpr (compare::animateOutGround<Derived, Base, types::pure1674>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::animateOutGround", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::animateOutGround", 
				(void*)addresses::address1674(), 
				(void*)wrap::animateOutGround<DefaultConv, Derived, Base, types::pure1674>::value
			);
		}

		if constexpr (compare::animateOutGroundFinished<Derived, Base, types::pure1675>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::animateOutGroundFinished", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::animateOutGroundFinished", 
				(void*)addresses::address1675(), 
				(void*)wrap::animateOutGroundFinished<DefaultConv, Derived, Base, types::pure1675>::value
			);
		}

		if constexpr (compare::applyEnterEffect<Derived, Base, types::pure1676>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::applyEnterEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::applyEnterEffect", 
				(void*)addresses::address1676(), 
				(void*)wrap::applyEnterEffect<DefaultConv, Derived, Base, types::pure1676>::value
			);
		}

		if constexpr (compare::calculateColorValues<Derived, Base, types::pure1677>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::calculateColorValues", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::calculateColorValues", 
				(void*)addresses::address1677(), 
				(void*)wrap::calculateColorValues<DefaultConv, Derived, Base, types::pure1677>::value
			);
		}

		if constexpr (compare::cameraMoveX<Derived, Base, types::pure1678>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::cameraMoveX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::cameraMoveX", 
				(void*)addresses::address1678(), 
				(void*)wrap::cameraMoveX<DefaultConv, Derived, Base, types::pure1678>::value
			);
		}

		if constexpr (compare::cameraMoveY<Derived, Base, types::pure1679>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::cameraMoveY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::cameraMoveY", 
				(void*)addresses::address1679(), 
				(void*)wrap::cameraMoveY<DefaultConv, Derived, Base, types::pure1679>::value
			);
		}

		if constexpr (compare::checkCollisions<Derived, Base, types::pure1680>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::checkCollisions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::checkCollisions", 
				(void*)addresses::address1680(), 
				(void*)wrap::checkCollisions<DefaultConv, Derived, Base, types::pure1680>::value
			);
		}

		if constexpr (compare::circleWaveWillBeRemoved<Derived, Base, types::pure1681>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::circleWaveWillBeRemoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::circleWaveWillBeRemoved", 
				(void*)addresses::address1681(), 
				(void*)wrap::circleWaveWillBeRemoved<DefaultConv, Derived, Base, types::pure1681>::value
			);
		}

		if constexpr (compare::claimParticle<Derived, Base, types::pure1682>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::claimParticle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::claimParticle", 
				(void*)addresses::address1682(), 
				(void*)wrap::claimParticle<DefaultConv, Derived, Base, types::pure1682>::value
			);
		}

		if constexpr (compare::clearPickedUpItems<Derived, Base, types::pure1683>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::clearPickedUpItems", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::clearPickedUpItems", 
				(void*)addresses::address1683(), 
				(void*)wrap::clearPickedUpItems<DefaultConv, Derived, Base, types::pure1683>::value
			);
		}

		if constexpr (compare::colorObject<Derived, Base, types::pure1684>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::colorObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::colorObject", 
				(void*)addresses::address1684(), 
				(void*)wrap::colorObject<DefaultConv, Derived, Base, types::pure1684>::value
			);
		}

		if constexpr (compare::commitJumps<Derived, Base, types::pure1685>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::commitJumps", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::commitJumps", 
				(void*)addresses::address1685(), 
				(void*)wrap::commitJumps<DefaultConv, Derived, Base, types::pure1685>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1686>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::create", 
				(void*)addresses::address1686(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1686>::value
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
				(void*)wrap::createCheckpoint<DefaultConv, Derived, Base, types::pure1687>::value
			);
		}

		if constexpr (compare::createObjectsFromSetup<Derived, Base, types::pure1688>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::createObjectsFromSetup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::createObjectsFromSetup", 
				(void*)addresses::address1688(), 
				(void*)wrap::createObjectsFromSetup<DefaultConv, Derived, Base, types::pure1688>::value
			);
		}

		if constexpr (compare::createParticle<Derived, Base, types::pure1689>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::createParticle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::createParticle", 
				(void*)addresses::address1689(), 
				(void*)wrap::createParticle<DefaultConv, Derived, Base, types::pure1689>::value
			);
		}

		if constexpr (compare::currencyWillExit<Derived, Base, types::pure1690>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::currencyWillExit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::currencyWillExit", 
				(void*)addresses::address1690(), 
				(void*)wrap::currencyWillExit<DefaultConv, Derived, Base, types::pure1690>::value
			);
		}

		if constexpr (compare::delayedResetLevel<Derived, Base, types::pure1691>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::delayedResetLevel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::delayedResetLevel", 
				(void*)addresses::address1691(), 
				(void*)wrap::delayedResetLevel<DefaultConv, Derived, Base, types::pure1691>::value
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
				(void*)wrap::destroyPlayer<DefaultConv, Derived, Base, types::pure1692>::value
			);
		}

		if constexpr (compare::dialogClosed<Derived, Base, types::pure1693>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::dialogClosed", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::dialogClosed", 
				(void*)addresses::address1693(), 
				(void*)wrap::dialogClosed<DefaultConv, Derived, Base, types::pure1693>::value
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
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure1694>::value
			);
		}

		if constexpr (compare::enterDualMode<Derived, Base, types::pure1695>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::enterDualMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::enterDualMode", 
				(void*)addresses::address1695(), 
				(void*)wrap::enterDualMode<DefaultConv, Derived, Base, types::pure1695>::value
			);
		}

		if constexpr (compare::exitAirMode<Derived, Base, types::pure1696>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitAirMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::exitAirMode", 
				(void*)addresses::address1696(), 
				(void*)wrap::exitAirMode<DefaultConv, Derived, Base, types::pure1696>::value
			);
		}

		if constexpr (compare::exitBirdMode<Derived, Base, types::pure1697>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitBirdMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::exitBirdMode", 
				(void*)addresses::address1697(), 
				(void*)wrap::exitBirdMode<DefaultConv, Derived, Base, types::pure1697>::value
			);
		}

		if constexpr (compare::exitDartMode<Derived, Base, types::pure1698>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitDartMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::exitDartMode", 
				(void*)addresses::address1698(), 
				(void*)wrap::exitDartMode<DefaultConv, Derived, Base, types::pure1698>::value
			);
		}

		if constexpr (compare::exitFlyMode<Derived, Base, types::pure1699>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitFlyMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::exitFlyMode", 
				(void*)addresses::address1699(), 
				(void*)wrap::exitFlyMode<DefaultConv, Derived, Base, types::pure1699>::value
			);
		}

		if constexpr (compare::exitRobotMode<Derived, Base, types::pure1700>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitRobotMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::exitRobotMode", 
				(void*)addresses::address1700(), 
				(void*)wrap::exitRobotMode<DefaultConv, Derived, Base, types::pure1700>::value
			);
		}

		if constexpr (compare::exitRollMode<Derived, Base, types::pure1701>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitRollMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::exitRollMode", 
				(void*)addresses::address1701(), 
				(void*)wrap::exitRollMode<DefaultConv, Derived, Base, types::pure1701>::value
			);
		}

		if constexpr (compare::exitSpiderMode<Derived, Base, types::pure1702>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::exitSpiderMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::exitSpiderMode", 
				(void*)addresses::address1702(), 
				(void*)wrap::exitSpiderMode<DefaultConv, Derived, Base, types::pure1702>::value
			);
		}

		if constexpr (compare::flipFinished<Derived, Base, types::pure1703>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::flipFinished", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::flipFinished", 
				(void*)addresses::address1703(), 
				(void*)wrap::flipFinished<DefaultConv, Derived, Base, types::pure1703>::value
			);
		}

		if constexpr (compare::flipGravity<Derived, Base, types::pure1704>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::flipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::flipGravity", 
				(void*)addresses::address1704(), 
				(void*)wrap::flipGravity<DefaultConv, Derived, Base, types::pure1704>::value
			);
		}

		if constexpr (compare::flipObjects<Derived, Base, types::pure1705>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::flipObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::flipObjects", 
				(void*)addresses::address1705(), 
				(void*)wrap::flipObjects<DefaultConv, Derived, Base, types::pure1705>::value
			);
		}

		if constexpr (compare::fullReset<Derived, Base, types::pure1706>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::fullReset", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::fullReset", 
				(void*)addresses::address1706(), 
				(void*)wrap::fullReset<DefaultConv, Derived, Base, types::pure1706>::value
			);
		}

		if constexpr (compare::getLastCheckpoint<Derived, Base, types::pure1707>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getLastCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::getLastCheckpoint", 
				(void*)addresses::address1707(), 
				(void*)wrap::getLastCheckpoint<DefaultConv, Derived, Base, types::pure1707>::value
			);
		}

		if constexpr (compare::getMaxPortalY<Derived, Base, types::pure1708>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getMaxPortalY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::getMaxPortalY", 
				(void*)addresses::address1708(), 
				(void*)wrap::getMaxPortalY<DefaultConv, Derived, Base, types::pure1708>::value
			);
		}

		if constexpr (compare::getMinPortalY<Derived, Base, types::pure1709>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getMinPortalY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::getMinPortalY", 
				(void*)addresses::address1709(), 
				(void*)wrap::getMinPortalY<DefaultConv, Derived, Base, types::pure1709>::value
			);
		}

		if constexpr (compare::getObjectsState<Derived, Base, types::pure1710>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getObjectsState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::getObjectsState", 
				(void*)addresses::address1710(), 
				(void*)wrap::getObjectsState<DefaultConv, Derived, Base, types::pure1710>::value
			);
		}

		if constexpr (compare::getOtherPlayer<Derived, Base, types::pure1711>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getOtherPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::getOtherPlayer", 
				(void*)addresses::address1711(), 
				(void*)wrap::getOtherPlayer<DefaultConv, Derived, Base, types::pure1711>::value
			);
		}

		if constexpr (compare::getParticleKey<Derived, Base, types::pure1712>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getParticleKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::getParticleKey", 
				(void*)addresses::address1712(), 
				(void*)wrap::getParticleKey<DefaultConv, Derived, Base, types::pure1712>::value
			);
		}

		if constexpr (compare::getParticleKey2<Derived, Base, types::pure1713>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getParticleKey2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::getParticleKey2", 
				(void*)addresses::address1713(), 
				(void*)wrap::getParticleKey2<DefaultConv, Derived, Base, types::pure1713>::value
			);
		}

		if constexpr (compare::getRelativeMod<Derived, Base, types::pure1714>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getRelativeMod", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::getRelativeMod", 
				(void*)addresses::address1714(), 
				(void*)wrap::getRelativeMod<DefaultConv, Derived, Base, types::pure1714>::value
			);
		}

		if constexpr (compare::getTempMilliTime<Derived, Base, types::pure1715>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::getTempMilliTime", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::getTempMilliTime", 
				(void*)addresses::address1715(), 
				(void*)wrap::getTempMilliTime<DefaultConv, Derived, Base, types::pure1715>::value
			);
		}

		if constexpr (compare::gravityEffectFinished<Derived, Base, types::pure1716>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::gravityEffectFinished", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::gravityEffectFinished", 
				(void*)addresses::address1716(), 
				(void*)wrap::gravityEffectFinished<DefaultConv, Derived, Base, types::pure1716>::value
			);
		}

		if constexpr (compare::hasItem<Derived, Base, types::pure1717>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::hasItem", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::hasItem", 
				(void*)addresses::address1717(), 
				(void*)wrap::hasItem<DefaultConv, Derived, Base, types::pure1717>::value
			);
		}

		if constexpr (compare::hasUniqueCoin<Derived, Base, types::pure1718>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::hasUniqueCoin", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::hasUniqueCoin", 
				(void*)addresses::address1718(), 
				(void*)wrap::hasUniqueCoin<DefaultConv, Derived, Base, types::pure1718>::value
			);
		}

		if constexpr (compare::incrementJumps<Derived, Base, types::pure1719>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::incrementJumps", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::incrementJumps", 
				(void*)addresses::address1719(), 
				(void*)wrap::incrementJumps<DefaultConv, Derived, Base, types::pure1719>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1720>::value
			);
		}

		if constexpr (compare::isFlipping<Derived, Base, types::pure1721>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::isFlipping", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::isFlipping", 
				(void*)addresses::address1721(), 
				(void*)wrap::isFlipping<DefaultConv, Derived, Base, types::pure1721>::value
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
				(void*)wrap::levelComplete<DefaultConv, Derived, Base, types::pure1722>::value
			);
		}

		if constexpr (compare::lightningFlash<Derived, Base, types::pure1723>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::lightningFlash", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::lightningFlash", 
				(void*)addresses::address1723(), 
				(void*)wrap::lightningFlash<DefaultConv, Derived, Base, types::pure1723>::value
			);
		}

		if constexpr (compare::lightningFlash<Derived, Base, types::pure1724>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::lightningFlash", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::lightningFlash", 
				(void*)addresses::address1724(), 
				(void*)wrap::lightningFlash<DefaultConv, Derived, Base, types::pure1724>::value
			);
		}

		if constexpr (compare::loadDefaultColors<Derived, Base, types::pure1725>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::loadDefaultColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::loadDefaultColors", 
				(void*)addresses::address1725(), 
				(void*)wrap::loadDefaultColors<DefaultConv, Derived, Base, types::pure1725>::value
			);
		}

		if constexpr (compare::loadFromCheckpoint<Derived, Base, types::pure1726>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::loadFromCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::loadFromCheckpoint", 
				(void*)addresses::address1726(), 
				(void*)wrap::loadFromCheckpoint<DefaultConv, Derived, Base, types::pure1726>::value
			);
		}

		if constexpr (compare::loadLastCheckpoint<Derived, Base, types::pure1727>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::loadLastCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::loadLastCheckpoint", 
				(void*)addresses::address1727(), 
				(void*)wrap::loadLastCheckpoint<DefaultConv, Derived, Base, types::pure1727>::value
			);
		}

		if constexpr (compare::loadSavedObjectsState<Derived, Base, types::pure1728>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::loadSavedObjectsState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::loadSavedObjectsState", 
				(void*)addresses::address1728(), 
				(void*)wrap::loadSavedObjectsState<DefaultConv, Derived, Base, types::pure1728>::value
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
				(void*)wrap::markCheckpoint<DefaultConv, Derived, Base, types::pure1729>::value
			);
		}

		if constexpr (compare::moveCameraToPos<Derived, Base, types::pure1730>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::moveCameraToPos", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::moveCameraToPos", 
				(void*)addresses::address1730(), 
				(void*)wrap::moveCameraToPos<DefaultConv, Derived, Base, types::pure1730>::value
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
				(void*)wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure1731>::value
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
				(void*)wrap::onExit<DefaultConv, Derived, Base, types::pure1732>::value
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
				(void*)wrap::onQuit<DefaultConv, Derived, Base, types::pure1733>::value
			);
		}

		if constexpr (compare::optimizeColorGroups<Derived, Base, types::pure1734>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::optimizeColorGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::optimizeColorGroups", 
				(void*)addresses::address1734(), 
				(void*)wrap::optimizeColorGroups<DefaultConv, Derived, Base, types::pure1734>::value
			);
		}

		if constexpr (compare::optimizeOpacityGroups<Derived, Base, types::pure1735>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::optimizeOpacityGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::optimizeOpacityGroups", 
				(void*)addresses::address1735(), 
				(void*)wrap::optimizeOpacityGroups<DefaultConv, Derived, Base, types::pure1735>::value
			);
		}

		if constexpr (compare::optimizeSaveRequiredGroups<Derived, Base, types::pure1736>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::optimizeSaveRequiredGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::optimizeSaveRequiredGroups", 
				(void*)addresses::address1736(), 
				(void*)wrap::optimizeSaveRequiredGroups<DefaultConv, Derived, Base, types::pure1736>::value
			);
		}

		if constexpr (compare::pauseGame<Derived, Base, types::pure1737>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::pauseGame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::pauseGame", 
				(void*)addresses::address1737(), 
				(void*)wrap::pauseGame<DefaultConv, Derived, Base, types::pure1737>::value
			);
		}

		if constexpr (compare::pickupItem<Derived, Base, types::pure1738>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::pickupItem", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::pickupItem", 
				(void*)addresses::address1738(), 
				(void*)wrap::pickupItem<DefaultConv, Derived, Base, types::pure1738>::value
			);
		}

		if constexpr (compare::playAnimationCommand<Derived, Base, types::pure1739>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playAnimationCommand", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::playAnimationCommand", 
				(void*)addresses::address1739(), 
				(void*)wrap::playAnimationCommand<DefaultConv, Derived, Base, types::pure1739>::value
			);
		}

		if constexpr (compare::playEndAnimationToPos<Derived, Base, types::pure1740>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playEndAnimationToPos", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::playEndAnimationToPos", 
				(void*)addresses::address1740(), 
				(void*)wrap::playEndAnimationToPos<DefaultConv, Derived, Base, types::pure1740>::value
			);
		}

		if constexpr (compare::playExitDualEffect<Derived, Base, types::pure1741>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playExitDualEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::playExitDualEffect", 
				(void*)addresses::address1741(), 
				(void*)wrap::playExitDualEffect<DefaultConv, Derived, Base, types::pure1741>::value
			);
		}

		if constexpr (compare::playFlashEffect<Derived, Base, types::pure1742>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playFlashEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::playFlashEffect", 
				(void*)addresses::address1742(), 
				(void*)wrap::playFlashEffect<DefaultConv, Derived, Base, types::pure1742>::value
			);
		}

		if constexpr (compare::playGravityEffect<Derived, Base, types::pure1743>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playGravityEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::playGravityEffect", 
				(void*)addresses::address1743(), 
				(void*)wrap::playGravityEffect<DefaultConv, Derived, Base, types::pure1743>::value
			);
		}

		if constexpr (compare::playSpeedParticle<Derived, Base, types::pure1744>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playSpeedParticle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::playSpeedParticle", 
				(void*)addresses::address1744(), 
				(void*)wrap::playSpeedParticle<DefaultConv, Derived, Base, types::pure1744>::value
			);
		}

		if constexpr (compare::playerWillSwitchMode<Derived, Base, types::pure1745>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::playerWillSwitchMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::playerWillSwitchMode", 
				(void*)addresses::address1745(), 
				(void*)wrap::playerWillSwitchMode<DefaultConv, Derived, Base, types::pure1745>::value
			);
		}

		if constexpr (compare::prepareSpawnObjects<Derived, Base, types::pure1746>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::prepareSpawnObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::prepareSpawnObjects", 
				(void*)addresses::address1746(), 
				(void*)wrap::prepareSpawnObjects<DefaultConv, Derived, Base, types::pure1746>::value
			);
		}

		if constexpr (compare::processItems<Derived, Base, types::pure1747>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::processItems", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::processItems", 
				(void*)addresses::address1747(), 
				(void*)wrap::processItems<DefaultConv, Derived, Base, types::pure1747>::value
			);
		}

		if constexpr (compare::processLoadedMoveActions<Derived, Base, types::pure1748>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::processLoadedMoveActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::processLoadedMoveActions", 
				(void*)addresses::address1748(), 
				(void*)wrap::processLoadedMoveActions<DefaultConv, Derived, Base, types::pure1748>::value
			);
		}

		if constexpr (compare::recordAction<Derived, Base, types::pure1749>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::recordAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::recordAction", 
				(void*)addresses::address1749(), 
				(void*)wrap::recordAction<DefaultConv, Derived, Base, types::pure1749>::value
			);
		}

		if constexpr (compare::registerActiveObject<Derived, Base, types::pure1750>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::registerActiveObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::registerActiveObject", 
				(void*)addresses::address1750(), 
				(void*)wrap::registerActiveObject<DefaultConv, Derived, Base, types::pure1750>::value
			);
		}

		if constexpr (compare::registerStateObject<Derived, Base, types::pure1751>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::registerStateObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::registerStateObject", 
				(void*)addresses::address1751(), 
				(void*)wrap::registerStateObject<DefaultConv, Derived, Base, types::pure1751>::value
			);
		}

		if constexpr (compare::removeAllObjects<Derived, Base, types::pure1752>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::removeAllObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::removeAllObjects", 
				(void*)addresses::address1752(), 
				(void*)wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure1752>::value
			);
		}

		if constexpr (compare::removeFromGroupOld<Derived, Base, types::pure1753>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::removeFromGroupOld", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::removeFromGroupOld", 
				(void*)addresses::address1753(), 
				(void*)wrap::removeFromGroupOld<DefaultConv, Derived, Base, types::pure1753>::value
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
				(void*)wrap::removeLastCheckpoint<DefaultConv, Derived, Base, types::pure1754>::value
			);
		}

		if constexpr (compare::removePlayer2<Derived, Base, types::pure1755>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::removePlayer2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::removePlayer2", 
				(void*)addresses::address1755(), 
				(void*)wrap::removePlayer2<DefaultConv, Derived, Base, types::pure1755>::value
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
				(void*)wrap::resetLevel<DefaultConv, Derived, Base, types::pure1756>::value
			);
		}

		if constexpr (compare::resume<Derived, Base, types::pure1757>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::resume", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::resume", 
				(void*)addresses::address1757(), 
				(void*)wrap::resume<DefaultConv, Derived, Base, types::pure1757>::value
			);
		}

		if constexpr (compare::resumeAndRestart<Derived, Base, types::pure1758>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::resumeAndRestart", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::resumeAndRestart", 
				(void*)addresses::address1758(), 
				(void*)wrap::resumeAndRestart<DefaultConv, Derived, Base, types::pure1758>::value
			);
		}

		if constexpr (compare::saveRecordAction<Derived, Base, types::pure1759>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::saveRecordAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::saveRecordAction", 
				(void*)addresses::address1759(), 
				(void*)wrap::saveRecordAction<DefaultConv, Derived, Base, types::pure1759>::value
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
				(void*)wrap::scene<DefaultConv, Derived, Base, types::pure1760>::value
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
				(void*)wrap::setupLevelStart<DefaultConv, Derived, Base, types::pure1761>::value
			);
		}

		if constexpr (compare::setupReplay<Derived, Base, types::pure1762>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::setupReplay", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::setupReplay", 
				(void*)addresses::address1762(), 
				(void*)wrap::setupReplay<DefaultConv, Derived, Base, types::pure1762>::value
			);
		}

		if constexpr (compare::shakeCamera<Derived, Base, types::pure1763>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::shakeCamera", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::shakeCamera", 
				(void*)addresses::address1763(), 
				(void*)wrap::shakeCamera<DefaultConv, Derived, Base, types::pure1763>::value
			);
		}

		if constexpr (compare::shouldBlend<Derived, Base, types::pure1764>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::shouldBlend", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::shouldBlend", 
				(void*)addresses::address1764(), 
				(void*)wrap::shouldBlend<DefaultConv, Derived, Base, types::pure1764>::value
			);
		}

		if constexpr (compare::showCompleteEffect<Derived, Base, types::pure1765>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showCompleteEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::showCompleteEffect", 
				(void*)addresses::address1765(), 
				(void*)wrap::showCompleteEffect<DefaultConv, Derived, Base, types::pure1765>::value
			);
		}

		if constexpr (compare::showCompleteText<Derived, Base, types::pure1766>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showCompleteText", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::showCompleteText", 
				(void*)addresses::address1766(), 
				(void*)wrap::showCompleteText<DefaultConv, Derived, Base, types::pure1766>::value
			);
		}

		if constexpr (compare::showEndLayer<Derived, Base, types::pure1767>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showEndLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::showEndLayer", 
				(void*)addresses::address1767(), 
				(void*)wrap::showEndLayer<DefaultConv, Derived, Base, types::pure1767>::value
			);
		}

		if constexpr (compare::showHint<Derived, Base, types::pure1768>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showHint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::showHint", 
				(void*)addresses::address1768(), 
				(void*)wrap::showHint<DefaultConv, Derived, Base, types::pure1768>::value
			);
		}

		if constexpr (compare::showNewBest<Derived, Base, types::pure1769>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showNewBest", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::showNewBest", 
				(void*)addresses::address1769(), 
				(void*)wrap::showNewBest<DefaultConv, Derived, Base, types::pure1769>::value
			);
		}

		if constexpr (compare::showRetryLayer<Derived, Base, types::pure1770>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showRetryLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::showRetryLayer", 
				(void*)addresses::address1770(), 
				(void*)wrap::showRetryLayer<DefaultConv, Derived, Base, types::pure1770>::value
			);
		}

		if constexpr (compare::showTwoPlayerGuide<Derived, Base, types::pure1771>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::showTwoPlayerGuide", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::showTwoPlayerGuide", 
				(void*)addresses::address1771(), 
				(void*)wrap::showTwoPlayerGuide<DefaultConv, Derived, Base, types::pure1771>::value
			);
		}

		if constexpr (compare::sortGroups<Derived, Base, types::pure1772>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::sortGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::sortGroups", 
				(void*)addresses::address1772(), 
				(void*)wrap::sortGroups<DefaultConv, Derived, Base, types::pure1772>::value
			);
		}

		if constexpr (compare::spawnCircle<Derived, Base, types::pure1773>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::spawnCircle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::spawnCircle", 
				(void*)addresses::address1773(), 
				(void*)wrap::spawnCircle<DefaultConv, Derived, Base, types::pure1773>::value
			);
		}

		if constexpr (compare::spawnFirework<Derived, Base, types::pure1774>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::spawnFirework", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::spawnFirework", 
				(void*)addresses::address1774(), 
				(void*)wrap::spawnFirework<DefaultConv, Derived, Base, types::pure1774>::value
			);
		}

		if constexpr (compare::spawnParticle<Derived, Base, types::pure1775>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::spawnParticle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::spawnParticle", 
				(void*)addresses::address1775(), 
				(void*)wrap::spawnParticle<DefaultConv, Derived, Base, types::pure1775>::value
			);
		}

		if constexpr (compare::spawnPlayer2<Derived, Base, types::pure1776>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::spawnPlayer2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::spawnPlayer2", 
				(void*)addresses::address1776(), 
				(void*)wrap::spawnPlayer2<DefaultConv, Derived, Base, types::pure1776>::value
			);
		}

		if constexpr (compare::startGame<Derived, Base, types::pure1777>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::startGame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::startGame", 
				(void*)addresses::address1777(), 
				(void*)wrap::startGame<DefaultConv, Derived, Base, types::pure1777>::value
			);
		}

		if constexpr (compare::startMusic<Derived, Base, types::pure1778>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::startMusic", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::startMusic", 
				(void*)addresses::address1778(), 
				(void*)wrap::startMusic<DefaultConv, Derived, Base, types::pure1778>::value
			);
		}

		if constexpr (compare::startRecording<Derived, Base, types::pure1779>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::startRecording", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::startRecording", 
				(void*)addresses::address1779(), 
				(void*)wrap::startRecording<DefaultConv, Derived, Base, types::pure1779>::value
			);
		}

		if constexpr (compare::startRecordingDelayed<Derived, Base, types::pure1780>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::startRecordingDelayed", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::startRecordingDelayed", 
				(void*)addresses::address1780(), 
				(void*)wrap::startRecordingDelayed<DefaultConv, Derived, Base, types::pure1780>::value
			);
		}

		if constexpr (compare::stopCameraShake<Derived, Base, types::pure1781>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::stopCameraShake", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::stopCameraShake", 
				(void*)addresses::address1781(), 
				(void*)wrap::stopCameraShake<DefaultConv, Derived, Base, types::pure1781>::value
			);
		}

		if constexpr (compare::stopRecording<Derived, Base, types::pure1782>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::stopRecording", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::stopRecording", 
				(void*)addresses::address1782(), 
				(void*)wrap::stopRecording<DefaultConv, Derived, Base, types::pure1782>::value
			);
		}

		if constexpr (compare::storeCheckpoint<Derived, Base, types::pure1783>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::storeCheckpoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::storeCheckpoint", 
				(void*)addresses::address1783(), 
				(void*)wrap::storeCheckpoint<DefaultConv, Derived, Base, types::pure1783>::value
			);
		}

		if constexpr (compare::switchToFlyMode<Derived, Base, types::pure1784>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::switchToFlyMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::switchToFlyMode", 
				(void*)addresses::address1784(), 
				(void*)wrap::switchToFlyMode<DefaultConv, Derived, Base, types::pure1784>::value
			);
		}

		if constexpr (compare::switchToRobotMode<Derived, Base, types::pure1785>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::switchToRobotMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::switchToRobotMode", 
				(void*)addresses::address1785(), 
				(void*)wrap::switchToRobotMode<DefaultConv, Derived, Base, types::pure1785>::value
			);
		}

		if constexpr (compare::switchToRollMode<Derived, Base, types::pure1786>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::switchToRollMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::switchToRollMode", 
				(void*)addresses::address1786(), 
				(void*)wrap::switchToRollMode<DefaultConv, Derived, Base, types::pure1786>::value
			);
		}

		if constexpr (compare::switchToSpiderMode<Derived, Base, types::pure1787>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::switchToSpiderMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::switchToSpiderMode", 
				(void*)addresses::address1787(), 
				(void*)wrap::switchToSpiderMode<DefaultConv, Derived, Base, types::pure1787>::value
			);
		}

		if constexpr (compare::timeForXPos<Derived, Base, types::pure1788>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::timeForXPos", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::timeForXPos", 
				(void*)addresses::address1788(), 
				(void*)wrap::timeForXPos<DefaultConv, Derived, Base, types::pure1788>::value
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
				(void*)wrap::timeForXPos2<DefaultConv, Derived, Base, types::pure1789>::value
			);
		}

		if constexpr (compare::toggleBGEffectVisibility<Derived, Base, types::pure1790>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleBGEffectVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::toggleBGEffectVisibility", 
				(void*)addresses::address1790(), 
				(void*)wrap::toggleBGEffectVisibility<DefaultConv, Derived, Base, types::pure1790>::value
			);
		}

		if constexpr (compare::toggleDualMode<Derived, Base, types::pure1791>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleDualMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::toggleDualMode", 
				(void*)addresses::address1791(), 
				(void*)wrap::toggleDualMode<DefaultConv, Derived, Base, types::pure1791>::value
			);
		}

		if constexpr (compare::toggleFlipped<Derived, Base, types::pure1792>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleFlipped", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::toggleFlipped", 
				(void*)addresses::address1792(), 
				(void*)wrap::toggleFlipped<DefaultConv, Derived, Base, types::pure1792>::value
			);
		}

		if constexpr (compare::toggleGhostEffect<Derived, Base, types::pure1793>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleGhostEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::toggleGhostEffect", 
				(void*)addresses::address1793(), 
				(void*)wrap::toggleGhostEffect<DefaultConv, Derived, Base, types::pure1793>::value
			);
		}

		if constexpr (compare::toggleGlitter<Derived, Base, types::pure1794>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleGlitter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::toggleGlitter", 
				(void*)addresses::address1794(), 
				(void*)wrap::toggleGlitter<DefaultConv, Derived, Base, types::pure1794>::value
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
				(void*)wrap::togglePracticeMode<DefaultConv, Derived, Base, types::pure1795>::value
			);
		}

		if constexpr (compare::toggleProgressbar<Derived, Base, types::pure1796>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::toggleProgressbar", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::toggleProgressbar", 
				(void*)addresses::address1796(), 
				(void*)wrap::toggleProgressbar<DefaultConv, Derived, Base, types::pure1796>::value
			);
		}

		if constexpr (compare::tryStartRecord<Derived, Base, types::pure1797>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::tryStartRecord", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::tryStartRecord", 
				(void*)addresses::address1797(), 
				(void*)wrap::tryStartRecord<DefaultConv, Derived, Base, types::pure1797>::value
			);
		}

		if constexpr (compare::unclaimParticle<Derived, Base, types::pure1798>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::unclaimParticle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::unclaimParticle", 
				(void*)addresses::address1798(), 
				(void*)wrap::unclaimParticle<DefaultConv, Derived, Base, types::pure1798>::value
			);
		}

		if constexpr (compare::unregisterActiveObject<Derived, Base, types::pure1799>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::unregisterActiveObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::unregisterActiveObject", 
				(void*)addresses::address1799(), 
				(void*)wrap::unregisterActiveObject<DefaultConv, Derived, Base, types::pure1799>::value
			);
		}

		if constexpr (compare::unregisterStateObject<Derived, Base, types::pure1800>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::unregisterStateObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::unregisterStateObject", 
				(void*)addresses::address1800(), 
				(void*)wrap::unregisterStateObject<DefaultConv, Derived, Base, types::pure1800>::value
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
				(void*)wrap::update<DefaultConv, Derived, Base, types::pure1801>::value
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
				(void*)wrap::updateAttempts<DefaultConv, Derived, Base, types::pure1802>::value
			);
		}

		if constexpr (compare::updateCamera<Derived, Base, types::pure1803>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateCamera", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateCamera", 
				(void*)addresses::address1803(), 
				(void*)wrap::updateCamera<DefaultConv, Derived, Base, types::pure1803>::value
			);
		}

		if constexpr (compare::updateColor<Derived, Base, types::pure1804>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateColor", 
				(void*)addresses::address1804(), 
				(void*)wrap::updateColor<DefaultConv, Derived, Base, types::pure1804>::value
			);
		}

		if constexpr (compare::updateDualGround<Derived, Base, types::pure1805>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateDualGround", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateDualGround", 
				(void*)addresses::address1805(), 
				(void*)wrap::updateDualGround<DefaultConv, Derived, Base, types::pure1805>::value
			);
		}

		if constexpr (compare::updateEffectPositions<Derived, Base, types::pure1806>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateEffectPositions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateEffectPositions", 
				(void*)addresses::address1806(), 
				(void*)wrap::updateEffectPositions<DefaultConv, Derived, Base, types::pure1806>::value
			);
		}

		if constexpr (compare::updateLevelColors<Derived, Base, types::pure1807>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateLevelColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateLevelColors", 
				(void*)addresses::address1807(), 
				(void*)wrap::updateLevelColors<DefaultConv, Derived, Base, types::pure1807>::value
			);
		}

		if constexpr (compare::updateMoveObjectsLastPosition<Derived, Base, types::pure1808>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateMoveObjectsLastPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateMoveObjectsLastPosition", 
				(void*)addresses::address1808(), 
				(void*)wrap::updateMoveObjectsLastPosition<DefaultConv, Derived, Base, types::pure1808>::value
			);
		}

		if constexpr (compare::updateProgressbar<Derived, Base, types::pure1809>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateProgressbar", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateProgressbar", 
				(void*)addresses::address1809(), 
				(void*)wrap::updateProgressbar<DefaultConv, Derived, Base, types::pure1809>::value
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
				(void*)wrap::updateReplay<DefaultConv, Derived, Base, types::pure1810>::value
			);
		}

		if constexpr (compare::updateTimeMod<Derived, Base, types::pure1811>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::updateTimeMod", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::updateTimeMod", 
				(void*)addresses::address1811(), 
				(void*)wrap::updateTimeMod<DefaultConv, Derived, Base, types::pure1811>::value
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
				(void*)wrap::updateTweenAction<DefaultConv, Derived, Base, types::pure1812>::value
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
				(void*)wrap::updateVisibility<DefaultConv, Derived, Base, types::pure1813>::value
			);
		}

		if constexpr (compare::vfDChk<Derived, Base, types::pure1814>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::vfDChk", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::vfDChk", 
				(void*)addresses::address1814(), 
				(void*)wrap::vfDChk<DefaultConv, Derived, Base, types::pure1814>::value
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
				(void*)wrap::visit<DefaultConv, Derived, Base, types::pure1815>::value
			);
		}

		if constexpr (compare::visitWithColorFlash<Derived, Base, types::pure1816>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::visitWithColorFlash", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::visitWithColorFlash", 
				(void*)addresses::address1816(), 
				(void*)wrap::visitWithColorFlash<DefaultConv, Derived, Base, types::pure1816>::value
			);
		}

		if constexpr (compare::willSwitchToMode<Derived, Base, types::pure1817>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::willSwitchToMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::willSwitchToMode", 
				(void*)addresses::address1817(), 
				(void*)wrap::willSwitchToMode<DefaultConv, Derived, Base, types::pure1817>::value
			);
		}

		if constexpr (compare::xPosForTime<Derived, Base, types::pure1818>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlayLayer::xPosForTime", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlayLayer::xPosForTime", 
				(void*)addresses::address1818(), 
				(void*)wrap::xPosForTime<DefaultConv, Derived, Base, types::pure1818>::value
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
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1819>::value
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

		if constexpr (compare::hideCursor<Derived, Base, types::pure1664>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlatformToolbox::hideCursor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlatformToolbox::hideCursor", 
				(void*)addresses::address1664(), 
				(void*)wrap::hideCursor<DefaultConv, Derived, Base, types::pure1664>::value
			);
		}

		if constexpr (compare::showCursor<Derived, Base, types::pure1665>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlatformToolbox::showCursor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlatformToolbox::showCursor", 
				(void*)addresses::address1665(), 
				(void*)wrap::showCursor<DefaultConv, Derived, Base, types::pure1665>::value
			);
		}

		if constexpr (compare::isControllerConnected<Derived, Base, types::pure1666>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PlatformToolbox::isControllerConnected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PlatformToolbox::isControllerConnected", 
				(void*)addresses::address1666(), 
				(void*)wrap::isControllerConnected<DefaultConv, Derived, Base, types::pure1666>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1660>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OptionsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OptionsLayer::create", 
				(void*)addresses::address1660(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1660>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1655>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OpacityEffectAction::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OpacityEffectAction::create", 
				(void*)addresses::address1655(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1655>::value
			);
		}

		if constexpr (compare::createFromString<Derived, Base, types::pure1656>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OpacityEffectAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OpacityEffectAction::createFromString", 
				(void*)addresses::address1656(), 
				(void*)wrap::createFromString<DefaultConv, Derived, Base, types::pure1656>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1657>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OpacityEffectAction::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OpacityEffectAction::init", 
				(void*)addresses::address1657(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1657>::value
			);
		}

		if constexpr (compare::step<Derived, Base, types::pure1658>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OpacityEffectAction::step", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OpacityEffectAction::step", 
				(void*)addresses::address1658(), 
				(void*)wrap::step<DefaultConv, Derived, Base, types::pure1658>::value
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

		if constexpr (compare::init<Derived, Base, types::pure1651>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ObjectToolbox::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ObjectToolbox::init", 
				(void*)addresses::address1651(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1651>::value
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1652>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ObjectToolbox::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ObjectToolbox::sharedState", 
				(void*)addresses::address1652(), 
				(void*)wrap::sharedState<DefaultConv, Derived, Base, types::pure1652>::value
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

		if constexpr (compare::calculateWithCenter<Derived, Base, types::pure1641>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OBB2D::calculateWithCenter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OBB2D::calculateWithCenter", 
				(void*)addresses::address1641(), 
				(void*)wrap::calculateWithCenter<DefaultConv, Derived, Base, types::pure1641>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1642>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OBB2D::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OBB2D::create", 
				(void*)addresses::address1642(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1642>::value
			);
		}

		if constexpr (compare::getBoundingRect<Derived, Base, types::pure1643>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OBB2D::getBoundingRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OBB2D::getBoundingRect", 
				(void*)addresses::address1643(), 
				(void*)wrap::getBoundingRect<DefaultConv, Derived, Base, types::pure1643>::value
			);
		}

		if constexpr (compare::overlaps<Derived, Base, types::pure1644>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OBB2D::overlaps", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OBB2D::overlaps", 
				(void*)addresses::address1644(), 
				(void*)wrap::overlaps<DefaultConv, Derived, Base, types::pure1644>::value
			);
		}

		if constexpr (compare::overlaps1Way<Derived, Base, types::pure1645>::value) {
			Interface::get()->logInfo(
				"Adding hook at function OBB2D::overlaps1Way", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"OBB2D::overlaps1Way", 
				(void*)addresses::address1645(), 
				(void*)wrap::overlaps1Way<DefaultConv, Derived, Base, types::pure1645>::value
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

		if constexpr (compare::incrementPriorityForSong<Derived, Base, types::pure1636>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::incrementPriorityForSong", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MusicDownloadManager::incrementPriorityForSong", 
				(void*)addresses::address1636(), 
				(void*)wrap::incrementPriorityForSong<DefaultConv, Derived, Base, types::pure1636>::value
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1637>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MusicDownloadManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MusicDownloadManager::sharedState", 
				(void*)addresses::address1637(), 
				(void*)wrap::sharedState<DefaultConv, Derived, Base, types::pure1637>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1634>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MoreVideoOptionsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MoreVideoOptionsLayer::create", 
				(void*)addresses::address1634(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1634>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1635>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MoreVideoOptionsLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MoreVideoOptionsLayer::init", 
				(void*)addresses::address1635(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1635>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1621>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::destructor", 
				(void*)addresses::address1621(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1621>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1622>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::init", 
				(void*)addresses::address1622(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1622>::value
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
				(void*)wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure1623>::value
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
				(void*)wrap::keyDown<DefaultConv, Derived, Base, types::pure1624>::value
			);
		}

		if constexpr (compare::googlePlaySignedIn<Derived, Base, types::pure1625>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::googlePlaySignedIn", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::googlePlaySignedIn", 
				(void*)addresses::address1625(), 
				(void*)wrap::googlePlaySignedIn<DefaultConv, Derived, Base, types::pure1625>::value
			);
		}

		if constexpr (compare::FLAlert_Clicked<Derived, Base, types::pure1626>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::FLAlert_Clicked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::FLAlert_Clicked", 
				(void*)addresses::address1626(), 
				(void*)wrap::FLAlert_Clicked<DefaultConv, Derived, Base, types::pure1626>::value
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
				(void*)wrap::onMoreGames<DefaultConv, Derived, Base, types::pure1627>::value
			);
		}

		if constexpr (compare::onQuit<Derived, Base, types::pure1629>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuLayer::onQuit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuLayer::onQuit", 
				(void*)addresses::address1629(), 
				(void*)wrap::onQuit<DefaultConv, Derived, Base, types::pure1629>::value
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
				(void*)wrap::scene<DefaultConv, Derived, Base, types::pure1630>::value
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

		if constexpr (compare::resetPlayer<Derived, Base, types::pure1619>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuGameLayer::resetPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuGameLayer::resetPlayer", 
				(void*)addresses::address1619(), 
				(void*)wrap::resetPlayer<DefaultConv, Derived, Base, types::pure1619>::value
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1620>::value) {
			Interface::get()->logInfo(
				"Adding hook at function MenuGameLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"MenuGameLayer::update", 
				(void*)addresses::address1620(), 
				(void*)wrap::update<DefaultConv, Derived, Base, types::pure1620>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure28>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure29>::value
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
				(void*)wrap::getAlphaThreshold<DefaultConv, Derived, Base, types::pure30>::value
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
				(void*)wrap::getStencil<DefaultConv, Derived, Base, types::pure31>::value
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
				(void*)wrap::isInverted<DefaultConv, Derived, Base, types::pure32>::value
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
				(void*)wrap::onEnter<DefaultConv, Derived, Base, types::pure33>::value
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
				(void*)wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure34>::value
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
				(void*)wrap::onExit<DefaultConv, Derived, Base, types::pure35>::value
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
				(void*)wrap::onExitTransitionDidStart<DefaultConv, Derived, Base, types::pure36>::value
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
				(void*)wrap::setAlphaThreshold<DefaultConv, Derived, Base, types::pure37>::value
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
				(void*)wrap::setInverted<DefaultConv, Derived, Base, types::pure38>::value
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
				(void*)wrap::setStencil<DefaultConv, Derived, Base, types::pure39>::value
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
				(void*)wrap::visit<DefaultConv, Derived, Base, types::pure40>::value
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

		if constexpr (compare::accountStatusChanged<Derived, Base, types::pure1309>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::accountStatusChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::accountStatusChanged", 
				(void*)addresses::address1309(), 
				(void*)wrap::accountStatusChanged<DefaultConv, Derived, Base, types::pure1309>::value
			);
		}

		if constexpr (compare::colorForIdx<Derived, Base, types::pure1310>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::colorForIdx", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::colorForIdx", 
				(void*)addresses::address1310(), 
				(void*)wrap::colorForIdx<DefaultConv, Derived, Base, types::pure1310>::value
			);
		}

		if constexpr (compare::didExitPlayscene<Derived, Base, types::pure1311>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::didExitPlayscene", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::didExitPlayscene", 
				(void*)addresses::address1311(), 
				(void*)wrap::didExitPlayscene<DefaultConv, Derived, Base, types::pure1311>::value
			);
		}

		if constexpr (compare::doQuickSave<Derived, Base, types::pure1312>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::doQuickSave", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::doQuickSave", 
				(void*)addresses::address1312(), 
				(void*)wrap::doQuickSave<DefaultConv, Derived, Base, types::pure1312>::value
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
				(void*)wrap::fadeInMusic<DefaultConv, Derived, Base, types::pure1313>::value
			);
		}

		if constexpr (compare::getBGTexture<Derived, Base, types::pure1314>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getBGTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::getBGTexture", 
				(void*)addresses::address1314(), 
				(void*)wrap::getBGTexture<DefaultConv, Derived, Base, types::pure1314>::value
			);
		}

		if constexpr (compare::getFontFile<Derived, Base, types::pure1315>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getFontFile", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::getFontFile", 
				(void*)addresses::address1315(), 
				(void*)wrap::getFontFile<DefaultConv, Derived, Base, types::pure1315>::value
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
				(void*)wrap::getGameVariable<DefaultConv, Derived, Base, types::pure1316>::value
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
				(void*)wrap::getIntGameVariable<DefaultConv, Derived, Base, types::pure1317>::value
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
				(void*)wrap::getUGV<DefaultConv, Derived, Base, types::pure1318>::value
			);
		}

		if constexpr (compare::loadDeathEffect<Derived, Base, types::pure1319>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::loadDeathEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::loadDeathEffect", 
				(void*)addresses::address1319(), 
				(void*)wrap::loadDeathEffect<DefaultConv, Derived, Base, types::pure1319>::value
			);
		}

		if constexpr (compare::loadFont<Derived, Base, types::pure1320>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::loadFont", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::loadFont", 
				(void*)addresses::address1320(), 
				(void*)wrap::loadFont<DefaultConv, Derived, Base, types::pure1320>::value
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
				(void*)wrap::reloadAll<DefaultConv, Derived, Base, types::pure1321>::value
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
				(void*)wrap::reloadAllStep2<DefaultConv, Derived, Base, types::pure1322>::value
			);
		}

		if constexpr (compare::reloadAllStep5<Derived, Base, types::pure1323>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reloadAllStep5", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::reloadAllStep5", 
				(void*)addresses::address1323(), 
				(void*)wrap::reloadAllStep5<DefaultConv, Derived, Base, types::pure1323>::value
			);
		}

		if constexpr (compare::reportPercentageForLevel<Derived, Base, types::pure1324>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reportPercentageForLevel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::reportPercentageForLevel", 
				(void*)addresses::address1324(), 
				(void*)wrap::reportPercentageForLevel<DefaultConv, Derived, Base, types::pure1324>::value
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
				(void*)wrap::setGameVariable<DefaultConv, Derived, Base, types::pure1325>::value
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
				(void*)wrap::setIntGameVariable<DefaultConv, Derived, Base, types::pure1326>::value
			);
		}

		if constexpr (compare::setUGV<Derived, Base, types::pure1327>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::setUGV", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::setUGV", 
				(void*)addresses::address1327(), 
				(void*)wrap::setUGV<DefaultConv, Derived, Base, types::pure1327>::value
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
				(void*)wrap::sharedState<DefaultConv, Derived, Base, types::pure1328>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1329>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::destructor", 
				(void*)addresses::address1329(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1329>::value
			);
		}

		if constexpr (compare::getGTexture<Derived, Base, types::pure1330>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::getGTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::getGTexture", 
				(void*)addresses::address1330(), 
				(void*)wrap::getGTexture<DefaultConv, Derived, Base, types::pure1330>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1331>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::init", 
				(void*)addresses::address1331(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1331>::value
			);
		}

		if constexpr (compare::reportAchievementWithID<Derived, Base, types::pure1332>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::reportAchievementWithID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::reportAchievementWithID", 
				(void*)addresses::address1332(), 
				(void*)wrap::reportAchievementWithID<DefaultConv, Derived, Base, types::pure1332>::value
			);
		}

		if constexpr (compare::resolutionForKey<Derived, Base, types::pure1333>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::resolutionForKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::resolutionForKey", 
				(void*)addresses::address1333(), 
				(void*)wrap::resolutionForKey<DefaultConv, Derived, Base, types::pure1333>::value
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1334>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameManager::update", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameManager::update", 
				(void*)addresses::address1334(), 
				(void*)wrap::update<DefaultConv, Derived, Base, types::pure1334>::value
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

		if constexpr (compare::init<Derived, Base, types::pure1497>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GaragePage::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GaragePage::init", 
				(void*)addresses::address1497(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1497>::value
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
				(void*)wrap::attachWithIME<DefaultConv, Derived, Base, types::pure107>::value
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
				(void*)wrap::detachWithIME<DefaultConv, Derived, Base, types::pure108>::value
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

		if constexpr (compare::disableMetering<Derived, Base, types::pure1467>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::disableMetering", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameSoundManager::disableMetering", 
				(void*)addresses::address1467(), 
				(void*)wrap::disableMetering<DefaultConv, Derived, Base, types::pure1467>::value
			);
		}

		if constexpr (compare::enableMetering<Derived, Base, types::pure1468>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::enableMetering", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameSoundManager::enableMetering", 
				(void*)addresses::address1468(), 
				(void*)wrap::enableMetering<DefaultConv, Derived, Base, types::pure1468>::value
			);
		}

		if constexpr (compare::getMeteringValue<Derived, Base, types::pure1469>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::getMeteringValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameSoundManager::getMeteringValue", 
				(void*)addresses::address1469(), 
				(void*)wrap::getMeteringValue<DefaultConv, Derived, Base, types::pure1469>::value
			);
		}

		if constexpr (compare::playBackgroundMusic<Derived, Base, types::pure1470>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::playBackgroundMusic", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameSoundManager::playBackgroundMusic", 
				(void*)addresses::address1470(), 
				(void*)wrap::playBackgroundMusic<DefaultConv, Derived, Base, types::pure1470>::value
			);
		}

		if constexpr (compare::playEffect<Derived, Base, types::pure1471>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::playEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameSoundManager::playEffect", 
				(void*)addresses::address1471(), 
				(void*)wrap::playEffect<DefaultConv, Derived, Base, types::pure1471>::value
			);
		}

		if constexpr (compare::sharedManager<Derived, Base, types::pure1472>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::sharedManager", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameSoundManager::sharedManager", 
				(void*)addresses::address1472(), 
				(void*)wrap::sharedManager<DefaultConv, Derived, Base, types::pure1472>::value
			);
		}

		if constexpr (compare::stopBackgroundMusic<Derived, Base, types::pure1473>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::stopBackgroundMusic", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameSoundManager::stopBackgroundMusic", 
				(void*)addresses::address1473(), 
				(void*)wrap::stopBackgroundMusic<DefaultConv, Derived, Base, types::pure1473>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1474>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameSoundManager::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameSoundManager::destructor", 
				(void*)addresses::address1474(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1474>::value
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

		if constexpr (compare::isEqual<Derived, Base, types::pure496>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCString::isEqual", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCString::isEqual", 
				(void*)addresses::address496(), 
				(void*)wrap::isEqual<DefaultConv, Derived, Base, types::pure496>::value
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
				(void*)wrap::acceptVisitor<DefaultConv, Derived, Base, types::pure497>::value
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
				(void*)wrap::copyWithZone<DefaultConv, Derived, Base, types::pure498>::value
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
				(void*)wrap::boolValue<DefaultConv, Derived, Base, types::pure499>::value
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
				(void*)wrap::doubleValue<DefaultConv, Derived, Base, types::pure500>::value
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
				(void*)wrap::floatValue<DefaultConv, Derived, Base, types::pure501>::value
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
				(void*)wrap::getCString<DefaultConv, Derived, Base, types::pure502>::value
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
				(void*)wrap::intValue<DefaultConv, Derived, Base, types::pure503>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1464>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObjectCopy::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObjectCopy::destructor", 
				(void*)addresses::address1464(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1464>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1465>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObjectCopy::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObjectCopy::create", 
				(void*)addresses::address1465(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1465>::value
			);
		}

		if constexpr (compare::resetObject<Derived, Base, types::pure1466>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObjectCopy::resetObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObjectCopy::resetObject", 
				(void*)addresses::address1466(), 
				(void*)wrap::resetObject<DefaultConv, Derived, Base, types::pure1466>::value
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

		if constexpr (compare::init<Derived, Base, types::pure839>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomSongLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomSongLayer::init", 
				(void*)addresses::address839(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure839>::value
			);
		}

		if constexpr (compare::onArtists<Derived, Base, types::pure840>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomSongLayer::onArtists", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomSongLayer::onArtists", 
				(void*)addresses::address840(), 
				(void*)wrap::onArtists<DefaultConv, Derived, Base, types::pure840>::value
			);
		}

		if constexpr (compare::onSongBrowser<Derived, Base, types::pure841>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomSongLayer::onSongBrowser", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomSongLayer::onSongBrowser", 
				(void*)addresses::address841(), 
				(void*)wrap::onSongBrowser<DefaultConv, Derived, Base, types::pure841>::value
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
				(void*)wrap::createNewLevel<DefaultConv, Derived, Base, types::pure1270>::value
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
				(void*)wrap::sharedState<DefaultConv, Derived, Base, types::pure1271>::value
			);
		}

		if constexpr (compare::getPageInfo<Derived, Base, types::pure1272>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::getPageInfo", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameLevelManager::getPageInfo", 
				(void*)addresses::address1272(), 
				(void*)wrap::getPageInfo<DefaultConv, Derived, Base, types::pure1272>::value
			);
		}

		if constexpr (compare::getStoredOnlineLevels<Derived, Base, types::pure1273>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::getStoredOnlineLevels", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameLevelManager::getStoredOnlineLevels", 
				(void*)addresses::address1273(), 
				(void*)wrap::getStoredOnlineLevels<DefaultConv, Derived, Base, types::pure1273>::value
			);
		}

		if constexpr (compare::getTopArtists<Derived, Base, types::pure1274>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::getTopArtists", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameLevelManager::getTopArtists", 
				(void*)addresses::address1274(), 
				(void*)wrap::getTopArtists<DefaultConv, Derived, Base, types::pure1274>::value
			);
		}

		if constexpr (compare::getTopArtistsKey<Derived, Base, types::pure1275>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::getTopArtistsKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameLevelManager::getTopArtistsKey", 
				(void*)addresses::address1275(), 
				(void*)wrap::getTopArtistsKey<DefaultConv, Derived, Base, types::pure1275>::value
			);
		}

		if constexpr (compare::makeTimeStamp<Derived, Base, types::pure1276>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameLevelManager::makeTimeStamp", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameLevelManager::makeTimeStamp", 
				(void*)addresses::address1276(), 
				(void*)wrap::makeTimeStamp<DefaultConv, Derived, Base, types::pure1276>::value
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

		if constexpr (compare::save<Derived, Base, types::pure1267>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GManager::save", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GManager::save", 
				(void*)addresses::address1267(), 
				(void*)wrap::save<DefaultConv, Derived, Base, types::pure1267>::value
			);
		}

		if constexpr (compare::saveData<Derived, Base, types::pure1268>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GManager::saveData", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GManager::saveData", 
				(void*)addresses::address1268(), 
				(void*)wrap::saveData<DefaultConv, Derived, Base, types::pure1268>::value
			);
		}

		if constexpr (compare::saveGMTo<Derived, Base, types::pure1269>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GManager::saveGMTo", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GManager::saveGMTo", 
				(void*)addresses::address1269(), 
				(void*)wrap::saveGMTo<DefaultConv, Derived, Base, types::pure1269>::value
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

		if constexpr (compare::create<Derived, Base, types::pure735>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMenuItemToggler::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMenuItemToggler::create", 
				(void*)addresses::address735(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure735>::value
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
				(void*)wrap::setSizeMult<DefaultConv, Derived, Base, types::pure736>::value
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
				(void*)wrap::toggle<DefaultConv, Derived, Base, types::pure737>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure738>::value
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
				(void*)wrap::activate<DefaultConv, Derived, Base, types::pure739>::value
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
				(void*)wrap::selected<DefaultConv, Derived, Base, types::pure740>::value
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
				(void*)wrap::unselected<DefaultConv, Derived, Base, types::pure741>::value
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
				(void*)wrap::setEnabled<DefaultConv, Derived, Base, types::pure742>::value
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

		if constexpr (compare::onPlayerColor1<Derived, Base, types::pure1212>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onPlayerColor1", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onPlayerColor1", 
				(void*)addresses::address1212(), 
				(void*)wrap::onPlayerColor1<DefaultConv, Derived, Base, types::pure1212>::value
			);
		}

		if constexpr (compare::onPlayerColor2<Derived, Base, types::pure1213>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGarageLayer::onPlayerColor2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGarageLayer::onPlayerColor2", 
				(void*)addresses::address1213(), 
				(void*)wrap::onPlayerColor2<DefaultConv, Derived, Base, types::pure1213>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1215>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1199>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::destructor", 
				(void*)addresses::address1199(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1199>::value
			);
		}

		if constexpr (compare::encodeWithCoder<Derived, Base, types::pure1200>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::encodeWithCoder", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::encodeWithCoder", 
				(void*)addresses::address1200(), 
				(void*)wrap::encodeWithCoder<DefaultConv, Derived, Base, types::pure1200>::value
			);
		}

		if constexpr (compare::canEncode<Derived, Base, types::pure1201>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::canEncode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::canEncode", 
				(void*)addresses::address1201(), 
				(void*)wrap::canEncode<DefaultConv, Derived, Base, types::pure1201>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1202>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::init", 
				(void*)addresses::address1202(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1202>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1203>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::create", 
				(void*)addresses::address1203(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1203>::value
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
				(void*)wrap::getAudioFileName<DefaultConv, Derived, Base, types::pure1204>::value
			);
		}

		if constexpr (compare::getCoinKey<Derived, Base, types::pure1205>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getCoinKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::getCoinKey", 
				(void*)addresses::address1205(), 
				(void*)wrap::getCoinKey<DefaultConv, Derived, Base, types::pure1205>::value
			);
		}

		if constexpr (compare::getLengthKey<Derived, Base, types::pure1206>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getLengthKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::getLengthKey", 
				(void*)addresses::address1206(), 
				(void*)wrap::getLengthKey<DefaultConv, Derived, Base, types::pure1206>::value
			);
		}

		if constexpr (compare::getNormalPercent<Derived, Base, types::pure1207>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::getNormalPercent", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::getNormalPercent", 
				(void*)addresses::address1207(), 
				(void*)wrap::getNormalPercent<DefaultConv, Derived, Base, types::pure1207>::value
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
				(void*)wrap::levelWasAltered<DefaultConv, Derived, Base, types::pure1208>::value
			);
		}

		if constexpr (compare::savePercentage<Derived, Base, types::pure1209>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJGameLevel::savePercentage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJGameLevel::savePercentage", 
				(void*)addresses::address1209(), 
				(void*)wrap::savePercentage<DefaultConv, Derived, Base, types::pure1209>::value
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
				(void*)wrap::dataLoaded<DefaultConv, Derived, Base, types::pure1210>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2065>::value
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
				(void*)wrap::reloadData<DefaultConv, Derived, Base, types::pure2066>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2093>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TopArtistsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TopArtistsLayer::create", 
				(void*)addresses::address2093(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2093>::value
			);
		}

		if constexpr (compare::setupLeaderboard<Derived, Base, types::pure2094>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TopArtistsLayer::setupLeaderboard", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TopArtistsLayer::setupLeaderboard", 
				(void*)addresses::address2094(), 
				(void*)wrap::setupLeaderboard<DefaultConv, Derived, Base, types::pure2094>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure2095>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TopArtistsLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TopArtistsLayer::init", 
				(void*)addresses::address2095(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure2095>::value
			);
		}

		if constexpr (compare::loadPage<Derived, Base, types::pure2096>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TopArtistsLayer::loadPage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TopArtistsLayer::loadPage", 
				(void*)addresses::address2096(), 
				(void*)wrap::loadPage<DefaultConv, Derived, Base, types::pure2096>::value
			);
		}

		if constexpr (compare::setupPageInfo<Derived, Base, types::pure2097>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TopArtistsLayer::setupPageInfo", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TopArtistsLayer::setupPageInfo", 
				(void*)addresses::address2097(), 
				(void*)wrap::setupPageInfo<DefaultConv, Derived, Base, types::pure2097>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure538>::value
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

		if constexpr (compare::enterLayer<Derived, Base, types::pure1095>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJDropDownLayer::enterLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJDropDownLayer::enterLayer", 
				(void*)addresses::address1095(), 
				(void*)wrap::enterLayer<DefaultConv, Derived, Base, types::pure1095>::value
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
				(void*)wrap::exitLayer<DefaultConv, Derived, Base, types::pure1096>::value
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
				(void*)wrap::showLayer<DefaultConv, Derived, Base, types::pure1097>::value
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
				(void*)wrap::hideLayer<DefaultConv, Derived, Base, types::pure1098>::value
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
				(void*)wrap::layerVisible<DefaultConv, Derived, Base, types::pure1099>::value
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
				(void*)wrap::layerHidden<DefaultConv, Derived, Base, types::pure1100>::value
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
				(void*)wrap::disableUI<DefaultConv, Derived, Base, types::pure1102>::value
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
				(void*)wrap::enableUI<DefaultConv, Derived, Base, types::pure1103>::value
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
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure1109>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1110>::value
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
				(void*)wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure1111>::value
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
				(void*)wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure1112>::value
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

		if constexpr (compare::create<Derived, Base, types::pure985>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EndPortalObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EndPortalObject::create", 
				(void*)addresses::address985(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure985>::value
			);
		}

		if constexpr (compare::updateColors<Derived, Base, types::pure986>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EndPortalObject::updateColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EndPortalObject::updateColors", 
				(void*)addresses::address986(), 
				(void*)wrap::updateColors<DefaultConv, Derived, Base, types::pure986>::value
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

		if constexpr (compare::objectsCollided<Derived, Base, types::pure1020>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::objectsCollided", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::objectsCollided", 
				(void*)addresses::address1020(), 
				(void*)wrap::objectsCollided<DefaultConv, Derived, Base, types::pure1020>::value
			);
		}

		if constexpr (compare::createMoveCommand<Derived, Base, types::pure1021>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::createMoveCommand", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::createMoveCommand", 
				(void*)addresses::address1021(), 
				(void*)wrap::createMoveCommand<DefaultConv, Derived, Base, types::pure1021>::value
			);
		}

		if constexpr (compare::updateColor<Derived, Base, types::pure1022>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::updateColor", 
				(void*)addresses::address1022(), 
				(void*)wrap::updateColor<DefaultConv, Derived, Base, types::pure1022>::value
			);
		}

		if constexpr (compare::flipGravity<Derived, Base, types::pure1023>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::flipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::flipGravity", 
				(void*)addresses::address1023(), 
				(void*)wrap::flipGravity<DefaultConv, Derived, Base, types::pure1023>::value
			);
		}

		if constexpr (compare::calculateColorValues<Derived, Base, types::pure1024>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::calculateColorValues", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::calculateColorValues", 
				(void*)addresses::address1024(), 
				(void*)wrap::calculateColorValues<DefaultConv, Derived, Base, types::pure1024>::value
			);
		}

		if constexpr (compare::toggleGroupTriggered<Derived, Base, types::pure1025>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::toggleGroupTriggered", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::toggleGroupTriggered", 
				(void*)addresses::address1025(), 
				(void*)wrap::toggleGroupTriggered<DefaultConv, Derived, Base, types::pure1025>::value
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
				(void*)wrap::spawnGroup<DefaultConv, Derived, Base, types::pure1026>::value
			);
		}

		if constexpr (compare::addToSection<Derived, Base, types::pure1027>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::addToSection", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::addToSection", 
				(void*)addresses::address1027(), 
				(void*)wrap::addToSection<DefaultConv, Derived, Base, types::pure1027>::value
			);
		}

		if constexpr (compare::addToGroup<Derived, Base, types::pure1028>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::addToGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::addToGroup", 
				(void*)addresses::address1028(), 
				(void*)wrap::addToGroup<DefaultConv, Derived, Base, types::pure1028>::value
			);
		}

		if constexpr (compare::removeFromGroup<Derived, Base, types::pure1029>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::removeFromGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::removeFromGroup", 
				(void*)addresses::address1029(), 
				(void*)wrap::removeFromGroup<DefaultConv, Derived, Base, types::pure1029>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1030>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::init", 
				(void*)addresses::address1030(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1030>::value
			);
		}

		if constexpr (compare::addObjectCounter<Derived, Base, types::pure1031>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::addObjectCounter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::addObjectCounter", 
				(void*)addresses::address1031(), 
				(void*)wrap::addObjectCounter<DefaultConv, Derived, Base, types::pure1031>::value
			);
		}

		if constexpr (compare::addToGroups<Derived, Base, types::pure1032>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::addToGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::addToGroups", 
				(void*)addresses::address1032(), 
				(void*)wrap::addToGroups<DefaultConv, Derived, Base, types::pure1032>::value
			);
		}

		if constexpr (compare::atlasValue<Derived, Base, types::pure1033>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::atlasValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::atlasValue", 
				(void*)addresses::address1033(), 
				(void*)wrap::atlasValue<DefaultConv, Derived, Base, types::pure1033>::value
			);
		}

		if constexpr (compare::bumpPlayer<Derived, Base, types::pure1034>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::bumpPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::bumpPlayer", 
				(void*)addresses::address1034(), 
				(void*)wrap::bumpPlayer<DefaultConv, Derived, Base, types::pure1034>::value
			);
		}

		if constexpr (compare::calculateOpacityValues<Derived, Base, types::pure1035>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::calculateOpacityValues", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::calculateOpacityValues", 
				(void*)addresses::address1035(), 
				(void*)wrap::calculateOpacityValues<DefaultConv, Derived, Base, types::pure1035>::value
			);
		}

		if constexpr (compare::checkSpawnObjects<Derived, Base, types::pure1036>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::checkSpawnObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::checkSpawnObjects", 
				(void*)addresses::address1036(), 
				(void*)wrap::checkSpawnObjects<DefaultConv, Derived, Base, types::pure1036>::value
			);
		}

		if constexpr (compare::collectItem<Derived, Base, types::pure1037>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::collectItem", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::collectItem", 
				(void*)addresses::address1037(), 
				(void*)wrap::collectItem<DefaultConv, Derived, Base, types::pure1037>::value
			);
		}

		if constexpr (compare::collectedObject<Derived, Base, types::pure1038>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::collectedObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::collectedObject", 
				(void*)addresses::address1038(), 
				(void*)wrap::collectedObject<DefaultConv, Derived, Base, types::pure1038>::value
			);
		}

		if constexpr (compare::createTextLayers<Derived, Base, types::pure1039>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::createTextLayers", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::createTextLayers", 
				(void*)addresses::address1039(), 
				(void*)wrap::createTextLayers<DefaultConv, Derived, Base, types::pure1039>::value
			);
		}

		if constexpr (compare::damagingObjectsInRect<Derived, Base, types::pure1040>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::damagingObjectsInRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::damagingObjectsInRect", 
				(void*)addresses::address1040(), 
				(void*)wrap::damagingObjectsInRect<DefaultConv, Derived, Base, types::pure1040>::value
			);
		}

		if constexpr (compare::enableHighCapacityMode<Derived, Base, types::pure1041>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::enableHighCapacityMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::enableHighCapacityMode", 
				(void*)addresses::address1041(), 
				(void*)wrap::enableHighCapacityMode<DefaultConv, Derived, Base, types::pure1041>::value
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
				(void*)wrap::getCapacityString<DefaultConv, Derived, Base, types::pure1042>::value
			);
		}

		if constexpr (compare::getGroundHeightForMode<Derived, Base, types::pure1043>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getGroundHeightForMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::getGroundHeightForMode", 
				(void*)addresses::address1043(), 
				(void*)wrap::getGroundHeightForMode<DefaultConv, Derived, Base, types::pure1043>::value
			);
		}

		if constexpr (compare::getGroup<Derived, Base, types::pure1044>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::getGroup", 
				(void*)addresses::address1044(), 
				(void*)wrap::getGroup<DefaultConv, Derived, Base, types::pure1044>::value
			);
		}

		if constexpr (compare::getMoveDeltaForObjects<Derived, Base, types::pure1045>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getMoveDeltaForObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::getMoveDeltaForObjects", 
				(void*)addresses::address1045(), 
				(void*)wrap::getMoveDeltaForObjects<DefaultConv, Derived, Base, types::pure1045>::value
			);
		}

		if constexpr (compare::getOptimizedGroup<Derived, Base, types::pure1046>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getOptimizedGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::getOptimizedGroup", 
				(void*)addresses::address1046(), 
				(void*)wrap::getOptimizedGroup<DefaultConv, Derived, Base, types::pure1046>::value
			);
		}

		if constexpr (compare::getStaticGroup<Derived, Base, types::pure1047>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::getStaticGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::getStaticGroup", 
				(void*)addresses::address1047(), 
				(void*)wrap::getStaticGroup<DefaultConv, Derived, Base, types::pure1047>::value
			);
		}

		if constexpr (compare::isGroupDisabledForObject<Derived, Base, types::pure1048>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::isGroupDisabledForObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::isGroupDisabledForObject", 
				(void*)addresses::address1048(), 
				(void*)wrap::isGroupDisabledForObject<DefaultConv, Derived, Base, types::pure1048>::value
			);
		}

		if constexpr (compare::isGroupDisabledForObjectFull<Derived, Base, types::pure1049>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::isGroupDisabledForObjectFull", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::isGroupDisabledForObjectFull", 
				(void*)addresses::address1049(), 
				(void*)wrap::isGroupDisabledForObjectFull<DefaultConv, Derived, Base, types::pure1049>::value
			);
		}

		if constexpr (compare::loadUpToPosition<Derived, Base, types::pure1050>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::loadUpToPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::loadUpToPosition", 
				(void*)addresses::address1050(), 
				(void*)wrap::loadUpToPosition<DefaultConv, Derived, Base, types::pure1050>::value
			);
		}

		if constexpr (compare::objectIntersectsCircle<Derived, Base, types::pure1051>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::objectIntersectsCircle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::objectIntersectsCircle", 
				(void*)addresses::address1051(), 
				(void*)wrap::objectIntersectsCircle<DefaultConv, Derived, Base, types::pure1051>::value
			);
		}

		if constexpr (compare::objectTriggered<Derived, Base, types::pure1052>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::objectTriggered", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::objectTriggered", 
				(void*)addresses::address1052(), 
				(void*)wrap::objectTriggered<DefaultConv, Derived, Base, types::pure1052>::value
			);
		}

		if constexpr (compare::optimizeMoveGroups<Derived, Base, types::pure1053>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::optimizeMoveGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::optimizeMoveGroups", 
				(void*)addresses::address1053(), 
				(void*)wrap::optimizeMoveGroups<DefaultConv, Derived, Base, types::pure1053>::value
			);
		}

		if constexpr (compare::parentForZLayer<Derived, Base, types::pure1054>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::parentForZLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::parentForZLayer", 
				(void*)addresses::address1054(), 
				(void*)wrap::parentForZLayer<DefaultConv, Derived, Base, types::pure1054>::value
			);
		}

		if constexpr (compare::playerTouchedRing<Derived, Base, types::pure1055>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::playerTouchedRing", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::playerTouchedRing", 
				(void*)addresses::address1055(), 
				(void*)wrap::playerTouchedRing<DefaultConv, Derived, Base, types::pure1055>::value
			);
		}

		if constexpr (compare::processColorObject<Derived, Base, types::pure1056>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processColorObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::processColorObject", 
				(void*)addresses::address1056(), 
				(void*)wrap::processColorObject<DefaultConv, Derived, Base, types::pure1056>::value
			);
		}

		if constexpr (compare::processFollowActions<Derived, Base, types::pure1057>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processFollowActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::processFollowActions", 
				(void*)addresses::address1057(), 
				(void*)wrap::processFollowActions<DefaultConv, Derived, Base, types::pure1057>::value
			);
		}

		if constexpr (compare::processMoveActions<Derived, Base, types::pure1058>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processMoveActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::processMoveActions", 
				(void*)addresses::address1058(), 
				(void*)wrap::processMoveActions<DefaultConv, Derived, Base, types::pure1058>::value
			);
		}

		if constexpr (compare::processMoveActionsStep<Derived, Base, types::pure1059>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processMoveActionsStep", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::processMoveActionsStep", 
				(void*)addresses::address1059(), 
				(void*)wrap::processMoveActionsStep<DefaultConv, Derived, Base, types::pure1059>::value
			);
		}

		if constexpr (compare::processOpacityObject<Derived, Base, types::pure1060>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processOpacityObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::processOpacityObject", 
				(void*)addresses::address1060(), 
				(void*)wrap::processOpacityObject<DefaultConv, Derived, Base, types::pure1060>::value
			);
		}

		if constexpr (compare::processPlayerFollowActions<Derived, Base, types::pure1061>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processPlayerFollowActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::processPlayerFollowActions", 
				(void*)addresses::address1061(), 
				(void*)wrap::processPlayerFollowActions<DefaultConv, Derived, Base, types::pure1061>::value
			);
		}

		if constexpr (compare::processRotationActions<Derived, Base, types::pure1062>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::processRotationActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::processRotationActions", 
				(void*)addresses::address1062(), 
				(void*)wrap::processRotationActions<DefaultConv, Derived, Base, types::pure1062>::value
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
				(void*)wrap::pushButton<DefaultConv, Derived, Base, types::pure1063>::value
			);
		}

		if constexpr (compare::rectIntersectsCircle<Derived, Base, types::pure1064>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::rectIntersectsCircle", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::rectIntersectsCircle", 
				(void*)addresses::address1064(), 
				(void*)wrap::rectIntersectsCircle<DefaultConv, Derived, Base, types::pure1064>::value
			);
		}

		if constexpr (compare::refreshCounterLabels<Derived, Base, types::pure1065>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::refreshCounterLabels", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::refreshCounterLabels", 
				(void*)addresses::address1065(), 
				(void*)wrap::refreshCounterLabels<DefaultConv, Derived, Base, types::pure1065>::value
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
				(void*)wrap::releaseButton<DefaultConv, Derived, Base, types::pure1066>::value
			);
		}

		if constexpr (compare::removeFromGroups<Derived, Base, types::pure1067>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::removeFromGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::removeFromGroups", 
				(void*)addresses::address1067(), 
				(void*)wrap::removeFromGroups<DefaultConv, Derived, Base, types::pure1067>::value
			);
		}

		if constexpr (compare::removeObjectFromSection<Derived, Base, types::pure1068>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::removeObjectFromSection", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::removeObjectFromSection", 
				(void*)addresses::address1068(), 
				(void*)wrap::removeObjectFromSection<DefaultConv, Derived, Base, types::pure1068>::value
			);
		}

		if constexpr (compare::reorderObjectSection<Derived, Base, types::pure1069>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::reorderObjectSection", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::reorderObjectSection", 
				(void*)addresses::address1069(), 
				(void*)wrap::reorderObjectSection<DefaultConv, Derived, Base, types::pure1069>::value
			);
		}

		if constexpr (compare::resetGroupCounters<Derived, Base, types::pure1070>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::resetGroupCounters", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::resetGroupCounters", 
				(void*)addresses::address1070(), 
				(void*)wrap::resetGroupCounters<DefaultConv, Derived, Base, types::pure1070>::value
			);
		}

		if constexpr (compare::resetMoveOptimizedValue<Derived, Base, types::pure1071>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::resetMoveOptimizedValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::resetMoveOptimizedValue", 
				(void*)addresses::address1071(), 
				(void*)wrap::resetMoveOptimizedValue<DefaultConv, Derived, Base, types::pure1071>::value
			);
		}

		if constexpr (compare::sectionForPos<Derived, Base, types::pure1072>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::sectionForPos", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::sectionForPos", 
				(void*)addresses::address1072(), 
				(void*)wrap::sectionForPos<DefaultConv, Derived, Base, types::pure1072>::value
			);
		}

		if constexpr (compare::setupLayers<Derived, Base, types::pure1073>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::setupLayers", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::setupLayers", 
				(void*)addresses::address1073(), 
				(void*)wrap::setupLayers<DefaultConv, Derived, Base, types::pure1073>::value
			);
		}

		if constexpr (compare::shouldExitHackedLevel<Derived, Base, types::pure1074>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::shouldExitHackedLevel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::shouldExitHackedLevel", 
				(void*)addresses::address1074(), 
				(void*)wrap::shouldExitHackedLevel<DefaultConv, Derived, Base, types::pure1074>::value
			);
		}

		if constexpr (compare::spawnGroupTriggered<Derived, Base, types::pure1075>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::spawnGroupTriggered", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::spawnGroupTriggered", 
				(void*)addresses::address1075(), 
				(void*)wrap::spawnGroupTriggered<DefaultConv, Derived, Base, types::pure1075>::value
			);
		}

		if constexpr (compare::staticObjectsInRect<Derived, Base, types::pure1076>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::staticObjectsInRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::staticObjectsInRect", 
				(void*)addresses::address1076(), 
				(void*)wrap::staticObjectsInRect<DefaultConv, Derived, Base, types::pure1076>::value
			);
		}

		if constexpr (compare::testInstantCountTrigger<Derived, Base, types::pure1077>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::testInstantCountTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::testInstantCountTrigger", 
				(void*)addresses::address1077(), 
				(void*)wrap::testInstantCountTrigger<DefaultConv, Derived, Base, types::pure1077>::value
			);
		}

		if constexpr (compare::toggleGroup<Derived, Base, types::pure1078>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::toggleGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::toggleGroup", 
				(void*)addresses::address1078(), 
				(void*)wrap::toggleGroup<DefaultConv, Derived, Base, types::pure1078>::value
			);
		}

		if constexpr (compare::togglePlayerVisibility<Derived, Base, types::pure1079>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::togglePlayerVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::togglePlayerVisibility", 
				(void*)addresses::address1079(), 
				(void*)wrap::togglePlayerVisibility<DefaultConv, Derived, Base, types::pure1079>::value
			);
		}

		if constexpr (compare::triggerMoveCommand<Derived, Base, types::pure1080>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::triggerMoveCommand", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::triggerMoveCommand", 
				(void*)addresses::address1080(), 
				(void*)wrap::triggerMoveCommand<DefaultConv, Derived, Base, types::pure1080>::value
			);
		}

		if constexpr (compare::updateCollisionBlocks<Derived, Base, types::pure1081>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateCollisionBlocks", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::updateCollisionBlocks", 
				(void*)addresses::address1081(), 
				(void*)wrap::updateCollisionBlocks<DefaultConv, Derived, Base, types::pure1081>::value
			);
		}

		if constexpr (compare::updateCounters<Derived, Base, types::pure1082>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateCounters", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::updateCounters", 
				(void*)addresses::address1082(), 
				(void*)wrap::updateCounters<DefaultConv, Derived, Base, types::pure1082>::value
			);
		}

		if constexpr (compare::updateDisabledObjectsLastPos<Derived, Base, types::pure1083>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateDisabledObjectsLastPos", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::updateDisabledObjectsLastPos", 
				(void*)addresses::address1083(), 
				(void*)wrap::updateDisabledObjectsLastPos<DefaultConv, Derived, Base, types::pure1083>::value
			);
		}

		if constexpr (compare::updateLayerCapacity<Derived, Base, types::pure1084>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateLayerCapacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::updateLayerCapacity", 
				(void*)addresses::address1084(), 
				(void*)wrap::updateLayerCapacity<DefaultConv, Derived, Base, types::pure1084>::value
			);
		}

		if constexpr (compare::updateLegacyLayerCapacity<Derived, Base, types::pure1085>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateLegacyLayerCapacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::updateLegacyLayerCapacity", 
				(void*)addresses::address1085(), 
				(void*)wrap::updateLegacyLayerCapacity<DefaultConv, Derived, Base, types::pure1085>::value
			);
		}

		if constexpr (compare::updateOBB2<Derived, Base, types::pure1086>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateOBB2", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::updateOBB2", 
				(void*)addresses::address1086(), 
				(void*)wrap::updateOBB2<DefaultConv, Derived, Base, types::pure1086>::value
			);
		}

		if constexpr (compare::updateQueuedLabels<Derived, Base, types::pure1087>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::updateQueuedLabels", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::updateQueuedLabels", 
				(void*)addresses::address1087(), 
				(void*)wrap::updateQueuedLabels<DefaultConv, Derived, Base, types::pure1087>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1088>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJBaseGameLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJBaseGameLayer::destructor", 
				(void*)addresses::address1088(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1088>::value
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

		if constexpr (compare::sharedEngine<Derived, Base, types::pure1004>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FMODAudioEngine::sharedEngine", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FMODAudioEngine::sharedEngine", 
				(void*)addresses::address1004(), 
				(void*)wrap::sharedEngine<DefaultConv, Derived, Base, types::pure1004>::value
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

		if constexpr (compare::createFromString<Derived, Base, types::pure1976>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PulseEffectAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PulseEffectAction::createFromString", 
				(void*)addresses::address1976(), 
				(void*)wrap::createFromString<DefaultConv, Derived, Base, types::pure1976>::value
			);
		}

		if constexpr (compare::getSaveString<Derived, Base, types::pure1977>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PulseEffectAction::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PulseEffectAction::getSaveString", 
				(void*)addresses::address1977(), 
				(void*)wrap::getSaveString<DefaultConv, Derived, Base, types::pure1977>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure876>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::destructor", 
				(void*)addresses::address876(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure876>::value
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure877>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::keyBackClicked", 
				(void*)addresses::address877(), 
				(void*)wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure877>::value
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure878>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::keyDown", 
				(void*)addresses::address878(), 
				(void*)wrap::keyDown<DefaultConv, Derived, Base, types::pure878>::value
			);
		}

		if constexpr (compare::customSetup<Derived, Base, types::pure879>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorPauseLayer::customSetup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorPauseLayer::customSetup", 
				(void*)addresses::address879(), 
				(void*)wrap::customSetup<DefaultConv, Derived, Base, types::pure879>::value
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
				(void*)wrap::FLAlert_Clicked<DefaultConv, Derived, Base, types::pure880>::value
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
				(void*)wrap::saveLevel<DefaultConv, Derived, Base, types::pure881>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure882>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure97>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure873>::value
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
				(void*)wrap::loadFromItems<DefaultConv, Derived, Base, types::pure871>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1612>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LoadingLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LoadingLayer::create", 
				(void*)addresses::address1612(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1612>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1613>::value
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
				(void*)wrap::loadAssets<DefaultConv, Derived, Base, types::pure1615>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1988>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetIDLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetIDLayer::create", 
				(void*)addresses::address1988(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1988>::value
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
struct Modify<Derived, LevelCommentDelegate> : ModifyBase<Modify<Derived, LevelCommentDelegate>> {
	using ModifyBase<Modify<Derived, LevelCommentDelegate>>::ModifyBase;
	using Base = LevelCommentDelegate;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure27>::value
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

		if constexpr (compare::init<Derived, Base, types::pure1515>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LabelGameObject::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LabelGameObject::init", 
				(void*)addresses::address1515(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1515>::value
			);
		}

		if constexpr (compare::setObjectColor<Derived, Base, types::pure1516>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LabelGameObject::setObjectColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LabelGameObject::setObjectColor", 
				(void*)addresses::address1516(), 
				(void*)wrap::setObjectColor<DefaultConv, Derived, Base, types::pure1516>::value
			);
		}

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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1499>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"HardStreak::destructor", 
				(void*)addresses::address1499(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1499>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1500>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"HardStreak::init", 
				(void*)addresses::address1500(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1500>::value
			);
		}

		if constexpr (compare::addPoint<Derived, Base, types::pure1501>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::addPoint", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"HardStreak::addPoint", 
				(void*)addresses::address1501(), 
				(void*)wrap::addPoint<DefaultConv, Derived, Base, types::pure1501>::value
			);
		}

		if constexpr (compare::reset<Derived, Base, types::pure1502>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::reset", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"HardStreak::reset", 
				(void*)addresses::address1502(), 
				(void*)wrap::reset<DefaultConv, Derived, Base, types::pure1502>::value
			);
		}

		if constexpr (compare::resumeStroke<Derived, Base, types::pure1503>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::resumeStroke", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"HardStreak::resumeStroke", 
				(void*)addresses::address1503(), 
				(void*)wrap::resumeStroke<DefaultConv, Derived, Base, types::pure1503>::value
			);
		}

		if constexpr (compare::stopStroke<Derived, Base, types::pure1504>::value) {
			Interface::get()->logInfo(
				"Adding hook at function HardStreak::stopStroke", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"HardStreak::stopStroke", 
				(void*)addresses::address1504(), 
				(void*)wrap::stopStroke<DefaultConv, Derived, Base, types::pure1504>::value
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

		if constexpr (compare::loadFromObject<Derived, Base, types::pure838>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomSongCell::loadFromObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomSongCell::loadFromObject", 
				(void*)addresses::address838(), 
				(void*)wrap::loadFromObject<DefaultConv, Derived, Base, types::pure838>::value
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

		if constexpr (compare::onMyLevels<Derived, Base, types::pure828>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CreatorLayer::onMyLevels", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CreatorLayer::onMyLevels", 
				(void*)addresses::address828(), 
				(void*)wrap::onMyLevels<DefaultConv, Derived, Base, types::pure828>::value
			);
		}

		if constexpr (compare::onSavedLevels<Derived, Base, types::pure829>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CreatorLayer::onSavedLevels", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CreatorLayer::onSavedLevels", 
				(void*)addresses::address829(), 
				(void*)wrap::onSavedLevels<DefaultConv, Derived, Base, types::pure829>::value
			);
		}

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

		if constexpr (compare::createFromString<Derived, Base, types::pure825>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CountTriggerAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CountTriggerAction::createFromString", 
				(void*)addresses::address825(), 
				(void*)wrap::createFromString<DefaultConv, Derived, Base, types::pure825>::value
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

		if constexpr (compare::loadFromComment<Derived, Base, types::pure824>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CommentCell::loadFromComment", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CommentCell::loadFromComment", 
				(void*)addresses::address824(), 
				(void*)wrap::loadFromComment<DefaultConv, Derived, Base, types::pure824>::value
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

		if constexpr (compare::initWithSpriteFrameName<Derived, Base, types::pure771>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCSpritePlus::initWithSpriteFrameName", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCSpritePlus::initWithSpriteFrameName", 
				(void*)addresses::address771(), 
				(void*)wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure771>::value
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

		if constexpr (compare::updateBlending<Derived, Base, types::pure818>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorChannelSprite::updateBlending", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ColorChannelSprite::updateBlending", 
				(void*)addresses::address818(), 
				(void*)wrap::updateBlending<DefaultConv, Derived, Base, types::pure818>::value
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
				(void*)wrap::updateCopyLabel<DefaultConv, Derived, Base, types::pure819>::value
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
				(void*)wrap::updateOpacity<DefaultConv, Derived, Base, types::pure820>::value
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
				(void*)wrap::updateValues<DefaultConv, Derived, Base, types::pure821>::value
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

		if constexpr (compare::createFromString<Derived, Base, types::pure2098>::value) {
			Interface::get()->logInfo(
				"Adding hook at function TouchToggleAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"TouchToggleAction::createFromString", 
				(void*)addresses::address2098(), 
				(void*)wrap::createFromString<DefaultConv, Derived, Base, types::pure2098>::value
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
				(void*)wrap::allKeys<DefaultConv, Derived, Base, types::pure42>::value
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
				(void*)wrap::count<DefaultConv, Derived, Base, types::pure43>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure44>::value
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
				(void*)wrap::objectForKey<DefaultConv, Derived, Base, types::pure45>::value
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
				(void*)wrap::objectForKey<DefaultConv, Derived, Base, types::pure46>::value
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
				(void*)wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure47>::value
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
				(void*)wrap::removeObjectForKey<DefaultConv, Derived, Base, types::pure48>::value
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
				(void*)wrap::setObject<DefaultConv, Derived, Base, types::pure49>::value
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
				(void*)wrap::setObject<DefaultConv, Derived, Base, types::pure50>::value
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
				(void*)wrap::valueForKey<DefaultConv, Derived, Base, types::pure51>::value
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
				(void*)wrap::valueForKey<DefaultConv, Derived, Base, types::pure52>::value
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

		if constexpr (compare::getSaveString<Derived, Base, types::pure815>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorAction::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ColorAction::getSaveString", 
				(void*)addresses::address815(), 
				(void*)wrap::getSaveString<DefaultConv, Derived, Base, types::pure815>::value
			);
		}

		if constexpr (compare::setupFromDict<Derived, Base, types::pure816>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorAction::setupFromDict", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ColorAction::setupFromDict", 
				(void*)addresses::address816(), 
				(void*)wrap::setupFromDict<DefaultConv, Derived, Base, types::pure816>::value
			);
		}

		if constexpr (compare::setupFromString<Derived, Base, types::pure817>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ColorAction::setupFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ColorAction::setupFromString", 
				(void*)addresses::address817(), 
				(void*)wrap::setupFromString<DefaultConv, Derived, Base, types::pure817>::value
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

		if constexpr (compare::createFromString<Derived, Base, types::pure814>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CollisionTriggerAction::createFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CollisionTriggerAction::createFromString", 
				(void*)addresses::address814(), 
				(void*)wrap::createFromString<DefaultConv, Derived, Base, types::pure814>::value
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

		if constexpr (compare::constrainGameLayerPosition<Derived, Base, types::pure893>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::constrainGameLayerPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::constrainGameLayerPosition", 
				(void*)addresses::address893(), 
				(void*)wrap::constrainGameLayerPosition<DefaultConv, Derived, Base, types::pure893>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure894>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::create", 
				(void*)addresses::address894(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure894>::value
			);
		}

		if constexpr (compare::deselectAll<Derived, Base, types::pure895>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::deselectAll", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::deselectAll", 
				(void*)addresses::address895(), 
				(void*)wrap::deselectAll<DefaultConv, Derived, Base, types::pure895>::value
			);
		}

		if constexpr (compare::onDeselectAll<Derived, Base, types::pure896>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::onDeselectAll", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::onDeselectAll", 
				(void*)addresses::address896(), 
				(void*)wrap::onDeselectAll<DefaultConv, Derived, Base, types::pure896>::value
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
				(void*)wrap::disableButton<DefaultConv, Derived, Base, types::pure897>::value
			);
		}

		if constexpr (compare::editButtonUsable<Derived, Base, types::pure898>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::editButtonUsable", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::editButtonUsable", 
				(void*)addresses::address898(), 
				(void*)wrap::editButtonUsable<DefaultConv, Derived, Base, types::pure898>::value
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
				(void*)wrap::editObject<DefaultConv, Derived, Base, types::pure899>::value
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
				(void*)wrap::enableButton<DefaultConv, Derived, Base, types::pure900>::value
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
				(void*)wrap::getCreateBtn<DefaultConv, Derived, Base, types::pure901>::value
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
				(void*)wrap::getGroupCenter<DefaultConv, Derived, Base, types::pure902>::value
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
				(void*)wrap::getSelectedObjects<DefaultConv, Derived, Base, types::pure903>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure904>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::init", 
				(void*)addresses::address904(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure904>::value
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure905>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::ccTouchBegan", 
				(void*)addresses::address905(), 
				(void*)wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure905>::value
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure906>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::ccTouchMoved", 
				(void*)addresses::address906(), 
				(void*)wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure906>::value
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure907>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::ccTouchEnded", 
				(void*)addresses::address907(), 
				(void*)wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure907>::value
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
				(void*)wrap::keyDown<DefaultConv, Derived, Base, types::pure908>::value
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
				(void*)wrap::moveObject<DefaultConv, Derived, Base, types::pure909>::value
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
				(void*)wrap::onDuplicate<DefaultConv, Derived, Base, types::pure910>::value
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
				(void*)wrap::pasteObjects<DefaultConv, Derived, Base, types::pure911>::value
			);
		}

		if constexpr (compare::playerTouchBegan<Derived, Base, types::pure912>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::playerTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::playerTouchBegan", 
				(void*)addresses::address912(), 
				(void*)wrap::playerTouchBegan<DefaultConv, Derived, Base, types::pure912>::value
			);
		}

		if constexpr (compare::playtestStopped<Derived, Base, types::pure913>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::playtestStopped", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::playtestStopped", 
				(void*)addresses::address913(), 
				(void*)wrap::playtestStopped<DefaultConv, Derived, Base, types::pure913>::value
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
				(void*)wrap::redoLastAction<DefaultConv, Derived, Base, types::pure914>::value
			);
		}

		if constexpr (compare::replaceGroupID<Derived, Base, types::pure915>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::replaceGroupID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::replaceGroupID", 
				(void*)addresses::address915(), 
				(void*)wrap::replaceGroupID<DefaultConv, Derived, Base, types::pure915>::value
			);
		}

		if constexpr (compare::scaleChanged<Derived, Base, types::pure916>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::scaleChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::scaleChanged", 
				(void*)addresses::address916(), 
				(void*)wrap::scaleChanged<DefaultConv, Derived, Base, types::pure916>::value
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
				(void*)wrap::scaleObjects<DefaultConv, Derived, Base, types::pure917>::value
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
				(void*)wrap::selectObjects<DefaultConv, Derived, Base, types::pure918>::value
			);
		}

		if constexpr (compare::setupCreateMenu<Derived, Base, types::pure919>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorUI::setupCreateMenu", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorUI::setupCreateMenu", 
				(void*)addresses::address919(), 
				(void*)wrap::setupCreateMenu<DefaultConv, Derived, Base, types::pure919>::value
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
				(void*)wrap::undoLastAction<DefaultConv, Derived, Base, types::pure920>::value
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
				(void*)wrap::updateButtons<DefaultConv, Derived, Base, types::pure921>::value
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
				(void*)wrap::updateObjectInfoLabel<DefaultConv, Derived, Base, types::pure922>::value
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
				(void*)wrap::updateSlider<DefaultConv, Derived, Base, types::pure923>::value
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
				(void*)wrap::updateZoom<DefaultConv, Derived, Base, types::pure924>::value
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
				(void*)wrap::selectObject<DefaultConv, Derived, Base, types::pure925>::value
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
				(void*)wrap::updateCreateMenu<DefaultConv, Derived, Base, types::pure934>::value
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
				(void*)wrap::toggleMode<DefaultConv, Derived, Base, types::pure935>::value
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
				(void*)wrap::zoomIn<DefaultConv, Derived, Base, types::pure936>::value
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
				(void*)wrap::zoomOut<DefaultConv, Derived, Base, types::pure937>::value
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
				(void*)wrap::updateGridNodeSize<DefaultConv, Derived, Base, types::pure939>::value
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
				(void*)wrap::constrainGameLayerPosition<DefaultConv, Derived, Base, types::pure941>::value
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
				(void*)wrap::moveGameLayer<DefaultConv, Derived, Base, types::pure942>::value
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
				(void*)wrap::showUI<DefaultConv, Derived, Base, types::pure943>::value
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
				(void*)wrap::moveObjectCall<DefaultConv, Derived, Base, types::pure946>::value
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
				(void*)wrap::transformObjectCall<DefaultConv, Derived, Base, types::pure947>::value
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
				(void*)wrap::onDeleteSelected<DefaultConv, Derived, Base, types::pure948>::value
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
				(void*)wrap::onCopy<DefaultConv, Derived, Base, types::pure949>::value
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
				(void*)wrap::onPaste<DefaultConv, Derived, Base, types::pure950>::value
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
				(void*)wrap::toggleEnableRotate<DefaultConv, Derived, Base, types::pure951>::value
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
				(void*)wrap::toggleFreeMove<DefaultConv, Derived, Base, types::pure952>::value
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
				(void*)wrap::toggleSwipe<DefaultConv, Derived, Base, types::pure953>::value
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
				(void*)wrap::toggleSnap<DefaultConv, Derived, Base, types::pure954>::value
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
				(void*)wrap::onPlayback<DefaultConv, Derived, Base, types::pure955>::value
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
				(void*)wrap::onPlaytest<DefaultConv, Derived, Base, types::pure956>::value
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
				(void*)wrap::onStopPlaytest<DefaultConv, Derived, Base, types::pure957>::value
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
				(void*)wrap::onGroupUp<DefaultConv, Derived, Base, types::pure958>::value
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
				(void*)wrap::onGroupDown<DefaultConv, Derived, Base, types::pure959>::value
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
				(void*)wrap::selectBuildTab<DefaultConv, Derived, Base, types::pure960>::value
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
				(void*)wrap::onPause<DefaultConv, Derived, Base, types::pure961>::value
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
				(void*)wrap::keyUp<DefaultConv, Derived, Base, types::pure978>::value
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

		if constexpr (compare::create<Derived, Base, types::pure812>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CollisionBlockPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CollisionBlockPopup::create", 
				(void*)addresses::address812(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure812>::value
			);
		}

		if constexpr (compare::onNextItemID<Derived, Base, types::pure813>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CollisionBlockPopup::onNextItemID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CollisionBlockPopup::onNextItemID", 
				(void*)addresses::address813(), 
				(void*)wrap::onNextItemID<DefaultConv, Derived, Base, types::pure813>::value
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

		if constexpr (compare::create<Derived, Base, types::pure810>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CheckpointObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CheckpointObject::create", 
				(void*)addresses::address810(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure810>::value
			);
		}

		if constexpr (compare::getObject<Derived, Base, types::pure811>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CheckpointObject::getObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CheckpointObject::getObject", 
				(void*)addresses::address811(), 
				(void*)wrap::getObject<DefaultConv, Derived, Base, types::pure811>::value
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

		if constexpr (compare::begin<Derived, Base, types::pure404>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRenderTexture::begin", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCRenderTexture::begin", 
				(void*)addresses::address404(), 
				(void*)wrap::begin<DefaultConv, Derived, Base, types::pure404>::value
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
				(void*)wrap::end<DefaultConv, Derived, Base, types::pure405>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure406>::value
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
				(void*)wrap::newCCImage<DefaultConv, Derived, Base, types::pure407>::value
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
				(void*)wrap::setString<DefaultConv, Derived, Base, types::pure788>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure793>::value
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
				(void*)wrap::refreshLabel<DefaultConv, Derived, Base, types::pure794>::value
			);
		}

		if constexpr (compare::updateLabel<Derived, Base, types::pure795>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::updateLabel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::updateLabel", 
				(void*)addresses::address795(), 
				(void*)wrap::updateLabel<DefaultConv, Derived, Base, types::pure795>::value
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
				(void*)wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure796>::value
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
				(void*)wrap::visit<DefaultConv, Derived, Base, types::pure797>::value
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
				(void*)wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure798>::value
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure799>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::ccTouchCancelled", 
				(void*)addresses::address799(), 
				(void*)wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure799>::value
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure800>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::ccTouchEnded", 
				(void*)addresses::address800(), 
				(void*)wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure800>::value
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure801>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::ccTouchMoved", 
				(void*)addresses::address801(), 
				(void*)wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure801>::value
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
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure802>::value
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
				(void*)wrap::onClickTrackNode<DefaultConv, Derived, Base, types::pure803>::value
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
				(void*)wrap::keyboardWillShow<DefaultConv, Derived, Base, types::pure804>::value
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
				(void*)wrap::keyboardWillHide<DefaultConv, Derived, Base, types::pure805>::value
			);
		}

		if constexpr (compare::onTextFieldInsertText<Derived, Base, types::pure806>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCTextInputNode::onTextFieldInsertText", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCTextInputNode::onTextFieldInsertText", 
				(void*)addresses::address806(), 
				(void*)wrap::onTextFieldInsertText<DefaultConv, Derived, Base, types::pure806>::value
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
				(void*)wrap::onTextFieldAttachWithIME<DefaultConv, Derived, Base, types::pure807>::value
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
				(void*)wrap::onTextFieldDetachWithIME<DefaultConv, Derived, Base, types::pure808>::value
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

		if constexpr (compare::create<Derived, Base, types::pure827>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CreateMenuItem::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CreateMenuItem::create", 
				(void*)addresses::address827(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure827>::value
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

		if constexpr (compare::sharedState<Derived, Base, types::pure1618>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LocalLevelManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LocalLevelManager::sharedState", 
				(void*)addresses::address1618(), 
				(void*)wrap::sharedState<DefaultConv, Derived, Base, types::pure1618>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure752>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::destructor", 
				(void*)addresses::address752(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure752>::value
			);
		}

		if constexpr (compare::visit<Derived, Base, types::pure753>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCScrollLayerExt::visit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCScrollLayerExt::visit", 
				(void*)addresses::address753(), 
				(void*)wrap::visit<DefaultConv, Derived, Base, types::pure753>::value
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
				(void*)wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure754>::value
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
				(void*)wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure755>::value
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
				(void*)wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure756>::value
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
				(void*)wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure757>::value
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
				(void*)wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure758>::value
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
				(void*)wrap::preVisitWithClippingRect<DefaultConv, Derived, Base, types::pure759>::value
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
				(void*)wrap::postVisit<DefaultConv, Derived, Base, types::pure760>::value
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
				(void*)wrap::moveToTop<DefaultConv, Derived, Base, types::pure761>::value
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
				(void*)wrap::moveToTopWithOffset<DefaultConv, Derived, Base, types::pure762>::value
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
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure763>::value
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
				(void*)wrap::scrollLayer<DefaultConv, Derived, Base, types::pure764>::value
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
				(void*)wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure493>::value
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
				(void*)wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure494>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure495>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCStandardTouchHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCStandardTouchHandler::destructor", 
				(void*)addresses::address495(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure495>::value
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

		if constexpr (compare::create<Derived, Base, types::pure743>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMoveCNode::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMoveCNode::create", 
				(void*)addresses::address743(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure743>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure744>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMoveCNode::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMoveCNode::init", 
				(void*)addresses::address744(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure744>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure745>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCMoveCNode::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCMoveCNode::destructor", 
				(void*)addresses::address745(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure745>::value
			);
		}

	}
};

template<class Derived>
struct Modify<Derived, GameStatsManager> : ModifyBase<Modify<Derived, GameStatsManager>> {
	using ModifyBase<Modify<Derived, GameStatsManager>>::ModifyBase;
	using Base = GameStatsManager;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::awardCurrencyForLevel<Derived, Base, types::pure1476>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::awardCurrencyForLevel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::awardCurrencyForLevel", 
				(void*)addresses::address1476(), 
				(void*)wrap::awardCurrencyForLevel<DefaultConv, Derived, Base, types::pure1476>::value
			);
		}

		if constexpr (compare::awardDiamondsForLevel<Derived, Base, types::pure1477>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::awardDiamondsForLevel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::awardDiamondsForLevel", 
				(void*)addresses::address1477(), 
				(void*)wrap::awardDiamondsForLevel<DefaultConv, Derived, Base, types::pure1477>::value
			);
		}

		if constexpr (compare::awardSecretKey<Derived, Base, types::pure1478>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::awardSecretKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::awardSecretKey", 
				(void*)addresses::address1478(), 
				(void*)wrap::awardSecretKey<DefaultConv, Derived, Base, types::pure1478>::value
			);
		}

		if constexpr (compare::getSecretCoinKey<Derived, Base, types::pure1479>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::getSecretCoinKey", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::getSecretCoinKey", 
				(void*)addresses::address1479(), 
				(void*)wrap::getSecretCoinKey<DefaultConv, Derived, Base, types::pure1479>::value
			);
		}

		if constexpr (compare::getStat<Derived, Base, types::pure1480>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::getStat", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::getStat", 
				(void*)addresses::address1480(), 
				(void*)wrap::getStat<DefaultConv, Derived, Base, types::pure1480>::value
			);
		}

		if constexpr (compare::hasPendingUserCoin<Derived, Base, types::pure1481>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::hasPendingUserCoin", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::hasPendingUserCoin", 
				(void*)addresses::address1481(), 
				(void*)wrap::hasPendingUserCoin<DefaultConv, Derived, Base, types::pure1481>::value
			);
		}

		if constexpr (compare::hasSecretCoin<Derived, Base, types::pure1482>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::hasSecretCoin", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::hasSecretCoin", 
				(void*)addresses::address1482(), 
				(void*)wrap::hasSecretCoin<DefaultConv, Derived, Base, types::pure1482>::value
			);
		}

		if constexpr (compare::hasUserCoin<Derived, Base, types::pure1483>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::hasUserCoin", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::hasUserCoin", 
				(void*)addresses::address1483(), 
				(void*)wrap::hasUserCoin<DefaultConv, Derived, Base, types::pure1483>::value
			);
		}

		if constexpr (compare::incrementStat<Derived, Base, types::pure1484>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::incrementStat", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::incrementStat", 
				(void*)addresses::address1484(), 
				(void*)wrap::incrementStat<DefaultConv, Derived, Base, types::pure1484>::value
			);
		}

		if constexpr (compare::incrementStat<Derived, Base, types::pure1485>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::incrementStat", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::incrementStat", 
				(void*)addresses::address1485(), 
				(void*)wrap::incrementStat<DefaultConv, Derived, Base, types::pure1485>::value
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure1486>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::sharedState", 
				(void*)addresses::address1486(), 
				(void*)wrap::sharedState<DefaultConv, Derived, Base, types::pure1486>::value
			);
		}

		if constexpr (compare::storePendingUserCoin<Derived, Base, types::pure1487>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::storePendingUserCoin", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::storePendingUserCoin", 
				(void*)addresses::address1487(), 
				(void*)wrap::storePendingUserCoin<DefaultConv, Derived, Base, types::pure1487>::value
			);
		}

		if constexpr (compare::storeSecretCoin<Derived, Base, types::pure1488>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::storeSecretCoin", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::storeSecretCoin", 
				(void*)addresses::address1488(), 
				(void*)wrap::storeSecretCoin<DefaultConv, Derived, Base, types::pure1488>::value
			);
		}

		if constexpr (compare::storeUserCoin<Derived, Base, types::pure1489>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameStatsManager::storeUserCoin", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameStatsManager::storeUserCoin", 
				(void*)addresses::address1489(), 
				(void*)wrap::storeUserCoin<DefaultConv, Derived, Base, types::pure1489>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1521>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelBrowserLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelBrowserLayer::create", 
				(void*)addresses::address1521(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1521>::value
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

		if constexpr (compare::disableUI<Derived, Base, types::pure690>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::disableUI", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::disableUI", 
				(void*)addresses::address690(), 
				(void*)wrap::disableUI<DefaultConv, Derived, Base, types::pure690>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure691>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::draw", 
				(void*)addresses::address691(), 
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure691>::value
			);
		}

		if constexpr (compare::enableUI<Derived, Base, types::pure692>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::enableUI", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::enableUI", 
				(void*)addresses::address692(), 
				(void*)wrap::enableUI<DefaultConv, Derived, Base, types::pure692>::value
			);
		}

		if constexpr (compare::enterAnimFinished<Derived, Base, types::pure693>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::enterAnimFinished", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::enterAnimFinished", 
				(void*)addresses::address693(), 
				(void*)wrap::enterAnimFinished<DefaultConv, Derived, Base, types::pure693>::value
			);
		}

		if constexpr (compare::enterLayer<Derived, Base, types::pure694>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::enterLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::enterLayer", 
				(void*)addresses::address694(), 
				(void*)wrap::enterLayer<DefaultConv, Derived, Base, types::pure694>::value
			);
		}

		if constexpr (compare::exitLayer<Derived, Base, types::pure695>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::exitLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::exitLayer", 
				(void*)addresses::address695(), 
				(void*)wrap::exitLayer<DefaultConv, Derived, Base, types::pure695>::value
			);
		}

		if constexpr (compare::hideLayer<Derived, Base, types::pure696>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::hideLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::hideLayer", 
				(void*)addresses::address696(), 
				(void*)wrap::hideLayer<DefaultConv, Derived, Base, types::pure696>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure697>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::init", 
				(void*)addresses::address697(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure697>::value
			);
		}

		if constexpr (compare::layerHidden<Derived, Base, types::pure698>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::layerHidden", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::layerHidden", 
				(void*)addresses::address698(), 
				(void*)wrap::layerHidden<DefaultConv, Derived, Base, types::pure698>::value
			);
		}

		if constexpr (compare::layerVisible<Derived, Base, types::pure699>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::layerVisible", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::layerVisible", 
				(void*)addresses::address699(), 
				(void*)wrap::layerVisible<DefaultConv, Derived, Base, types::pure699>::value
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure700>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::registerWithTouchDispatcher", 
				(void*)addresses::address700(), 
				(void*)wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure700>::value
			);
		}

		if constexpr (compare::showLayer<Derived, Base, types::pure701>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCBlockLayer::showLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCBlockLayer::showLayer", 
				(void*)addresses::address701(), 
				(void*)wrap::showLayer<DefaultConv, Derived, Base, types::pure701>::value
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

		if constexpr (compare::draw<Derived, Base, types::pure655>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ArtistCell::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ArtistCell::draw", 
				(void*)addresses::address655(), 
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure655>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure656>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ArtistCell::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ArtistCell::init", 
				(void*)addresses::address656(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure656>::value
			);
		}

		if constexpr (compare::loadFromObject<Derived, Base, types::pure657>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ArtistCell::loadFromObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ArtistCell::loadFromObject", 
				(void*)addresses::address657(), 
				(void*)wrap::loadFromObject<DefaultConv, Derived, Base, types::pure657>::value
			);
		}

		if constexpr (compare::onNewgrounds<Derived, Base, types::pure658>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ArtistCell::onNewgrounds", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ArtistCell::onNewgrounds", 
				(void*)addresses::address658(), 
				(void*)wrap::onNewgrounds<DefaultConv, Derived, Base, types::pure658>::value
			);
		}

		if constexpr (compare::updateBGColor<Derived, Base, types::pure659>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ArtistCell::updateBGColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ArtistCell::updateBGColor", 
				(void*)addresses::address659(), 
				(void*)wrap::updateBGColor<DefaultConv, Derived, Base, types::pure659>::value
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

		if constexpr (compare::create<Derived, Base, types::pure984>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EndLevelLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EndLevelLayer::create", 
				(void*)addresses::address984(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure984>::value
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

		if constexpr (compare::playAnimation<Derived, Base, types::pure641>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AnimatedGameObject::playAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AnimatedGameObject::playAnimation", 
				(void*)addresses::address641(), 
				(void*)wrap::playAnimation<DefaultConv, Derived, Base, types::pure641>::value
			);
		}

		if constexpr (compare::updateChildSpriteColor<Derived, Base, types::pure642>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AnimatedGameObject::updateChildSpriteColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AnimatedGameObject::updateChildSpriteColor", 
				(void*)addresses::address642(), 
				(void*)wrap::updateChildSpriteColor<DefaultConv, Derived, Base, types::pure642>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure484>::value
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
				(void*)wrap::createWithTexture<DefaultConv, Derived, Base, types::pure485>::value
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
				(void*)wrap::getUsedAtlasCapacity<DefaultConv, Derived, Base, types::pure486>::value
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
				(void*)wrap::increaseAtlasCapacity<DefaultConv, Derived, Base, types::pure487>::value
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

		if constexpr (compare::createToggleButton<Derived, Base, types::pure1491>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameToolbox::createToggleButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameToolbox::createToggleButton", 
				(void*)addresses::address1491(), 
				(void*)wrap::createToggleButton<DefaultConv, Derived, Base, types::pure1491>::value
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

		if constexpr (compare::customSetup<Derived, Base, types::pure639>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementsLayer::customSetup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementsLayer::customSetup", 
				(void*)addresses::address639(), 
				(void*)wrap::customSetup<DefaultConv, Derived, Base, types::pure639>::value
			);
		}

		if constexpr (compare::loadPage<Derived, Base, types::pure640>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementsLayer::loadPage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementsLayer::loadPage", 
				(void*)addresses::address640(), 
				(void*)wrap::loadPage<DefaultConv, Derived, Base, types::pure640>::value
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

		if constexpr (compare::sharedState<Derived, Base, types::pure636>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementNotifier::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementNotifier::sharedState", 
				(void*)addresses::address636(), 
				(void*)wrap::sharedState<DefaultConv, Derived, Base, types::pure636>::value
			);
		}

		if constexpr (compare::willSwitchToScene<Derived, Base, types::pure637>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementNotifier::willSwitchToScene", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementNotifier::willSwitchToScene", 
				(void*)addresses::address637(), 
				(void*)wrap::willSwitchToScene<DefaultConv, Derived, Base, types::pure637>::value
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
				(void*)wrap::showNextAchievement<DefaultConv, Derived, Base, types::pure638>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2006>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInstantCountPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupInstantCountPopup::create", 
				(void*)addresses::address2006(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2006>::value
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2007>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInstantCountPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupInstantCountPopup::onTargetIDArrow", 
				(void*)addresses::address2007(), 
				(void*)wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2007>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2008>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInstantCountPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupInstantCountPopup::textChanged", 
				(void*)addresses::address2008(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure2008>::value
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2009>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInstantCountPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupInstantCountPopup::updateTargetID", 
				(void*)addresses::address2009(), 
				(void*)wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2009>::value
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
				(void*)wrap::setColorValue<DefaultConv, Derived, Base, types::pure539>::value
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

		if constexpr (compare::loadFromDict<Derived, Base, types::pure632>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementCell::loadFromDict", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementCell::loadFromDict", 
				(void*)addresses::address632(), 
				(void*)wrap::loadFromDict<DefaultConv, Derived, Base, types::pure632>::value
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

		if constexpr (compare::create<Derived, Base, types::pure631>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementBar::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementBar::create", 
				(void*)addresses::address631(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure631>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1>::value
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
			Interface::get()->addHook(
				"cocos2d::CCApplication::getCurrentLanguage", 
				(void*)addresses::address4(), 
				(void*)wrap::getCurrentLanguage<DefaultConv, Derived, Base, types::pure4>::value
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
				(void*)wrap::getTargetPlatform<DefaultConv, Derived, Base, types::pure5>::value
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
				(void*)wrap::openURL<DefaultConv, Derived, Base, types::pure6>::value
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
				(void*)wrap::setAnimationInterval<DefaultConv, Derived, Base, types::pure7>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure8>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCApplication::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCApplication::destructor", 
				(void*)addresses::address8(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure8>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure581>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::constructor", 
				(void*)addresses::address581(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure581>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure582>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::destructor", 
				(void*)addresses::address582(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure582>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure583>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScrollView::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScrollView::init", 
				(void*)addresses::address583(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure583>::value
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
				(void*)wrap::setContentSize<DefaultConv, Derived, Base, types::pure584>::value
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
				(void*)wrap::getContentSize<DefaultConv, Derived, Base, types::pure585>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure586>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure587>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure588>::value
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
				(void*)wrap::visit<DefaultConv, Derived, Base, types::pure589>::value
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
				(void*)wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure590>::value
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
				(void*)wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure591>::value
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
				(void*)wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure592>::value
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
				(void*)wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure593>::value
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
				(void*)wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure594>::value
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
				(void*)wrap::setTouchEnabled<DefaultConv, Derived, Base, types::pure595>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure831>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CurrencyRewardLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CurrencyRewardLayer::destructor", 
				(void*)addresses::address831(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure831>::value
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure832>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CurrencyRewardLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CurrencyRewardLayer::update", 
				(void*)addresses::address832(), 
				(void*)wrap::update<DefaultConv, Derived, Base, types::pure832>::value
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

		if constexpr (compare::create<Derived, Base, types::pure409>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCRotateBy::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCRotateBy::create", 
				(void*)addresses::address409(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure409>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure418>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSet::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSet::constructor", 
				(void*)addresses::address418(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure418>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure419>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSet::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSet::destructor", 
				(void*)addresses::address419(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure419>::value
			);
		}

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure420>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSet::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSet::acceptVisitor", 
				(void*)addresses::address420(), 
				(void*)wrap::acceptVisitor<DefaultConv, Derived, Base, types::pure420>::value
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
				(void*)wrap::HSVfromRGB<DefaultConv, Derived, Base, types::pure540>::value
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
				(void*)wrap::RGBfromHSV<DefaultConv, Derived, Base, types::pure541>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure103>::value
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
				(void*)wrap::createWithSpriteFrames<DefaultConv, Derived, Base, types::pure3>::value
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

		if constexpr (compare::getAllAchievements<Derived, Base, types::pure633>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementManager::getAllAchievements", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementManager::getAllAchievements", 
				(void*)addresses::address633(), 
				(void*)wrap::getAllAchievements<DefaultConv, Derived, Base, types::pure633>::value
			);
		}

		if constexpr (compare::sharedState<Derived, Base, types::pure634>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AchievementManager::sharedState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AchievementManager::sharedState", 
				(void*)addresses::address634(), 
				(void*)wrap::sharedState<DefaultConv, Derived, Base, types::pure634>::value
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
				(void*)wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure536>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure537>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouchHandler::destructor", 
				(void*)addresses::address537(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure537>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2010>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInteractObjectPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupInteractObjectPopup::create", 
				(void*)addresses::address2010(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2010>::value
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2011>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInteractObjectPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupInteractObjectPopup::onTargetIDArrow", 
				(void*)addresses::address2011(), 
				(void*)wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2011>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2012>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInteractObjectPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupInteractObjectPopup::textChanged", 
				(void*)addresses::address2012(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure2012>::value
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2013>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupInteractObjectPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupInteractObjectPopup::updateTargetID", 
				(void*)addresses::address2013(), 
				(void*)wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2013>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure421>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::destructor", 
				(void*)addresses::address421(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure421>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure422>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::init", 
				(void*)addresses::address422(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure422>::value
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
				(void*)wrap::setVertexZ<DefaultConv, Derived, Base, types::pure423>::value
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
				(void*)wrap::setScaleX<DefaultConv, Derived, Base, types::pure424>::value
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
				(void*)wrap::setScaleY<DefaultConv, Derived, Base, types::pure425>::value
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
				(void*)wrap::setScale<DefaultConv, Derived, Base, types::pure426>::value
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
				(void*)wrap::setPosition<DefaultConv, Derived, Base, types::pure427>::value
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
				(void*)wrap::setSkewX<DefaultConv, Derived, Base, types::pure428>::value
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
				(void*)wrap::setSkewY<DefaultConv, Derived, Base, types::pure429>::value
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
				(void*)wrap::setAnchorPoint<DefaultConv, Derived, Base, types::pure430>::value
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
				(void*)wrap::setVisible<DefaultConv, Derived, Base, types::pure431>::value
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
				(void*)wrap::setRotation<DefaultConv, Derived, Base, types::pure432>::value
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
				(void*)wrap::setRotationX<DefaultConv, Derived, Base, types::pure433>::value
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
				(void*)wrap::setRotationY<DefaultConv, Derived, Base, types::pure434>::value
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
				(void*)wrap::ignoreAnchorPointForPosition<DefaultConv, Derived, Base, types::pure435>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure436>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure437>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure438>::value
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
				(void*)wrap::removeChild<DefaultConv, Derived, Base, types::pure439>::value
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
				(void*)wrap::removeAllChildrenWithCleanup<DefaultConv, Derived, Base, types::pure440>::value
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
				(void*)wrap::reorderChild<DefaultConv, Derived, Base, types::pure441>::value
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
				(void*)wrap::sortAllChildren<DefaultConv, Derived, Base, types::pure442>::value
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
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure443>::value
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
				(void*)wrap::updateTransform<DefaultConv, Derived, Base, types::pure444>::value
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
				(void*)wrap::setOpacity<DefaultConv, Derived, Base, types::pure445>::value
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
				(void*)wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure446>::value
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
				(void*)wrap::setColor<DefaultConv, Derived, Base, types::pure447>::value
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
				(void*)wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure448>::value
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
				(void*)wrap::setOpacityModifyRGB<DefaultConv, Derived, Base, types::pure449>::value
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
				(void*)wrap::isOpacityModifyRGB<DefaultConv, Derived, Base, types::pure450>::value
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
				(void*)wrap::initWithTexture<DefaultConv, Derived, Base, types::pure451>::value
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
				(void*)wrap::initWithTexture<DefaultConv, Derived, Base, types::pure452>::value
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
				(void*)wrap::initWithTexture<DefaultConv, Derived, Base, types::pure453>::value
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
				(void*)wrap::initWithSpriteFrame<DefaultConv, Derived, Base, types::pure454>::value
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
				(void*)wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure455>::value
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
				(void*)wrap::initWithFile<DefaultConv, Derived, Base, types::pure456>::value
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
				(void*)wrap::initWithFile<DefaultConv, Derived, Base, types::pure457>::value
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
				(void*)wrap::setTexture<DefaultConv, Derived, Base, types::pure458>::value
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
				(void*)wrap::getTexture<DefaultConv, Derived, Base, types::pure459>::value
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
				(void*)wrap::setChildColor<DefaultConv, Derived, Base, types::pure460>::value
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
				(void*)wrap::setChildOpacity<DefaultConv, Derived, Base, types::pure461>::value
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
				(void*)wrap::getBatchNode<DefaultConv, Derived, Base, types::pure462>::value
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
				(void*)wrap::setBatchNode<DefaultConv, Derived, Base, types::pure463>::value
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
				(void*)wrap::refreshTextureRect<DefaultConv, Derived, Base, types::pure464>::value
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
				(void*)wrap::setTextureRect<DefaultConv, Derived, Base, types::pure465>::value
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
				(void*)wrap::setTextureRect<DefaultConv, Derived, Base, types::pure466>::value
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
				(void*)wrap::setVertexRect<DefaultConv, Derived, Base, types::pure467>::value
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
				(void*)wrap::setDisplayFrame<DefaultConv, Derived, Base, types::pure468>::value
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
				(void*)wrap::isFrameDisplayed<DefaultConv, Derived, Base, types::pure469>::value
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
				(void*)wrap::displayFrame<DefaultConv, Derived, Base, types::pure470>::value
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
				(void*)wrap::setDisplayFrameWithAnimationName<DefaultConv, Derived, Base, types::pure471>::value
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
				(void*)wrap::setTextureCoords<DefaultConv, Derived, Base, types::pure472>::value
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
				(void*)wrap::updateBlendFunc<DefaultConv, Derived, Base, types::pure473>::value
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
				(void*)wrap::setReorderChildDirtyRecursively<DefaultConv, Derived, Base, types::pure474>::value
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
				(void*)wrap::setDirtyRecursively<DefaultConv, Derived, Base, types::pure475>::value
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure476>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSprite::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSprite::constructor", 
				(void*)addresses::address476(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure476>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure477>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure478>::value
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
				(void*)wrap::createWithSpriteFrame<DefaultConv, Derived, Base, types::pure479>::value
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
				(void*)wrap::createWithSpriteFrameName<DefaultConv, Derived, Base, types::pure480>::value
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
				(void*)wrap::createWithTexture<DefaultConv, Derived, Base, types::pure481>::value
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
				(void*)wrap::setFlipX<DefaultConv, Derived, Base, types::pure482>::value
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
				(void*)wrap::setFlipY<DefaultConv, Derived, Base, types::pure483>::value
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

		if constexpr (compare::decrementForcePrio<Derived, Base, types::pure533>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouchDispatcher::decrementForcePrio", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouchDispatcher::decrementForcePrio", 
				(void*)addresses::address533(), 
				(void*)wrap::decrementForcePrio<DefaultConv, Derived, Base, types::pure533>::value
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
				(void*)wrap::incrementForcePrio<DefaultConv, Derived, Base, types::pure534>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure2111>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UndoObject::destructor", 
				(void*)addresses::address2111(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure2111>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure2112>::value) {
			Interface::get()->logInfo(
				"Adding hook at function UndoObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"UndoObject::create", 
				(void*)addresses::address2112(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2112>::value
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
				(void*)wrap::createWithArray<DefaultConv, Derived, Base, types::pure2113>::value
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

		if constexpr (compare::reset<Derived, Base, types::pure249>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMotionStreak::reset", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMotionStreak::reset", 
				(void*)addresses::address249(), 
				(void*)wrap::reset<DefaultConv, Derived, Base, types::pure249>::value
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
				(void*)wrap::resumeStroke<DefaultConv, Derived, Base, types::pure250>::value
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
				(void*)wrap::stopStroke<DefaultConv, Derived, Base, types::pure251>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure528>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure124>::value
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
				(void*)wrap::limitLabelWidth<DefaultConv, Derived, Base, types::pure125>::value
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
				(void*)wrap::setScale<DefaultConv, Derived, Base, types::pure126>::value
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
				(void*)wrap::setString<DefaultConv, Derived, Base, types::pure127>::value
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
				(void*)wrap::setAnchorPoint<DefaultConv, Derived, Base, types::pure128>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure104>::value
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

		if constexpr (compare::create<Derived, Base, types::pure663>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::create", 
				(void*)addresses::address663(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure663>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure664>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::init", 
				(void*)addresses::address664(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure664>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure665>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::draw", 
				(void*)addresses::address665(), 
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure665>::value
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
				(void*)wrap::setupList<DefaultConv, Derived, Base, types::pure666>::value
			);
		}

		if constexpr (compare::TableViewWillDisplayCellForRowAtIndexPath<Derived, Base, types::pure667>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::TableViewWillDisplayCellForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::TableViewWillDisplayCellForRowAtIndexPath", 
				(void*)addresses::address667(), 
				(void*)wrap::TableViewWillDisplayCellForRowAtIndexPath<DefaultConv, Derived, Base, types::pure667>::value
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
				(void*)wrap::cellHeightForRowAtIndexPath<DefaultConv, Derived, Base, types::pure668>::value
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
				(void*)wrap::numberOfRowsInSection<DefaultConv, Derived, Base, types::pure670>::value
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
				(void*)wrap::numberOfSectionsInTableView<DefaultConv, Derived, Base, types::pure671>::value
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
				(void*)wrap::cellForRowAtIndexPath<DefaultConv, Derived, Base, types::pure672>::value
			);
		}

		if constexpr (compare::TableViewCommitCellEditingStyleForRowAtIndexPath<Derived, Base, types::pure673>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::TableViewCommitCellEditingStyleForRowAtIndexPath", 
				(void*)addresses::address673(), 
				(void*)wrap::TableViewCommitCellEditingStyleForRowAtIndexPath<DefaultConv, Derived, Base, types::pure673>::value
			);
		}

		if constexpr (compare::TableViewWillReloadCellForRowAtIndexPath<Derived, Base, types::pure674>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomListView::TableViewWillReloadCellForRowAtIndexPath", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomListView::TableViewWillReloadCellForRowAtIndexPath", 
				(void*)addresses::address674(), 
				(void*)wrap::TableViewWillReloadCellForRowAtIndexPath<DefaultConv, Derived, Base, types::pure674>::value
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
				(void*)wrap::getListCell<DefaultConv, Derived, Base, types::pure675>::value
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
				(void*)wrap::loadCell<DefaultConv, Derived, Base, types::pure676>::value
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

		if constexpr (compare::createWithTexture<Derived, Base, types::pure488>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCSpriteFrame::createWithTexture", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCSpriteFrame::createWithTexture", 
				(void*)addresses::address488(), 
				(void*)wrap::createWithTexture<DefaultConv, Derived, Base, types::pure488>::value
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
				(void*)wrap::createWithTexture<DefaultConv, Derived, Base, types::pure489>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1600>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelSettingsObject::destructor", 
				(void*)addresses::address1600(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1600>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1601>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelSettingsObject::init", 
				(void*)addresses::address1601(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1601>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1602>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelSettingsObject::create", 
				(void*)addresses::address1602(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1602>::value
			);
		}

		if constexpr (compare::objectFromDict<Derived, Base, types::pure1603>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::objectFromDict", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelSettingsObject::objectFromDict", 
				(void*)addresses::address1603(), 
				(void*)wrap::objectFromDict<DefaultConv, Derived, Base, types::pure1603>::value
			);
		}

		if constexpr (compare::objectFromString<Derived, Base, types::pure1604>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::objectFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelSettingsObject::objectFromString", 
				(void*)addresses::address1604(), 
				(void*)wrap::objectFromString<DefaultConv, Derived, Base, types::pure1604>::value
			);
		}

		if constexpr (compare::setupColorsFromLegacyMode<Derived, Base, types::pure1605>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelSettingsObject::setupColorsFromLegacyMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelSettingsObject::setupColorsFromLegacyMode", 
				(void*)addresses::address1605(), 
				(void*)wrap::setupColorsFromLegacyMode<DefaultConv, Derived, Base, types::pure1605>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure507>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::destructor", 
				(void*)addresses::address507(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure507>::value
			);
		}

		if constexpr (compare::constructor<Derived, Base, types::pure508>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::constructor", 
				(void*)addresses::address508(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure508>::value
			);
		}

		if constexpr (compare::getContentSize<Derived, Base, types::pure509>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTexture2D::getContentSize", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTexture2D::getContentSize", 
				(void*)addresses::address509(), 
				(void*)wrap::getContentSize<DefaultConv, Derived, Base, types::pure509>::value
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
				(void*)wrap::getMaxS<DefaultConv, Derived, Base, types::pure510>::value
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
				(void*)wrap::getMaxT<DefaultConv, Derived, Base, types::pure511>::value
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
				(void*)wrap::getName<DefaultConv, Derived, Base, types::pure512>::value
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
				(void*)wrap::getPixelFormat<DefaultConv, Derived, Base, types::pure513>::value
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
				(void*)wrap::getPixelsHigh<DefaultConv, Derived, Base, types::pure514>::value
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
				(void*)wrap::getPixelsWide<DefaultConv, Derived, Base, types::pure515>::value
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
				(void*)wrap::getShaderProgram<DefaultConv, Derived, Base, types::pure516>::value
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
				(void*)wrap::initPremultipliedATextureWithImage<DefaultConv, Derived, Base, types::pure517>::value
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
				(void*)wrap::initWithData<DefaultConv, Derived, Base, types::pure518>::value
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
				(void*)wrap::setAliasTexParameters<DefaultConv, Derived, Base, types::pure519>::value
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
				(void*)wrap::setAntiAliasTexParameters<DefaultConv, Derived, Base, types::pure520>::value
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
				(void*)wrap::setMaxS<DefaultConv, Derived, Base, types::pure521>::value
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
				(void*)wrap::setMaxT<DefaultConv, Derived, Base, types::pure522>::value
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
				(void*)wrap::setShaderProgram<DefaultConv, Derived, Base, types::pure523>::value
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
				(void*)wrap::initWithImage<DefaultConv, Derived, Base, types::pure524>::value
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
				(void*)wrap::setTexParameters<DefaultConv, Derived, Base, types::pure525>::value
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

		if constexpr (compare::create<Derived, Base, types::pure714>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCLightFlash::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCLightFlash::create", 
				(void*)addresses::address714(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure714>::value
			);
		}

		if constexpr (compare::playEffect<Derived, Base, types::pure715>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCLightFlash::playEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCLightFlash::playEffect", 
				(void*)addresses::address715(), 
				(void*)wrap::playEffect<DefaultConv, Derived, Base, types::pure715>::value
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

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure504>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTargetedTouchHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTargetedTouchHandler::handlerWithDelegate", 
				(void*)addresses::address504(), 
				(void*)wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure504>::value
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
				(void*)wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure505>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure506>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTargetedTouchHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTargetedTouchHandler::destructor", 
				(void*)addresses::address506(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure506>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1232>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJRobotSprite::destructor", 
				(void*)addresses::address1232(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1232>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1233>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJRobotSprite::init", 
				(void*)addresses::address1233(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1233>::value
			);
		}

		if constexpr (compare::setOpacity<Derived, Base, types::pure1234>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::setOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJRobotSprite::setOpacity", 
				(void*)addresses::address1234(), 
				(void*)wrap::setOpacity<DefaultConv, Derived, Base, types::pure1234>::value
			);
		}

		if constexpr (compare::hideSecondary<Derived, Base, types::pure1235>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::hideSecondary", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJRobotSprite::hideSecondary", 
				(void*)addresses::address1235(), 
				(void*)wrap::hideSecondary<DefaultConv, Derived, Base, types::pure1235>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1236>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJRobotSprite::create", 
				(void*)addresses::address1236(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1236>::value
			);
		}

		if constexpr (compare::updateColor02<Derived, Base, types::pure1237>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::updateColor02", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJRobotSprite::updateColor02", 
				(void*)addresses::address1237(), 
				(void*)wrap::updateColor02<DefaultConv, Derived, Base, types::pure1237>::value
			);
		}

		if constexpr (compare::updateFrame<Derived, Base, types::pure1238>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJRobotSprite::updateFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJRobotSprite::updateFrame", 
				(void*)addresses::address1238(), 
				(void*)wrap::updateFrame<DefaultConv, Derived, Base, types::pure1238>::value
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

		if constexpr (compare::onEnter<Derived, Base, types::pure988>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::onEnter", 
				(void*)addresses::address988(), 
				(void*)wrap::onEnter<DefaultConv, Derived, Base, types::pure988>::value
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
				(void*)wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure989>::value
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
				(void*)wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure990>::value
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
				(void*)wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure991>::value
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
				(void*)wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure992>::value
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
				(void*)wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure993>::value
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
				(void*)wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure994>::value
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
				(void*)wrap::keyDown<DefaultConv, Derived, Base, types::pure995>::value
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
				(void*)wrap::show<DefaultConv, Derived, Base, types::pure996>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure997>::value) {
			Interface::get()->logInfo(
				"Adding hook at function FLAlertLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"FLAlertLayer::init", 
				(void*)addresses::address997(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure997>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure998>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure999>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1000>::value
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
				(void*)wrap::onBtn1<DefaultConv, Derived, Base, types::pure1001>::value
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
				(void*)wrap::onBtn2<DefaultConv, Derived, Base, types::pure1002>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure677>::value) {
			Interface::get()->logInfo(
				"Adding hook at function BoomScrollLayer::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"BoomScrollLayer::constructor", 
				(void*)addresses::address677(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure677>::value
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

		if constexpr (compare::create<Derived, Base, types::pure412>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCScene::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCScene::create", 
				(void*)addresses::address412(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure412>::value
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
				(void*)wrap::getHighestChildZ<DefaultConv, Derived, Base, types::pure413>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure410>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure411>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure408>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure401>::value
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
				(void*)wrap::resetSystem<DefaultConv, Derived, Base, types::pure398>::value
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
				(void*)wrap::resumeSystem<DefaultConv, Derived, Base, types::pure399>::value
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
				(void*)wrap::stopSystem<DefaultConv, Derived, Base, types::pure400>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1998>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCollisionTriggerPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupCollisionTriggerPopup::create", 
				(void*)addresses::address1998(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1998>::value
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure1999>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCollisionTriggerPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupCollisionTriggerPopup::onTargetIDArrow", 
				(void*)addresses::address1999(), 
				(void*)wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure1999>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2000>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCollisionTriggerPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupCollisionTriggerPopup::textChanged", 
				(void*)addresses::address2000(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure2000>::value
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2001>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupCollisionTriggerPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupCollisionTriggerPopup::updateTargetID", 
				(void*)addresses::address2001(), 
				(void*)wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2001>::value
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

		if constexpr (compare::create<Derived, Base, types::pure256>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMoveTo::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMoveTo::create", 
				(void*)addresses::address256(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure256>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure131>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::constructor", 
				(void*)addresses::address131(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure131>::value
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure132>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::ccTouchBegan", 
				(void*)addresses::address132(), 
				(void*)wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure132>::value
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
				(void*)wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure133>::value
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
				(void*)wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure134>::value
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
				(void*)wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure135>::value
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
				(void*)wrap::ccTouchesBegan<DefaultConv, Derived, Base, types::pure136>::value
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
				(void*)wrap::ccTouchesCancelled<DefaultConv, Derived, Base, types::pure137>::value
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
				(void*)wrap::ccTouchesEnded<DefaultConv, Derived, Base, types::pure138>::value
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
				(void*)wrap::ccTouchesMoved<DefaultConv, Derived, Base, types::pure139>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure140>::value
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
				(void*)wrap::didAccelerate<DefaultConv, Derived, Base, types::pure141>::value
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
				(void*)wrap::getTouchMode<DefaultConv, Derived, Base, types::pure142>::value
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
				(void*)wrap::getTouchPriority<DefaultConv, Derived, Base, types::pure143>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure144>::value
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
				(void*)wrap::isAccelerometerEnabled<DefaultConv, Derived, Base, types::pure145>::value
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
				(void*)wrap::isKeyboardEnabled<DefaultConv, Derived, Base, types::pure146>::value
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
				(void*)wrap::isKeypadEnabled<DefaultConv, Derived, Base, types::pure147>::value
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
				(void*)wrap::isMouseEnabled<DefaultConv, Derived, Base, types::pure148>::value
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
				(void*)wrap::isTouchEnabled<DefaultConv, Derived, Base, types::pure149>::value
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
				(void*)wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure150>::value
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
				(void*)wrap::keyDown<DefaultConv, Derived, Base, types::pure151>::value
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
				(void*)wrap::keyMenuClicked<DefaultConv, Derived, Base, types::pure152>::value
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
				(void*)wrap::onEnter<DefaultConv, Derived, Base, types::pure153>::value
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
				(void*)wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure154>::value
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
				(void*)wrap::onExit<DefaultConv, Derived, Base, types::pure155>::value
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
				(void*)wrap::registerScriptTouchHandler<DefaultConv, Derived, Base, types::pure156>::value
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
				(void*)wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure157>::value
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
				(void*)wrap::setAccelerometerEnabled<DefaultConv, Derived, Base, types::pure158>::value
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
				(void*)wrap::setAccelerometerInterval<DefaultConv, Derived, Base, types::pure159>::value
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
				(void*)wrap::setKeyboardEnabled<DefaultConv, Derived, Base, types::pure160>::value
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
				(void*)wrap::setKeypadEnabled<DefaultConv, Derived, Base, types::pure161>::value
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
				(void*)wrap::setMouseEnabled<DefaultConv, Derived, Base, types::pure162>::value
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
				(void*)wrap::setTouchEnabled<DefaultConv, Derived, Base, types::pure163>::value
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
				(void*)wrap::setTouchMode<DefaultConv, Derived, Base, types::pure164>::value
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
				(void*)wrap::setTouchPriority<DefaultConv, Derived, Base, types::pure165>::value
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
				(void*)wrap::unregisterScriptTouchHandler<DefaultConv, Derived, Base, types::pure166>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure167>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayer::destructor", 
				(void*)addresses::address167(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure167>::value
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

		if constexpr (compare::textForColorIdx<Derived, Base, types::pure1245>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSpecialColorSelect::textForColorIdx", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJSpecialColorSelect::textForColorIdx", 
				(void*)addresses::address1245(), 
				(void*)wrap::textForColorIdx<DefaultConv, Derived, Base, types::pure1245>::value
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

		if constexpr (compare::create<Derived, Base, types::pure255>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMoveBy::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMoveBy::create", 
				(void*)addresses::address255(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure255>::value
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

		if constexpr (compare::selected<Derived, Base, types::pure236>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemSprite::selected", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemSprite::selected", 
				(void*)addresses::address236(), 
				(void*)wrap::selected<DefaultConv, Derived, Base, types::pure236>::value
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
				(void*)wrap::unselected<DefaultConv, Derived, Base, types::pure237>::value
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
				(void*)wrap::setEnabled<DefaultConv, Derived, Base, types::pure238>::value
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
				(void*)wrap::getNormalImage<DefaultConv, Derived, Base, types::pure239>::value
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
				(void*)wrap::setNormalImage<DefaultConv, Derived, Base, types::pure240>::value
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
				(void*)wrap::getSelectedImage<DefaultConv, Derived, Base, types::pure241>::value
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
				(void*)wrap::setSelectedImage<DefaultConv, Derived, Base, types::pure242>::value
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
				(void*)wrap::getDisabledImage<DefaultConv, Derived, Base, types::pure243>::value
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
				(void*)wrap::setDisabledImage<DefaultConv, Derived, Base, types::pure244>::value
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
				(void*)wrap::updateImagesVisibility<DefaultConv, Derived, Base, types::pure245>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure246>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure247>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure248>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1246>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSpiderSprite::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJSpiderSprite::destructor", 
				(void*)addresses::address1246(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1246>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1247>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSpiderSprite::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJSpiderSprite::init", 
				(void*)addresses::address1247(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1247>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1248>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJSpiderSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJSpiderSprite::create", 
				(void*)addresses::address1248(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1248>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1230>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJListLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJListLayer::destructor", 
				(void*)addresses::address1230(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1230>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1231>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJListLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJListLayer::create", 
				(void*)addresses::address1231(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1231>::value
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

		if constexpr (compare::dispatchKeyboardMSG<Derived, Base, types::pure115>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeyboardDispatcher::dispatchKeyboardMSG", 
				(void*)addresses::address115(), 
				(void*)wrap::dispatchKeyboardMSG<DefaultConv, Derived, Base, types::pure115>::value
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
				(void*)wrap::keyToString<DefaultConv, Derived, Base, types::pure116>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1089>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJComment::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJComment::destructor", 
				(void*)addresses::address1089(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1089>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1090>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJComment::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJComment::init", 
				(void*)addresses::address1090(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1090>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure226>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2035>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupTouchTogglePopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupTouchTogglePopup::create", 
				(void*)addresses::address2035(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2035>::value
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2036>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupTouchTogglePopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupTouchTogglePopup::onTargetIDArrow", 
				(void*)addresses::address2036(), 
				(void*)wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2036>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2037>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupTouchTogglePopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupTouchTogglePopup::textChanged", 
				(void*)addresses::address2037(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure2037>::value
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2038>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupTouchTogglePopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupTouchTogglePopup::updateTargetID", 
				(void*)addresses::address2038(), 
				(void*)wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2038>::value
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
				(void*)wrap::sharedFileUtils<DefaultConv, Derived, Base, types::pure105>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure257>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::constructor", 
				(void*)addresses::address257(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure257>::value
			);
		}

		if constexpr (compare::_setZOrder<Derived, Base, types::pure258>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::_setZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::_setZOrder", 
				(void*)addresses::address258(), 
				(void*)wrap::_setZOrder<DefaultConv, Derived, Base, types::pure258>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure259>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure260>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure261>::value
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
				(void*)wrap::addComponent<DefaultConv, Derived, Base, types::pure262>::value
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
				(void*)wrap::cleanup<DefaultConv, Derived, Base, types::pure263>::value
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
				(void*)wrap::convertToNodeSpace<DefaultConv, Derived, Base, types::pure264>::value
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
				(void*)wrap::convertToWorldSpace<DefaultConv, Derived, Base, types::pure265>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure266>::value
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
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure267>::value
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
				(void*)wrap::getActionByTag<DefaultConv, Derived, Base, types::pure268>::value
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
				(void*)wrap::getActionManager<DefaultConv, Derived, Base, types::pure269>::value
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
				(void*)wrap::getAnchorPoint<DefaultConv, Derived, Base, types::pure270>::value
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
				(void*)wrap::getAnchorPointInPoints<DefaultConv, Derived, Base, types::pure271>::value
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
				(void*)wrap::getCamera<DefaultConv, Derived, Base, types::pure272>::value
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
				(void*)wrap::getChildByTag<DefaultConv, Derived, Base, types::pure273>::value
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
				(void*)wrap::getChildren<DefaultConv, Derived, Base, types::pure274>::value
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
				(void*)wrap::getChildrenCount<DefaultConv, Derived, Base, types::pure275>::value
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
				(void*)wrap::getContentSize<DefaultConv, Derived, Base, types::pure276>::value
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
				(void*)wrap::getGLServerState<DefaultConv, Derived, Base, types::pure277>::value
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
				(void*)wrap::getGrid<DefaultConv, Derived, Base, types::pure278>::value
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
				(void*)wrap::getOrderOfArrival<DefaultConv, Derived, Base, types::pure279>::value
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
				(void*)wrap::getParent<DefaultConv, Derived, Base, types::pure280>::value
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
				(void*)wrap::getPosition<DefaultConv, Derived, Base, types::pure281>::value
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
				(void*)wrap::getPosition<DefaultConv, Derived, Base, types::pure282>::value
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
				(void*)wrap::getPositionX<DefaultConv, Derived, Base, types::pure283>::value
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
				(void*)wrap::getPositionY<DefaultConv, Derived, Base, types::pure284>::value
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
				(void*)wrap::getRotation<DefaultConv, Derived, Base, types::pure285>::value
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
				(void*)wrap::getRotationX<DefaultConv, Derived, Base, types::pure286>::value
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
				(void*)wrap::getRotationY<DefaultConv, Derived, Base, types::pure287>::value
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
				(void*)wrap::getScale<DefaultConv, Derived, Base, types::pure288>::value
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
				(void*)wrap::getScaleX<DefaultConv, Derived, Base, types::pure289>::value
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
				(void*)wrap::getScaleY<DefaultConv, Derived, Base, types::pure290>::value
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
				(void*)wrap::getScaledContentSize<DefaultConv, Derived, Base, types::pure291>::value
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
				(void*)wrap::getScheduler<DefaultConv, Derived, Base, types::pure292>::value
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
				(void*)wrap::getShaderProgram<DefaultConv, Derived, Base, types::pure293>::value
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
				(void*)wrap::getSkewX<DefaultConv, Derived, Base, types::pure294>::value
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
				(void*)wrap::getSkewY<DefaultConv, Derived, Base, types::pure295>::value
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
				(void*)wrap::getUserData<DefaultConv, Derived, Base, types::pure296>::value
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
				(void*)wrap::getUserObject<DefaultConv, Derived, Base, types::pure297>::value
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
				(void*)wrap::getVertexZ<DefaultConv, Derived, Base, types::pure298>::value
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
				(void*)wrap::getZOrder<DefaultConv, Derived, Base, types::pure299>::value
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
				(void*)wrap::ignoreAnchorPointForPosition<DefaultConv, Derived, Base, types::pure300>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure301>::value
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
				(void*)wrap::isIgnoreAnchorPointForPosition<DefaultConv, Derived, Base, types::pure302>::value
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
				(void*)wrap::isRunning<DefaultConv, Derived, Base, types::pure303>::value
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
				(void*)wrap::isVisible<DefaultConv, Derived, Base, types::pure304>::value
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
				(void*)wrap::nodeToParentTransform<DefaultConv, Derived, Base, types::pure305>::value
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
				(void*)wrap::nodeToWorldTransform<DefaultConv, Derived, Base, types::pure306>::value
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
				(void*)wrap::onEnter<DefaultConv, Derived, Base, types::pure307>::value
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
				(void*)wrap::onEnterTransitionDidFinish<DefaultConv, Derived, Base, types::pure308>::value
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
				(void*)wrap::onExit<DefaultConv, Derived, Base, types::pure309>::value
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
				(void*)wrap::onExitTransitionDidStart<DefaultConv, Derived, Base, types::pure310>::value
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
				(void*)wrap::parentToNodeTransform<DefaultConv, Derived, Base, types::pure311>::value
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
				(void*)wrap::pauseSchedulerAndActions<DefaultConv, Derived, Base, types::pure312>::value
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
				(void*)wrap::registerScriptHandler<DefaultConv, Derived, Base, types::pure313>::value
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
				(void*)wrap::removeAllChildren<DefaultConv, Derived, Base, types::pure314>::value
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
				(void*)wrap::removeAllChildrenWithCleanup<DefaultConv, Derived, Base, types::pure315>::value
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
				(void*)wrap::removeAllComponents<DefaultConv, Derived, Base, types::pure316>::value
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
				(void*)wrap::removeChild<DefaultConv, Derived, Base, types::pure317>::value
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
				(void*)wrap::removeChild<DefaultConv, Derived, Base, types::pure318>::value
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
				(void*)wrap::removeChildByTag<DefaultConv, Derived, Base, types::pure319>::value
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
				(void*)wrap::removeChildByTag<DefaultConv, Derived, Base, types::pure320>::value
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
				(void*)wrap::removeComponent<DefaultConv, Derived, Base, types::pure321>::value
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
				(void*)wrap::removeComponent<DefaultConv, Derived, Base, types::pure322>::value
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
				(void*)wrap::removeFromParent<DefaultConv, Derived, Base, types::pure323>::value
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
				(void*)wrap::removeFromParentAndCleanup<DefaultConv, Derived, Base, types::pure324>::value
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
				(void*)wrap::removeMeAndCleanup<DefaultConv, Derived, Base, types::pure325>::value
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
				(void*)wrap::reorderChild<DefaultConv, Derived, Base, types::pure326>::value
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
				(void*)wrap::resumeSchedulerAndActions<DefaultConv, Derived, Base, types::pure327>::value
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
				(void*)wrap::runAction<DefaultConv, Derived, Base, types::pure328>::value
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
				(void*)wrap::schedule<DefaultConv, Derived, Base, types::pure329>::value
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
				(void*)wrap::schedule<DefaultConv, Derived, Base, types::pure330>::value
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
				(void*)wrap::scheduleUpdate<DefaultConv, Derived, Base, types::pure331>::value
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
				(void*)wrap::setActionManager<DefaultConv, Derived, Base, types::pure332>::value
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
				(void*)wrap::setAnchorPoint<DefaultConv, Derived, Base, types::pure333>::value
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
				(void*)wrap::setContentSize<DefaultConv, Derived, Base, types::pure334>::value
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
				(void*)wrap::setGLServerState<DefaultConv, Derived, Base, types::pure335>::value
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
				(void*)wrap::setGrid<DefaultConv, Derived, Base, types::pure336>::value
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
				(void*)wrap::setOrderOfArrival<DefaultConv, Derived, Base, types::pure337>::value
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
				(void*)wrap::setParent<DefaultConv, Derived, Base, types::pure338>::value
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
				(void*)wrap::setPosition<DefaultConv, Derived, Base, types::pure339>::value
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
				(void*)wrap::setPosition<DefaultConv, Derived, Base, types::pure340>::value
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
				(void*)wrap::setPositionX<DefaultConv, Derived, Base, types::pure341>::value
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
				(void*)wrap::setPositionY<DefaultConv, Derived, Base, types::pure342>::value
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
				(void*)wrap::setRotation<DefaultConv, Derived, Base, types::pure343>::value
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
				(void*)wrap::setRotationX<DefaultConv, Derived, Base, types::pure344>::value
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
				(void*)wrap::setRotationY<DefaultConv, Derived, Base, types::pure345>::value
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
				(void*)wrap::setScale<DefaultConv, Derived, Base, types::pure346>::value
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
				(void*)wrap::setScale<DefaultConv, Derived, Base, types::pure347>::value
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
				(void*)wrap::setScaleX<DefaultConv, Derived, Base, types::pure348>::value
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
				(void*)wrap::setScaleY<DefaultConv, Derived, Base, types::pure349>::value
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
				(void*)wrap::setScheduler<DefaultConv, Derived, Base, types::pure350>::value
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
				(void*)wrap::setShaderProgram<DefaultConv, Derived, Base, types::pure351>::value
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
				(void*)wrap::setSkewX<DefaultConv, Derived, Base, types::pure352>::value
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
				(void*)wrap::setSkewY<DefaultConv, Derived, Base, types::pure353>::value
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
				(void*)wrap::setUserData<DefaultConv, Derived, Base, types::pure354>::value
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
				(void*)wrap::setUserObject<DefaultConv, Derived, Base, types::pure355>::value
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
				(void*)wrap::setVertexZ<DefaultConv, Derived, Base, types::pure356>::value
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
				(void*)wrap::setVisible<DefaultConv, Derived, Base, types::pure357>::value
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
				(void*)wrap::setZOrder<DefaultConv, Derived, Base, types::pure358>::value
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
				(void*)wrap::sortAllChildren<DefaultConv, Derived, Base, types::pure359>::value
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
				(void*)wrap::stopActionByTag<DefaultConv, Derived, Base, types::pure360>::value
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
				(void*)wrap::stopAllActions<DefaultConv, Derived, Base, types::pure361>::value
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
				(void*)wrap::unregisterScriptHandler<DefaultConv, Derived, Base, types::pure362>::value
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
				(void*)wrap::unschedule<DefaultConv, Derived, Base, types::pure363>::value
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
				(void*)wrap::unscheduleAllSelectors<DefaultConv, Derived, Base, types::pure364>::value
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
				(void*)wrap::unscheduleUpdate<DefaultConv, Derived, Base, types::pure365>::value
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
				(void*)wrap::update<DefaultConv, Derived, Base, types::pure366>::value
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
				(void*)wrap::updateTransform<DefaultConv, Derived, Base, types::pure367>::value
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
				(void*)wrap::updateTweenAction<DefaultConv, Derived, Base, types::pure368>::value
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
				(void*)wrap::visit<DefaultConv, Derived, Base, types::pure369>::value
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
				(void*)wrap::worldToNodeTransform<DefaultConv, Derived, Base, types::pure370>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure371>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNode::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNode::destructor", 
				(void*)addresses::address371(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure371>::value
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

		if constexpr (compare::onButtonsPerRow<Derived, Base, types::pure874>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EditorOptionsLayer::onButtonsPerRow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EditorOptionsLayer::onButtonsPerRow", 
				(void*)addresses::address874(), 
				(void*)wrap::onButtonsPerRow<DefaultConv, Derived, Base, types::pure874>::value
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

		if constexpr (compare::runAnimation<Derived, Base, types::pure687>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCAnimatedSprite::runAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCAnimatedSprite::runAnimation", 
				(void*)addresses::address687(), 
				(void*)wrap::runAnimation<DefaultConv, Derived, Base, types::pure687>::value
			);
		}

		if constexpr (compare::tweenToAnimation<Derived, Base, types::pure688>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCAnimatedSprite::tweenToAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCAnimatedSprite::tweenToAnimation", 
				(void*)addresses::address688(), 
				(void*)wrap::tweenToAnimation<DefaultConv, Derived, Base, types::pure688>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure387>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::constructor", 
				(void*)addresses::address387(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure387>::value
			);
		}

		if constexpr (compare::acceptVisitor<Derived, Base, types::pure388>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::acceptVisitor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::acceptVisitor", 
				(void*)addresses::address388(), 
				(void*)wrap::acceptVisitor<DefaultConv, Derived, Base, types::pure388>::value
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
				(void*)wrap::autorelease<DefaultConv, Derived, Base, types::pure389>::value
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
				(void*)wrap::canEncode<DefaultConv, Derived, Base, types::pure390>::value
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
				(void*)wrap::encodeWithCoder<DefaultConv, Derived, Base, types::pure391>::value
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
				(void*)wrap::getTag<DefaultConv, Derived, Base, types::pure392>::value
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
				(void*)wrap::isEqual<DefaultConv, Derived, Base, types::pure393>::value
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
				(void*)wrap::release<DefaultConv, Derived, Base, types::pure394>::value
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
				(void*)wrap::retain<DefaultConv, Derived, Base, types::pure395>::value
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
				(void*)wrap::setTag<DefaultConv, Derived, Base, types::pure396>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure397>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCObject::destructor", 
				(void*)addresses::address397(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure397>::value
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
				(void*)wrap::scheduleSelector<DefaultConv, Derived, Base, types::pure414>::value
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
				(void*)wrap::scheduleUpdateForTarget<DefaultConv, Derived, Base, types::pure415>::value
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
				(void*)wrap::unscheduleAllForTarget<DefaultConv, Derived, Base, types::pure416>::value
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
				(void*)wrap::update<DefaultConv, Derived, Base, types::pure417>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1350>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::destructor", 
				(void*)addresses::address1350(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1350>::value
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1351>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::update", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::update", 
				(void*)addresses::address1351(), 
				(void*)wrap::update<DefaultConv, Derived, Base, types::pure1351>::value
			);
		}

		if constexpr (compare::setScaleX<Derived, Base, types::pure1352>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setScaleX", 
				(void*)addresses::address1352(), 
				(void*)wrap::setScaleX<DefaultConv, Derived, Base, types::pure1352>::value
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
				(void*)wrap::setScaleY<DefaultConv, Derived, Base, types::pure1353>::value
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
				(void*)wrap::setScale<DefaultConv, Derived, Base, types::pure1354>::value
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
				(void*)wrap::setPosition<DefaultConv, Derived, Base, types::pure1355>::value
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
				(void*)wrap::setVisible<DefaultConv, Derived, Base, types::pure1356>::value
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
				(void*)wrap::setRotation<DefaultConv, Derived, Base, types::pure1357>::value
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
				(void*)wrap::setOpacity<DefaultConv, Derived, Base, types::pure1358>::value
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
				(void*)wrap::initWithTexture<DefaultConv, Derived, Base, types::pure1359>::value
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
				(void*)wrap::setChildColor<DefaultConv, Derived, Base, types::pure1360>::value
			);
		}

		if constexpr (compare::setFlipX<Derived, Base, types::pure1361>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setFlipX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setFlipX", 
				(void*)addresses::address1361(), 
				(void*)wrap::setFlipX<DefaultConv, Derived, Base, types::pure1361>::value
			);
		}

		if constexpr (compare::setFlipY<Derived, Base, types::pure1362>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setFlipY", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setFlipY", 
				(void*)addresses::address1362(), 
				(void*)wrap::setFlipY<DefaultConv, Derived, Base, types::pure1362>::value
			);
		}

		if constexpr (compare::customSetup<Derived, Base, types::pure1363>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::customSetup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::customSetup", 
				(void*)addresses::address1363(), 
				(void*)wrap::customSetup<DefaultConv, Derived, Base, types::pure1363>::value
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
				(void*)wrap::setupCustomSprites<DefaultConv, Derived, Base, types::pure1364>::value
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
				(void*)wrap::addMainSpriteToParent<DefaultConv, Derived, Base, types::pure1365>::value
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
				(void*)wrap::resetObject<DefaultConv, Derived, Base, types::pure1366>::value
			);
		}

		if constexpr (compare::triggerObject<Derived, Base, types::pure1367>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::triggerObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::triggerObject", 
				(void*)addresses::address1367(), 
				(void*)wrap::triggerObject<DefaultConv, Derived, Base, types::pure1367>::value
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
				(void*)wrap::activateObject<DefaultConv, Derived, Base, types::pure1368>::value
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
				(void*)wrap::deactivateObject<DefaultConv, Derived, Base, types::pure1369>::value
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
				(void*)wrap::getObjectRect<DefaultConv, Derived, Base, types::pure1370>::value
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
				(void*)wrap::getObjectRect<DefaultConv, Derived, Base, types::pure1371>::value
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
				(void*)wrap::getObjectRect2<DefaultConv, Derived, Base, types::pure1372>::value
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
				(void*)wrap::getObjectTextureRect<DefaultConv, Derived, Base, types::pure1373>::value
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
				(void*)wrap::getRealPosition<DefaultConv, Derived, Base, types::pure1374>::value
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
				(void*)wrap::setStartPos<DefaultConv, Derived, Base, types::pure1375>::value
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
				(void*)wrap::updateStartValues<DefaultConv, Derived, Base, types::pure1376>::value
			);
		}

		if constexpr (compare::customObjectSetup<Derived, Base, types::pure1377>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::customObjectSetup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::customObjectSetup", 
				(void*)addresses::address1377(), 
				(void*)wrap::customObjectSetup<DefaultConv, Derived, Base, types::pure1377>::value
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
				(void*)wrap::getSaveString<DefaultConv, Derived, Base, types::pure1378>::value
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
				(void*)wrap::isFlipX<DefaultConv, Derived, Base, types::pure1379>::value
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
				(void*)wrap::isFlipY<DefaultConv, Derived, Base, types::pure1380>::value
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
				(void*)wrap::setRScaleX<DefaultConv, Derived, Base, types::pure1381>::value
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
				(void*)wrap::setRScaleY<DefaultConv, Derived, Base, types::pure1382>::value
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
				(void*)wrap::setRScale<DefaultConv, Derived, Base, types::pure1383>::value
			);
		}

		if constexpr (compare::getRScaleX<Derived, Base, types::pure1384>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getRScaleX", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getRScaleX", 
				(void*)addresses::address1384(), 
				(void*)wrap::getRScaleX<DefaultConv, Derived, Base, types::pure1384>::value
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
				(void*)wrap::getRScaleY<DefaultConv, Derived, Base, types::pure1385>::value
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
				(void*)wrap::calculateSpawnXPos<DefaultConv, Derived, Base, types::pure1386>::value
			);
		}

		if constexpr (compare::triggerActivated<Derived, Base, types::pure1387>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::triggerActivated", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::triggerActivated", 
				(void*)addresses::address1387(), 
				(void*)wrap::triggerActivated<DefaultConv, Derived, Base, types::pure1387>::value
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
				(void*)wrap::powerOnObject<DefaultConv, Derived, Base, types::pure1388>::value
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
				(void*)wrap::powerOffObject<DefaultConv, Derived, Base, types::pure1389>::value
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
				(void*)wrap::setObjectColor<DefaultConv, Derived, Base, types::pure1390>::value
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
				(void*)wrap::setGlowColor<DefaultConv, Derived, Base, types::pure1391>::value
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
				(void*)wrap::getOrientedBox<DefaultConv, Derived, Base, types::pure1392>::value
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
				(void*)wrap::addToGroup<DefaultConv, Derived, Base, types::pure1393>::value
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
				(void*)wrap::removeFromGroup<DefaultConv, Derived, Base, types::pure1394>::value
			);
		}

		if constexpr (compare::spawnXPosition<Derived, Base, types::pure1395>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::spawnXPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::spawnXPosition", 
				(void*)addresses::address1395(), 
				(void*)wrap::spawnXPosition<DefaultConv, Derived, Base, types::pure1395>::value
			);
		}

		if constexpr (compare::getObjectRectDirty<Derived, Base, types::pure1396>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRectDirty", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getObjectRectDirty", 
				(void*)addresses::address1396(), 
				(void*)wrap::getObjectRectDirty<DefaultConv, Derived, Base, types::pure1396>::value
			);
		}

		if constexpr (compare::setObjectRectDirty<Derived, Base, types::pure1397>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setObjectRectDirty", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setObjectRectDirty", 
				(void*)addresses::address1397(), 
				(void*)wrap::setObjectRectDirty<DefaultConv, Derived, Base, types::pure1397>::value
			);
		}

		if constexpr (compare::getOrientedRectDirty<Derived, Base, types::pure1398>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getOrientedRectDirty", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getOrientedRectDirty", 
				(void*)addresses::address1398(), 
				(void*)wrap::getOrientedRectDirty<DefaultConv, Derived, Base, types::pure1398>::value
			);
		}

		if constexpr (compare::setOrientedRectDirty<Derived, Base, types::pure1399>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setOrientedRectDirty", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setOrientedRectDirty", 
				(void*)addresses::address1399(), 
				(void*)wrap::setOrientedRectDirty<DefaultConv, Derived, Base, types::pure1399>::value
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
				(void*)wrap::getType<DefaultConv, Derived, Base, types::pure1400>::value
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
				(void*)wrap::setType<DefaultConv, Derived, Base, types::pure1401>::value
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
				(void*)wrap::getStartPos<DefaultConv, Derived, Base, types::pure1402>::value
			);
		}

		if constexpr (compare::activatedByPlayer<Derived, Base, types::pure1403>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::activatedByPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::activatedByPlayer", 
				(void*)addresses::address1403(), 
				(void*)wrap::activatedByPlayer<DefaultConv, Derived, Base, types::pure1403>::value
			);
		}

		if constexpr (compare::addColorSprite<Derived, Base, types::pure1404>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addColorSprite", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::addColorSprite", 
				(void*)addresses::address1404(), 
				(void*)wrap::addColorSprite<DefaultConv, Derived, Base, types::pure1404>::value
			);
		}

		if constexpr (compare::addColorSpriteToParent<Derived, Base, types::pure1405>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addColorSpriteToParent", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::addColorSpriteToParent", 
				(void*)addresses::address1405(), 
				(void*)wrap::addColorSpriteToParent<DefaultConv, Derived, Base, types::pure1405>::value
			);
		}

		if constexpr (compare::addToTempOffset<Derived, Base, types::pure1406>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::addToTempOffset", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::addToTempOffset", 
				(void*)addresses::address1406(), 
				(void*)wrap::addToTempOffset<DefaultConv, Derived, Base, types::pure1406>::value
			);
		}

		if constexpr (compare::calculateOrientedBox<Derived, Base, types::pure1407>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::calculateOrientedBox", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::calculateOrientedBox", 
				(void*)addresses::address1407(), 
				(void*)wrap::calculateOrientedBox<DefaultConv, Derived, Base, types::pure1407>::value
			);
		}

		if constexpr (compare::canChangeCustomColor<Derived, Base, types::pure1408>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::canChangeCustomColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::canChangeCustomColor", 
				(void*)addresses::address1408(), 
				(void*)wrap::canChangeCustomColor<DefaultConv, Derived, Base, types::pure1408>::value
			);
		}

		if constexpr (compare::colorForMode<Derived, Base, types::pure1409>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::colorForMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::colorForMode", 
				(void*)addresses::address1409(), 
				(void*)wrap::colorForMode<DefaultConv, Derived, Base, types::pure1409>::value
			);
		}

		if constexpr (compare::commonSetup<Derived, Base, types::pure1410>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::commonSetup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::commonSetup", 
				(void*)addresses::address1410(), 
				(void*)wrap::commonSetup<DefaultConv, Derived, Base, types::pure1410>::value
			);
		}

		if constexpr (compare::copyGroups<Derived, Base, types::pure1411>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::copyGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::copyGroups", 
				(void*)addresses::address1411(), 
				(void*)wrap::copyGroups<DefaultConv, Derived, Base, types::pure1411>::value
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
				(void*)wrap::createWithFrame<DefaultConv, Derived, Base, types::pure1412>::value
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
				(void*)wrap::createWithKey<DefaultConv, Derived, Base, types::pure1413>::value
			);
		}

		if constexpr (compare::destroyObject<Derived, Base, types::pure1414>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::destroyObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::destroyObject", 
				(void*)addresses::address1414(), 
				(void*)wrap::destroyObject<DefaultConv, Derived, Base, types::pure1414>::value
			);
		}

		if constexpr (compare::determineSlopeDirection<Derived, Base, types::pure1415>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::determineSlopeDirection", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::determineSlopeDirection", 
				(void*)addresses::address1415(), 
				(void*)wrap::determineSlopeDirection<DefaultConv, Derived, Base, types::pure1415>::value
			);
		}

		if constexpr (compare::getActiveColorForMode<Derived, Base, types::pure1416>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getActiveColorForMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getActiveColorForMode", 
				(void*)addresses::address1416(), 
				(void*)wrap::getActiveColorForMode<DefaultConv, Derived, Base, types::pure1416>::value
			);
		}

		if constexpr (compare::getBallFrame<Derived, Base, types::pure1417>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getBallFrame", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getBallFrame", 
				(void*)addresses::address1417(), 
				(void*)wrap::getBallFrame<DefaultConv, Derived, Base, types::pure1417>::value
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
				(void*)wrap::getBoxOffset<DefaultConv, Derived, Base, types::pure1418>::value
			);
		}

		if constexpr (compare::getColorIndex<Derived, Base, types::pure1419>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getColorIndex", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getColorIndex", 
				(void*)addresses::address1419(), 
				(void*)wrap::getColorIndex<DefaultConv, Derived, Base, types::pure1419>::value
			);
		}

		if constexpr (compare::getDidUpdateLastPosition<Derived, Base, types::pure1420>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getDidUpdateLastPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getDidUpdateLastPosition", 
				(void*)addresses::address1420(), 
				(void*)wrap::getDidUpdateLastPosition<DefaultConv, Derived, Base, types::pure1420>::value
			);
		}

		if constexpr (compare::getLastPosition<Derived, Base, types::pure1421>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getLastPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getLastPosition", 
				(void*)addresses::address1421(), 
				(void*)wrap::getLastPosition<DefaultConv, Derived, Base, types::pure1421>::value
			);
		}

		if constexpr (compare::getMainColorMode<Derived, Base, types::pure1422>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getMainColorMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getMainColorMode", 
				(void*)addresses::address1422(), 
				(void*)wrap::getMainColorMode<DefaultConv, Derived, Base, types::pure1422>::value
			);
		}

		if constexpr (compare::getObjectZOrder<Derived, Base, types::pure1423>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectZOrder", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getObjectZOrder", 
				(void*)addresses::address1423(), 
				(void*)wrap::getObjectZOrder<DefaultConv, Derived, Base, types::pure1423>::value
			);
		}

		if constexpr (compare::getObjectRadius<Derived, Base, types::pure1424>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getObjectRadius", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getObjectRadius", 
				(void*)addresses::address1424(), 
				(void*)wrap::getObjectRadius<DefaultConv, Derived, Base, types::pure1424>::value
			);
		}

		if constexpr (compare::getSecondaryColorMode<Derived, Base, types::pure1425>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getSecondaryColorMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getSecondaryColorMode", 
				(void*)addresses::address1425(), 
				(void*)wrap::getSecondaryColorMode<DefaultConv, Derived, Base, types::pure1425>::value
			);
		}

		if constexpr (compare::getSectionIdx<Derived, Base, types::pure1426>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::getSectionIdx", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::getSectionIdx", 
				(void*)addresses::address1426(), 
				(void*)wrap::getSectionIdx<DefaultConv, Derived, Base, types::pure1426>::value
			);
		}

		if constexpr (compare::groupWasDisabled<Derived, Base, types::pure1427>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::groupWasDisabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::groupWasDisabled", 
				(void*)addresses::address1427(), 
				(void*)wrap::groupWasDisabled<DefaultConv, Derived, Base, types::pure1427>::value
			);
		}

		if constexpr (compare::groupWasEnabled<Derived, Base, types::pure1428>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::groupWasEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::groupWasEnabled", 
				(void*)addresses::address1428(), 
				(void*)wrap::groupWasEnabled<DefaultConv, Derived, Base, types::pure1428>::value
			);
		}

		if constexpr (compare::hasBeenActivated<Derived, Base, types::pure1429>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::hasBeenActivated", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::hasBeenActivated", 
				(void*)addresses::address1429(), 
				(void*)wrap::hasBeenActivated<DefaultConv, Derived, Base, types::pure1429>::value
			);
		}

		if constexpr (compare::hasBeenActivatedByPlayer<Derived, Base, types::pure1430>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::hasBeenActivatedByPlayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::hasBeenActivatedByPlayer", 
				(void*)addresses::address1430(), 
				(void*)wrap::hasBeenActivatedByPlayer<DefaultConv, Derived, Base, types::pure1430>::value
			);
		}

		if constexpr (compare::hasSecondaryColor<Derived, Base, types::pure1431>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::hasSecondaryColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::hasSecondaryColor", 
				(void*)addresses::address1431(), 
				(void*)wrap::hasSecondaryColor<DefaultConv, Derived, Base, types::pure1431>::value
			);
		}

		if constexpr (compare::ignoreEnter<Derived, Base, types::pure1432>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::ignoreEnter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::ignoreEnter", 
				(void*)addresses::address1432(), 
				(void*)wrap::ignoreEnter<DefaultConv, Derived, Base, types::pure1432>::value
			);
		}

		if constexpr (compare::ignoreFade<Derived, Base, types::pure1433>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::ignoreFade", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::ignoreFade", 
				(void*)addresses::address1433(), 
				(void*)wrap::ignoreFade<DefaultConv, Derived, Base, types::pure1433>::value
			);
		}

		if constexpr (compare::isBasicTrigger<Derived, Base, types::pure1434>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isBasicTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::isBasicTrigger", 
				(void*)addresses::address1434(), 
				(void*)wrap::isBasicTrigger<DefaultConv, Derived, Base, types::pure1434>::value
			);
		}

		if constexpr (compare::isColorTrigger<Derived, Base, types::pure1435>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isColorTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::isColorTrigger", 
				(void*)addresses::address1435(), 
				(void*)wrap::isColorTrigger<DefaultConv, Derived, Base, types::pure1435>::value
			);
		}

		if constexpr (compare::isSpawnableTrigger<Derived, Base, types::pure1436>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isSpawnableTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::isSpawnableTrigger", 
				(void*)addresses::address1436(), 
				(void*)wrap::isSpawnableTrigger<DefaultConv, Derived, Base, types::pure1436>::value
			);
		}

		if constexpr (compare::isSpecialObject<Derived, Base, types::pure1437>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::isSpecialObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::isSpecialObject", 
				(void*)addresses::address1437(), 
				(void*)wrap::isSpecialObject<DefaultConv, Derived, Base, types::pure1437>::value
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
				(void*)wrap::objectFromString<DefaultConv, Derived, Base, types::pure1438>::value
			);
		}

		if constexpr (compare::playShineEffect<Derived, Base, types::pure1439>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::playShineEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::playShineEffect", 
				(void*)addresses::address1439(), 
				(void*)wrap::playShineEffect<DefaultConv, Derived, Base, types::pure1439>::value
			);
		}

		if constexpr (compare::quickUpdatePosition<Derived, Base, types::pure1440>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::quickUpdatePosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::quickUpdatePosition", 
				(void*)addresses::address1440(), 
				(void*)wrap::quickUpdatePosition<DefaultConv, Derived, Base, types::pure1440>::value
			);
		}

		if constexpr (compare::removeGlow<Derived, Base, types::pure1441>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::removeGlow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::removeGlow", 
				(void*)addresses::address1441(), 
				(void*)wrap::removeGlow<DefaultConv, Derived, Base, types::pure1441>::value
			);
		}

		if constexpr (compare::resetGroupDisabled<Derived, Base, types::pure1442>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::resetGroupDisabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::resetGroupDisabled", 
				(void*)addresses::address1442(), 
				(void*)wrap::resetGroupDisabled<DefaultConv, Derived, Base, types::pure1442>::value
			);
		}

		if constexpr (compare::saveActiveColors<Derived, Base, types::pure1443>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::saveActiveColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::saveActiveColors", 
				(void*)addresses::address1443(), 
				(void*)wrap::saveActiveColors<DefaultConv, Derived, Base, types::pure1443>::value
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
				(void*)wrap::selectObject<DefaultConv, Derived, Base, types::pure1444>::value
			);
		}

		if constexpr (compare::setDefaultMainColorMode<Derived, Base, types::pure1445>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setDefaultMainColorMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setDefaultMainColorMode", 
				(void*)addresses::address1445(), 
				(void*)wrap::setDefaultMainColorMode<DefaultConv, Derived, Base, types::pure1445>::value
			);
		}

		if constexpr (compare::setDidUpdateLastPosition<Derived, Base, types::pure1446>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setDidUpdateLastPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setDidUpdateLastPosition", 
				(void*)addresses::address1446(), 
				(void*)wrap::setDidUpdateLastPosition<DefaultConv, Derived, Base, types::pure1446>::value
			);
		}

		if constexpr (compare::setGlowOpacity<Derived, Base, types::pure1447>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setGlowOpacity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setGlowOpacity", 
				(void*)addresses::address1447(), 
				(void*)wrap::setGlowOpacity<DefaultConv, Derived, Base, types::pure1447>::value
			);
		}

		if constexpr (compare::setLastPosition<Derived, Base, types::pure1448>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setLastPosition", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setLastPosition", 
				(void*)addresses::address1448(), 
				(void*)wrap::setLastPosition<DefaultConv, Derived, Base, types::pure1448>::value
			);
		}

		if constexpr (compare::setMainColorMode<Derived, Base, types::pure1449>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setMainColorMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setMainColorMode", 
				(void*)addresses::address1449(), 
				(void*)wrap::setMainColorMode<DefaultConv, Derived, Base, types::pure1449>::value
			);
		}

		if constexpr (compare::setSectionIdx<Derived, Base, types::pure1450>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setSectionIdx", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setSectionIdx", 
				(void*)addresses::address1450(), 
				(void*)wrap::setSectionIdx<DefaultConv, Derived, Base, types::pure1450>::value
			);
		}

		if constexpr (compare::setupCoinArt<Derived, Base, types::pure1451>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::setupCoinArt", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::setupCoinArt", 
				(void*)addresses::address1451(), 
				(void*)wrap::setupCoinArt<DefaultConv, Derived, Base, types::pure1451>::value
			);
		}

		if constexpr (compare::slopeFloorTop<Derived, Base, types::pure1452>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::slopeFloorTop", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::slopeFloorTop", 
				(void*)addresses::address1452(), 
				(void*)wrap::slopeFloorTop<DefaultConv, Derived, Base, types::pure1452>::value
			);
		}

		if constexpr (compare::slopeWallLeft<Derived, Base, types::pure1453>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::slopeWallLeft", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::slopeWallLeft", 
				(void*)addresses::address1453(), 
				(void*)wrap::slopeWallLeft<DefaultConv, Derived, Base, types::pure1453>::value
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
				(void*)wrap::updateCustomScale<DefaultConv, Derived, Base, types::pure1454>::value
			);
		}

		if constexpr (compare::updateMainColor<Derived, Base, types::pure1455>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateMainColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::updateMainColor", 
				(void*)addresses::address1455(), 
				(void*)wrap::updateMainColor<DefaultConv, Derived, Base, types::pure1455>::value
			);
		}

		if constexpr (compare::updateOrientedBox<Derived, Base, types::pure1456>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateOrientedBox", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::updateOrientedBox", 
				(void*)addresses::address1456(), 
				(void*)wrap::updateOrientedBox<DefaultConv, Derived, Base, types::pure1456>::value
			);
		}

		if constexpr (compare::updateSecondaryColor<Derived, Base, types::pure1457>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateSecondaryColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::updateSecondaryColor", 
				(void*)addresses::address1457(), 
				(void*)wrap::updateSecondaryColor<DefaultConv, Derived, Base, types::pure1457>::value
			);
		}

		if constexpr (compare::updateStartPos<Derived, Base, types::pure1458>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateStartPos", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::updateStartPos", 
				(void*)addresses::address1458(), 
				(void*)wrap::updateStartPos<DefaultConv, Derived, Base, types::pure1458>::value
			);
		}

		if constexpr (compare::updateState<Derived, Base, types::pure1459>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::updateState", 
				(void*)addresses::address1459(), 
				(void*)wrap::updateState<DefaultConv, Derived, Base, types::pure1459>::value
			);
		}

		if constexpr (compare::updateSyncedAnimation<Derived, Base, types::pure1460>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GameObject::updateSyncedAnimation", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GameObject::updateSyncedAnimation", 
				(void*)addresses::address1460(), 
				(void*)wrap::updateSyncedAnimation<DefaultConv, Derived, Base, types::pure1460>::value
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
				(void*)wrap::alignItemsHorizontallyWithPadding<DefaultConv, Derived, Base, types::pure196>::value
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
				(void*)wrap::alignItemsVerticallyWithPadding<DefaultConv, Derived, Base, types::pure197>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure198>::value
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
				(void*)wrap::createWithArray<DefaultConv, Derived, Base, types::pure199>::value
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
				(void*)wrap::createWithItem<DefaultConv, Derived, Base, types::pure200>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure201>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure202>::value
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
				(void*)wrap::addChild<DefaultConv, Derived, Base, types::pure203>::value
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
				(void*)wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure204>::value
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
				(void*)wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure205>::value
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
				(void*)wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure206>::value
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
				(void*)wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure207>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure208>::value
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
				(void*)wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure209>::value
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
				(void*)wrap::onExit<DefaultConv, Derived, Base, types::pure210>::value
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
				(void*)wrap::removeChild<DefaultConv, Derived, Base, types::pure211>::value
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
				(void*)wrap::initWithArray<DefaultConv, Derived, Base, types::pure212>::value
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

		if constexpr (compare::onNextGroupID1<Derived, Base, types::pure1981>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::onNextGroupID1", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetGroupIDLayer::onNextGroupID1", 
				(void*)addresses::address1981(), 
				(void*)wrap::onNextGroupID1<DefaultConv, Derived, Base, types::pure1981>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure1982>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetGroupIDLayer::textChanged", 
				(void*)addresses::address1982(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure1982>::value
			);
		}

		if constexpr (compare::updateGroupIDLabel<Derived, Base, types::pure1983>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::updateGroupIDLabel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetGroupIDLayer::updateGroupIDLabel", 
				(void*)addresses::address1983(), 
				(void*)wrap::updateGroupIDLabel<DefaultConv, Derived, Base, types::pure1983>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1984>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetGroupIDLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetGroupIDLayer::destructor", 
				(void*)addresses::address1984(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1984>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure980>::value
			);
		}

		if constexpr (compare::getTargetColorIndex<Derived, Base, types::pure981>::value) {
			Interface::get()->logInfo(
				"Adding hook at function EffectGameObject::getTargetColorIndex", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"EffectGameObject::getTargetColorIndex", 
				(void*)addresses::address981(), 
				(void*)wrap::getTargetColorIndex<DefaultConv, Derived, Base, types::pure981>::value
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
				(void*)wrap::triggerObject<DefaultConv, Derived, Base, types::pure982>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure96>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure181>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::constructor", 
				(void*)addresses::address181(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure181>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure182>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::init", 
				(void*)addresses::address182(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure182>::value
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
				(void*)wrap::getOpacity<DefaultConv, Derived, Base, types::pure183>::value
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
				(void*)wrap::getDisplayedOpacity<DefaultConv, Derived, Base, types::pure184>::value
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
				(void*)wrap::setOpacity<DefaultConv, Derived, Base, types::pure185>::value
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
				(void*)wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure186>::value
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
				(void*)wrap::isCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure187>::value
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
				(void*)wrap::setCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure188>::value
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
				(void*)wrap::getColor<DefaultConv, Derived, Base, types::pure189>::value
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
				(void*)wrap::getDisplayedColor<DefaultConv, Derived, Base, types::pure190>::value
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
				(void*)wrap::setColor<DefaultConv, Derived, Base, types::pure191>::value
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
				(void*)wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure192>::value
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
				(void*)wrap::isCascadeColorEnabled<DefaultConv, Derived, Base, types::pure193>::value
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
				(void*)wrap::setCascadeColorEnabled<DefaultConv, Derived, Base, types::pure194>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure195>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerRGBA::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerRGBA::destructor", 
				(void*)addresses::address195(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure195>::value
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

		if constexpr (compare::getDelta<Derived, Base, types::pure529>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTouch::getDelta", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTouch::getDelta", 
				(void*)addresses::address529(), 
				(void*)wrap::getDelta<DefaultConv, Derived, Base, types::pure529>::value
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
				(void*)wrap::getLocationInView<DefaultConv, Derived, Base, types::pure530>::value
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
				(void*)wrap::getPreviousLocationInView<DefaultConv, Derived, Base, types::pure531>::value
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
				(void*)wrap::getLocation<DefaultConv, Derived, Base, types::pure532>::value
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

		if constexpr (compare::createDialogLayer<Derived, Base, types::pure851>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::createDialogLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::createDialogLayer", 
				(void*)addresses::address851(), 
				(void*)wrap::createDialogLayer<DefaultConv, Derived, Base, types::pure851>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure854>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::destructor", 
				(void*)addresses::address854(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure854>::value
			);
		}

		if constexpr (compare::onEnter<Derived, Base, types::pure855>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::onEnter", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::onEnter", 
				(void*)addresses::address855(), 
				(void*)wrap::onEnter<DefaultConv, Derived, Base, types::pure855>::value
			);
		}

		if constexpr (compare::ccTouchBegan<Derived, Base, types::pure856>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::ccTouchBegan", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::ccTouchBegan", 
				(void*)addresses::address856(), 
				(void*)wrap::ccTouchBegan<DefaultConv, Derived, Base, types::pure856>::value
			);
		}

		if constexpr (compare::ccTouchMoved<Derived, Base, types::pure857>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::ccTouchMoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::ccTouchMoved", 
				(void*)addresses::address857(), 
				(void*)wrap::ccTouchMoved<DefaultConv, Derived, Base, types::pure857>::value
			);
		}

		if constexpr (compare::ccTouchEnded<Derived, Base, types::pure858>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::ccTouchEnded", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::ccTouchEnded", 
				(void*)addresses::address858(), 
				(void*)wrap::ccTouchEnded<DefaultConv, Derived, Base, types::pure858>::value
			);
		}

		if constexpr (compare::ccTouchCancelled<Derived, Base, types::pure859>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::ccTouchCancelled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::ccTouchCancelled", 
				(void*)addresses::address859(), 
				(void*)wrap::ccTouchCancelled<DefaultConv, Derived, Base, types::pure859>::value
			);
		}

		if constexpr (compare::registerWithTouchDispatcher<Derived, Base, types::pure860>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::registerWithTouchDispatcher", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::registerWithTouchDispatcher", 
				(void*)addresses::address860(), 
				(void*)wrap::registerWithTouchDispatcher<DefaultConv, Derived, Base, types::pure860>::value
			);
		}

		if constexpr (compare::keyBackClicked<Derived, Base, types::pure861>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::keyBackClicked", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::keyBackClicked", 
				(void*)addresses::address861(), 
				(void*)wrap::keyBackClicked<DefaultConv, Derived, Base, types::pure861>::value
			);
		}

		if constexpr (compare::keyDown<Derived, Base, types::pure862>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::keyDown", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::keyDown", 
				(void*)addresses::address862(), 
				(void*)wrap::keyDown<DefaultConv, Derived, Base, types::pure862>::value
			);
		}

		if constexpr (compare::fadeInTextFinished<Derived, Base, types::pure863>::value) {
			Interface::get()->logInfo(
				"Adding hook at function DialogLayer::fadeInTextFinished", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"DialogLayer::fadeInTextFinished", 
				(void*)addresses::address863(), 
				(void*)wrap::fadeInTextFinished<DefaultConv, Derived, Base, types::pure863>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure168>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::constructor", 
				(void*)addresses::address168(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure168>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure169>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::create", 
				(void*)addresses::address169(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure169>::value
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
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure170>::value
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
				(void*)wrap::getBlendFunc<DefaultConv, Derived, Base, types::pure171>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure172>::value
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
				(void*)wrap::initWithColor<DefaultConv, Derived, Base, types::pure173>::value
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
				(void*)wrap::initWithColor<DefaultConv, Derived, Base, types::pure174>::value
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
				(void*)wrap::setBlendFunc<DefaultConv, Derived, Base, types::pure175>::value
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
				(void*)wrap::setColor<DefaultConv, Derived, Base, types::pure176>::value
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
				(void*)wrap::setContentSize<DefaultConv, Derived, Base, types::pure177>::value
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
				(void*)wrap::setOpacity<DefaultConv, Derived, Base, types::pure178>::value
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
				(void*)wrap::updateColor<DefaultConv, Derived, Base, types::pure179>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure180>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCLayerColor::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCLayerColor::destructor", 
				(void*)addresses::address180(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure180>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1229>::value
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

		if constexpr (compare::audioStep<Derived, Base, types::pure660>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AudioEffectsLayer::audioStep", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AudioEffectsLayer::audioStep", 
				(void*)addresses::address660(), 
				(void*)wrap::audioStep<DefaultConv, Derived, Base, types::pure660>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure661>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AudioEffectsLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AudioEffectsLayer::create", 
				(void*)addresses::address661(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure661>::value
			);
		}

		if constexpr (compare::resetAudioVars<Derived, Base, types::pure662>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AudioEffectsLayer::resetAudioVars", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AudioEffectsLayer::resetAudioVars", 
				(void*)addresses::address662(), 
				(void*)wrap::resetAudioVars<DefaultConv, Derived, Base, types::pure662>::value
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

		if constexpr (compare::pop<Derived, Base, types::pure402>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCPoolManager::pop", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCPoolManager::pop", 
				(void*)addresses::address402(), 
				(void*)wrap::pop<DefaultConv, Derived, Base, types::pure402>::value
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
				(void*)wrap::sharedPoolManager<DefaultConv, Derived, Base, types::pure403>::value
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

		if constexpr (compare::create<Derived, Base, types::pure746>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCNodeContainer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCNodeContainer::create", 
				(void*)addresses::address746(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure746>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure747>::value
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
				(void*)wrap::visit<DefaultConv, Derived, Base, types::pure748>::value
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
				(void*)wrap::updateTexture<DefaultConv, Derived, Base, types::pure129>::value
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
				(void*)wrap::setString<DefaultConv, Derived, Base, types::pure130>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1092>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJCommentListLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJCommentListLayer::destructor", 
				(void*)addresses::address1092(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1092>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1093>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJCommentListLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJCommentListLayer::create", 
				(void*)addresses::address1093(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1093>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure372>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::constructor", 
				(void*)addresses::address372(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure372>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure373>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::destructor", 
				(void*)addresses::address373(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure373>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure374>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCNodeRGBA::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCNodeRGBA::init", 
				(void*)addresses::address374(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure374>::value
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
				(void*)wrap::getOpacity<DefaultConv, Derived, Base, types::pure375>::value
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
				(void*)wrap::getDisplayedOpacity<DefaultConv, Derived, Base, types::pure376>::value
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
				(void*)wrap::setOpacity<DefaultConv, Derived, Base, types::pure377>::value
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
				(void*)wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure378>::value
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
				(void*)wrap::isCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure379>::value
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
				(void*)wrap::setCascadeOpacityEnabled<DefaultConv, Derived, Base, types::pure380>::value
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
				(void*)wrap::getColor<DefaultConv, Derived, Base, types::pure381>::value
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
				(void*)wrap::getDisplayedColor<DefaultConv, Derived, Base, types::pure382>::value
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
				(void*)wrap::setColor<DefaultConv, Derived, Base, types::pure383>::value
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
				(void*)wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure384>::value
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
				(void*)wrap::isCascadeColorEnabled<DefaultConv, Derived, Base, types::pure385>::value
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
				(void*)wrap::setCascadeColorEnabled<DefaultConv, Derived, Base, types::pure386>::value
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
				(void*)wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure117>::value
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
				(void*)wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure118>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure119>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeyboardHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeyboardHandler::destructor", 
				(void*)addresses::address119(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure119>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure720>::value
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
				(void*)wrap::setSizeMult<DefaultConv, Derived, Base, types::pure721>::value
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
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure722>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure724>::value
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
			Interface::get()->addHook(
				"cocos2d::CCArray::addObject", 
				(void*)addresses::address9(), 
				(void*)wrap::addObject<DefaultConv, Derived, Base, types::pure9>::value
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
				(void*)wrap::addObjectNew<DefaultConv, Derived, Base, types::pure10>::value
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
				(void*)wrap::addObjectsFromArray<DefaultConv, Derived, Base, types::pure11>::value
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
				(void*)wrap::containsObject<DefaultConv, Derived, Base, types::pure12>::value
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
				(void*)wrap::count<DefaultConv, Derived, Base, types::pure13>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure14>::value
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
				(void*)wrap::createWithObject<DefaultConv, Derived, Base, types::pure15>::value
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
				(void*)wrap::fastRemoveObject<DefaultConv, Derived, Base, types::pure16>::value
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
				(void*)wrap::fastRemoveObjectAtIndex<DefaultConv, Derived, Base, types::pure17>::value
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
				(void*)wrap::fastRemoveObjectAtIndexNew<DefaultConv, Derived, Base, types::pure18>::value
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
				(void*)wrap::lastObject<DefaultConv, Derived, Base, types::pure19>::value
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
				(void*)wrap::objectAtIndex<DefaultConv, Derived, Base, types::pure20>::value
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
				(void*)wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure21>::value
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
				(void*)wrap::removeLastObject<DefaultConv, Derived, Base, types::pure22>::value
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
				(void*)wrap::removeObject<DefaultConv, Derived, Base, types::pure23>::value
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
				(void*)wrap::removeObjectAtIndex<DefaultConv, Derived, Base, types::pure24>::value
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
				(void*)wrap::stringAtIndex<DefaultConv, Derived, Base, types::pure25>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure680>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure682>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ButtonSprite::create", 
				(void*)addresses::address682(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure682>::value
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
				(void*)wrap::updateBGImage<DefaultConv, Derived, Base, types::pure683>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure684>::value) {
			Interface::get()->logInfo(
				"Adding hook at function ButtonSprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"ButtonSprite::create", 
				(void*)addresses::address684(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure684>::value
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

		if constexpr (compare::getValue<Derived, Base, types::pure2052>::value) {
			Interface::get()->logInfo(
				"Adding hook at function Slider::getValue", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"Slider::getValue", 
				(void*)addresses::address2052(), 
				(void*)wrap::getValue<DefaultConv, Derived, Base, types::pure2052>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2054>::value
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

		if constexpr (compare::create<Derived, Base, types::pure95>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCEaseIn::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCEaseIn::create", 
				(void*)addresses::address95(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure95>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1989>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetItemIDLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetItemIDLayer::create", 
				(void*)addresses::address1989(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1989>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure94>::value
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
struct Modify<Derived, cocos2d::CCMenuItemLabel> : ModifyBase<Modify<Derived, cocos2d::CCMenuItemLabel>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItemLabel>>::ModifyBase;
	using Base = cocos2d::CCMenuItemLabel;
	static void apply() {
		using namespace geode::core::meta;
		using namespace geode::core::meta::x86;

		if constexpr (compare::destructor<Derived, Base, types::pure227>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemLabel::destructor", 
				(void*)addresses::address227(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure227>::value
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure228>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItemLabel::activate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItemLabel::activate", 
				(void*)addresses::address228(), 
				(void*)wrap::activate<DefaultConv, Derived, Base, types::pure228>::value
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
				(void*)wrap::selected<DefaultConv, Derived, Base, types::pure229>::value
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
				(void*)wrap::unselected<DefaultConv, Derived, Base, types::pure230>::value
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
				(void*)wrap::setEnabled<DefaultConv, Derived, Base, types::pure231>::value
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
				(void*)wrap::getDisabledColor<DefaultConv, Derived, Base, types::pure232>::value
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
				(void*)wrap::setDisabledColor<DefaultConv, Derived, Base, types::pure233>::value
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
				(void*)wrap::getLabel<DefaultConv, Derived, Base, types::pure234>::value
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
				(void*)wrap::setLabel<DefaultConv, Derived, Base, types::pure235>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure53>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::destructor", 
				(void*)addresses::address53(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure53>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure54>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDirector::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDirector::init", 
				(void*)addresses::address54(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure54>::value
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
				(void*)wrap::getScheduler<DefaultConv, Derived, Base, types::pure55>::value
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
				(void*)wrap::setScheduler<DefaultConv, Derived, Base, types::pure56>::value
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
				(void*)wrap::getActionManager<DefaultConv, Derived, Base, types::pure57>::value
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
				(void*)wrap::setActionManager<DefaultConv, Derived, Base, types::pure58>::value
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
				(void*)wrap::getTouchDispatcher<DefaultConv, Derived, Base, types::pure59>::value
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
				(void*)wrap::setTouchDispatcher<DefaultConv, Derived, Base, types::pure60>::value
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
				(void*)wrap::getKeypadDispatcher<DefaultConv, Derived, Base, types::pure61>::value
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
				(void*)wrap::setKeypadDispatcher<DefaultConv, Derived, Base, types::pure62>::value
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
				(void*)wrap::getKeyboardDispatcher<DefaultConv, Derived, Base, types::pure63>::value
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
				(void*)wrap::setKeyboardDispatcher<DefaultConv, Derived, Base, types::pure64>::value
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
				(void*)wrap::getMouseDispatcher<DefaultConv, Derived, Base, types::pure65>::value
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
				(void*)wrap::setMouseDispatcher<DefaultConv, Derived, Base, types::pure66>::value
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
				(void*)wrap::getAccelerometer<DefaultConv, Derived, Base, types::pure67>::value
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
				(void*)wrap::setAccelerometer<DefaultConv, Derived, Base, types::pure68>::value
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
				(void*)wrap::getDeltaTime<DefaultConv, Derived, Base, types::pure69>::value
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
				(void*)wrap::getSceneDelegate<DefaultConv, Derived, Base, types::pure70>::value
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
				(void*)wrap::setSceneDelegate<DefaultConv, Derived, Base, types::pure71>::value
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
				(void*)wrap::getWinSize<DefaultConv, Derived, Base, types::pure72>::value
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
				(void*)wrap::pushScene<DefaultConv, Derived, Base, types::pure73>::value
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
				(void*)wrap::replaceScene<DefaultConv, Derived, Base, types::pure74>::value
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
				(void*)wrap::resetSmoothFixCounter<DefaultConv, Derived, Base, types::pure75>::value
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
				(void*)wrap::sharedDirector<DefaultConv, Derived, Base, types::pure76>::value
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
				(void*)wrap::calculateDeltaTime<DefaultConv, Derived, Base, types::pure77>::value
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
				(void*)wrap::calculateMPF<DefaultConv, Derived, Base, types::pure78>::value
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
				(void*)wrap::convertToGL<DefaultConv, Derived, Base, types::pure79>::value
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
				(void*)wrap::drawScene<DefaultConv, Derived, Base, types::pure80>::value
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
				(void*)wrap::setNextScene<DefaultConv, Derived, Base, types::pure81>::value
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
				(void*)wrap::showStats<DefaultConv, Derived, Base, types::pure82>::value
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
				(void*)wrap::updateContentScale<DefaultConv, Derived, Base, types::pure83>::value
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
				(void*)wrap::popSceneWithTransition<DefaultConv, Derived, Base, types::pure84>::value
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

		if constexpr (compare::handlerWithDelegate<Derived, Base, types::pure120>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::handlerWithDelegate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeypadHandler::handlerWithDelegate", 
				(void*)addresses::address120(), 
				(void*)wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure120>::value
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
				(void*)wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure121>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure122>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCKeypadHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCKeypadHandler::destructor", 
				(void*)addresses::address122(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure122>::value
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
				(void*)wrap::getDelegate<DefaultConv, Derived, Base, types::pure123>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure542>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::constructor", 
				(void*)addresses::address542(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure542>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure543>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::create", 
				(void*)addresses::address543(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure543>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure544>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure545>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::extension::CCScale9Sprite::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::extension::CCScale9Sprite::destructor", 
				(void*)addresses::address545(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure545>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure546>::value
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
				(void*)wrap::setContentSize<DefaultConv, Derived, Base, types::pure547>::value
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
				(void*)wrap::visit<DefaultConv, Derived, Base, types::pure548>::value
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
				(void*)wrap::getOpacity<DefaultConv, Derived, Base, types::pure549>::value
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
				(void*)wrap::setOpacity<DefaultConv, Derived, Base, types::pure550>::value
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
				(void*)wrap::updateDisplayedOpacity<DefaultConv, Derived, Base, types::pure551>::value
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
				(void*)wrap::getColor<DefaultConv, Derived, Base, types::pure552>::value
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
				(void*)wrap::setColor<DefaultConv, Derived, Base, types::pure553>::value
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
				(void*)wrap::updateDisplayedColor<DefaultConv, Derived, Base, types::pure554>::value
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
				(void*)wrap::setOpacityModifyRGB<DefaultConv, Derived, Base, types::pure555>::value
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
				(void*)wrap::isOpacityModifyRGB<DefaultConv, Derived, Base, types::pure556>::value
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
				(void*)wrap::getPreferredSize<DefaultConv, Derived, Base, types::pure557>::value
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
				(void*)wrap::setPreferredSize<DefaultConv, Derived, Base, types::pure558>::value
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
				(void*)wrap::getCapInsets<DefaultConv, Derived, Base, types::pure559>::value
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
				(void*)wrap::setCapInsets<DefaultConv, Derived, Base, types::pure560>::value
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
				(void*)wrap::getInsetLeft<DefaultConv, Derived, Base, types::pure561>::value
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
				(void*)wrap::setInsetLeft<DefaultConv, Derived, Base, types::pure562>::value
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
				(void*)wrap::getInsetTop<DefaultConv, Derived, Base, types::pure563>::value
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
				(void*)wrap::setInsetTop<DefaultConv, Derived, Base, types::pure564>::value
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
				(void*)wrap::getInsetRight<DefaultConv, Derived, Base, types::pure565>::value
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
				(void*)wrap::setInsetRight<DefaultConv, Derived, Base, types::pure566>::value
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
				(void*)wrap::getInsetBottom<DefaultConv, Derived, Base, types::pure567>::value
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
				(void*)wrap::setInsetBottom<DefaultConv, Derived, Base, types::pure568>::value
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
				(void*)wrap::initWithBatchNode<DefaultConv, Derived, Base, types::pure569>::value
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
				(void*)wrap::initWithBatchNode<DefaultConv, Derived, Base, types::pure570>::value
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
				(void*)wrap::initWithFile<DefaultConv, Derived, Base, types::pure571>::value
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
				(void*)wrap::initWithFile<DefaultConv, Derived, Base, types::pure572>::value
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
				(void*)wrap::initWithFile<DefaultConv, Derived, Base, types::pure573>::value
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
				(void*)wrap::initWithFile<DefaultConv, Derived, Base, types::pure574>::value
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
				(void*)wrap::initWithSpriteFrame<DefaultConv, Derived, Base, types::pure575>::value
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
				(void*)wrap::initWithSpriteFrame<DefaultConv, Derived, Base, types::pure576>::value
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
				(void*)wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure577>::value
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
				(void*)wrap::initWithSpriteFrameName<DefaultConv, Derived, Base, types::pure578>::value
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
				(void*)wrap::updateWithBatchNode<DefaultConv, Derived, Base, types::pure579>::value
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
				(void*)wrap::setSpriteFrame<DefaultConv, Derived, Base, types::pure580>::value
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

		if constexpr (compare::init<Derived, Base, types::pure1113>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::init", 
				(void*)addresses::address1113(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1113>::value
			);
		}

		if constexpr (compare::activeColorForIndex<Derived, Base, types::pure1114>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::activeColorForIndex", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::activeColorForIndex", 
				(void*)addresses::address1114(), 
				(void*)wrap::activeColorForIndex<DefaultConv, Derived, Base, types::pure1114>::value
			);
		}

		if constexpr (compare::activeOpacityForIndex<Derived, Base, types::pure1115>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::activeOpacityForIndex", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::activeOpacityForIndex", 
				(void*)addresses::address1115(), 
				(void*)wrap::activeOpacityForIndex<DefaultConv, Derived, Base, types::pure1115>::value
			);
		}

		if constexpr (compare::addAllInheritedColorActions<Derived, Base, types::pure1116>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::addAllInheritedColorActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::addAllInheritedColorActions", 
				(void*)addresses::address1116(), 
				(void*)wrap::addAllInheritedColorActions<DefaultConv, Derived, Base, types::pure1116>::value
			);
		}

		if constexpr (compare::addGroupPulseEffect<Derived, Base, types::pure1117>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::addGroupPulseEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::addGroupPulseEffect", 
				(void*)addresses::address1117(), 
				(void*)wrap::addGroupPulseEffect<DefaultConv, Derived, Base, types::pure1117>::value
			);
		}

		if constexpr (compare::calculateBaseActiveColors<Derived, Base, types::pure1118>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::calculateBaseActiveColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::calculateBaseActiveColors", 
				(void*)addresses::address1118(), 
				(void*)wrap::calculateBaseActiveColors<DefaultConv, Derived, Base, types::pure1118>::value
			);
		}

		if constexpr (compare::calculateInheritedColor<Derived, Base, types::pure1119>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::calculateInheritedColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::calculateInheritedColor", 
				(void*)addresses::address1119(), 
				(void*)wrap::calculateInheritedColor<DefaultConv, Derived, Base, types::pure1119>::value
			);
		}

		if constexpr (compare::calculateLightBGColor<Derived, Base, types::pure1120>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::calculateLightBGColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::calculateLightBGColor", 
				(void*)addresses::address1120(), 
				(void*)wrap::calculateLightBGColor<DefaultConv, Derived, Base, types::pure1120>::value
			);
		}

		if constexpr (compare::colorActionChanged<Derived, Base, types::pure1121>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorActionChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::colorActionChanged", 
				(void*)addresses::address1121(), 
				(void*)wrap::colorActionChanged<DefaultConv, Derived, Base, types::pure1121>::value
			);
		}

		if constexpr (compare::colorExists<Derived, Base, types::pure1122>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorExists", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::colorExists", 
				(void*)addresses::address1122(), 
				(void*)wrap::colorExists<DefaultConv, Derived, Base, types::pure1122>::value
			);
		}

		if constexpr (compare::colorForEffect<Derived, Base, types::pure1123>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorForEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::colorForEffect", 
				(void*)addresses::address1123(), 
				(void*)wrap::colorForEffect<DefaultConv, Derived, Base, types::pure1123>::value
			);
		}

		if constexpr (compare::colorForGroupID<Derived, Base, types::pure1124>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorForGroupID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::colorForGroupID", 
				(void*)addresses::address1124(), 
				(void*)wrap::colorForGroupID<DefaultConv, Derived, Base, types::pure1124>::value
			);
		}

		if constexpr (compare::colorForIndex<Derived, Base, types::pure1125>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorForIndex", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::colorForIndex", 
				(void*)addresses::address1125(), 
				(void*)wrap::colorForIndex<DefaultConv, Derived, Base, types::pure1125>::value
			);
		}

		if constexpr (compare::colorForPulseEffect<Derived, Base, types::pure1126>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::colorForPulseEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::colorForPulseEffect", 
				(void*)addresses::address1126(), 
				(void*)wrap::colorForPulseEffect<DefaultConv, Derived, Base, types::pure1126>::value
			);
		}

		if constexpr (compare::countChangedForItem<Derived, Base, types::pure1127>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::countChangedForItem", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::countChangedForItem", 
				(void*)addresses::address1127(), 
				(void*)wrap::countChangedForItem<DefaultConv, Derived, Base, types::pure1127>::value
			);
		}

		if constexpr (compare::countForItem<Derived, Base, types::pure1128>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::countForItem", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::countForItem", 
				(void*)addresses::address1128(), 
				(void*)wrap::countForItem<DefaultConv, Derived, Base, types::pure1128>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure1129>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::create", 
				(void*)addresses::address1129(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1129>::value
			);
		}

		if constexpr (compare::createFollowCommand<Derived, Base, types::pure1130>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::createFollowCommand", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::createFollowCommand", 
				(void*)addresses::address1130(), 
				(void*)wrap::createFollowCommand<DefaultConv, Derived, Base, types::pure1130>::value
			);
		}

		if constexpr (compare::createMoveCommand<Derived, Base, types::pure1131>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::createMoveCommand", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::createMoveCommand", 
				(void*)addresses::address1131(), 
				(void*)wrap::createMoveCommand<DefaultConv, Derived, Base, types::pure1131>::value
			);
		}

		if constexpr (compare::createPlayerFollowCommand<Derived, Base, types::pure1132>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::createPlayerFollowCommand", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::createPlayerFollowCommand", 
				(void*)addresses::address1132(), 
				(void*)wrap::createPlayerFollowCommand<DefaultConv, Derived, Base, types::pure1132>::value
			);
		}

		if constexpr (compare::createRotateCommand<Derived, Base, types::pure1133>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::createRotateCommand", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::createRotateCommand", 
				(void*)addresses::address1133(), 
				(void*)wrap::createRotateCommand<DefaultConv, Derived, Base, types::pure1133>::value
			);
		}

		if constexpr (compare::getAllColorActions<Derived, Base, types::pure1134>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getAllColorActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::getAllColorActions", 
				(void*)addresses::address1134(), 
				(void*)wrap::getAllColorActions<DefaultConv, Derived, Base, types::pure1134>::value
			);
		}

		if constexpr (compare::getAllColorSprites<Derived, Base, types::pure1135>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getAllColorSprites", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::getAllColorSprites", 
				(void*)addresses::address1135(), 
				(void*)wrap::getAllColorSprites<DefaultConv, Derived, Base, types::pure1135>::value
			);
		}

		if constexpr (compare::getColorAction<Derived, Base, types::pure1136>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getColorAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::getColorAction", 
				(void*)addresses::address1136(), 
				(void*)wrap::getColorAction<DefaultConv, Derived, Base, types::pure1136>::value
			);
		}

		if constexpr (compare::getColorSprite<Derived, Base, types::pure1137>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getColorSprite", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::getColorSprite", 
				(void*)addresses::address1137(), 
				(void*)wrap::getColorSprite<DefaultConv, Derived, Base, types::pure1137>::value
			);
		}

		if constexpr (compare::getCurrentStateString<Derived, Base, types::pure1138>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getCurrentStateString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::getCurrentStateString", 
				(void*)addresses::address1138(), 
				(void*)wrap::getCurrentStateString<DefaultConv, Derived, Base, types::pure1138>::value
			);
		}

		if constexpr (compare::getLoadedMoveOffset<Derived, Base, types::pure1139>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getLoadedMoveOffset", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::getLoadedMoveOffset", 
				(void*)addresses::address1139(), 
				(void*)wrap::getLoadedMoveOffset<DefaultConv, Derived, Base, types::pure1139>::value
			);
		}

		if constexpr (compare::getMixedColor<Derived, Base, types::pure1140>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getMixedColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::getMixedColor", 
				(void*)addresses::address1140(), 
				(void*)wrap::getMixedColor<DefaultConv, Derived, Base, types::pure1140>::value
			);
		}

		if constexpr (compare::getOpacityActionForGroup<Derived, Base, types::pure1141>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getOpacityActionForGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::getOpacityActionForGroup", 
				(void*)addresses::address1141(), 
				(void*)wrap::getOpacityActionForGroup<DefaultConv, Derived, Base, types::pure1141>::value
			);
		}

		if constexpr (compare::getSaveString<Derived, Base, types::pure1142>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::getSaveString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::getSaveString", 
				(void*)addresses::address1142(), 
				(void*)wrap::getSaveString<DefaultConv, Derived, Base, types::pure1142>::value
			);
		}

		if constexpr (compare::handleObjectCollision<Derived, Base, types::pure1143>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::handleObjectCollision", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::handleObjectCollision", 
				(void*)addresses::address1143(), 
				(void*)wrap::handleObjectCollision<DefaultConv, Derived, Base, types::pure1143>::value
			);
		}

		if constexpr (compare::hasActiveDualTouch<Derived, Base, types::pure1144>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::hasActiveDualTouch", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::hasActiveDualTouch", 
				(void*)addresses::address1144(), 
				(void*)wrap::hasActiveDualTouch<DefaultConv, Derived, Base, types::pure1144>::value
			);
		}

		if constexpr (compare::hasBeenTriggered<Derived, Base, types::pure1145>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::hasBeenTriggered", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::hasBeenTriggered", 
				(void*)addresses::address1145(), 
				(void*)wrap::hasBeenTriggered<DefaultConv, Derived, Base, types::pure1145>::value
			);
		}

		if constexpr (compare::hasPulseEffectForGroupID<Derived, Base, types::pure1146>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::hasPulseEffectForGroupID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::hasPulseEffectForGroupID", 
				(void*)addresses::address1146(), 
				(void*)wrap::hasPulseEffectForGroupID<DefaultConv, Derived, Base, types::pure1146>::value
			);
		}

		if constexpr (compare::isGroupEnabled<Derived, Base, types::pure1147>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::isGroupEnabled", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::isGroupEnabled", 
				(void*)addresses::address1147(), 
				(void*)wrap::isGroupEnabled<DefaultConv, Derived, Base, types::pure1147>::value
			);
		}

		if constexpr (compare::keyForGroupIDColor<Derived, Base, types::pure1148>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::keyForGroupIDColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::keyForGroupIDColor", 
				(void*)addresses::address1148(), 
				(void*)wrap::keyForGroupIDColor<DefaultConv, Derived, Base, types::pure1148>::value
			);
		}

		if constexpr (compare::loadState<Derived, Base, types::pure1149>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::loadState", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::loadState", 
				(void*)addresses::address1149(), 
				(void*)wrap::loadState<DefaultConv, Derived, Base, types::pure1149>::value
			);
		}

		if constexpr (compare::objectsCollided<Derived, Base, types::pure1150>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::objectsCollided", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::objectsCollided", 
				(void*)addresses::address1150(), 
				(void*)wrap::objectsCollided<DefaultConv, Derived, Base, types::pure1150>::value
			);
		}

		if constexpr (compare::opacityForIndex<Derived, Base, types::pure1151>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::opacityForIndex", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::opacityForIndex", 
				(void*)addresses::address1151(), 
				(void*)wrap::opacityForIndex<DefaultConv, Derived, Base, types::pure1151>::value
			);
		}

		if constexpr (compare::opacityModForGroup<Derived, Base, types::pure1152>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::opacityModForGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::opacityModForGroup", 
				(void*)addresses::address1152(), 
				(void*)wrap::opacityModForGroup<DefaultConv, Derived, Base, types::pure1152>::value
			);
		}

		if constexpr (compare::playerButton<Derived, Base, types::pure1153>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::playerButton", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::playerButton", 
				(void*)addresses::address1153(), 
				(void*)wrap::playerButton<DefaultConv, Derived, Base, types::pure1153>::value
			);
		}

		if constexpr (compare::playerDied<Derived, Base, types::pure1154>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::playerDied", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::playerDied", 
				(void*)addresses::address1154(), 
				(void*)wrap::playerDied<DefaultConv, Derived, Base, types::pure1154>::value
			);
		}

		if constexpr (compare::postCollisionCheck<Derived, Base, types::pure1155>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::postCollisionCheck", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::postCollisionCheck", 
				(void*)addresses::address1155(), 
				(void*)wrap::postCollisionCheck<DefaultConv, Derived, Base, types::pure1155>::value
			);
		}

		if constexpr (compare::preCollisionCheck<Derived, Base, types::pure1156>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::preCollisionCheck", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::preCollisionCheck", 
				(void*)addresses::address1156(), 
				(void*)wrap::preCollisionCheck<DefaultConv, Derived, Base, types::pure1156>::value
			);
		}

		if constexpr (compare::prepareMoveActions<Derived, Base, types::pure1157>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::prepareMoveActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::prepareMoveActions", 
				(void*)addresses::address1157(), 
				(void*)wrap::prepareMoveActions<DefaultConv, Derived, Base, types::pure1157>::value
			);
		}

		if constexpr (compare::processColors<Derived, Base, types::pure1158>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::processColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::processColors", 
				(void*)addresses::address1158(), 
				(void*)wrap::processColors<DefaultConv, Derived, Base, types::pure1158>::value
			);
		}

		if constexpr (compare::processCopyColorPulseActions<Derived, Base, types::pure1159>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::processCopyColorPulseActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::processCopyColorPulseActions", 
				(void*)addresses::address1159(), 
				(void*)wrap::processCopyColorPulseActions<DefaultConv, Derived, Base, types::pure1159>::value
			);
		}

		if constexpr (compare::processInheritedColors<Derived, Base, types::pure1160>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::processInheritedColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::processInheritedColors", 
				(void*)addresses::address1160(), 
				(void*)wrap::processInheritedColors<DefaultConv, Derived, Base, types::pure1160>::value
			);
		}

		if constexpr (compare::processPulseActions<Derived, Base, types::pure1161>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::processPulseActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::processPulseActions", 
				(void*)addresses::address1161(), 
				(void*)wrap::processPulseActions<DefaultConv, Derived, Base, types::pure1161>::value
			);
		}

		if constexpr (compare::registerCollisionTrigger<Derived, Base, types::pure1162>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::registerCollisionTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::registerCollisionTrigger", 
				(void*)addresses::address1162(), 
				(void*)wrap::registerCollisionTrigger<DefaultConv, Derived, Base, types::pure1162>::value
			);
		}

		if constexpr (compare::removeAllPulseActions<Derived, Base, types::pure1163>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::removeAllPulseActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::removeAllPulseActions", 
				(void*)addresses::address1163(), 
				(void*)wrap::removeAllPulseActions<DefaultConv, Derived, Base, types::pure1163>::value
			);
		}

		if constexpr (compare::removeColorAction<Derived, Base, types::pure1164>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::removeColorAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::removeColorAction", 
				(void*)addresses::address1164(), 
				(void*)wrap::removeColorAction<DefaultConv, Derived, Base, types::pure1164>::value
			);
		}

		if constexpr (compare::reset<Derived, Base, types::pure1165>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::reset", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::reset", 
				(void*)addresses::address1165(), 
				(void*)wrap::reset<DefaultConv, Derived, Base, types::pure1165>::value
			);
		}

		if constexpr (compare::resetColorCache<Derived, Base, types::pure1166>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::resetColorCache", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::resetColorCache", 
				(void*)addresses::address1166(), 
				(void*)wrap::resetColorCache<DefaultConv, Derived, Base, types::pure1166>::value
			);
		}

		if constexpr (compare::resetEffects<Derived, Base, types::pure1167>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::resetEffects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::resetEffects", 
				(void*)addresses::address1167(), 
				(void*)wrap::resetEffects<DefaultConv, Derived, Base, types::pure1167>::value
			);
		}

		if constexpr (compare::resetMoveActions<Derived, Base, types::pure1168>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::resetMoveActions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::resetMoveActions", 
				(void*)addresses::address1168(), 
				(void*)wrap::resetMoveActions<DefaultConv, Derived, Base, types::pure1168>::value
			);
		}

		if constexpr (compare::resetToggledGroups<Derived, Base, types::pure1169>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::resetToggledGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::resetToggledGroups", 
				(void*)addresses::address1169(), 
				(void*)wrap::resetToggledGroups<DefaultConv, Derived, Base, types::pure1169>::value
			);
		}

		if constexpr (compare::resetTriggeredIDs<Derived, Base, types::pure1170>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::resetTriggeredIDs", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::resetTriggeredIDs", 
				(void*)addresses::address1170(), 
				(void*)wrap::resetTriggeredIDs<DefaultConv, Derived, Base, types::pure1170>::value
			);
		}

		if constexpr (compare::runCountTrigger<Derived, Base, types::pure1171>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::runCountTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::runCountTrigger", 
				(void*)addresses::address1171(), 
				(void*)wrap::runCountTrigger<DefaultConv, Derived, Base, types::pure1171>::value
			);
		}

		if constexpr (compare::runDeathTrigger<Derived, Base, types::pure1172>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::runDeathTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::runDeathTrigger", 
				(void*)addresses::address1172(), 
				(void*)wrap::runDeathTrigger<DefaultConv, Derived, Base, types::pure1172>::value
			);
		}

		if constexpr (compare::runOpacityActionOnGroup<Derived, Base, types::pure1173>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::runOpacityActionOnGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::runOpacityActionOnGroup", 
				(void*)addresses::address1173(), 
				(void*)wrap::runOpacityActionOnGroup<DefaultConv, Derived, Base, types::pure1173>::value
			);
		}

		if constexpr (compare::runPulseEffect<Derived, Base, types::pure1174>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::runPulseEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::runPulseEffect", 
				(void*)addresses::address1174(), 
				(void*)wrap::runPulseEffect<DefaultConv, Derived, Base, types::pure1174>::value
			);
		}

		if constexpr (compare::runTouchTriggerCommand<Derived, Base, types::pure1175>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::runTouchTriggerCommand", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::runTouchTriggerCommand", 
				(void*)addresses::address1175(), 
				(void*)wrap::runTouchTriggerCommand<DefaultConv, Derived, Base, types::pure1175>::value
			);
		}

		if constexpr (compare::setColorAction<Derived, Base, types::pure1176>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::setColorAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::setColorAction", 
				(void*)addresses::address1176(), 
				(void*)wrap::setColorAction<DefaultConv, Derived, Base, types::pure1176>::value
			);
		}

		if constexpr (compare::setFollowing<Derived, Base, types::pure1177>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::setFollowing", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::setFollowing", 
				(void*)addresses::address1177(), 
				(void*)wrap::setFollowing<DefaultConv, Derived, Base, types::pure1177>::value
			);
		}

		if constexpr (compare::setupFromString<Derived, Base, types::pure1178>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::setupFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::setupFromString", 
				(void*)addresses::address1178(), 
				(void*)wrap::setupFromString<DefaultConv, Derived, Base, types::pure1178>::value
			);
		}

		if constexpr (compare::shouldBlend<Derived, Base, types::pure1179>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::shouldBlend", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::shouldBlend", 
				(void*)addresses::address1179(), 
				(void*)wrap::shouldBlend<DefaultConv, Derived, Base, types::pure1179>::value
			);
		}

		if constexpr (compare::spawnGroup<Derived, Base, types::pure1180>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::spawnGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::spawnGroup", 
				(void*)addresses::address1180(), 
				(void*)wrap::spawnGroup<DefaultConv, Derived, Base, types::pure1180>::value
			);
		}

		if constexpr (compare::stopActionsForTrigger<Derived, Base, types::pure1181>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::stopActionsForTrigger", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::stopActionsForTrigger", 
				(void*)addresses::address1181(), 
				(void*)wrap::stopActionsForTrigger<DefaultConv, Derived, Base, types::pure1181>::value
			);
		}

		if constexpr (compare::stopMoveActionsForGroup<Derived, Base, types::pure1182>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::stopMoveActionsForGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::stopMoveActionsForGroup", 
				(void*)addresses::address1182(), 
				(void*)wrap::stopMoveActionsForGroup<DefaultConv, Derived, Base, types::pure1182>::value
			);
		}

		if constexpr (compare::storeTriggeredID<Derived, Base, types::pure1183>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::storeTriggeredID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::storeTriggeredID", 
				(void*)addresses::address1183(), 
				(void*)wrap::storeTriggeredID<DefaultConv, Derived, Base, types::pure1183>::value
			);
		}

		if constexpr (compare::toggleGroup<Derived, Base, types::pure1184>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::toggleGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::toggleGroup", 
				(void*)addresses::address1184(), 
				(void*)wrap::toggleGroup<DefaultConv, Derived, Base, types::pure1184>::value
			);
		}

		if constexpr (compare::traverseInheritanceChain<Derived, Base, types::pure1185>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::traverseInheritanceChain", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::traverseInheritanceChain", 
				(void*)addresses::address1185(), 
				(void*)wrap::traverseInheritanceChain<DefaultConv, Derived, Base, types::pure1185>::value
			);
		}

		if constexpr (compare::updateActiveOpacityEffects<Derived, Base, types::pure1186>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateActiveOpacityEffects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::updateActiveOpacityEffects", 
				(void*)addresses::address1186(), 
				(void*)wrap::updateActiveOpacityEffects<DefaultConv, Derived, Base, types::pure1186>::value
			);
		}

		if constexpr (compare::updateColorAction<Derived, Base, types::pure1187>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateColorAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::updateColorAction", 
				(void*)addresses::address1187(), 
				(void*)wrap::updateColorAction<DefaultConv, Derived, Base, types::pure1187>::value
			);
		}

		if constexpr (compare::updateColorEffects<Derived, Base, types::pure1188>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateColorEffects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::updateColorEffects", 
				(void*)addresses::address1188(), 
				(void*)wrap::updateColorEffects<DefaultConv, Derived, Base, types::pure1188>::value
			);
		}

		if constexpr (compare::updateColors<Derived, Base, types::pure1189>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::updateColors", 
				(void*)addresses::address1189(), 
				(void*)wrap::updateColors<DefaultConv, Derived, Base, types::pure1189>::value
			);
		}

		if constexpr (compare::updateEffects<Derived, Base, types::pure1190>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateEffects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::updateEffects", 
				(void*)addresses::address1190(), 
				(void*)wrap::updateEffects<DefaultConv, Derived, Base, types::pure1190>::value
			);
		}

		if constexpr (compare::updateOpacityAction<Derived, Base, types::pure1191>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateOpacityAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::updateOpacityAction", 
				(void*)addresses::address1191(), 
				(void*)wrap::updateOpacityAction<DefaultConv, Derived, Base, types::pure1191>::value
			);
		}

		if constexpr (compare::updateOpacityEffects<Derived, Base, types::pure1192>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateOpacityEffects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::updateOpacityEffects", 
				(void*)addresses::address1192(), 
				(void*)wrap::updateOpacityEffects<DefaultConv, Derived, Base, types::pure1192>::value
			);
		}

		if constexpr (compare::updatePulseEffects<Derived, Base, types::pure1193>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updatePulseEffects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::updatePulseEffects", 
				(void*)addresses::address1193(), 
				(void*)wrap::updatePulseEffects<DefaultConv, Derived, Base, types::pure1193>::value
			);
		}

		if constexpr (compare::updateSpawnTriggers<Derived, Base, types::pure1194>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::updateSpawnTriggers", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::updateSpawnTriggers", 
				(void*)addresses::address1194(), 
				(void*)wrap::updateSpawnTriggers<DefaultConv, Derived, Base, types::pure1194>::value
			);
		}

		if constexpr (compare::wasFollowing<Derived, Base, types::pure1195>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::wasFollowing", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::wasFollowing", 
				(void*)addresses::address1195(), 
				(void*)wrap::wasFollowing<DefaultConv, Derived, Base, types::pure1195>::value
			);
		}

		if constexpr (compare::wouldCreateLoop<Derived, Base, types::pure1196>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::wouldCreateLoop", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::wouldCreateLoop", 
				(void*)addresses::address1196(), 
				(void*)wrap::wouldCreateLoop<DefaultConv, Derived, Base, types::pure1196>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure1197>::value) {
			Interface::get()->logInfo(
				"Adding hook at function GJEffectManager::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"GJEffectManager::destructor", 
				(void*)addresses::address1197(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1197>::value
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

		if constexpr (compare::addImage<Derived, Base, types::pure526>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCTextureCache::addImage", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCTextureCache::addImage", 
				(void*)addresses::address526(), 
				(void*)wrap::addImage<DefaultConv, Derived, Base, types::pure526>::value
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
				(void*)wrap::sharedTextureCache<DefaultConv, Derived, Base, types::pure527>::value
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

		if constexpr (compare::create<Derived, Base, types::pure106>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCHide::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCHide::create", 
				(void*)addresses::address106(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure106>::value
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

		if constexpr (compare::create<Derived, Base, types::pure702>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCCircleWave::create", 
				(void*)addresses::address702(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure702>::value
			);
		}

		if constexpr (compare::create<Derived, Base, types::pure703>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCCircleWave::create", 
				(void*)addresses::address703(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure703>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure704>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CCCircleWave::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CCCircleWave::init", 
				(void*)addresses::address704(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure704>::value
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
				(void*)wrap::followObject<DefaultConv, Derived, Base, types::pure705>::value
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
				(void*)wrap::updatePosition<DefaultConv, Derived, Base, types::pure706>::value
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

		if constexpr (compare::create<Derived, Base, types::pure1661>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PauseLayer::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PauseLayer::create", 
				(void*)addresses::address1661(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1661>::value
			);
		}

		if constexpr (compare::onEdit<Derived, Base, types::pure1662>::value) {
			Interface::get()->logInfo(
				"Adding hook at function PauseLayer::onEdit", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"PauseLayer::onEdit", 
				(void*)addresses::address1662(), 
				(void*)wrap::onEdit<DefaultConv, Derived, Base, types::pure1662>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure216>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::destructor", 
				(void*)addresses::address216(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure216>::value
			);
		}

		if constexpr (compare::activate<Derived, Base, types::pure217>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMenuItem::activate", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMenuItem::activate", 
				(void*)addresses::address217(), 
				(void*)wrap::activate<DefaultConv, Derived, Base, types::pure217>::value
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
				(void*)wrap::selected<DefaultConv, Derived, Base, types::pure218>::value
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
				(void*)wrap::unselected<DefaultConv, Derived, Base, types::pure219>::value
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
				(void*)wrap::registerScriptTapHandler<DefaultConv, Derived, Base, types::pure220>::value
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
				(void*)wrap::unregisterScriptTapHandler<DefaultConv, Derived, Base, types::pure221>::value
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
				(void*)wrap::isEnabled<DefaultConv, Derived, Base, types::pure222>::value
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
				(void*)wrap::setEnabled<DefaultConv, Derived, Base, types::pure223>::value
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
				(void*)wrap::isSelected<DefaultConv, Derived, Base, types::pure224>::value
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
				(void*)wrap::rect<DefaultConv, Derived, Base, types::pure225>::value
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

		if constexpr (compare::clear<Derived, Base, types::pure85>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::clear", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDrawNode::clear", 
				(void*)addresses::address85(), 
				(void*)wrap::clear<DefaultConv, Derived, Base, types::pure85>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure86>::value
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
				(void*)wrap::drawPolygon<DefaultConv, Derived, Base, types::pure87>::value
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
				(void*)wrap::drawSegment<DefaultConv, Derived, Base, types::pure88>::value
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
				(void*)wrap::getBlendFunc<DefaultConv, Derived, Base, types::pure89>::value
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
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure90>::value
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
				(void*)wrap::setBlendFunc<DefaultConv, Derived, Base, types::pure91>::value
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
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure92>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure93>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDrawNode::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDrawNode::destructor", 
				(void*)addresses::address93(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure93>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure2059>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SongInfoObject::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SongInfoObject::destructor", 
				(void*)addresses::address2059(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure2059>::value
			);
		}

		if constexpr (compare::encodeWithCoder<Derived, Base, types::pure2060>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SongInfoObject::encodeWithCoder", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SongInfoObject::encodeWithCoder", 
				(void*)addresses::address2060(), 
				(void*)wrap::encodeWithCoder<DefaultConv, Derived, Base, types::pure2060>::value
			);
		}

		if constexpr (compare::canEncode<Derived, Base, types::pure2061>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SongInfoObject::canEncode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SongInfoObject::canEncode", 
				(void*)addresses::address2061(), 
				(void*)wrap::canEncode<DefaultConv, Derived, Base, types::pure2061>::value
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

		if constexpr (compare::bgScale<Derived, Base, types::pure646>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::bgScale", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AppDelegate::bgScale", 
				(void*)addresses::address646(), 
				(void*)wrap::bgScale<DefaultConv, Derived, Base, types::pure646>::value
			);
		}

		if constexpr (compare::applicationDidFinishLaunching<Derived, Base, types::pure647>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::applicationDidFinishLaunching", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AppDelegate::applicationDidFinishLaunching", 
				(void*)addresses::address647(), 
				(void*)wrap::applicationDidFinishLaunching<DefaultConv, Derived, Base, types::pure647>::value
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
				(void*)wrap::applicationDidEnterBackground<DefaultConv, Derived, Base, types::pure648>::value
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
				(void*)wrap::applicationWillEnterForeground<DefaultConv, Derived, Base, types::pure649>::value
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
				(void*)wrap::applicationWillBecomeActive<DefaultConv, Derived, Base, types::pure650>::value
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
				(void*)wrap::applicationWillResignActive<DefaultConv, Derived, Base, types::pure651>::value
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
				(void*)wrap::trySaveGame<DefaultConv, Derived, Base, types::pure652>::value
			);
		}

		if constexpr (compare::willSwitchToScene<Derived, Base, types::pure653>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::willSwitchToScene", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AppDelegate::willSwitchToScene", 
				(void*)addresses::address653(), 
				(void*)wrap::willSwitchToScene<DefaultConv, Derived, Base, types::pure653>::value
			);
		}

		if constexpr (compare::get<Derived, Base, types::pure654>::value) {
			Interface::get()->logInfo(
				"Adding hook at function AppDelegate::get", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"AppDelegate::get", 
				(void*)addresses::address654(), 
				(void*)wrap::get<DefaultConv, Derived, Base, types::pure654>::value
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

		if constexpr (compare::create<Derived, Base, types::pure41>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCDelayTime::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCDelayTime::create", 
				(void*)addresses::address41(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure41>::value
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
			Interface::get()->addHook(
				"cocos2d::CCBezierTo::create", 
				(void*)addresses::address26(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure26>::value
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
				(void*)wrap::addSpriteFramesWithFile<DefaultConv, Derived, Base, types::pure490>::value
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
				(void*)wrap::sharedSpriteFrameCache<DefaultConv, Derived, Base, types::pure491>::value
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
				(void*)wrap::spriteFrameByName<DefaultConv, Derived, Base, types::pure492>::value
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

		if constexpr (compare::destructor<Derived, Base, types::pure1524>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::destructor", 
				(void*)addresses::address1524(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure1524>::value
			);
		}

		if constexpr (compare::update<Derived, Base, types::pure1525>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::update", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::update", 
				(void*)addresses::address1525(), 
				(void*)wrap::update<DefaultConv, Derived, Base, types::pure1525>::value
			);
		}

		if constexpr (compare::draw<Derived, Base, types::pure1526>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::draw", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::draw", 
				(void*)addresses::address1526(), 
				(void*)wrap::draw<DefaultConv, Derived, Base, types::pure1526>::value
			);
		}

		if constexpr (compare::updateColor<Derived, Base, types::pure1527>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateColor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateColor", 
				(void*)addresses::address1527(), 
				(void*)wrap::updateColor<DefaultConv, Derived, Base, types::pure1527>::value
			);
		}

		if constexpr (compare::flipGravity<Derived, Base, types::pure1528>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::flipGravity", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::flipGravity", 
				(void*)addresses::address1528(), 
				(void*)wrap::flipGravity<DefaultConv, Derived, Base, types::pure1528>::value
			);
		}

		if constexpr (compare::calculateColorValues<Derived, Base, types::pure1529>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::calculateColorValues", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::calculateColorValues", 
				(void*)addresses::address1529(), 
				(void*)wrap::calculateColorValues<DefaultConv, Derived, Base, types::pure1529>::value
			);
		}

		if constexpr (compare::addToGroup<Derived, Base, types::pure1530>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addToGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::addToGroup", 
				(void*)addresses::address1530(), 
				(void*)wrap::addToGroup<DefaultConv, Derived, Base, types::pure1530>::value
			);
		}

		if constexpr (compare::removeFromGroup<Derived, Base, types::pure1531>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeFromGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::removeFromGroup", 
				(void*)addresses::address1531(), 
				(void*)wrap::removeFromGroup<DefaultConv, Derived, Base, types::pure1531>::value
			);
		}

		if constexpr (compare::timeForXPos<Derived, Base, types::pure1532>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::timeForXPos", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::timeForXPos", 
				(void*)addresses::address1532(), 
				(void*)wrap::timeForXPos<DefaultConv, Derived, Base, types::pure1532>::value
			);
		}

		if constexpr (compare::xPosForTime<Derived, Base, types::pure1533>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::xPosForTime", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::xPosForTime", 
				(void*)addresses::address1533(), 
				(void*)wrap::xPosForTime<DefaultConv, Derived, Base, types::pure1533>::value
			);
		}

		if constexpr (compare::levelSettingsUpdated<Derived, Base, types::pure1534>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::levelSettingsUpdated", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::levelSettingsUpdated", 
				(void*)addresses::address1534(), 
				(void*)wrap::levelSettingsUpdated<DefaultConv, Derived, Base, types::pure1534>::value
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
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure1535>::value
			);
		}

		if constexpr (compare::activateTriggerEffect<Derived, Base, types::pure1536>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::activateTriggerEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::activateTriggerEffect", 
				(void*)addresses::address1536(), 
				(void*)wrap::activateTriggerEffect<DefaultConv, Derived, Base, types::pure1536>::value
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
				(void*)wrap::addObjectFromString<DefaultConv, Derived, Base, types::pure1537>::value
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
				(void*)wrap::addSpecial<DefaultConv, Derived, Base, types::pure1538>::value
			);
		}

		if constexpr (compare::addToRedoList<Derived, Base, types::pure1539>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addToRedoList", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::addToRedoList", 
				(void*)addresses::address1539(), 
				(void*)wrap::addToRedoList<DefaultConv, Derived, Base, types::pure1539>::value
			);
		}

		if constexpr (compare::addToUndoList<Derived, Base, types::pure1540>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::addToUndoList", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::addToUndoList", 
				(void*)addresses::address1540(), 
				(void*)wrap::addToUndoList<DefaultConv, Derived, Base, types::pure1540>::value
			);
		}

		if constexpr (compare::animateInDualGround<Derived, Base, types::pure1541>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::animateInDualGround", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::animateInDualGround", 
				(void*)addresses::address1541(), 
				(void*)wrap::animateInDualGround<DefaultConv, Derived, Base, types::pure1541>::value
			);
		}

		if constexpr (compare::checkCollisions<Derived, Base, types::pure1542>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::checkCollisions", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::checkCollisions", 
				(void*)addresses::address1542(), 
				(void*)wrap::checkCollisions<DefaultConv, Derived, Base, types::pure1542>::value
			);
		}

		if constexpr (compare::createBackground<Derived, Base, types::pure1543>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createBackground", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::createBackground", 
				(void*)addresses::address1543(), 
				(void*)wrap::createBackground<DefaultConv, Derived, Base, types::pure1543>::value
			);
		}

		if constexpr (compare::createGroundLayer<Derived, Base, types::pure1544>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createGroundLayer", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::createGroundLayer", 
				(void*)addresses::address1544(), 
				(void*)wrap::createGroundLayer<DefaultConv, Derived, Base, types::pure1544>::value
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
				(void*)wrap::createObject<DefaultConv, Derived, Base, types::pure1545>::value
			);
		}

		if constexpr (compare::createObjectsFromSetup<Derived, Base, types::pure1546>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createObjectsFromSetup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::createObjectsFromSetup", 
				(void*)addresses::address1546(), 
				(void*)wrap::createObjectsFromSetup<DefaultConv, Derived, Base, types::pure1546>::value
			);
		}

		if constexpr (compare::createObjectsFromString<Derived, Base, types::pure1547>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::createObjectsFromString", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::createObjectsFromString", 
				(void*)addresses::address1547(), 
				(void*)wrap::createObjectsFromString<DefaultConv, Derived, Base, types::pure1547>::value
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
				(void*)wrap::getLastObjectX<DefaultConv, Derived, Base, types::pure1548>::value
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
				(void*)wrap::getLevelString<DefaultConv, Derived, Base, types::pure1549>::value
			);
		}

		if constexpr (compare::getNextColorChannel<Derived, Base, types::pure1550>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getNextColorChannel", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::getNextColorChannel", 
				(void*)addresses::address1550(), 
				(void*)wrap::getNextColorChannel<DefaultConv, Derived, Base, types::pure1550>::value
			);
		}

		if constexpr (compare::getNextFreeBlockID<Derived, Base, types::pure1551>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getNextFreeBlockID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::getNextFreeBlockID", 
				(void*)addresses::address1551(), 
				(void*)wrap::getNextFreeBlockID<DefaultConv, Derived, Base, types::pure1551>::value
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
				(void*)wrap::getNextFreeGroupID<DefaultConv, Derived, Base, types::pure1552>::value
			);
		}

		if constexpr (compare::getNextFreeItemID<Derived, Base, types::pure1553>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getNextFreeItemID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::getNextFreeItemID", 
				(void*)addresses::address1553(), 
				(void*)wrap::getNextFreeItemID<DefaultConv, Derived, Base, types::pure1553>::value
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
				(void*)wrap::getObjectRect<DefaultConv, Derived, Base, types::pure1554>::value
			);
		}

		if constexpr (compare::getRelativeOffset<Derived, Base, types::pure1555>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::getRelativeOffset", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::getRelativeOffset", 
				(void*)addresses::address1555(), 
				(void*)wrap::getRelativeOffset<DefaultConv, Derived, Base, types::pure1555>::value
			);
		}

		if constexpr (compare::handleAction<Derived, Base, types::pure1556>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::handleAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::handleAction", 
				(void*)addresses::address1556(), 
				(void*)wrap::handleAction<DefaultConv, Derived, Base, types::pure1556>::value
			);
		}

		if constexpr (compare::init<Derived, Base, types::pure1557>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::init", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::init", 
				(void*)addresses::address1557(), 
				(void*)wrap::init<DefaultConv, Derived, Base, types::pure1557>::value
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
				(void*)wrap::objectAtPosition<DefaultConv, Derived, Base, types::pure1558>::value
			);
		}

		if constexpr (compare::objectMoved<Derived, Base, types::pure1559>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::objectMoved", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::objectMoved", 
				(void*)addresses::address1559(), 
				(void*)wrap::objectMoved<DefaultConv, Derived, Base, types::pure1559>::value
			);
		}

		if constexpr (compare::objectsInRect<Derived, Base, types::pure1560>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::objectsInRect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::objectsInRect", 
				(void*)addresses::address1560(), 
				(void*)wrap::objectsInRect<DefaultConv, Derived, Base, types::pure1560>::value
			);
		}

		if constexpr (compare::onPlaytest<Derived, Base, types::pure1561>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::onPlaytest", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::onPlaytest", 
				(void*)addresses::address1561(), 
				(void*)wrap::onPlaytest<DefaultConv, Derived, Base, types::pure1561>::value
			);
		}

		if constexpr (compare::onStopPlaytest<Derived, Base, types::pure1562>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::onStopPlaytest", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::onStopPlaytest", 
				(void*)addresses::address1562(), 
				(void*)wrap::onStopPlaytest<DefaultConv, Derived, Base, types::pure1562>::value
			);
		}

		if constexpr (compare::playMusic<Derived, Base, types::pure1564>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::playMusic", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::playMusic", 
				(void*)addresses::address1564(), 
				(void*)wrap::playMusic<DefaultConv, Derived, Base, types::pure1564>::value
			);
		}

		if constexpr (compare::recreateGroups<Derived, Base, types::pure1565>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::recreateGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::recreateGroups", 
				(void*)addresses::address1565(), 
				(void*)wrap::recreateGroups<DefaultConv, Derived, Base, types::pure1565>::value
			);
		}

		if constexpr (compare::redoLastAction<Derived, Base, types::pure1566>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::redoLastAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::redoLastAction", 
				(void*)addresses::address1566(), 
				(void*)wrap::redoLastAction<DefaultConv, Derived, Base, types::pure1566>::value
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
				(void*)wrap::removeAllObjects<DefaultConv, Derived, Base, types::pure1567>::value
			);
		}

		if constexpr (compare::removeAllObjectsOfType<Derived, Base, types::pure1568>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeAllObjectsOfType", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::removeAllObjectsOfType", 
				(void*)addresses::address1568(), 
				(void*)wrap::removeAllObjectsOfType<DefaultConv, Derived, Base, types::pure1568>::value
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
				(void*)wrap::removeObject<DefaultConv, Derived, Base, types::pure1569>::value
			);
		}

		if constexpr (compare::removeSpecial<Derived, Base, types::pure1570>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::removeSpecial", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::removeSpecial", 
				(void*)addresses::address1570(), 
				(void*)wrap::removeSpecial<DefaultConv, Derived, Base, types::pure1570>::value
			);
		}

		if constexpr (compare::resetMovingObjects<Derived, Base, types::pure1571>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::resetMovingObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::resetMovingObjects", 
				(void*)addresses::address1571(), 
				(void*)wrap::resetMovingObjects<DefaultConv, Derived, Base, types::pure1571>::value
			);
		}

		if constexpr (compare::resetObjectVector<Derived, Base, types::pure1572>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::resetObjectVector", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::resetObjectVector", 
				(void*)addresses::address1572(), 
				(void*)wrap::resetObjectVector<DefaultConv, Derived, Base, types::pure1572>::value
			);
		}

		if constexpr (compare::resetToggledGroups<Derived, Base, types::pure1573>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::resetToggledGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::resetToggledGroups", 
				(void*)addresses::address1573(), 
				(void*)wrap::resetToggledGroups<DefaultConv, Derived, Base, types::pure1573>::value
			);
		}

		if constexpr (compare::resetToggledGroupsAndObjects<Derived, Base, types::pure1574>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::resetToggledGroupsAndObjects", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::resetToggledGroupsAndObjects", 
				(void*)addresses::address1574(), 
				(void*)wrap::resetToggledGroupsAndObjects<DefaultConv, Derived, Base, types::pure1574>::value
			);
		}

		if constexpr (compare::resetUnusedColorChannels<Derived, Base, types::pure1575>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::resetUnusedColorChannels", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::resetUnusedColorChannels", 
				(void*)addresses::address1575(), 
				(void*)wrap::resetUnusedColorChannels<DefaultConv, Derived, Base, types::pure1575>::value
			);
		}

		if constexpr (compare::rotationForSlopeNearObject<Derived, Base, types::pure1576>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::rotationForSlopeNearObject", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::rotationForSlopeNearObject", 
				(void*)addresses::address1576(), 
				(void*)wrap::rotationForSlopeNearObject<DefaultConv, Derived, Base, types::pure1576>::value
			);
		}

		if constexpr (compare::runColorEffect<Derived, Base, types::pure1577>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::runColorEffect", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::runColorEffect", 
				(void*)addresses::address1577(), 
				(void*)wrap::runColorEffect<DefaultConv, Derived, Base, types::pure1577>::value
			);
		}

		if constexpr (compare::setupLevelStart<Derived, Base, types::pure1578>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::setupLevelStart", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::setupLevelStart", 
				(void*)addresses::address1578(), 
				(void*)wrap::setupLevelStart<DefaultConv, Derived, Base, types::pure1578>::value
			);
		}

		if constexpr (compare::sortStickyGroups<Derived, Base, types::pure1579>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::sortStickyGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::sortStickyGroups", 
				(void*)addresses::address1579(), 
				(void*)wrap::sortStickyGroups<DefaultConv, Derived, Base, types::pure1579>::value
			);
		}

		if constexpr (compare::stopTriggersInGroup<Derived, Base, types::pure1580>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::stopTriggersInGroup", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::stopTriggersInGroup", 
				(void*)addresses::address1580(), 
				(void*)wrap::stopTriggersInGroup<DefaultConv, Derived, Base, types::pure1580>::value
			);
		}

		if constexpr (compare::toggleDualMode<Derived, Base, types::pure1581>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::toggleDualMode", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::toggleDualMode", 
				(void*)addresses::address1581(), 
				(void*)wrap::toggleDualMode<DefaultConv, Derived, Base, types::pure1581>::value
			);
		}

		if constexpr (compare::toggleGroupPreview<Derived, Base, types::pure1582>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::toggleGroupPreview", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::toggleGroupPreview", 
				(void*)addresses::address1582(), 
				(void*)wrap::toggleGroupPreview<DefaultConv, Derived, Base, types::pure1582>::value
			);
		}

		if constexpr (compare::transferDefaultColors<Derived, Base, types::pure1583>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::transferDefaultColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::transferDefaultColors", 
				(void*)addresses::address1583(), 
				(void*)wrap::transferDefaultColors<DefaultConv, Derived, Base, types::pure1583>::value
			);
		}

		if constexpr (compare::undoLastAction<Derived, Base, types::pure1584>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::undoLastAction", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::undoLastAction", 
				(void*)addresses::address1584(), 
				(void*)wrap::undoLastAction<DefaultConv, Derived, Base, types::pure1584>::value
			);
		}

		if constexpr (compare::updateBGAndGColors<Derived, Base, types::pure1585>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateBGAndGColors", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateBGAndGColors", 
				(void*)addresses::address1585(), 
				(void*)wrap::updateBGAndGColors<DefaultConv, Derived, Base, types::pure1585>::value
			);
		}

		if constexpr (compare::updateBlendValues<Derived, Base, types::pure1586>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateBlendValues", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateBlendValues", 
				(void*)addresses::address1586(), 
				(void*)wrap::updateBlendValues<DefaultConv, Derived, Base, types::pure1586>::value
			);
		}

		if constexpr (compare::updateDualGround<Derived, Base, types::pure1587>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateDualGround", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateDualGround", 
				(void*)addresses::address1587(), 
				(void*)wrap::updateDualGround<DefaultConv, Derived, Base, types::pure1587>::value
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
				(void*)wrap::updateEditorMode<DefaultConv, Derived, Base, types::pure1588>::value
			);
		}

		if constexpr (compare::updateGameObjectsNew<Derived, Base, types::pure1589>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateGameObjectsNew", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateGameObjectsNew", 
				(void*)addresses::address1589(), 
				(void*)wrap::updateGameObjectsNew<DefaultConv, Derived, Base, types::pure1589>::value
			);
		}

		if constexpr (compare::updateGround<Derived, Base, types::pure1590>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateGround", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateGround", 
				(void*)addresses::address1590(), 
				(void*)wrap::updateGround<DefaultConv, Derived, Base, types::pure1590>::value
			);
		}

		if constexpr (compare::updateGroundWidth<Derived, Base, types::pure1591>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateGroundWidth", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateGroundWidth", 
				(void*)addresses::address1591(), 
				(void*)wrap::updateGroundWidth<DefaultConv, Derived, Base, types::pure1591>::value
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
				(void*)wrap::updateOptions<DefaultConv, Derived, Base, types::pure1592>::value
			);
		}

		if constexpr (compare::updateToggledGroups<Derived, Base, types::pure1593>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateToggledGroups", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateToggledGroups", 
				(void*)addresses::address1593(), 
				(void*)wrap::updateToggledGroups<DefaultConv, Derived, Base, types::pure1593>::value
			);
		}

		if constexpr (compare::updateVisibility<Derived, Base, types::pure1594>::value) {
			Interface::get()->logInfo(
				"Adding hook at function LevelEditorLayer::updateVisibility", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"LevelEditorLayer::updateVisibility", 
				(void*)addresses::address1594(), 
				(void*)wrap::updateVisibility<DefaultConv, Derived, Base, types::pure1594>::value
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
				(void*)wrap::sharedDispatcher<DefaultConv, Derived, Base, types::pure109>::value
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
				(void*)wrap::addDelegate<DefaultConv, Derived, Base, types::pure110>::value
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
				(void*)wrap::removeDelegate<DefaultConv, Derived, Base, types::pure111>::value
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

		if constexpr (compare::create<Derived, Base, types::pure2019>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupOpacityPopup::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupOpacityPopup::create", 
				(void*)addresses::address2019(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure2019>::value
			);
		}

		if constexpr (compare::onTargetIDArrow<Derived, Base, types::pure2020>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupOpacityPopup::onTargetIDArrow", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupOpacityPopup::onTargetIDArrow", 
				(void*)addresses::address2020(), 
				(void*)wrap::onTargetIDArrow<DefaultConv, Derived, Base, types::pure2020>::value
			);
		}

		if constexpr (compare::textChanged<Derived, Base, types::pure2021>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupOpacityPopup::textChanged", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupOpacityPopup::textChanged", 
				(void*)addresses::address2021(), 
				(void*)wrap::textChanged<DefaultConv, Derived, Base, types::pure2021>::value
			);
		}

		if constexpr (compare::updateTargetID<Derived, Base, types::pure2022>::value) {
			Interface::get()->logInfo(
				"Adding hook at function SetupOpacityPopup::updateTargetID", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"SetupOpacityPopup::updateTargetID", 
				(void*)addresses::address2022(), 
				(void*)wrap::updateTargetID<DefaultConv, Derived, Base, types::pure2022>::value
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

		if constexpr (compare::constructor<Derived, Base, types::pure112>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCImage::constructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCImage::constructor", 
				(void*)addresses::address112(), 
				(void*)wrap::constructor<DefaultConv, Derived, Base, types::pure112>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure113>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCImage::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCImage::destructor", 
				(void*)addresses::address113(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure113>::value
			);
		}

		if constexpr (compare::initWithImageData<Derived, Base, types::pure114>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCImage::initWithImageData", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCImage::initWithImageData", 
				(void*)addresses::address114(), 
				(void*)wrap::initWithImageData<DefaultConv, Derived, Base, types::pure114>::value
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

		if constexpr (compare::create<Derived, Base, types::pure833>::value) {
			Interface::get()->logInfo(
				"Adding hook at function CustomListView::create", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"CustomListView::create", 
				(void*)addresses::address833(), 
				(void*)wrap::create<DefaultConv, Derived, Base, types::pure833>::value
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
				(void*)wrap::getListCell<DefaultConv, Derived, Base, types::pure834>::value
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
				(void*)wrap::loadCell<DefaultConv, Derived, Base, types::pure835>::value
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
				(void*)wrap::setupList<DefaultConv, Derived, Base, types::pure836>::value
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
				(void*)wrap::handlerWithDelegate<DefaultConv, Derived, Base, types::pure252>::value
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
				(void*)wrap::initWithDelegate<DefaultConv, Derived, Base, types::pure253>::value
			);
		}

		if constexpr (compare::destructor<Derived, Base, types::pure254>::value) {
			Interface::get()->logInfo(
				"Adding hook at function cocos2d::CCMouseHandler::destructor", 
				Severity::Debug
			);
			Interface::get()->addHook(
				"cocos2d::CCMouseHandler::destructor", 
				(void*)addresses::address254(), 
				(void*)wrap::destructor<DefaultConv, Derived, Base, types::pure254>::value
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
