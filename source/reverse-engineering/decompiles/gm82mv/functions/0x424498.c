// rea decompile_all
// name: FUN_00424498
// address: 0x424498
// body: available
// range: 0x424498-0x4246dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4244b5 (push 0x4246dd followed by fs-segment stack chaining); handler 0x4246dd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00424498(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  int local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_c;
  undefined4 local_8;

  local_14 = &stack0xfffffffc;
  iVar3 = 8;
  do {
    local_8 = 0;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_18 = &LAB_004246dd;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  if (param_1 < -0x7ffdfff5) {
    if (param_1 == -0x7ffdfff6) {
      local_20 = (undefined4 *)0x42456e;
      local_14 = &stack0xfffffffc;
      FUN_0040b9d0(PTR_LAB_00688a04,&local_c);
      local_20 = (undefined4 *)0x42457d;
      FUN_0041bd4c(&LAB_00423ad4,1,local_c);
      local_20 = (undefined4 *)0x424582;
      FUN_00406ab4();
      goto LAB_004246b5;
    }
    if (param_1 < -0x7ffdfffa) {
      if (param_1 == -0x7ffdfffb) {
        local_20 = (undefined4 *)0x42452c;
        local_14 = &stack0xfffffffc;
        FUN_00424210();
        goto LAB_004246b5;
      }
      if (param_1 == -0x7fffbfff) {
        local_20 = (undefined4 *)0x4245e0;
        local_14 = &stack0xfffffffc;
        FUN_0040b9d0(PTR_LAB_00689088,&local_18);
        local_20 = (undefined4 *)0x4245ef;
        FUN_0041bd4c(&LAB_00423ef4,1,local_18);
        local_20 = (undefined4 *)0x4245f4;
        FUN_00406ab4();
        goto LAB_004246b5;
      }
      if (param_1 == -0x7fff0001) {
        local_20 = (undefined4 *)0x42464f;
        local_14 = &stack0xfffffffc;
        FUN_0040b9d0(PTR_LAB_00688a00,&local_24);
        local_20 = (undefined4 *)0x42465e;
        FUN_0041bd4c(&LAB_00424054,1,local_24);
        local_20 = (undefined4 *)0x424663;
        FUN_00406ab4();
        goto LAB_004246b5;
      }
    }
    else {
      if (param_1 == -0x7ffdfff8) {
        local_20 = (undefined4 *)0x42453e;
        local_14 = &stack0xfffffffc;
        FUN_0040b9d0(PTR_LAB_006894c8,&local_8);
        local_20 = (undefined4 *)0x42454d;
        FUN_0041bd4c(&LAB_00423c30,1,local_8);
        local_20 = (undefined4 *)0x424552;
        FUN_00406ab4();
        goto LAB_004246b5;
      }
      if (param_1 == -0x7ffdfff7) {
        local_20 = (undefined4 *)0x42455c;
        local_14 = &stack0xfffffffc;
        FUN_00424300();
        goto LAB_004246b5;
      }
    }
  }
  else {
    if (param_1 == -0x7ffdfff5) {
      local_20 = (undefined4 *)0x424594;
      FUN_0040b9d0(PTR_LAB_006892fc,&stack0xfffffff0);
      local_20 = (undefined4 *)0x4245a3;
      FUN_0041bd4c(&LAB_00423ce0,1,unaff_EBX);
      local_20 = (undefined4 *)0x4245a8;
      FUN_00406ab4();
      goto LAB_004246b5;
    }
    if (param_1 == -0x7ffdfff3) {
      local_20 = (undefined4 *)0x4245ba;
      local_14 = &stack0xfffffffc;
      FUN_0040b9d0(PTR_LAB_00689640,&local_14);
      local_20 = (undefined4 *)0x4245c9;
      FUN_0041bd4c(&LAB_00423d8c,1,local_14);
      local_20 = (undefined4 *)0x4245ce;
      FUN_00406ab4();
      goto LAB_004246b5;
    }
    if (param_1 == -0x7ff8fff2) {
      local_20 = (undefined4 *)0x424606;
      local_14 = &stack0xfffffffc;
      FUN_0040b9d0(PTR_LAB_00688b74,&local_1c);
      local_20 = (undefined4 *)0x424615;
      FUN_0041bd4c(&LAB_00423fa0,1,local_1c);
      local_20 = (undefined4 *)0x42461a;
      FUN_00406ab4();
      goto LAB_004246b5;
    }
    if (param_1 == -0x7ff8ffa9) {
      local_20 = (undefined4 *)0x42462c;
      local_14 = &stack0xfffffffc;
      FUN_0040b9d0(PTR_LAB_00688bc4,&local_20);
      puVar1 = local_20;
      local_20 = (undefined4 *)0x42463b;
      FUN_0041bd4c(&LAB_00423b80,1,puVar1);
      local_20 = (undefined4 *)0x424640;
      FUN_00406ab4();
      goto LAB_004246b5;
    }
  }
  local_3c = *(undefined4 *)PTR_PTR_006894f0;
  local_38 = 0x11;
  local_30 = 0;
  local_20 = (undefined4 *)0x424684;
  local_34 = param_1;
  local_14 = &stack0xfffffffc;
  FUN_0041b234(param_1,&local_40);
  local_2c = local_40;
  local_20 = &local_3c;
  local_24 = 2;
  local_28 = 0x4246a1;
  FUN_0040b9d0(PTR_LAB_00688df0,&local_44);
  local_28 = 0x4246b0;
  FUN_0041bd88(&LAB_00411ec4,1,local_44);
  local_28 = 0x4246b5;
  FUN_00406ab4();
LAB_004246b5:
  puVar2 = local_14;
  *in_FS_OFFSET = local_1c;
  local_14 = &LAB_004246e4;
  local_18 = (undefined1 *)0x4246cf;
  thunk_FUN_004072fc(&local_44,2,puVar2);
  local_18 = (undefined1 *)0x4246dc;
  thunk_FUN_004072fc(&local_24,8);
  return;
}
