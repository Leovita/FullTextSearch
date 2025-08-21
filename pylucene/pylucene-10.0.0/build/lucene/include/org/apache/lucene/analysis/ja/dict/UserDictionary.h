#ifndef org_apache_lucene_analysis_ja_dict_UserDictionary_H
#define org_apache_lucene_analysis_ja_dict_UserDictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Reader;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          namespace dict {
            class TokenInfoFST;
            class UserDictionary;
            class UserMorphData;
          }
        }
        namespace morph {
          class Dictionary;
        }
      }
    }
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
                mid_getFST_cbe3fd00f3f3655e,
                mid_getMorphAttributes_f578d5a3462983cb,
                mid_lookup_1f8a37f51ae07630,
                mid_lookupSegmentation_4b72dfe8c9c7216f,
                mid_open_f5b262eebfcc923d,
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
