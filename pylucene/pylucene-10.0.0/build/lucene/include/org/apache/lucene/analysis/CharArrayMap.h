#ifndef org_apache_lucene_analysis_CharArrayMap_H
#define org_apache_lucene_analysis_CharArrayMap_H

#include "java/util/AbstractMap.h"

namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class Object;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class CharArraySet;
        class CharArrayMap$EntrySet;
        class CharArrayMap;
      }
    }
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
            mid_init$_2936d2706a18a684,
            mid_init$_c878b6f1e980b1c9,
            mid_clear_3720c61b0679eb3e,
            mid_containsKey_7fa88c8af67956ed,
            mid_containsKey_570b5248a6da3ef6,
            mid_containsKey_bab09355a5cf0732,
            mid_copy_b97676c8c450d301,
            mid_emptyMap_72de109019660f9e,
            mid_entrySet_ae6707477a957bc4,
            mid_get_84780732a28a9438,
            mid_get_5fd81664d2d475e1,
            mid_get_8bd947f4d46d0091,
            mid_keySet_7a52625961f2f88e,
            mid_put_362baf03d488137b,
            mid_put_ae0d7a82828ec931,
            mid_put_17ecdd932774c928,
            mid_put_243089e4ee289db6,
            mid_remove_5fd81664d2d475e1,
            mid_size_20fbf7565993c3d7,
            mid_toString_09a7afff1868fc5e,
            mid_unmodifiableMap_8e88915596336b93,
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
