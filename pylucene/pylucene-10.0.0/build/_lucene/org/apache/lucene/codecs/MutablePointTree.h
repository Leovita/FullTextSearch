#ifndef org_apache_lucene_codecs_MutablePointTree_H
#define org_apache_lucene_codecs_MutablePointTree_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
      namespace index {
        class PointValues$IntersectVisitor;
        class PointValues$PointTree;
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
            mid_clone_105acb8614b902b9,
            mid_getByteAt_b72ccf1dee00699b,
            mid_getDocID_a3904e10f5bb9437,
            mid_getMaxPackedValue_44e916dc40fc04cb,
            mid_getMinPackedValue_44e916dc40fc04cb,
            mid_getValue_0f6353e25adc470a,
            mid_moveToChild_9aa4f33e82ea333f,
            mid_moveToParent_9aa4f33e82ea333f,
            mid_moveToSibling_9aa4f33e82ea333f,
            mid_restore_645c25455f5b9b1c,
            mid_save_645c25455f5b9b1c,
            mid_swap_645c25455f5b9b1c,
            mid_visitDocIDs_0ccbfe2d8ea647b2,
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
