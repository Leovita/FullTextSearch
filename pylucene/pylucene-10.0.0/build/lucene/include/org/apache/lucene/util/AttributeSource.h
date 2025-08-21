#ifndef org_apache_lucene_util_AttributeSource_H
#define org_apache_lucene_util_AttributeSource_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
        class AttributeFactory;
        class AttributeReflector;
        class AttributeSource$State;
        class AttributeImpl;
        class Attribute;
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
            mid_init$_3720c61b0679eb3e,
            mid_init$_d7660885ec4170d8,
            mid_addAttribute_4df7022a14a40d66,
            mid_addAttributeImpl_9be83c6b2aff7007,
            mid_captureState_46416bfcbf8ea97a,
            mid_clearAttributes_3720c61b0679eb3e,
            mid_cloneAttributes_ee6fc324885c7c07,
            mid_copyTo_e43da807a17f8046,
            mid_endAttributes_3720c61b0679eb3e,
            mid_equals_570b5248a6da3ef6,
            mid_getAttribute_4df7022a14a40d66,
            mid_getAttributeClassesIterator_0db4c76ff7ee995b,
            mid_getAttributeFactory_0ecd53bbe620b868,
            mid_getAttributeImplsIterator_0db4c76ff7ee995b,
            mid_hasAttribute_0be35c16891dfd3c,
            mid_hasAttributes_947277eca0748c4e,
            mid_hashCode_20fbf7565993c3d7,
            mid_reflectAsString_648fb915d73c5399,
            mid_reflectWith_454217ab6e97f729,
            mid_removeAllAttributes_3720c61b0679eb3e,
            mid_restoreState_b2ca70a28e5364ba,
            mid_toString_09a7afff1868fc5e,
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
