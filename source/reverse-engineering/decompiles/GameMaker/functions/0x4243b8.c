// rea decompile_all
// name: FUN_004243b8
// address: 0x4243b8
// body: available
// range: 0x4243b8-0x4245fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4243d5 (push 0x4245fd followed by fs-segment stack chaining); handler 0x4245fd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004243b8(int param_1)

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
  local_18 = &LAB_004245fd;
  local_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_1c;
  if (param_1 < -0x7ffdfff5) {
    if (param_1 == -0x7ffdfff6) {
      local_20 = (undefined4 *)0x42448e;
      local_14 = &stack0xfffffffc;
      FUN_0040b75c(PTR_PTR_007817e0,&local_c);
      local_20 = (undefined4 *)0x42449d;
      FUN_0041beb8(&PTR_LAB_004239f4,1,local_c);
      local_20 = (undefined4 *)0x4244a2;
      FUN_00406618();
      goto LAB_004245d5;
    }
    if (param_1 < -0x7ffdfffa) {
      if (param_1 == -0x7ffdfffb) {
        local_20 = (undefined4 *)0x42444c;
        local_14 = &stack0xfffffffc;
        FUN_00424130();
        goto LAB_004245d5;
      }
      if (param_1 == -0x7fffbfff) {
        local_20 = (undefined4 *)0x424500;
        local_14 = &stack0xfffffffc;
        FUN_0040b75c(PTR_PTR_00782128,&local_18);
        local_20 = (undefined4 *)0x42450f;
        FUN_0041beb8(&PTR_LAB_00423e14,1,local_18);
        local_20 = (undefined4 *)0x424514;
        FUN_00406618();
        goto LAB_004245d5;
      }
      if (param_1 == -0x7fff0001) {
        local_20 = (undefined4 *)0x42456f;
        local_14 = &stack0xfffffffc;
        FUN_0040b75c(PTR_PTR_007817dc,&local_24);
        local_20 = (undefined4 *)0x42457e;
        FUN_0041beb8(&PTR_LAB_00423f74,1,local_24);
        local_20 = (undefined4 *)0x424583;
        FUN_00406618();
        goto LAB_004245d5;
      }
    }
    else {
      if (param_1 == -0x7ffdfff8) {
        local_20 = (undefined4 *)0x42445e;
        local_14 = &stack0xfffffffc;
        FUN_0040b75c(PTR_PTR_00782724,&local_8);
        local_20 = (undefined4 *)0x42446d;
        FUN_0041beb8(&PTR_LAB_00423b50,1,local_8);
        local_20 = (undefined4 *)0x424472;
        FUN_00406618();
        goto LAB_004245d5;
      }
      if (param_1 == -0x7ffdfff7) {
        local_20 = (undefined4 *)0x42447c;
        local_14 = &stack0xfffffffc;
        FUN_00424220();
        goto LAB_004245d5;
      }
    }
  }
  else {
    if (param_1 == -0x7ffdfff5) {
      local_20 = (undefined4 *)0x4244b4;
      FUN_0040b75c(PTR_PTR_007824a0,&stack0xfffffff0);
      local_20 = (undefined4 *)0x4244c3;
      FUN_0041beb8(&PTR_LAB_00423c00,1,unaff_EBX);
      local_20 = (undefined4 *)0x4244c8;
      FUN_00406618();
      goto LAB_004245d5;
    }
    if (param_1 == -0x7ffdfff3) {
      local_20 = (undefined4 *)0x4244da;
      local_14 = &stack0xfffffffc;
      FUN_0040b75c(PTR_PTR_00782908,&local_14);
      local_20 = (undefined4 *)0x4244e9;
      FUN_0041beb8(&PTR_LAB_00423cac,1,local_14);
      local_20 = (undefined4 *)0x4244ee;
      FUN_00406618();
      goto LAB_004245d5;
    }
    if (param_1 == -0x7ff8fff2) {
      local_20 = (undefined4 *)0x424526;
      local_14 = &stack0xfffffffc;
      FUN_0040b75c(PTR_PTR_00781a14,&local_1c);
      local_20 = (undefined4 *)0x424535;
      FUN_0041beb8(&PTR_LAB_00423ec0,1,local_1c);
      local_20 = (undefined4 *)0x42453a;
      FUN_00406618();
      goto LAB_004245d5;
    }
    if (param_1 == -0x7ff8ffa9) {
      local_20 = (undefined4 *)0x42454c;
      local_14 = &stack0xfffffffc;
      FUN_0040b75c(PTR_PTR_00781a6c,&local_20);
      puVar1 = local_20;
      local_20 = (undefined4 *)0x42455b;
      FUN_0041beb8(&PTR_LAB_00423aa0,1,puVar1);
      local_20 = (undefined4 *)0x424560;
      FUN_00406618();
      goto LAB_004245d5;
    }
  }
  local_3c = *(undefined4 *)PTR_PTR_00782760;
  local_38 = 0x11;
  local_30 = 0;
  local_20 = (undefined4 *)0x4245a4;
  local_34 = param_1;
  local_14 = &stack0xfffffffc;
  FUN_0041b4f0(param_1,&local_40);
  local_2c = local_40;
  local_20 = &local_3c;
  local_24 = 2;
  local_28 = 0x4245c1;
  FUN_0040b75c(PTR_PTR_00781d98,&local_44);
  local_28 = 0x4245d0;
  FUN_0041bef4(&PTR_LAB_00412064,1,local_44);
  local_28 = 0x4245d5;
  FUN_00406618();
LAB_004245d5:
  puVar2 = local_14;
  *in_FS_OFFSET = local_1c;
  local_14 = &LAB_00424604;
  local_18 = (undefined1 *)0x4245ef;
  thunk_FUN_00406e80(&local_44,2,puVar2);
  local_18 = (undefined1 *)0x4245fc;
  thunk_FUN_00406e80(&local_24,8);
  return;
}
