// rea decompile_all
// name: FUN_005afbd4
// address: 0x5afbd4
// body: available
// range: 0x5afbd4-0x5aff8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005afbd4(int param_1,char param_2,int param_3,undefined4 param_4,char param_5,
                 double param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_14;
  int local_10;

  if (param_1 != 0) {
    if (param_2 != '\0') {
      param_6 = (double)(360.0 - (float)param_6);
    }
    if (param_6 != 0.0) {
      if (param_6 == 90.0) {
        FUN_005afa84(param_1,0,param_5,(short)param_4);
      }
      else if (param_6 == 180.0) {
        FUN_005af9fc(param_1);
      }
      else if (param_6 == 270.0) {
        FUN_005afa84(param_1,1,param_5,(short)param_4);
      }
      else {
        uVar2 = FUN_00701cf4(&DAT_00700d94,1,param_1);
        FUN_00404844();
        FUN_00404834();
        uVar3 = FUN_00410500();
        uVar4 = FUN_00410500();
        if (param_5 != '\0') {
          FUN_00701e14(param_1,uVar3,uVar4);
        }
        FUN_00702dfc(param_1,param_4,0);
        local_64 = *(int *)(param_1 + 8);
        if (-1 < local_64 + -1) {
          local_14 = 0;
          do {
            local_68 = *(int *)(param_1 + 4);
            if (-1 < local_68 + -1) {
              local_10 = 0;
              do {
                local_6c = param_3;
                if (-1 < param_3 + -1) {
                  do {
                    local_70 = param_3;
                    if (-1 < param_3 + -1) {
                      do {
                        FUN_00404878();
                        FUN_00404878();
                        local_70 = local_70 + -1;
                      } while (local_70 != 0);
                    }
                    local_6c = local_6c + -1;
                  } while (local_6c != 0);
                }
                uVar1 = FUN_00404878((int)((longlong)param_3 * (longlong)param_3),
                                     (int)((ulonglong)((longlong)param_3 * (longlong)param_3) >>
                                          0x20));
                *(undefined1 *)
                 (*(int *)(param_1 + 0xc) + 2 + (*(int *)(param_1 + 4) * local_14 + local_10) * 4) =
                     uVar1;
                uVar1 = FUN_00404878((int)((longlong)param_3 * (longlong)param_3),
                                     (int)((ulonglong)((longlong)param_3 * (longlong)param_3) >>
                                          0x20));
                *(undefined1 *)
                 (*(int *)(param_1 + 0xc) + 1 + (*(int *)(param_1 + 4) * local_14 + local_10) * 4) =
                     uVar1;
                uVar1 = FUN_00404878((int)((longlong)param_3 * (longlong)param_3),
                                     (int)((ulonglong)((longlong)param_3 * (longlong)param_3) >>
                                          0x20));
                *(undefined1 *)
                 (*(int *)(param_1 + 0xc) + (*(int *)(param_1 + 4) * local_14 + local_10) * 4) =
                     uVar1;
                uVar1 = FUN_00404878((int)((longlong)param_3 * (longlong)param_3),
                                     (int)((ulonglong)((longlong)param_3 * (longlong)param_3) >>
                                          0x20));
                *(undefined1 *)
                 (*(int *)(param_1 + 0xc) + 3 + (*(int *)(param_1 + 4) * local_14 + local_10) * 4) =
                     uVar1;
                local_10 = local_10 + 1;
                local_68 = local_68 + -1;
              } while (local_68 != 0);
            }
            local_14 = local_14 + 1;
            local_64 = local_64 + -1;
          } while (local_64 != 0);
        }
        FUN_00405a7c(uVar2);
      }
    }
  }
  return;
}
