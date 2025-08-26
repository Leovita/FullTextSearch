#ifndef org_apache_lucene_analysis_CharArrayMap_H
#define org_apache_lucene_analysis_CharArrayMap_H

#include "java/util/AbstractMap.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArrayMap;
        class CharArrayMap$EntrySet;
        class CharArraySet;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
    class CharSequence;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class CharArrayMap : public ::java::util::AbstractMap {
         public:
          enum {
            mid_init$_a0fed0a2cd38e7b1,
            mid_init$_0d106768c19cbb43,
            mid_clear_e7bdbe105ce1bafb,
            mid_containsKey_966cbeda474fd26b,
            mid_containsKey_00d17418847797d4,
            mid_containsKey_355feee9125d4fb1,
            mid_copy_e53bb164b65b67fd,
            mid_emptyMap_8224c07bf498f19e,
            mid_entrySet_fc0b7510d2d31191,
            mid_get_53a8d172a6f84f78,
            mid_get_e2c45b124c12f4ec,
            mid_get_a9b43991c3635118,
            mid_keySet_0a8f3a685855aa4f,
            mid_put_ec4829d30206db59,
            mid_put_bb51bb3face758ba,
            mid_put_ebb9abdf44baf639,
            mid_put_b3b175dfe26d2c44,
            mid_remove_e2c45b124c12f4ec,
            mid_size_bd89ce15dad49192,
            mid_toString_e7df854526d67fa3,
            mid_unmodifiableMap_dbdf2e56ae82ce8f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CharArrayMap(jobject obj) : ::java::util::AbstractMap(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CharArrayMap(const CharArrayMap& obj) : ::java::util::AbstractMap(obj) {}

          CharArrayMap(jint, jboolean);
          CharArrayMap(const ::java::util::Map &, jboolean);

          void clear() const;
          jboolean containsKey(const ::java::lang::CharSequence &) const;
          jboolean containsKey(const ::java::lang::Object &) const;
          jboolean containsKey(const JArray< jchar > &, jint, jint) const;
          static CharArrayMap copy(const ::java::util::Map &);
          static CharArrayMap emptyMap();
          ::org::apache::lucene::analysis::CharArrayMap$EntrySet entrySet() const;
          ::java::lang::Object get(const ::java::lang::CharSequence &) const;
          ::java::lang::Object get(const ::java::lang::Object &) const;
          ::java::lang::Object get(const JArray< jchar > &, jint, jint) const;
          ::org::apache::lucene::analysis::CharArraySet keySet() const;
          ::java::lang::Object put(const JArray< jchar > &, const ::java::lang::Object &) const;
          ::java::lang::Object put(const ::java::lang::String &, const ::java::lang::Object &) const;
          ::java::lang::Object put(const ::java::lang::CharSequence &, const ::java::lang::Object &) const;
          ::java::lang::Object put(const ::java::lang::Object &, const ::java::lang::Object &) const;
          ::java::lang::Object remove(const ::java::lang::Object &) const;
          jint size() const;
          ::java::lang::String toString() const;
          static CharArrayMap unmodifiableMap(const CharArrayMap &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(CharArrayMap);
        extern PyTypeObject *PY_TYPE(CharArrayMap);

        class t_CharArrayMap {
        public:
          PyObject_HEAD
          CharArrayMap object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CharArrayMap *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CharArrayMap&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CharArrayMap&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
