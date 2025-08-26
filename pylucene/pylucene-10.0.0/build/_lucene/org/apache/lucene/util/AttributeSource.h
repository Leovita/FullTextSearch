#ifndef org_apache_lucene_util_AttributeSource_H
#define org_apache_lucene_util_AttributeSource_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeImpl;
        class AttributeSource$State;
        class AttributeSource;
        class Attribute;
        class AttributeFactory;
        class AttributeReflector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class AttributeSource : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_cf56ef8c7a468300,
            mid_addAttribute_ca2cf950a73ea359,
            mid_addAttributeImpl_b194e41b568bc1bc,
            mid_captureState_6013ba014c68ee64,
            mid_clearAttributes_e7bdbe105ce1bafb,
            mid_cloneAttributes_cdef0e51a2510793,
            mid_copyTo_5a0c9cb9a8a5e53a,
            mid_endAttributes_e7bdbe105ce1bafb,
            mid_equals_00d17418847797d4,
            mid_getAttribute_ca2cf950a73ea359,
            mid_getAttributeClassesIterator_c7985fafdcf40e83,
            mid_getAttributeFactory_faaa73753bdc19b4,
            mid_getAttributeImplsIterator_c7985fafdcf40e83,
            mid_hasAttribute_4c29bd646fc74404,
            mid_hasAttributes_9aa4f33e82ea333f,
            mid_hashCode_bd89ce15dad49192,
            mid_reflectAsString_e446331928d0b1c5,
            mid_reflectWith_ac049850cfa29e37,
            mid_removeAllAttributes_e7bdbe105ce1bafb,
            mid_restoreState_1e554ad3c50fec98,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit AttributeSource(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          AttributeSource(const AttributeSource& obj) : ::java::lang::Object(obj) {}

          AttributeSource();
          AttributeSource(const ::org::apache::lucene::util::AttributeFactory &);

          ::org::apache::lucene::util::Attribute addAttribute(const ::java::lang::Class &) const;
          void addAttributeImpl(const ::org::apache::lucene::util::AttributeImpl &) const;
          ::org::apache::lucene::util::AttributeSource$State captureState() const;
          void clearAttributes() const;
          AttributeSource cloneAttributes() const;
          void copyTo(const AttributeSource &) const;
          void endAttributes() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::util::Attribute getAttribute(const ::java::lang::Class &) const;
          ::java::util::Iterator getAttributeClassesIterator() const;
          ::org::apache::lucene::util::AttributeFactory getAttributeFactory() const;
          ::java::util::Iterator getAttributeImplsIterator() const;
          jboolean hasAttribute(const ::java::lang::Class &) const;
          jboolean hasAttributes() const;
          jint hashCode() const;
          ::java::lang::String reflectAsString(jboolean) const;
          void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
          void removeAllAttributes() const;
          void restoreState(const ::org::apache::lucene::util::AttributeSource$State &) const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(AttributeSource);
        extern PyTypeObject *PY_TYPE(AttributeSource);

        class t_AttributeSource {
        public:
          PyObject_HEAD
          AttributeSource object;
          static PyObject *wrap_Object(const AttributeSource&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
