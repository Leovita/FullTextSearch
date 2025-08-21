#ifndef org_apache_lucene_index_FieldInvertState_H
#define org_apache_lucene_index_FieldInvertState_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeSource;
      }
      namespace index {
        class IndexOptions;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FieldInvertState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0963ceb49433c6ea,
            mid_init$_45216f93381f9e59,
            mid_getAttributeSource_ee6fc324885c7c07,
            mid_getIndexCreatedVersionMajor_20fbf7565993c3d7,
            mid_getIndexOptions_0d9f22852de1dba6,
            mid_getLength_20fbf7565993c3d7,
            mid_getMaxTermFrequency_20fbf7565993c3d7,
            mid_getName_09a7afff1868fc5e,
            mid_getNumOverlap_20fbf7565993c3d7,
            mid_getOffset_20fbf7565993c3d7,
            mid_getPosition_20fbf7565993c3d7,
            mid_getUniqueTermCount_20fbf7565993c3d7,
            mid_setLength_540b2b23d51b1efd,
            mid_setNumOverlap_540b2b23d51b1efd,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInvertState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInvertState(const FieldInvertState& obj) : ::java::lang::Object(obj) {}

          FieldInvertState(jint, const ::java::lang::String &, const ::org::apache::lucene::index::IndexOptions &);
          FieldInvertState(jint, const ::java::lang::String &, const ::org::apache::lucene::index::IndexOptions &, jint, jint, jint, jint, jint, jint);

          ::org::apache::lucene::util::AttributeSource getAttributeSource() const;
          jint getIndexCreatedVersionMajor() const;
          ::org::apache::lucene::index::IndexOptions getIndexOptions() const;
          jint getLength() const;
          jint getMaxTermFrequency() const;
          ::java::lang::String getName() const;
          jint getNumOverlap() const;
          jint getOffset() const;
          jint getPosition() const;
          jint getUniqueTermCount() const;
          void setLength(jint) const;
          void setNumOverlap(jint) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(FieldInvertState);
        extern PyTypeObject *PY_TYPE(FieldInvertState);

        class t_FieldInvertState {
        public:
          PyObject_HEAD
          FieldInvertState object;
          static PyObject *wrap_Object(const FieldInvertState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
