#ifndef org_apache_lucene_search_MaxNonCompetitiveBoostAttributeImpl_H
#define org_apache_lucene_search_MaxNonCompetitiveBoostAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
        class AttributeReflector;
      }
      namespace search {
        class MaxNonCompetitiveBoostAttribute;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
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
            mid_init$_3720c61b0679eb3e,
            mid_clear_3720c61b0679eb3e,
            mid_copyTo_9be83c6b2aff7007,
            mid_getCompetitiveTerm_9740fddd1c7df148,
            mid_getMaxNonCompetitiveBoost_9b6c3480dac00edf,
            mid_reflectWith_454217ab6e97f729,
            mid_setCompetitiveTerm_ac0de3ee0e03786d,
            mid_setMaxNonCompetitiveBoost_c771a95b0227fb6a,
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
