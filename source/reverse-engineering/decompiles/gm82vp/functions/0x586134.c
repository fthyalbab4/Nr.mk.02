// rea decompile_all
// name: FUN_00586134
// address: 0x586134
// body: available
// range: 0x586134-0x58644a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5861a8 (push 0x58644b followed by fs-segment stack chaining); handler 0x58644b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00586134(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,int param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
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

  local_1c0 = 0;
  local_1bc = 0;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  local_8 = 0;
  puStack_1d0 = (undefined1 *)0x58619d;
  local_198 = param_3;
  local_194 = param_2;
  local_190 = param_1;
  FUN_0040902c(local_18c,&DAT_00615f70,0x10);
  puStack_1d4 = &LAB_0058644b;
  uStack_1d8 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1d8;
  local_199 = '\0';
  puStack_1d0 = &stack0xfffffffc;
  if ((-1 < local_190) && (puStack_1d0 = &stack0xfffffffc, local_190 <= DAT_0084f004)) {
    if (*PTR_PTR_0068909c == '\0') {
      if (*PTR_DAT_00689498 == '\0') {
        puStack_1d0 = &stack0xfffffffc;
        FUN_00408194(PTR_DAT_00689674,&PTR_DAT_005864e0);
      }
      else if (*(int *)(DAT_0084effc + local_190 * 4) == 0) {
        puStack_1d0 = &stack0xfffffffc;
        FUN_005791f0(*(undefined4 *)(DAT_0084eff8 + local_190 * 4),param_7,param_6,&local_1b8,
                     param_5);
        in_stack_fffffe1c = (undefined *)0x586256;
        FUN_00409360(param_4,&local_1b8,&DAT_00615f70);
        local_199 = '\x01';
      }
      else {
        puStack_1d0 = &stack0xfffffffc;
        if (*(int *)(DAT_0084f000 + local_190 * 4) != 0) {
          local_1a0 = *(undefined4 *)PTR_DAT_00689160;
          puStack_1d0 = &stack0xfffffffc;
          FUN_004081e8(&local_8,*(undefined4 *)PTR_PTR_006892f0);
          *(int *)PTR_DAT_00689160 = param_7;
          FUN_005860e0(local_190,&local_1bc);
          FUN_00408194(PTR_PTR_006892f0,local_1bc);
          iVar2 = 0x10;
          puVar4 = local_18c;
          puVar3 = PTR_DAT_00688dc8;
          do {
            FUN_00409360(puVar4,puVar3,&DAT_00615f70);
            puVar4 = puVar4 + 0x18;
            puVar3 = puVar3 + 0x18;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          puVar3 = PTR_DAT_00688dc8;
          iVar2 = param_7;
          if (-1 < param_7 + -1) {
            do {
              FUN_00409360(puVar3,param_6,&DAT_00615f70);
              param_6 = param_6 + 0x18;
              iVar2 = iVar2 + -1;
              puVar3 = puVar3 + 0x18;
            } while (iVar2 != 0);
          }
          if (param_7 < 0x10) {
            puVar1 = (undefined4 *)(PTR_DAT_00688dc8 + param_7 * 0x18);
            do {
              *puVar1 = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              param_7 = param_7 + 1;
              puVar1 = puVar1 + 6;
            } while (param_7 != 0x10);
          }
          *param_4 = 0;
          param_4[2] = 0;
          param_4[3] = 0;
          local_199 = FUN_0058869c(local_194,local_198,*(undefined4 *)(DAT_0084f000 + local_190 * 4)
                                   ,param_4);
          if (local_199 == '\0') {
            FUN_005860e0(local_190,&local_1c0);
            in_stack_fffffe1c = &DAT_00586598;
            uStackY_1ec = *(undefined4 *)PTR_DAT_00689674;
            FUN_0040875c(PTR_DAT_00689674,5);
          }
          iVar2 = 0x10;
          puVar4 = local_18c;
          puVar3 = PTR_DAT_00688dc8;
          do {
            FUN_00409360(puVar3,puVar4,&DAT_00615f70);
            puVar3 = puVar3 + 0x18;
            puVar4 = puVar4 + 0x18;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          *(undefined4 *)PTR_DAT_00689160 = local_1a0;
          FUN_00408194(PTR_PTR_006892f0,local_8);
        }
      }
    }
    else {
      puStack_1d0 = &stack0xfffffffc;
      FUN_00408194(PTR_DAT_00689674,&PTR_DAT_00586470);
    }
  }
  *in_FS_OFFSET = uStackY_1ec;
  thunk_FUN_004072fc(&local_1c0,2,in_stack_fffffe1c,&LAB_00586452);
  FUN_004090d0(&local_1b8,&DAT_00615f70);
  FUN_00409120(local_18c,&DAT_00615f70,0x10);
  thunk_FUN_004072d8(&local_8);
  return;
}
