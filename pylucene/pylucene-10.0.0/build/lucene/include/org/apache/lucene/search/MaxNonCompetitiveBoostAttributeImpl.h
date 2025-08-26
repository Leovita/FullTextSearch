#ifndef org_apache_lucene_search_MaxNonCompetitiveBoostAttributeImpl_H
#define org_apache_lucene_search_MaxNonCompetitiveBoostAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MaxNonCompetitiveBoostAttribute;
      }
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MaxNonCompetitiveBoostAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_clear_e7bdbe105ce1bafb,
            mid_copyTo_b194e41b568bc1bc,
            mid_getCompetitiveTerm_adbedbc1fa61c358,
            mid_getMaxNonCompetitiveBoost_8b62236f0e4d0dbc,
            mid_reflectWith_ac049850cfa29e37,
            mid_setCompetitiveTerm_920ce0cdf4259cc9,
            mid_setMaxNonCompetitiveBoost_675f4cb9a2529ee0,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MaxNonCompetitiveBoostAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MaxNonCompetitiveBoostAttributeImpl(const MaxNonCompetitiveBoostAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

          MaxNonCompetitiveBoostAttributeImpl();

          void clear() const;
          void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
          ::org::apache::lucene::util::BytesRef getCompetitiveTerm() const;
          jfloat getMaxNonCompetitiveBoost() const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void setCompetitiveTerm(const ::org::apache::lucene::util::BytesRef &) const;
          void setMaxNonCompetitiveBoost(jfloat) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(MaxNonCompetitiveBoostAttributeImpl);
        extern PyTypeObject *PY_TYPE(MaxNonCompetitiveBoostAttributeImpl);

        class t_MaxNonCompetitiveBoostAttributeImpl {
        public:
          PyObject_HEAD
          MaxNonCompetitiveBoostAttributeImpl object;
          static PyObject *wrap_Object(const MaxNonCompetitiveBoostAttributeImpl&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
