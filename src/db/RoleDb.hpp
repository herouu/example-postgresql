//
// Created by 22696 on 2021/6/8.
//

#ifndef EXAMPLE_POSTGRESQL_ROLEDB_HPP
#define EXAMPLE_POSTGRESQL_ROLEDB_HPP

#include "dto/RoleDto.hpp"
#include "oatpp-postgresql/orm.hpp"

#include OATPP_CODEGEN_BEGIN(DbClient)

class RoleDb : public oatpp::orm::DbClient {
public:
    QUERY(getRoles, "select * from approle");
};

#include OATPP_CODEGEN_END(DbClient)

#endif //EXAMPLE_POSTGRESQL_ROLEDB_HPP
