// rea decompile_all
// name: FUN_0062902c
// address: 0x62902c
// body: available
// range: 0x62902c-0x6291fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62903f (push 0x6291fb followed by fs-segment stack chaining); handler 0x6291fb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062902c(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_006291fb;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar2 = &stack0xfffffffc;
  if (*(char *)(param_1 + 5) == '\0') {
    FUN_0040b75c(PTR_PTR_007819d8,&local_8);
    FUN_005df5ec(&PTR_LAB_006270d0,1,local_8);
    param_1 = FUN_00406618();
    puVar2 = puStack_14;
  }
  puStack_14 = puVar2;
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 5);
    if (cVar1 == '\x01') {
      (**(code **)PTR_DAT_00781a18)();
    }
    else if (cVar1 == '\x02') {
      (**(code **)PTR_DAT_007825ec)();
    }
    else if (cVar1 == '\x03') {
      (**(code **)PTR_DAT_00781818)();
    }
    else {
      (**(code **)PTR_DAT_00781818)();
    }
  }
  else if (cVar1 == '\x01') {
    cVar1 = *(char *)(param_1 + 5);
    if (cVar1 == '\x01') {
      (**(code **)PTR_DAT_0078241c)();
    }
    else if (cVar1 == '\x02') {
      (**(code **)PTR_DAT_00781b6c)();
    }
    else if (cVar1 == '\x03') {
      (**(code **)PTR_DAT_00782240)();
    }
    else {
      (**(code **)PTR_DAT_00782240)();
    }
  }
  else if (cVar1 == '\x02') {
    cVar1 = *(char *)(param_1 + 5);
    if (cVar1 == '\x01') {
      (**(code **)PTR_DAT_007827d4)();
    }
    else if (cVar1 == '\x02') {
      (**(code **)PTR_DAT_00781f7c)();
    }
    else if (cVar1 == '\x03') {
      (**(code **)PTR_DAT_0078259c)();
    }
    else {
      (**(code **)PTR_DAT_0078259c)();
    }
  }
  else if (cVar1 == '\x03') {
    cVar1 = *(char *)(param_1 + 5);
    if (cVar1 == '\x01') {
      (**(code **)PTR_DAT_007818a0)();
    }
    else if (cVar1 == '\x02') {
      (**(code **)PTR_DAT_007824c4)();
    }
    else if (cVar1 == '\x03') {
      (**(code **)PTR_DAT_007816a8)();
    }
    else {
      (**(code **)PTR_DAT_007816a8)();
    }
  }
  else {
    FUN_0040b75c(PTR_PTR_0078249c,&local_c);
    FUN_005df5ec(&PTR_LAB_0062717c,1,local_c);
    FUN_00406618();
  }
  puVar2 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00629202;
  puStack_18 = (undefined1 *)0x6291fa;
  thunk_FUN_00406e80(&local_c,2,puVar2);
  return;
}
