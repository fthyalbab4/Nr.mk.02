// rea decompile_all
// name: FUN_00585038
// address: 0x585038
// body: available
// range: 0x585038-0x585222 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x585059 (push 0x585223 followed by fs-segment stack chaining); handler 0x585223 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00585038(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x58504e;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_00585223;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  *param_2 = 0;
  puStack_1c = &stack0xfffffffc;
  iVar2 = FUN_00571f30(local_8);
  *(double *)(param_2 + 2) = (double)iVar2;
  if (*(double *)(param_2 + 2) < 0.0) {
    iVar2 = FUN_00579924(local_8);
    *(double *)(param_2 + 2) = (double)iVar2;
    if (*(double *)(param_2 + 2) < 0.0) {
      iVar2 = FUN_00513f08(local_8);
      *(double *)(param_2 + 2) = (double)iVar2;
      if (*(double *)(param_2 + 2) < 0.0) {
        iVar2 = FUN_0057015c(local_8);
        *(double *)(param_2 + 2) = (double)iVar2;
        if (*(double *)(param_2 + 2) < 0.0) {
          iVar2 = FUN_0057be5c(local_8);
          *(double *)(param_2 + 2) = (double)iVar2;
          if (*(double *)(param_2 + 2) < 0.0) {
            iVar2 = FUN_00580d68(local_8);
            *(double *)(param_2 + 2) = (double)iVar2;
            if (*(double *)(param_2 + 2) < 0.0) {
              iVar2 = FUN_00581bb4(local_8);
              *(double *)(param_2 + 2) = (double)iVar2;
              if (*(double *)(param_2 + 2) < 0.0) {
                iVar2 = FUN_00588a60(local_8);
                *(double *)(param_2 + 2) = (double)iVar2;
                if (*(double *)(param_2 + 2) < 0.0) {
                  iVar2 = FUN_005712c0(local_8);
                  *(double *)(param_2 + 2) = (double)iVar2;
                  if (*(double *)(param_2 + 2) < 0.0) {
                    iVar2 = FUN_005821cc(local_8);
                    *(double *)(param_2 + 2) = (double)iVar2;
                    if (*(double *)(param_2 + 2) < 0.0) {
                      iVar2 = DAT_00686b04 + -1;
                      bVar3 = iVar2 == 0;
                      if (-1 < iVar2) {
                        do {
                          FUN_0040891c(*(undefined4 *)(DAT_0084efec + iVar2 * 4),local_8);
                          if (bVar3) {
                            FUN_00409360(param_2,DAT_0084eff0 + iVar2 * 0x18,&DAT_00615f70);
                            break;
                          }
                          iVar2 = iVar2 + -1;
                          bVar3 = iVar2 == -1;
                        } while (!bVar3);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0058522a;
  puStack_20 = (undefined1 *)0x585222;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar1);
  return;
}
