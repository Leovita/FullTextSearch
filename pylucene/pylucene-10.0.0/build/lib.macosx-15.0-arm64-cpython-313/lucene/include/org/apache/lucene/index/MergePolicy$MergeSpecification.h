#ifndef org_apache_lucene_index_MergePolicy$MergeSpecification_H
#define org_apache_lucene_index_MergePolicy$MergeSpecification_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace index {
        class MergePolicy$OneMerge;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergePolicy$MergeSpecification : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_add_e1e55891bbba68fb,
            mid_segString_69d2ffd848815eb8,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          enum {
            fid_merges,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergePolicy$MergeSpecification(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergePolicy$MergeSpecification(const MergePolicy$MergeSpecification& obj) : ::java::lang::Object(obj) {}

          ::java::util::List _get_merges() const;

          MergePolicy$MergeSpecification();

          void add(const ::org::apache::lucene::index::MergePolicy$OneMerge &) const;
          ::java::lang::String segString(const ::org::apache::lucene::store::Directory &) const;
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
      namespace index {
        extern PyType_Def PY_TYPE_DEF(MergePolicy$MergeSpecification);
        extern PyTypeObject *PY_TYPE(MergePolicy$MergeSpecification);

        class t_MergePolicy$MergeSpecification {
        public:
          PyObject_HEAD
          MergePolicy$MergeSpecification object;
          static PyObject *wrap_Object(const MergePolicy$MergeSpecification&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
