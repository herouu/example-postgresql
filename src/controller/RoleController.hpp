//
// Created by 22696 on 2021/6/8.
//

#ifndef EXAMPLE_POSTGRESQL_ROLECONTROLLER_HPP
#define EXAMPLE_POSTGRESQL_ROLECONTROLLER_HPP

#include "service/RoleService.hpp"

#include "oatpp/web/server/api/ApiController.hpp"
#include "oatpp/parser/json/mapping/ObjectMapper.hpp"
#include "oatpp/core/macro/codegen.hpp"

#include OATPP_CODEGEN_BEGIN(ApiController)

class RoleController : public oatpp::web::server::api::ApiController {
public:
    RoleController(const std::shared_ptr<ObjectMapper> &objectMapper)
            : oatpp::web::server::api::ApiController(objectMapper) {}

//private:
//    RoleService roleService;// Create user service.

public:
    static std::shared_ptr<RoleController> createShared(
            OATPP_COMPONENT(std::shared_ptr<ObjectMapper>,
                            objectMapper) // Inject objectMapper component here as default parameter
    ) {
        return std::make_shared<RoleController>(objectMapper);
    }

    ENDPOINT_INFO(getRoles) {
        info->summary = "Delete User by userId";

        info->addResponse < Object < StatusDto >> (Status::CODE_200, "application/json");
        info->addResponse < Object < StatusDto >> (Status::CODE_500, "application/json");
    }

    ENDPOINT("GET", "roles", getRoles) {
        return createResponse(Status::CODE_200, "sss");
    }


};

#include OATPP_CODEGEN_BEGIN(ApiController)

#endif //EXAMPLE_POSTGRESQL_ROLECONTROLLER_HPP
