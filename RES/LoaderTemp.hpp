
class {{LoaderName}} {
public:
  typedef APIProc (*UserptrLoadFunc)(void *userptr,std::string_view name);
  struct Flags: public LONGBITSET {
      Flags():LONGBITSET(sizeof(Flags),{{Flagsize}}){}
    {{FlagsDEFINE}}
    }; 
private:
  Flags NowState;
public:
  Flags NeedLoad;
  UserptrLoadFunc LoadFunc;
  void *userptr;
  inline APIProc TryToGet(std::string_view name) { return LoadFunc(userptr,name); }
  inline const Flags &GetNowState()const { return NowState; }
  {{LoaderName}}(){{constructors}};
  {{EXTFunsDefine}}
  {{EXTLoadFunDefine}}
  {{MappingDef}}
  Flags LoadAll(){{LoadAllFunDef}};
};