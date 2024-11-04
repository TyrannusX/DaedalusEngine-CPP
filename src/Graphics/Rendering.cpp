//
// Created by neoro on 05/05/2024.
//

#include <vector>
#include "../../include/Graphics/Rendering.h"
#include "../../include/Graphics/Vertex.h"
#include "../../include/Utilities/Utilities.h"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace DaedalusEngine {
    // TODO: Remove these test vertices and indices. This is just test data before model loading is introduced
    std::vector<Vertex> vertices = {
            {glm::vec3 {0.5f, 0.5f, 0.0f}, glm::vec4{1.0f, 0.0f, 0.0f, 0.0f}},
            {glm::vec3{-0.5, 0.5f, 0.0f}, glm::vec4{0.0f, 1.0f, 0.0f, 0.0f}},
            {glm::vec3{-0.5f, -0.5f, 0.0f}, glm::vec4{0.0f, 0.0f, 1.0f, 0.0f}},
            {glm::vec3{0.5f, -0.5f, 0.0f}, glm::vec4{0.0f, 0.0f, 0.0f, 1.0f}}
    };

    std::vector<int> indices = {
            1, 2,3,
            0, 1, 3
    };

    void InitializeRenderingEngine(NativeWindowInformation* nativeWindowInformation) {
        uint32_t extensionCount = 0;
        vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
    }

    void CreateVulkanInstance() {
        VkApplicationInfo vkApplicationInfo{};
        vkApplicationInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
        vkApplicationInfo.pApplicationName = "Daedalus Engine";
        vkApplicationInfo.applicationVersion = VK_MAKE_VERSION(0, 1, 0);
        vkApplicationInfo.pEngineName = "Daedalus";
        vkApplicationInfo.engineVersion = VK_MAKE_VERSION(0, 1, 0);
        vkApplicationInfo.apiVersion = VK_API_VERSION_1_3;

        VkInstanceCreateInfo vkInstanceCreateInfo{};
        vkInstanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        vkInstanceCreateInfo.pApplicationInfo = &vkApplicationInfo;
    }

    void InitializeGraphicsPipeline() {

    }

    void CreateVertexShader(std::string fileName, std::string entryPoint) {

    }

    void CreateFragmentShader(std::string fileName, std::string entryPoint) {

    }

    void Render() {

    }

    void Present() {

    }

    void SetRenderTargets() {
        
    }

    void ClearViews() {
        
    }
} // DaedalusEngine