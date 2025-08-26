#ifndef org_apache_lucene_util_IntsRef_H
#define org_apache_lucene_util_IntsRef_H

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
        class IntsRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class IntsRef : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_8226bd0b0fc13dba,
            mid_init$_57da58ead958e473,
            mid_clone_467dd1d064587a13,
            mid_compareTo_f229bd6d00984da7,
            mid_deepCopyOf_e1b18337a7309f5e,
            mid_equals_00d17418847797d4,
            mid_hashCode_bd89ce15dad49192,
            mid_intsEquals_7801aa08e272cad4,
            mid_isValid_9aa4f33e82ea333f,
            mid_toString_e7df854526d67fa3,
            max_mid
          };

          enum {
            fid_ints,
            fid_length,
            fid_offset,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntsRef(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntsRef(const IntsRef& obj) : ::java::lang::Object(obj) {}

          static JArray< jint > *EMPTY_INTS;

          JArray< jint > _get_ints() const;
          void _set_ints(const JArray< jint > &) const;
          jint _get_length() const;
          void _set_length(jint) const;
          jint _get_offset() const;
          void _set_offset(jint) const;

          IntsRef();
          IntsRef(jint);
          IntsRef(const JArray< jint > &, jint, jint);

          IntsRef clone() const;
          jint compareTo(const IntsRef &) const;
          static IntsRef deepCopyOf(const IntsRef &);
          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
          jboolean intsEquals(const IntsRef &) const;
          jboolean isValid() const;
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
        extern PyType_Def PY_TYPE_DEF(IntsRef);
        extern PyTypeObject *PY_TYPE(IntsRef);

        class t_IntsRef {
        public:
          PyObject_HEAD
          IntsRef object;
          static PyObject *wrap_Object(const IntsRef&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
