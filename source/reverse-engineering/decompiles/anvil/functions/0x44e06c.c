// rea decompile_all
// name: FUN_0044e06c
// address: 0x44e06c
// body: available
// range: 0x44e06c-0x44e211 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44e094 (push 0x44e212 followed by fs-segment stack chaining); handler 0x44e212 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044e06c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
                 undefined2 param_9)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined4 uStack_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  undefined4 local_8;

  local_24 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  puVar3 = &stack0xfffffffc;
  uStack_14 = 9;
  do {
    local_c = 0;
    uStack_14 = uStack_14 - 1;
  } while (uStack_14 != 0);
  LOCK();
  UNLOCK();
  local_28 = &LAB_0044e212;
  local_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = param_5;
  local_34 = param_4;
  local_38 = (undefined1 *)0x44e0ab;
  local_8 = uStack_14;
  FUN_004194a8((int)&local_8 + 2,&local_8,(int)&local_c + 2);
  local_30 = param_5;
  local_34 = param_4;
  local_38 = (undefined1 *)((int)&uStack_14 + 2);
  local_3c = (undefined1 *)0x44e0c3;
  FUN_004191c8(&local_c,&local_e,&local_10);
  local_34 = (undefined1 *)0x44e0d2;
  local_30 = &stack0xfffffffc;
  FUN_0044e018(local_8._2_2_,param_1,&local_24);
  puVar4 = local_30;
  local_30 = local_24;
  local_34 = (undefined1 *)0x44e0e7;
  FUN_00408310(&local_28,*(undefined2 *)PTR_DAT_00688b5c,puVar4);
  local_34 = local_28;
  local_3c = (undefined1 *)0x44e0f9;
  local_38 = &stack0xfffffffc;
  FUN_0044e018(local_8 & 0xffff,param_2,&local_2c);
  puVar4 = local_38;
  local_38 = local_2c;
  local_3c = (undefined1 *)0x44e10e;
  FUN_00408310(&local_30,*(undefined2 *)PTR_DAT_00688b5c,puVar4);
  local_3c = local_30;
  local_44 = (undefined *)0x44e120;
  local_40 = &stack0xfffffffc;
  FUN_0044e018(local_c._2_2_,0,&local_34);
  local_40 = local_34;
  local_44 = &DAT_0044e230;
  local_4c = (undefined1 *)0x44e13a;
  local_48 = &stack0xfffffffc;
  FUN_0044e018(local_c & 0xffff,param_9,&local_38);
  puVar4 = local_48;
  local_48 = local_38;
  local_4c = (undefined1 *)0x44e14f;
  FUN_00408310(&local_3c,*(undefined2 *)PTR_DAT_00688890,puVar4);
  local_4c = local_3c;
  local_54 = (undefined *)0x44e163;
  local_50 = &stack0xfffffffc;
  FUN_0044e018(local_e,param_8,&local_40);
  puVar4 = local_50;
  local_50 = local_40;
  local_54 = (undefined *)0x44e178;
  FUN_00408310(&local_44,*(undefined2 *)PTR_DAT_00688890,puVar4);
  local_54 = local_44;
  FUN_0044e018(local_10,param_7,&local_48);
  FUN_00408310(&local_4c,*(undefined2 *)PTR_DAT_006895b0,puVar2,local_48);
  FUN_0044e018(uStack_14._2_2_,param_6,&local_50,&stack0xfffffffc,local_4c);
  puVar4 = local_50;
  FUN_0040875c(&stack0xffffffe0,0xd,puVar3);
  puVar2 = &stack0xffffffe4;
  uVar1 = 0;
  FUN_0040b9d0(PTR_LAB_00688940,&local_54);
  FUN_0041bd88(&LAB_00411bb8,1,local_54,uVar1,puVar2);
  FUN_00406ab4();
  *in_FS_OFFSET = uVar1;
  thunk_FUN_004072fc(&local_54,0xe,puVar4,&LAB_0044e219);
  return;
}
