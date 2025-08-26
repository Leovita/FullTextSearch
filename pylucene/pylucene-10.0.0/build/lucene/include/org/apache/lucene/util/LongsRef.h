#ifndef org_apache_lucene_util_LongsRef_H
#define org_apache_lucene_util_LongsRef_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Cloneable;
    class Class;
    class String;
    class Comparable;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class LongsRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class LongsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_8226bd0b0fc13dba,
            mid_init$_2a4a0e3eb510f108,
            mid_clone_f28527272776d920,
            mid_compareTo_34fae71ea256cd2a,
            mid_deepCopyOf_a13d779221ab4c1b,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_isValid_9aa4f33e82ea333f,
            mid_longsEquals_f3034a1cfaa08c57,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          enum {
            fid_length,
            fid_longs,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LongsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LongsRef(const LongsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jlong > *EMPTY_LONGS;

          jint _get_length() const;
          void _set_length(jint) const;
          JArray< jlong > _get_longs() const;
          void _set_longs(const JArray< jlong > &) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          LongsRef();
          LongsRef(jint);
          LongsRef(const JArray< jlong > &, jint, jint);

          LongsRef clone() const;
          jint compareTo(const LongsRef &) const;
          static LongsRef deepCopyOf(const LongsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean isValid() const;
          jboolean longsEquals(const LongsRef &) const;
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
        extern PyType_Def PY_TYPE_DEF(LongsRef);
        extern PyTypeObject *PY_TYPE(LongsRef);

        class t_LongsRef {
        public:
          PyObject_HEAD
          LongsRef object;
          static PyObject *wrap_Object(const LongsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
