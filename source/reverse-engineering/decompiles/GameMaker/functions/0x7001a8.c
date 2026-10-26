// rea decompile_all
// name: FUN_007001a8
// address: 0x7001a8
// body: available
// range: 0x7001a8-0x70039b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x7001d0 (push 0x70039c followed by fs-segment stack chaining); handler 0x70039c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007001a8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int iVar3;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined1 uVar4;
  int *local_30;
  char *local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  char local_e;
  char local_d;
  undefined4 local_c;
  int local_8;

  local_20 = &stack0xfffffffc;
  local_8 = 5;
  do {
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  LOCK();
  UNLOCK();
  local_c = 0;
  local_24 = &LAB_0070039c;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (char *)0x7001de;
  iVar2 = FUN_00714e30(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  uVar4 = iVar2 == 0;
  if ((bool)uVar4) {
    local_2c = (char *)0x7001f1;
    FUN_00407f0c(&local_8,L"Unknown Action");
  }
  else {
    local_2c = &local_e;
    local_30 = &local_8;
    FUN_006ff6b4(param_1,*(undefined4 *)(iVar2 + 0x20),&local_d);
    FUN_00408640(*(undefined4 *)(iVar2 + 4),L"Code");
    if ((bool)uVar4) {
      FUN_00408144(&stack0xffffffe8,*(undefined4 *)(param_1 + 0x4c));
      local_30 = (int *)0x700239;
      FUN_00410750(unaff_ESI,3,&stack0xffffffec);
      local_30 = (int *)0x700246;
      thunk_FUN_00407d2c(unaff_EBX,&DAT_007003f4);
      if ((bool)uVar4) {
        local_30 = (int *)0x700259;
        iVar2 = FUN_00408a68(&DAT_00700408,*(undefined4 *)(param_1 + 0x4c));
        if (iVar2 < 1) {
          local_30 = (int *)0x700290;
          FUN_00407f0c(&local_8,*(undefined4 *)(param_1 + 0x4c));
        }
        else {
          local_30 = (int *)0x70026a;
          FUN_00408144(&local_20,*(undefined4 *)(param_1 + 0x4c));
          local_2c = (char *)0x700278;
          FUN_00410750(local_20,iVar2 + -1,&stack0xffffffe4);
          local_2c = (char *)0x700283;
          FUN_00408130(&local_8,unaff_EDI);
        }
        iVar2 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          local_2c = (char *)0x7002ad;
          iVar2 = FUN_00407048(&local_8,local_8);
        }
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = *(int *)(iVar2 + -4);
        }
        local_2c = (char *)0x7002c3;
        FUN_00408144(&local_30,local_8);
        local_28 = 0x7002d3;
        FUN_0041076c(local_30,iVar3 + -3,&local_2c);
        local_28 = 0x7002de;
        FUN_00408130(&local_28,local_2c);
        iVar2 = local_28;
        local_28 = 0x7002e9;
        FUN_00415dd0(iVar2,&local_24);
        local_28 = 0x7002f4;
        FUN_00407f0c(&local_8,local_24);
      }
    }
  }
  local_28 = 0x700303;
  FUN_0045b498(param_2[0x10],0);
  if (local_d != '\0') {
    local_28 = 0x700327;
    FUN_0045b498(param_2[0x10],*(byte *)(*(int *)(param_2[0x10] + 0x10) + 0x1d) | 1);
  }
  if (local_e != '\0') {
    local_28 = 0x70034b;
    FUN_0045b498(param_2[0x10],*(byte *)(*(int *)(param_2[0x10] + 0x10) + 0x1d) | 2);
  }
  local_28 = local_8;
  local_2c = (char *)0x70035f;
  (**(code **)(*param_2 + 0x88))(param_2,local_c,param_4);
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_007003a3;
  local_24 = (undefined1 *)0x700379;
  FUN_00407a90(&local_30,2,puVar1);
  local_24 = (undefined1 *)0x700386;
  thunk_FUN_00406e80(&local_28,2);
  local_24 = (undefined1 *)0x700393;
  FUN_00407a90(&local_20,4);
  local_24 = (undefined1 *)0x70039b;
  thunk_FUN_00406e5c(&local_8);
  return;
}
