#ifndef org_apache_lucene_queryparser_surround_query_SrndQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndQuery_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class SrndQuery;
            class BasicQueryFactory;
          }
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {

            class SrndQuery : public ::java::lang::Object {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_clone_3ca93962a82271ea,
                mid_equals_00d17418847797d4,
                mid_getWeight_8b62236f0e4d0dbc,
                mid_getWeightOperator_e7df854526d67fa3,
                mid_getWeightString_e7df854526d67fa3,
                mid_hashCode_bd89ce15dad49192,
                mid_isFieldsSubQueryAcceptable_9aa4f33e82ea333f,
                mid_isWeighted_9aa4f33e82ea333f,
                mid_makeLuceneQueryField_f72be4f202dc3d74,
                mid_makeLuceneQueryFieldNoBoost_f72be4f202dc3d74,
                mid_setWeight_675f4cb9a2529ee0,
                mid_toString_e7df854526d67fa3,
                mid_weightToString_5dd6a2d608961d5f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SrndQuery(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SrndQuery(const SrndQuery& obj) : ::java::lang::Object(obj) {}

              SrndQuery();

              SrndQuery clone() const;
              jboolean equals(const ::java::lang::Object &) const;
              jfloat getWeight() const;
              ::java::lang::String getWeightOperator() const;
              ::java::lang::String getWeightString() const;
              jint hashCode() const;
              jboolean isFieldsSubQueryAcceptable() const;
              jboolean isWeighted() const;
              ::org::apache::lucene::search::Query makeLuceneQueryField(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              ::org::apache::lucene::search::Query makeLuceneQueryFieldNoBoost(const ::java::lang::String &, const ::org::apache::lucene::queryparser::surround::query::BasicQueryFactory &) const;
              void setWeight(jfloat) const;
              ::java::lang::String toString() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace surround {
          namespace query {
            extern PyType_Def PY_TYPE_DEF(SrndQuery);
            extern PyTypeObject *PY_TYPE(SrndQuery);

            class t_SrndQuery {
            public:
              PyObject_HEAD
              SrndQuery object;
              static PyObject *wrap_Object(const SrndQuery&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
