#ifndef org_apache_lucene_codecs_MutablePointTree_H
#define org_apache_lucene_codecs_MutablePointTree_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$IntersectVisitor;
        class PointValues$PointTree;
      }
      namespace util {
        class BytesRef;
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
      namespace codecs {

        class MutablePointTree : public ::java::lang::Object {
         public:
          enum {
            mid_clone_f845dee012b447f9,
            mid_getByteAt_a15e7beee7faa484,
            mid_getDocID_3c9bba330f083871,
            mid_getMaxPackedValue_5560da88fc44aa82,
            mid_getMinPackedValue_5560da88fc44aa82,
            mid_getValue_061520fed31c6147,
            mid_moveToChild_947277eca0748c4e,
            mid_moveToParent_947277eca0748c4e,
            mid_moveToSibling_947277eca0748c4e,
            mid_restore_e13cff512ebda969,
            mid_save_e13cff512ebda969,
            mid_swap_e13cff512ebda969,
            mid_visitDocIDs_639354b6b3c6f802,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MutablePointTree(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MutablePointTree(const MutablePointTree& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::PointValues$PointTree clone() const;
          jbyte getByteAt(jint, jint) const;
          jint getDocID(jint) const;
          JArray< jbyte > getMaxPackedValue() const;
          JArray< jbyte > getMinPackedValue() const;
          void getValue(jint, const ::org::apache::lucene::util::BytesRef &) const;
          jboolean moveToChild() const;
          jboolean moveToParent() const;
          jboolean moveToSibling() const;
          void restore(jint, jint) const;
          void save(jint, jint) const;
          void swap(jint, jint) const;
          void visitDocIDs(const ::org::apache::lucene::index::PointValues$IntersectVisitor &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(MutablePointTree);
        extern PyTypeObject *PY_TYPE(MutablePointTree);

        class t_MutablePointTree {
        public:
          PyObject_HEAD
          MutablePointTree object;
          static PyObject *wrap_Object(const MutablePointTree&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
