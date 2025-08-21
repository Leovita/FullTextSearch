#ifndef org_apache_lucene_analysis_ko_dict_UserDictionary_H
#define org_apache_lucene_analysis_ko_dict_UserDictionary_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Integer;
    class Class;
  }
  namespace io {
    class IOException;
    class Reader;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          namespace dict {
            class UserDictionary;
            class TokenInfoFST;
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
        namespace ko {
          namespace dict {

            class UserDictionary : public ::java::lang::Object {
             public:
              enum {
                mid_getFST_446b49327b460db0,
                mid_getMorphAttributes_7079ababb78ae0da,
                mid_lookup_2d2a8ecee6f60771,
                mid_open_2a223798f02cf6b8,
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

              ::org::apache::lucene::analysis::ko::dict::TokenInfoFST getFST() const;
              ::org::apache::lucene::analysis::ko::dict::UserMorphData getMorphAttributes() const;
              ::java::util::List lookup(const JArray< jchar > &, jint, jint) const;
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
        namespace ko {
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
