#ifndef org_apache_lucene_analysis_ja_dict_UserDictionary_H
#define org_apache_lucene_analysis_ja_dict_UserDictionary_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class UserMorphData;
            class UserDictionary;
            class TokenInfoFST;
          }
        }
        namespace morph {
          class Dictionary;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
    class Reader;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {

            class UserDictionary : public ::java::lang::Object {
             public:
              enum {
                mid_getFST_0930ded321e6609a,
                mid_getMorphAttributes_1e88647c205afb44,
                mid_lookup_a2653222349ac1ee,
                mid_lookupSegmentation_499069f8a790ab95,
                mid_open_acf3a16ca3074689,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit UserDictionary(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              UserDictionary(const UserDictionary& obj) : ::java::lang::Object(obj) {}

              static ::java::lang::String *INTERNAL_SEPARATOR;

              ::org::apache::lucene::analysis::ja::dict::TokenInfoFST getFST() const;
              ::org::apache::lucene::analysis::ja::dict::UserMorphData getMorphAttributes() const;
              JArray< JArray< jint > > lookup(const JArray< jchar > &, jint, jint) const;
              JArray< jint > lookupSegmentation(jint) const;
              static UserDictionary open(const ::java::io::Reader &);
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(UserDictionary);
            extern PyTypeObject *PY_TYPE(UserDictionary);

            class t_UserDictionary {
            public:
              PyObject_HEAD
              UserDictionary object;
              static PyObject *wrap_Object(const UserDictionary&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
