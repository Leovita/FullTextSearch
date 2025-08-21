#ifndef org_apache_lucene_analysis_custom_CustomAnalyzer$ConditionBuilder_H
#define org_apache_lucene_analysis_custom_CustomAnalyzer$ConditionBuilder_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace custom {
          class CustomAnalyzer$Builder;
          class CustomAnalyzer$ConditionBuilder;
        }
        class TokenFilterFactory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace custom {

          class CustomAnalyzer$ConditionBuilder : public ::java::lang::Object {
           public:
            enum {
              mid_addTokenFilter_8d1034691aafa16a,
              mid_addTokenFilter_8f1956b6dc41b948,
              mid_addTokenFilter_97894207c2295ff9,
              mid_addTokenFilter_4c605a3ddb537c54,
              mid_endwhen_2ec25e4994287f08,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CustomAnalyzer$ConditionBuilder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CustomAnalyzer$ConditionBuilder(const CustomAnalyzer$ConditionBuilder& obj) : ::java::lang::Object(obj) {}

            CustomAnalyzer$ConditionBuilder addTokenFilter(const ::java::lang::Class &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$ConditionBuilder addTokenFilter(const ::java::lang::String &, const JArray< ::java::lang::String > &) const;
            CustomAnalyzer$ConditionBuilder addTokenFilter(const ::java::lang::Class &, const ::java::util::Map &) const;
            CustomAnalyzer$ConditionBuilder addTokenFilter(const ::java::lang::String &, const ::java::util::Map &) const;
            ::org::apache::lucene::analysis::custom::CustomAnalyzer$Builder endwhen() const;
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
      namespace analysis {
        namespace custom {
          extern PyType_Def PY_TYPE_DEF(CustomAnalyzer$ConditionBuilder);
          extern PyTypeObject *PY_TYPE(CustomAnalyzer$ConditionBuilder);

          class t_CustomAnalyzer$ConditionBuilder {
          public:
            PyObject_HEAD
            CustomAnalyzer$ConditionBuilder object;
            static PyObject *wrap_Object(const CustomAnalyzer$ConditionBuilder&);
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
