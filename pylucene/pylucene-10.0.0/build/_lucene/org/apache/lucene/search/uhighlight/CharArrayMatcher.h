#ifndef org_apache_lucene_search_uhighlight_CharArrayMatcher_H
#define org_apache_lucene_search_uhighlight_CharArrayMatcher_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class CharsRef;
        class BytesRef;
      }
      namespace search {
        namespace uhighlight {
          class CharArrayMatcher;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class CharArrayMatcher : public ::java::lang::Object {
           public:
            enum {
              mid_fromTerms_c205836e81a7e029,
              mid_match_355501ecf156b28b,
              mid_match_355feee9125d4fb1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharArrayMatcher(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharArrayMatcher(const CharArrayMatcher& obj) : ::java::lang::Object(obj) {}

            static CharArrayMatcher fromTerms(const ::java::util::List &);
            jboolean match(const ::org::apache::lucene::util::CharsRef &) const;
            jboolean match(const JArray< jchar > &, jint, jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(CharArrayMatcher);
          extern PyTypeObject *PY_TYPE(CharArrayMatcher);

          class t_CharArrayMatcher {
          public:
            PyObject_HEAD
            CharArrayMatcher object;
            static PyObject *wrap_Object(const CharArrayMatcher&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
