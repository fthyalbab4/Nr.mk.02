// rea decompile_all
// name: FUN_0071d23c
// address: 0x71d23c
// body: available
// range: 0x71d23c-0x71d2c3 inclusive
// range: 0x71d2f8-0x71d4cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x71d25c (push 0x71d4d0 followed by fs-segment stack chaining); handler 0x71d4d0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0071d23c(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  int *local_8;

  local_20 = &stack0xfffffffc;
  local_10 = 5;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0071d4d0;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_8 = (int *)0x0;
  puVar1 = &stack0xfffffffc;
  if (param_1 != 0) {
    local_2c = 0x71d273;
    iVar2 = FUN_0071cdcc(param_1);
    local_2c = 0x71d27c;
    iVar3 = FUN_0071cde4(param_1);
    local_2c = 0x71d285;
    FUN_0071cdfc(param_1);
    puVar1 = local_20;
    if ((((iVar2 != 1) && (iVar2 != 2)) && (iVar3 != 10)) && ((iVar3 != 0xb && (iVar3 != 0xd)))) {
      switch(iVar3) {
      case 1:
        local_2c = 0x71d2fd;
        local_2c = FUN_0062c9b8();
        local_30 = 0x71d30f;
        local_c = local_2c;
        FUN_0062cabc(local_2c,&local_10);
        local_30 = 0x71d31b;
        local_8 = (int *)FUN_0071cb48(local_10,iVar2,iVar3);
        break;
      case 2:
        local_2c = 0x71d328;
        local_2c = FUN_006f5828();
        local_30 = 0x71d33a;
        local_c = local_2c;
        FUN_006f5920(local_2c,&stack0xffffffec);
        local_30 = 0x71d346;
        local_8 = (int *)FUN_0071cb48(unaff_EBX,iVar2,iVar3);
        break;
      case 3:
        local_2c = 0x71d353;
        local_2c = FUN_006521ec();
        local_30 = 0x71d365;
        local_c = local_2c;
        FUN_006522c0(local_2c,&stack0xffffffe8);
        local_30 = 0x71d371;
        local_8 = (int *)FUN_0071cb48(unaff_ESI,iVar2,iVar3);
        break;
      case 4:
        local_2c = 0x71d37e;
        local_2c = FUN_00692e50();
        local_30 = 0x71d390;
        local_c = local_2c;
        FUN_00692f24(local_2c,&stack0xffffffe4);
        local_30 = 0x71d39c;
        local_8 = (int *)FUN_0071cb48(unaff_EDI,iVar2,iVar3);
        break;
      case 6:
        local_2c = 0x71d3a9;
        local_2c = FUN_0064dd40();
        local_30 = 0x71d3bb;
        local_c = local_2c;
        FUN_0064de38(local_2c,&local_20);
        local_30 = 0x71d3c7;
        local_8 = (int *)FUN_0071cb48(local_20,iVar2,iVar3);
        break;
      case 7:
        local_2c = 0x71d3fc;
        local_2c = FUN_00655a6c();
        local_30 = 0x71d40e;
        local_c = local_2c;
        FUN_00655b40(local_2c,&local_28);
        local_30 = 0x71d41a;
        local_8 = (int *)FUN_0071cb48(local_28,iVar2,iVar3);
        break;
      case 8:
        local_2c = 0x71d3d4;
        local_2c = FUN_0072276c();
        local_30 = 0x71d3e6;
        local_c = local_2c;
        FUN_00722840(local_2c,&local_24);
        local_30 = 0x71d3f2;
        local_8 = (int *)FUN_0071cb48(local_24,iVar2,iVar3);
        break;
      case 9:
        local_2c = 0x71d424;
        local_2c = FUN_006fcb84();
        local_30 = 0x71d436;
        local_c = local_2c;
        FUN_006fcc58(local_2c,&local_2c);
        local_30 = 0x71d442;
        local_8 = (int *)FUN_0071cb48(local_2c,iVar2,iVar3);
        break;
      case 0xc:
        local_2c = 0x71d44c;
        local_2c = FUN_006fa534();
        local_30 = 0x71d45e;
        local_c = local_2c;
        FUN_006fa608(local_2c,&local_30);
        uVar4 = local_30;
        local_30 = 0x71d46a;
        local_8 = (int *)FUN_0071cb48(uVar4,iVar2,iVar3);
      }
      local_30 = 0x71d474;
      iVar2 = FUN_004ad12c(param_1);
      if (iVar2 == 0) {
        local_30 = 0x71d499;
        (**(code **)(*local_8 + 0x10))(local_8,param_1,0);
      }
      else {
        local_30 = 0x71d47f;
        uVar4 = FUN_004ad12c(param_1);
        local_30 = 0x71d48b;
        (**(code **)(*local_8 + 0x10))(local_8,uVar4,4);
      }
      local_2c = 0x71d4a1;
      FUN_004ad828(local_8);
      local_2c = 0x71d4ae;
      FUN_004b0584(DAT_0079a9e8,local_8);
      DAT_0077f5f4 = 1;
      puVar1 = local_20;
    }
  }
  local_20 = puVar1;
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_0071d4d7;
  local_24 = (undefined1 *)0x71d4cf;
  thunk_FUN_00406e80(&local_30,9,puVar1);
  return;
}
