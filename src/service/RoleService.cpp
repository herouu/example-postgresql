//
// Created by 22696 on 2021/6/8.
//

#include "RoleService.hpp"

oatpp::Object<RoleDto> RoleService::getRoles() {

    auto dbResult = m_database->getRoles();
    OATPP_ASSERT_HTTP(dbResult->isSuccess(), Status::CODE_500, dbResult->getErrorMessage());
    OATPP_ASSERT_HTTP(dbResult->hasMoreToFetch(), Status::CODE_404, "User not found");

    auto result = dbResult->fetch<oatpp::Vector<oatpp::Object<RoleDto>>>();
    OATPP_ASSERT_HTTP(result->size() == 1, Status::CODE_500, "Unknown error");

    return result[0];
}
