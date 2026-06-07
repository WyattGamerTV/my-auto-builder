#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude;

class $modify(MyEditorUI, EditorUI) {
    void onMusicButton(CCObject* sender) {
        // Run the original music button code first
        EditorUI::onMusicButton(sender);

        // Alert the user that the layout is generating
        FLAlertLayer::create("Auto Builder", "Generating layout structures...", "OK")->show();

        // Spawn a simple start structure (e.g., a couple of blocks)
        auto levelEditor = LevelEditorLayer::get();
        if (levelEditor) {
            // Spawn an object at center grid coordinates (adjusting to your layout needs)
            auto obj1 = levelEditor->getOrCreateObject(1); // 1 is usually a basic block ID
            if (obj1) {
                obj1->setPosition({100.f, 100.f});
                levelEditor->m_objectLayer->addChild(obj1);
            }
        }
    }
};
