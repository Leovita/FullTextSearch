#ifndef org_apache_lucene_util_Version_H
#define org_apache_lucene_util_Version_H

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
        class Version;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Version : public ::java::lang::Object {
         public:
          enum {
            mid_equals_570b5248a6da3ef6,
            mid_fromBits_6b040041fa0defb1,
            mid_getPackageImplementationVersion_09a7afff1868fc5e,
            mid_hashCode_20fbf7565993c3d7,
            mid_onOrAfter_739b5b5fd56c053b,
            mid_parse_c0020c250dff2963,
            mid_parseLeniently_c0020c250dff2963,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          enum {
            fid_bugfix,
            fid_major,
            fid_minor,
            fid_prerelease,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Version(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Version(const Version& obj) : ::java::lang::Object(obj) {}

          static Version *LATEST;
          static Version *LUCENE_10_0_0;
          static Version *LUCENE_9_0_0;
          static Version *LUCENE_9_10_0;
          static Version *LUCENE_9_11_0;
          static Version *LUCENE_9_11_1;
          static Version *LUCENE_9_12_0;
          static Version *LUCENE_9_13_0;
          static Version *LUCENE_9_1_0;
          static Version *LUCENE_9_2_0;
          static Version *LUCENE_9_3_0;
          static Version *LUCENE_9_4_0;
          static Version *LUCENE_9_4_1;
          static Version *LUCENE_9_4_2;
          static Version *LUCENE_9_5_0;
          static Version *LUCENE_9_6_0;
          static Version *LUCENE_9_7_0;
          static Version *LUCENE_9_8_0;
          static Version *LUCENE_9_9_0;
          static Version *LUCENE_9_9_1;
          static Version *LUCENE_9_9_2;
          static Version *LUCENE_CURRENT;
          static jint MIN_SUPPORTED_MAJOR;

          jint _get_bugfix() const;
          jint _get_major() const;
          jint _get_minor() const;
          jint _get_prerelease() const;

          jboolean equals(const ::java::lang::Object &) const;
          static Version fromBits(jint, jint, jint);
          static ::java::lang::String getPackageImplementationVersion();
          jint hashCode() const;
          jboolean onOrAfter(const Version &) const;
          static Version parse(const ::java::lang::String &);
          static Version parseLeniently(const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(Version);
        extern PyTypeObject *PY_TYPE(Version);

        class t_Version {
        public:
          PyObject_HEAD
          Version object;
          static PyObject *wrap_Object(const Version&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
