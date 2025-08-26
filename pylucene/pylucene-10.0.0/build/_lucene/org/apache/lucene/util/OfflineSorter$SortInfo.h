#ifndef org_apache_lucene_util_OfflineSorter$SortInfo_H
#define org_apache_lucene_util_OfflineSorter$SortInfo_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class OfflineSorter;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class OfflineSorter$SortInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_43c5c0e986ba2187,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          enum {
            fid_bufferSize,
            fid_lineCount,
            fid_mergeRounds,
            fid_readTimeMS,
            fid_tempMergeFiles,
            fid_totalTimeMS,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter$SortInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter$SortInfo(const OfflineSorter$SortInfo& obj) : ::java::lang::Object(obj) {}

          jlong _get_bufferSize() const;
          jlong _get_lineCount() const;
          void _set_lineCount(jlong) const;
          jint _get_mergeRounds() const;
          void _set_mergeRounds(jint) const;
          jlong _get_readTimeMS() const;
          void _set_readTimeMS(jlong) const;
          jint _get_tempMergeFiles() const;
          void _set_tempMergeFiles(jint) const;
          jlong _get_totalTimeMS() const;
          void _set_totalTimeMS(jlong) const;

          OfflineSorter$SortInfo(const ::org::apache::lucene::util::OfflineSorter &);

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
        extern PyType_Def PY_TYPE_DEF(OfflineSorter$SortInfo);
        extern PyTypeObject *PY_TYPE(OfflineSorter$SortInfo);

        class t_OfflineSorter$SortInfo {
        public:
          PyObject_HEAD
          OfflineSorter$SortInfo object;
          static PyObject *wrap_Object(const OfflineSorter$SortInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
