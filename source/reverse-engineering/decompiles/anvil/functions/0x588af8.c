// rea decompile_all
// name: FUN_00588af8
// address: 0x588af8
// body: available
// range: 0x588af8-0x588edd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x588b6c (push 0x588ede followed by fs-segment stack chaining); handler 0x588ede lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00588af8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,char param_5
                 ,undefined4 param_6,int param_7,int param_8)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_1ec;
  undefined *in_stack_fffffe1c;
  undefined4 uStack_1d8;
  undefined1 *puStack_1d4;
  undefined1 *puStack_1d0;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  char local_199;
  undefined4 local_198;
  undefined4 local_194;
  int local_190;
  undefined1 local_18c [388];
  undefined4 local_8;

  local_1b8 = 0;
  local_1bc = 0;
  local_1c0 = 0;
  local_1ac = 0;
  local_1b0 = 0;
  local_1b4 = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_8 = 0;
  puStack_1d0 = (undefined1 *)0x588b61;
  local_198 = param_3;
  local_194 = param_2;
  local_190 = param_1;
  FUN_0040902c(local_18c,&DAT_00615f70,0x10);
  puStack_1d4 = &LAB_00588ede;
  uStack_1d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1d8;
  if (((local_190 < 0) || (DAT_00686b18 <= local_190)) ||
     (*(int *)(DAT_00686b10 + local_190 * 4) == 0)) {
    local_199 = '\0';
  }
  else {
    local_199 = '\x01';
  }
  puStack_1d0 = &stack0xfffffffc;
  if (local_199 != '\0') {
    local_1a0 = *(undefined4 *)PTR_DAT_00689160;
    puStack_1d0 = &stack0xfffffffc;
    FUN_004081e8(&local_8,*(undefined4 *)PTR_PTR_006892f0);
    *(int *)PTR_DAT_00689160 = param_8;
    FUN_00588a00(local_190,&local_1a4);
    FUN_00408194(PTR_PTR_006892f0,local_1a4);
    iVar4 = 0x10;
    puVar2 = local_18c;
    puVar3 = PTR_DAT_00688dc8;
    do {
      FUN_00409360(puVar2,puVar3,&DAT_00615f70);
      puVar2 = puVar2 + 0x18;
      puVar3 = puVar3 + 0x18;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar3 = PTR_DAT_00688dc8;
    iVar4 = param_8;
    if (-1 < param_8 + -1) {
      do {
        FUN_00409360(puVar3,param_7,&DAT_00615f70);
        param_7 = param_7 + 0x18;
        iVar4 = iVar4 + -1;
        puVar3 = puVar3 + 0x18;
      } while (iVar4 != 0);
    }
    if (param_8 < 0x10) {
      puVar1 = (undefined4 *)(PTR_DAT_00688dc8 + param_8 * 0x18);
      iVar4 = param_8;
      do {
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        iVar4 = iVar4 + 1;
        puVar1 = puVar1 + 6;
      } while (iVar4 != 0x10);
    }
    *param_4 = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    local_199 = FUN_0058869c(local_194,local_198,
                             *(undefined4 *)(*(int *)(DAT_00686b10 + local_190 * 4) + 8),param_4);
    if (local_199 == '\0') {
      FUN_00588a00(local_190,&local_1a8);
      in_stack_fffffe1c = &DAT_00588f28;
      uStackY_1ec = *(undefined4 *)PTR_DAT_00689674;
      FUN_0040875c(PTR_DAT_00689674,5);
    }
    if ((param_5 != '\0') && (*PTR_DAT_006892e8 != '\0')) {
      iVar4 = *(int *)(*(int *)(DAT_00686b10 + local_190 * 4) + 8);
      if (*(char *)(iVar4 + 100) == '\0') {
        if (*(int *)(iVar4 + 0x60) != param_8) {
          FUN_00588a00(local_190,&local_1b8);
          FUN_0041636c(*(undefined4 *)(*(int *)(*(int *)(DAT_00686b10 + local_190 * 4) + 8) + 0x60),
                       &local_1bc);
          FUN_0041636c(param_8,&local_1c0);
          FUN_0040875c(PTR_DAT_00689674,9);
          *PTR_PTR_00688e10 = 1;
          local_199 = '\0';
        }
      }
      else if (param_8 < *(int *)(iVar4 + 0x60)) {
        FUN_00588a00(local_190,&local_1ac);
        FUN_0041636c(*(undefined4 *)(*(int *)(*(int *)(DAT_00686b10 + local_190 * 4) + 8) + 0x60),
                     &local_1b0);
        FUN_0041636c(param_8,&local_1b4);
        FUN_0040875c(PTR_DAT_00689674,9);
        *PTR_PTR_00688e10 = 1;
        local_199 = '\0';
      }
    }
    iVar4 = 0x10;
    puVar2 = local_18c;
    puVar3 = PTR_DAT_00688dc8;
    do {
      FUN_00409360(puVar3,puVar2,&DAT_00615f70);
      puVar3 = puVar3 + 0x18;
      puVar2 = puVar2 + 0x18;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(undefined4 *)PTR_DAT_00689160 = local_1a0;
    FUN_00408194(PTR_PTR_006892f0,local_8);
  }
  *in_FS_OFFSET = uStackY_1ec;
  thunk_FUN_004072fc(&local_1c0,8,in_stack_fffffe1c,&LAB_00588ee5);
  FUN_00409120(local_18c,&DAT_00615f70,0x10);
  thunk_FUN_004072d8(&local_8);
  return;
}
