#ifndef org_apache_lucene_search_matchhighlight_PassageFormatter_H
#define org_apache_lucene_search_matchhighlight_PassageFormatter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {
          class Passage;
          class OffsetRange;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class CharSequence;
    class StringBuilder;
  }
  namespace util {
    class List;
    namespace function {
      class Function;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class PassageFormatter : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f8f56bd17402e3b3,
              mid_init$_ef63314fbbbb4e29,
              mid_format_616f719f371cb04e,
              mid_format_229d971809a63198,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PassageFormatter(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PassageFormatter(const PassageFormatter& obj) : ::java::lang::Object(obj) {}

            PassageFormatter(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
            PassageFormatter(const ::java::lang::String &, const ::java::util::function::Function &, const ::java::util::function::Function &);

            ::java::lang::StringBuilder format(const ::java::lang::StringBuilder &, const ::java::lang::CharSequence &, const ::org::apache::lucene::search::matchhighlight::Passage &) const;
            ::java::util::List format(const ::java::lang::CharSequence &, const ::java::util::List &, const ::java::util::List &) const;
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
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(PassageFormatter);
          extern PyTypeObject *PY_TYPE(PassageFormatter);

          class t_PassageFormatter {
          public:
            PyObject_HEAD
            PassageFormatter object;
            static PyObject *wrap_Object(const PassageFormatter&);
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
