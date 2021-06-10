//
// Created by 22696 on 2021/6/8.
//

#ifndef EXAMPLE_POSTGRESQL_ROLEDTO_HPP
#define EXAMPLE_POSTGRESQL_ROLEDTO_HPP

#include "oatpp/core/macro/codegen.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class RoleDto : public oatpp::DTO {
    DTO_INIT(RoleDto, DTO)

    DTO_FIELD(Int32, id);

    DTO_FIELD(String, roleName, "role_name");

    DTO_FIELD(Int32, roleNumber, "role_number");
};

#include OATPP_CODEGEN_END(DTO)

#endif //EXAMPLE_POSTGRESQL_ROLEDTO_HPP
