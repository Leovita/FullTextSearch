#ifndef org_apache_lucene_queryparser_surround_query_SrndQuery_H
#define org_apache_lucene_queryparser_surround_query_SrndQuery_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace queryparser {
        namespace surround {
          namespace query {
            class BasicQueryFactory;
            class SrndQuery;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class Cloneable;
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
                mid_init$_3720c61b0679eb3e,
                mid_clone_417e5294363c6a3a,
                mid_equals_570b5248a6da3ef6,
                mid_getWeight_9b6c3480dac00edf,
                mid_getWeightOperator_09a7afff1868fc5e,
                mid_getWeightString_09a7afff1868fc5e,
                mid_hashCode_20fbf7565993c3d7,
                mid_isFieldsSubQueryAcceptable_947277eca0748c4e,
                mid_isWeighted_947277eca0748c4e,
                mid_makeLuceneQueryField_c9d13380f7762023,
                mid_makeLuceneQueryFieldNoBoost_c9d13380f7762023,
                mid_setWeight_c771a95b0227fb6a,
                mid_toString_09a7afff1868fc5e,
                mid_weightToString_86d6edf9953c2f53,
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
